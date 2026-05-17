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
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpInvertedFunctionTableSRWLock);
  LdrProtectMrdata(0);
  RtlpInsertInvertedFunctionTableEntry(v7, v3, v5, v2, v6);
  LdrProtectMrdata(1);
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
