/*
 * XREFs of HalpInterruptRequestInterrupt @ 0x1405400F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x14037265C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x1403726E4 (HalpInterruptLookupController.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x1405535A8 (HalpInterruptRequestSecondaryInterrupt.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptRequestInterrupt(unsigned int a1)
{
  _DWORD *LinesForGsiRange; // rax
  unsigned int v3; // ecx
  _DWORD *v4; // rdi
  unsigned int v5; // ebx
  ULONG_PTR *v6; // rsi
  unsigned __int8 v7; // bp
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(a1, a1 + 1);
  v4 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL, v3) )
      return (unsigned int)HalpInterruptRequestSecondaryInterrupt(a1);
    HalpInterruptSetProblemEx(0LL, 18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x103Eu);
    return (unsigned int)-1073741811;
  }
  LODWORD(v9) = LinesForGsiRange[4];
  HIDWORD(v9) = a1 + LinesForGsiRange[5] - LinesForGsiRange[7];
  v6 = HalpInterruptLookupController(v9);
  if ( !v6 )
  {
    HalpInterruptSetProblemEx(0LL, 17, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x104Eu);
    return (unsigned int)-1073741811;
  }
  v7 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  if ( (*(_DWORD *)(*((_QWORD *)v4 + 5) + 56LL * (a1 - v4[7]) + 12) & 0x10) != 0 )
    v5 = guard_dispatch_icall_no_overrides(v6[2], &v9);
  else
    v5 = -1073741811;
  HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptLock, v7);
  return v5;
}
