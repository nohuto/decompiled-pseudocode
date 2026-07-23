/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x180020C04
 * Callers:
 *     LdrpProcessMappedModule @ 0x18006DF80 (LdrpProcessMappedModule.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x180020A50 (LdrProtectMrdata.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x180020CA0 (RtlpInsertInvertedFunctionTableEntry.c)
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
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
