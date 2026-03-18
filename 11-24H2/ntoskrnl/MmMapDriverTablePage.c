/*
 * XREFs of MmMapDriverTablePage @ 0x14067D94C
 * Callers:
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiUpdatePageFileHighInPte @ 0x140368F40 (MiUpdatePageFileHighInPte.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MmMapDriverTablePage(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // eax
  unsigned __int64 v7; // rdx
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v9; // r14
  unsigned __int8 CurrentIrql; // r15
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 ContainingPageTable; // rbx
  __int64 v14; // rbx
  __int64 DemandZeroPte; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r9
  int v18; // r8d
  ULONG_PTR ValidPte; // rax
  __int64 v20; // rcx
  ULONG_PTR v21; // rbx
  __int64 result; // rax
  unsigned int v23; // [rsp+60h] [rbp+8h] BYREF
  __int64 v24; // [rsp+70h] [rbp+18h] BYREF
  int v25; // [rsp+78h] [rbp+20h]

  v24 = a3;
  v5 = 1;
  if ( a4 != 2 )
    v5 = 3;
  v25 = v5;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v7);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v7);
  MiLockWorkingSetSharedAtDpc((__int64)AnyMultiplexedVm);
  MiLockNestedPageTable((__int64)AnyMultiplexedVm, ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v11 = MI_READ_PTE_LOCK_FREE(v9);
  v12 = 48 * a2 - 0x220000000000LL;
  LODWORD(v24) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx((unsigned int *)&v24);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  *(_QWORD *)(v12 + 24) &= ~0x4000000000000000uLL;
  MiSetPfnModified(48 * a2 - 0x220000000000LL, 1);
  ContainingPageTable = MiGetContainingPageTable(v9);
  MiSetPfnContainingFrame(48 * a2 - 0x220000000000LL, ContainingPageTable);
  v14 = 48 * ContainingPageTable - 0x220000000000LL;
  v23 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v23);
    while ( *(__int64 *)(v14 + 24) < 0 );
  }
  *(_QWORD *)(v14 + 24) = (*(_QWORD *)(v14 + 24) + 1LL) ^ (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) + 1LL)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  DemandZeroPte = MiMakeDemandZeroPte(v25);
  *(_QWORD *)(v12 + 16) = DemandZeroPte;
  *(_QWORD *)(v12 + 16) = MiUpdatePageFileHighInPte(DemandZeroPte, HIDWORD(v16));
  *(_QWORD *)(v12 + 8) = v9;
  v25 = *(_DWORD *)(v12 + 32);
  LOWORD(v25) = v25 + 1;
  *(_DWORD *)(v12 + 32) = v25;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), v17);
  ValidPte = MiMakeValidPte(v9, a2, v18 | 0x20000000u);
  v21 = ValidPte;
  if ( _bittest64(&MiFlags, 0x24u) )
  {
    if ( (ValidPte & 0x20) == 0 )
    {
      v20 = 0x4000000000LL;
      if ( v9 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(v9, ValidPte, 128);
    }
  }
  *(_QWORD *)v9 = v21;
  if ( !v11 )
    MiIncreaseUsedPtes(v20, ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u, 2);
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, 0x11u);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
