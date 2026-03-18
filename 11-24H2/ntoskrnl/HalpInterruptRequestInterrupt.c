/*
 * XREFs of HalpInterruptRequestInterrupt @ 0x1405427A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x1403B9C8C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x1403B9D14 (HalpInterruptLookupController.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x140555C68 (HalpInterruptRequestSecondaryInterrupt.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptRequestInterrupt(unsigned int a1)
{
  _DWORD *LinesForGsiRange; // rax
  unsigned int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rdi
  unsigned int v7; // ebx
  ULONG_PTR *v8; // rsi
  unsigned __int8 v9; // bp
  __int64 v10; // r9
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(a1, a1 + 1);
  v6 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL, v3, v4, v5) )
      return (unsigned int)HalpInterruptRequestSecondaryInterrupt(a1);
    HalpInterruptSetProblemEx(0LL, 18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x1032u);
    return (unsigned int)-1073741811;
  }
  LODWORD(v12) = LinesForGsiRange[4];
  HIDWORD(v12) = a1 + LinesForGsiRange[5] - LinesForGsiRange[7];
  v8 = HalpInterruptLookupController(v12);
  if ( !v8 )
  {
    HalpInterruptSetProblemEx(0LL, 17, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x1042u);
    return (unsigned int)-1073741811;
  }
  v9 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  v10 = *((_QWORD *)v6 + 5) + 56LL * (a1 - v6[7]);
  if ( (*(_DWORD *)(v10 + 12) & 0x10) != 0 )
    v7 = guard_dispatch_icall_no_overrides(v8[2], &v12, v10 + 24, *(unsigned int *)(v10 + 48));
  else
    v7 = -1073741811;
  HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptLock, v9);
  return v7;
}
