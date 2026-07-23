/*
 * XREFs of PfpCheckPrefetchAbort @ 0x140481ADC
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1409353B4 (PfpPrefetchRequestPerform.c)
 *     PfpVolumePrefetchMetadata @ 0x140936598 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchPrivatePages @ 0x140936C3C (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchDirectoryStream @ 0x140936ED4 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFiles @ 0x140937198 (PfpPrefetchFiles.c)
 *     PfpPrefetchFilesTrickle @ 0x140938928 (PfpPrefetchFilesTrickle.c)
 *     PfpOpenHandleCreate @ 0x1409543F8 (PfpOpenHandleCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpCheckPrefetchAbort(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *(_QWORD *)(*a1 + 72LL);
  if ( v1 && *(_DWORD *)(v1 + 4) )
    return 1LL;
  if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
  {
    v2 = a1[5];
    if ( !*(_DWORD *)(v2 + 72) )
      return (*(_DWORD *)(v2 + 68) >> 2) & 1;
    return 1LL;
  }
  return 0LL;
}
