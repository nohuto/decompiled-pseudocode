/*
 * XREFs of HalpUnmaskInterrupt @ 0x1403724F0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x14037229C (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x14037265C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x1403726E4 (HalpInterruptLookupController.c)
 *     HalpInterruptSetLineStateInternal @ 0x140372714 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     HalpIsInterruptTypeSecondary @ 0x140372B20 (HalpIsInterruptTypeSecondary.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpUnmaskInterrupt(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v5; // rdi
  __int64 v6; // r14
  unsigned int v7; // ebx
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  unsigned int v11; // r9d
  __int64 v12; // rdx
  char IsInterruptTypeSecondary; // al
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  v3 = a1;
  LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(a1, (unsigned int)(a1 + 1));
  v5 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( (__int64 (__fastcall *)(_QWORD, _QWORD))off_140E009C0[0] == HalpIsInterruptTypeSecondary )
      IsInterruptTypeSecondary = HalpIsInterruptTypeSecondary(0LL, v3);
    else
      IsInterruptTypeSecondary = guard_dispatch_icall_no_overrides(0LL, v3);
    if ( IsInterruptTypeSecondary )
      return (unsigned int)HalpHandleMaskUnmaskSecondaryInterrupt(v3, a2, 0);
    HalpInterruptSetProblemEx(0, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1820);
    return (unsigned int)-1073741811;
  }
  LODWORD(v14) = LinesForGsiRange[4];
  HIDWORD(v14) = v3 + LinesForGsiRange[5] - LinesForGsiRange[7];
  v6 = HalpInterruptLookupController((unsigned int)v14);
  if ( !v6 )
  {
    HalpInterruptLastProblemController = 0LL;
    HalpInterruptLastProblemStatus = 0;
    HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    HalpInterruptLastProblem = 17;
    HalpInterruptLastProblemLine = 1840;
    return (unsigned int)-1073741811;
  }
  v9 = (unsigned __int8)HalpAcquireHighLevelLock(&HalpInterruptLock);
  v10 = *((_QWORD *)v5 + 5) + 56LL * (v3 - v5[7]);
  v11 = *(_DWORD *)(v10 + 12) & 0xFFFFFFDF;
  if ( (a2 & 2) == 0 )
    v11 = *(_DWORD *)(v10 + 12) | 0x10;
  *(_DWORD *)(v10 + 12) = v11;
  v7 = HalpInterruptSetLineStateInternal(v6, &v14, v10);
  KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v12) = v9;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
  }
  __writecr8(v9);
  return v7;
}
