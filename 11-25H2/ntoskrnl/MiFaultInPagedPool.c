/*
 * XREFs of MiFaultInPagedPool @ 0x140246044
 * Callers:
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 */

__int64 __fastcall MiFaultInPagedPool(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rsi
  __int64 v3; // rbx
  char v4; // bp
  __int64 v5; // rdx

  v2 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = MiLockWorkingSetShared((__int64)&unk_140E37D80);
  MiLockNestedPageTable(&unk_140E37D80, v3);
  if ( (*(_QWORD *)v2 & 1) != 0 && (*(_QWORD *)v2 & 0x200LL) != 0 )
    MiCopyOnWrite(BugCheckParameter2, v2, 0LL);
  MiUnlockPageTable(&unk_140E37D80, v3);
  LOBYTE(v5) = v4;
  MiUnlockWorkingSetShared(&unk_140E37D80, v5);
  return *(_QWORD *)BugCheckParameter2;
}
