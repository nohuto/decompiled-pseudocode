/*
 * XREFs of HalpInterruptServiceActiveBoth @ 0x14054180C
 * Callers:
 *     HalPerformEndOfInterrupt @ 0x14041A4A0 (HalPerformEndOfInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140205754 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x140445AEC (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x140445B74 (HalpInterruptLookupController.c)
 *     HalpInterruptSetLineStateInternal @ 0x140445BA4 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x140445E40 (HalpAcquireHighLevelLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpInterruptServiceActiveBoth(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v4; // rbx
  ULONG_PTR *v5; // rdi
  unsigned __int8 v6; // si
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 160);
  v8 = 0LL;
  v2 = *(_DWORD *)(v1 + 64);
  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(v2, v2 + 1);
  LODWORD(v8) = LinesForGsiRange[4];
  HIDWORD(v8) = v2 + LinesForGsiRange[5] - LinesForGsiRange[7];
  v4 = (_DWORD *)(*((_QWORD *)LinesForGsiRange + 5) + 56LL * (v2 - LinesForGsiRange[7]));
  v5 = HalpInterruptLookupController(v8);
  v6 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  if ( *v4 == 1 )
  {
    *v4 = 2;
  }
  else if ( *v4 == 2 )
  {
    *v4 = 1;
  }
  if ( (int)HalpInterruptSetLineStateInternal((__int64)v5, (__int64)&v8, (__int64)v4) < 0 )
    KeBugCheckEx(0x5Cu, 0x205uLL, *((int *)v5 + 60), (ULONG_PTR)v5, SHIDWORD(v8));
  return HalpReleaseHighLevelLock((__int64)&HalpInterruptLock, v6);
}
