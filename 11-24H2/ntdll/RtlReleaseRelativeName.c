/*
 * XREFs of RtlReleaseRelativeName @ 0x180077830
 * Callers:
 *     LdrpMapResourceFile @ 0x180076970 (LdrpMapResourceFile.c)
 *     RtlDoesFileExists_UstrEx @ 0x180076D70 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x180076EC0 (RtlDosSearchPath_Ustr.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180080844 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180081558 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800821AC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpMUIEnumerateFolder @ 0x18010B52C (RtlpMUIEnumerateFolder.c)
 *     LdrpResMapFile @ 0x18010E614 (LdrpResMapFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180116698 (LdrpCnvrtShortToLongFileName.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 */

__int64 __fastcall RtlReleaseRelativeName(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      NtClose(*(HANDLE *)(v1 + 8));
      result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
    }
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
