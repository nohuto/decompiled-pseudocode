/*
 * XREFs of HalpInterruptRequestInterrupt @ 0x14053FF70
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140205754 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x140445AEC (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x140445B74 (HalpInterruptLookupController.c)
 *     HalpAcquireHighLevelLock @ 0x140445E40 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x140553368 (HalpInterruptRequestSecondaryInterrupt.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptRequestInterrupt(unsigned int a1)
{
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v3; // rdi
  unsigned int v4; // ebx
  ULONG_PTR *v5; // rsi
  unsigned __int8 v6; // bp

  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(a1, a1 + 1);
  v3 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL) )
      return (unsigned int)HalpInterruptRequestSecondaryInterrupt(a1);
    HalpInterruptSetProblemEx(0LL, 18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x1032u);
    return (unsigned int)-1073741811;
  }
  v5 = HalpInterruptLookupController(LinesForGsiRange[4]);
  if ( !v5 )
  {
    HalpInterruptSetProblemEx(0LL, 17, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x1042u);
    return (unsigned int)-1073741811;
  }
  v6 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  if ( (*(_DWORD *)(*((_QWORD *)v3 + 5) + 56LL * (a1 - v3[7]) + 12) & 0x10) != 0 )
    v4 = guard_dispatch_icall_no_overrides(v5[2]);
  else
    v4 = -1073741811;
  HalpReleaseHighLevelLock((__int64)&HalpInterruptLock, v6);
  return v4;
}
