/*
 * XREFs of MmMapDriverTablePage @ 0x14067213C
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiUpdatePageFileHighInPte @ 0x14037C850 (MiUpdatePageFileHighInPte.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MmMapDriverTablePage(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // eax
  unsigned __int64 v7; // rdx
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v9; // r14
  unsigned __int8 CurrentIrql; // r15
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 ContainingPageTable; // rbx
  __int64 v16; // rbx
  __int64 DemandZeroPte; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r9
  int v20; // r8d
  ULONG_PTR ValidPte; // rax
  __int64 v22; // rcx
  ULONG_PTR v23; // rbx
  __int64 result; // rax
  int v25; // [rsp+60h] [rbp+8h] BYREF
  __int64 v26; // [rsp+70h] [rbp+18h] BYREF
  int v27; // [rsp+78h] [rbp+20h]

  v26 = a3;
  v5 = 1;
  if ( a4 != 2 )
    v5 = 3;
  v27 = v5;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v7);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v7);
  MiLockWorkingSetSharedAtDpc((__int64)AnyMultiplexedVm);
  MiLockNestedPageTable((__int64)AnyMultiplexedVm, ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v11, v12);
  v13 = MI_READ_PTE_LOCK_FREE(v9);
  v14 = 48 * a2 - 0x220000000000LL;
  LODWORD(v26) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v26);
    while ( *(__int64 *)(v14 + 24) < 0 );
  }
  *(_QWORD *)(v14 + 24) &= ~0x4000000000000000uLL;
  MiSetPfnModified(48 * a2 - 0x220000000000LL, 1);
  ContainingPageTable = MiGetContainingPageTable(v9);
  MiSetPfnContainingFrame(48 * a2 - 0x220000000000LL, ContainingPageTable);
  v16 = 48 * ContainingPageTable - 0x220000000000LL;
  v25 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v25);
    while ( *(__int64 *)(v16 + 24) < 0 );
  }
  *(_QWORD *)(v16 + 24) = (*(_QWORD *)(v16 + 24) + 1LL) ^ (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) + 1LL)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  DemandZeroPte = MiMakeDemandZeroPte(v27);
  *(_QWORD *)(v14 + 16) = DemandZeroPte;
  *(_QWORD *)(v14 + 16) = MiUpdatePageFileHighInPte(DemandZeroPte, HIDWORD(v18));
  *(_QWORD *)(v14 + 8) = v9;
  v27 = *(_DWORD *)(v14 + 32);
  LOWORD(v27) = v27 + 1;
  *(_DWORD *)(v14 + 32) = v27;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), v19);
  ValidPte = MiMakeValidPte(v9, a2, v20 | 0x20000000u);
  v23 = ValidPte;
  if ( _bittest64(&MiFlags, 0x24u) )
  {
    if ( (ValidPte & 0x20) == 0 )
    {
      v22 = 0x4000000000LL;
      if ( v9 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(v9, ValidPte, 128);
    }
  }
  *(_QWORD *)v9 = v23;
  if ( !v13 )
    MiIncreaseUsedPtes(v22, ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u, 2);
  MiUnlockPageTable((__int64)AnyMultiplexedVm, ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, 0x11u);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
