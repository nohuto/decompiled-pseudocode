/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x14042C8CC
 * Callers:
 *     MiUpdateDriverLoadInProgress @ 0x14042C688 (MiUpdateDriverLoadInProgress.c)
 * Callees:
 *     RtlpInsertInvertedFunctionTableEntry @ 0x14042C944 (RtlpInsertInvertedFunctionTableEntry.c)
 *     MmLockLoadedModuleListExclusive @ 0x14042CA30 (MmLockLoadedModuleListExclusive.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x14042CA74 (MmUnlockLoadedModuleListExclusive.c)
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall RtlInsertInvertedFunctionTable(__int64 a1, __int64 a2)
{
  int v2; // ebp
  int v3; // r14d
  __int64 v4; // rsi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // di
  int v9; // ecx
  __int64 v10; // rcx
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0;
  v2 = a2;
  LOBYTE(a2) = 1;
  v3 = a1;
  v4 = RtlImageDirectoryEntryToData(a1, a2, 3LL, &v12);
  v5 = v4 != 0 ? v12 : 0;
  v8 = MmLockLoadedModuleListExclusive(v7, v6, -v4);
  RtlpInsertInvertedFunctionTableEntry(v9, v3, v4, v2, v5);
  LOBYTE(v10) = v8;
  return MmUnlockLoadedModuleListExclusive(v10);
}
