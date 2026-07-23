/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x180033C34
 * Callers:
 *     LdrpProcessMappedModule @ 0x18008FFE0 (LdrpProcessMappedModule.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x180103EC4 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180033A80 (LdrProtectMrdata.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x180033CD0 (RtlpInsertInvertedFunctionTableEntry.c)
 *     RtlImageDirectoryEntryToData @ 0x180035400 (RtlImageDirectoryEntryToData.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlInsertInvertedFunctionTable(void *a1, int a2)
{
  int v3; // ebp
  PVOID v4; // rax
  int v5; // edi
  ULONG v6; // ebx
  int v7; // ecx
  ULONG v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v3 = (int)a1;
  v4 = RtlImageDirectoryEntryToData(a1, 1u, 3u, &v8);
  v5 = (int)v4;
  v6 = v4 != 0LL ? v8 : 0;
  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  LdrProtectMrdata(0);
  RtlpInsertInvertedFunctionTableEntry(v7, v3, v5, a2, v6);
  LdrProtectMrdata(1);
  RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
