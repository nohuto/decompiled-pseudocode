/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x14040F6F0
 * Callers:
 *     MiUpdateDriverLoadInProgress @ 0x140410330 (MiUpdateDriverLoadInProgress.c)
 * Callees:
 *     RtlpInsertInvertedFunctionTableEntry @ 0x14040F768 (RtlpInsertInvertedFunctionTableEntry.c)
 *     MmLockLoadedModuleListExclusive @ 0x14040F854 (MmLockLoadedModuleListExclusive.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x14040F898 (MmUnlockLoadedModuleListExclusive.c)
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall RtlInsertInvertedFunctionTable(void *a1, int a2)
{
  int v3; // r14d
  __int64 v4; // rsi
  ULONG v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // di
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = 0;
  v3 = (int)a1;
  v4 = (__int64)RtlImageDirectoryEntryToData(a1, 1u, 3u, &v15);
  v5 = v4 != 0 ? v15 : 0;
  v8 = MmLockLoadedModuleListExclusive(v7, v6, -v4);
  RtlpInsertInvertedFunctionTableEntry(v9, v3, v4, a2, v5);
  LOBYTE(v10) = v8;
  return MmUnlockLoadedModuleListExclusive(v10, v11, v12, v13);
}
