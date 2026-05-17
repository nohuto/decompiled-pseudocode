/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x180007234
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpProcessMappedModule @ 0x180073700 (LdrpProcessMappedModule.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180007080 (LdrProtectMrdata.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x1800072D0 (RtlpInsertInvertedFunctionTableEntry.c)
 *     RtlImageDirectoryEntryToData @ 0x180008A00 (RtlImageDirectoryEntryToData.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlInsertInvertedFunctionTable(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v3; // ebp
  __int64 v4; // rax
  int v5; // edi
  int v6; // ebx
  int v7; // ecx
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0;
  v2 = a2;
  LOBYTE(a2) = 1;
  v3 = a1;
  v4 = RtlImageDirectoryEntryToData(a1, a2, 3LL, &v9);
  v5 = v4;
  v6 = v4 != 0 ? v9 : 0;
  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  LdrProtectMrdata(0);
  RtlpInsertInvertedFunctionTableEntry(v7, v3, v5, v2, v6);
  LdrProtectMrdata(1);
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
