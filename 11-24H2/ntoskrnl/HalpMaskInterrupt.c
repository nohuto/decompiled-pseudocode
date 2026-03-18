/*
 * XREFs of HalpMaskInterrupt @ 0x1403B99F0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x1403B98CC (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x1403B9C8C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x1403B9D14 (HalpInterruptLookupController.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403B9D44 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpMaskInterrupt(__int64 a1, unsigned int a2)
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
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = 0LL;
  v3 = a1;
  LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(a1, (unsigned int)(a1 + 1));
  v7 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL, v3, v5, v6) )
      return (unsigned int)HalpHandleMaskUnmaskSecondaryInterrupt(v3, a2, 1);
    HalpInterruptSetProblemEx(0, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1708);
    return (unsigned int)-1073741811;
  }
  LODWORD(v15) = LinesForGsiRange[4];
  HIDWORD(v15) = v3 + LinesForGsiRange[5] - LinesForGsiRange[7];
  v8 = HalpInterruptLookupController((unsigned int)v15);
  if ( !v8 )
    return (unsigned int)-1073741811;
  v11 = (unsigned __int8)HalpAcquireHighLevelLock(&HalpInterruptLock);
  v12 = *((_QWORD *)v7 + 5) + 56LL * (v3 - v7[7]);
  v13 = *(_DWORD *)(v12 + 12) | 0x20;
  if ( (a2 & 1) == 0 )
    v13 = *(_DWORD *)(v12 + 12) & 0xFFFFFFEF;
  *(_DWORD *)(v12 + 12) = v13;
  v9 = HalpInterruptSetLineStateInternal(v8, &v15);
  KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v14) = v11;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
  }
  __writecr8(v11);
  return v9;
}
