/*
 * XREFs of RtlReleaseRelativeName @ 0x1800A2FC0
 * Callers:
 *     LdrpMapResourceFile @ 0x1800A2100 (LdrpMapResourceFile.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800A2500 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A2650 (RtlDosSearchPath_Ustr.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800AA648 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800E2898 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800E34EC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpMUIEnumerateFolder @ 0x18010DBCC (RtlpMUIEnumerateFolder.c)
 *     LdrpResMapFile @ 0x1801110E4 (LdrpResMapFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180119888 (LdrpCnvrtShortToLongFileName.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 */

__int64 __fastcall RtlReleaseRelativeName(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v4; // r9

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      NtClose(*(HANDLE *)(v1 + 8));
      result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1, v4);
    }
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
