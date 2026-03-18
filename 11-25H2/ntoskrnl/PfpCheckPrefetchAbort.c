/*
 * XREFs of PfpCheckPrefetchAbort @ 0x1404871EC
 * Callers:
 *     PfpOpenHandleCreate @ 0x1408C2D6C (PfpOpenHandleCreate.c)
 *     PfpPrefetchRequestPerform @ 0x1408EAE18 (PfpPrefetchRequestPerform.c)
 *     PfpVolumePrefetchMetadata @ 0x1409C64B8 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchPrivatePages @ 0x1409C6B5C (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchDirectoryStream @ 0x1409C6DF4 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFiles @ 0x1409C70B8 (PfpPrefetchFiles.c)
 *     PfpPrefetchFilesTrickle @ 0x1409C8848 (PfpPrefetchFilesTrickle.c)
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
