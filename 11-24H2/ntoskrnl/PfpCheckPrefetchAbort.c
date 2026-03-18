/*
 * XREFs of PfpCheckPrefetchAbort @ 0x1404864EC
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x140951A08 (PfpPrefetchRequestPerform.c)
 *     PfpVolumePrefetchMetadata @ 0x140952BE8 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchPrivatePages @ 0x14095328C (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchDirectoryStream @ 0x140953524 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFiles @ 0x1409537E8 (PfpPrefetchFiles.c)
 *     PfpPrefetchFilesTrickle @ 0x140954F78 (PfpPrefetchFilesTrickle.c)
 *     PfpOpenHandleCreate @ 0x14096B99C (PfpOpenHandleCreate.c)
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
