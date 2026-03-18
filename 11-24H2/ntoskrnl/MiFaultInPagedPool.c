/*
 * XREFs of MiFaultInPagedPool @ 0x140302344
 * Callers:
 *     MiProtectPrivateMemory @ 0x140237480 (MiProtectPrivateMemory.c)
 *     MiQueryAddressState @ 0x140300420 (MiQueryAddressState.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiFaultInPagedPool(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rsi
  ULONG_PTR v3; // rbx
  unsigned __int8 v4; // bp

  v2 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = MiLockWorkingSetShared((__int64)&unk_140E37FC0);
  MiLockNestedPageTable((__int64)&unk_140E37FC0, v3);
  if ( (*(_QWORD *)v2 & 1) != 0 && (*(_QWORD *)v2 & 0x200LL) != 0 )
    MiCopyOnWrite(BugCheckParameter2, (volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL, 4, 0LL);
  MiUnlockPageTableInternal(&unk_140E37FC0, v3);
  MiUnlockWorkingSetShared((__int64)&unk_140E37FC0, v4);
  return *(_QWORD *)BugCheckParameter2;
}
