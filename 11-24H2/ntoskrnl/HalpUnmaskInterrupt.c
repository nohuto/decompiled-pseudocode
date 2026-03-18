/*
 * XREFs of HalpUnmaskInterrupt @ 0x1403B9B20
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x1403B98CC (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x1403B9C8C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x1403B9D14 (HalpInterruptLookupController.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403B9D44 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 *     HalpIsInterruptTypeSecondary @ 0x1403BA150 (HalpIsInterruptTypeSecondary.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpUnmaskInterrupt(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  _DWORD *LinesForGsiRange; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rdi
  __int64 v8; // r14
  unsigned int v9; // ebx
  unsigned __int64 v11; // rsi
  __int64 v12; // r8
  unsigned int v13; // r9d
  __int64 v14; // rdx
  char IsInterruptTypeSecondary; // al
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = 0LL;
  v3 = a1;
  LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(a1, (unsigned int)(a1 + 1));
  v7 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( (__int64 (__fastcall *)(_QWORD, _QWORD))off_140E009C0[0] == HalpIsInterruptTypeSecondary )
      IsInterruptTypeSecondary = HalpIsInterruptTypeSecondary(0LL, v3);
    else
      IsInterruptTypeSecondary = guard_dispatch_icall_no_overrides(0LL, v3, v5, v6);
    if ( IsInterruptTypeSecondary )
      return (unsigned int)HalpHandleMaskUnmaskSecondaryInterrupt(v3, a2, 0);
    HalpInterruptSetProblemEx(0, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1820);
    return (unsigned int)-1073741811;
  }
  LODWORD(v16) = LinesForGsiRange[4];
  HIDWORD(v16) = v3 + LinesForGsiRange[5] - LinesForGsiRange[7];
  v8 = HalpInterruptLookupController((unsigned int)v16);
  if ( !v8 )
  {
    HalpInterruptLastProblemController = 0LL;
    HalpInterruptLastProblemStatus = 0;
    HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    HalpInterruptLastProblem = 17;
    HalpInterruptLastProblemLine = 1840;
    return (unsigned int)-1073741811;
  }
  v11 = (unsigned __int8)HalpAcquireHighLevelLock(&HalpInterruptLock);
  v12 = *((_QWORD *)v7 + 5) + 56LL * (v3 - v7[7]);
  v13 = *(_DWORD *)(v12 + 12) & 0xFFFFFFDF;
  if ( (a2 & 2) == 0 )
    v13 = *(_DWORD *)(v12 + 12) | 0x10;
  *(_DWORD *)(v12 + 12) = v13;
  v9 = HalpInterruptSetLineStateInternal(v8, &v16);
  KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v14) = v11;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
  }
  __writecr8(v11);
  return v9;
}
