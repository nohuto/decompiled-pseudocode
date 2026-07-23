/*
 * XREFs of MiFaultInPagedPool @ 0x14030CAC4
 * Callers:
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 */

__int64 __fastcall MiFaultInPagedPool(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rsi
  ULONG_PTR v6; // rbx
  unsigned __int8 v7; // bp

  v5 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = MiLockWorkingSetShared((__int64)&unk_140E38100, a2, 0x7FFFFFFFF8LL, a4);
  MiLockNestedPageTable((__int64)&unk_140E38100, v6);
  if ( (*(_QWORD *)v5 & 1) != 0 && (*(_QWORD *)v5 & 0x200LL) != 0 )
    MiCopyOnWrite(BugCheckParameter2, v5, 0LL);
  MiUnlockPageTableInternal((__int64)&unk_140E38100, v6);
  MiUnlockWorkingSetShared((__int64)&unk_140E38100, v7);
  return *(_QWORD *)BugCheckParameter2;
}
