/*
 * XREFs of PfpAvailablePagesForPrefetch @ 0x140938C40
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x140936598 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchPrivatePages @ 0x140936C3C (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchDirectoryStream @ 0x140936ED4 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x140938928 (PfpPrefetchFilesTrickle.c)
 * Callees:
 *     <none>
 */

bool __fastcall PfpAvailablePagesForPrefetch(_QWORD *a1, int a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r9

  v2 = a1 + 5;
  v3 = (unsigned int)(a2 + 1);
  v4 = 0LL;
  do
  {
    v4 += *v2++;
    --v3;
  }
  while ( v3 );
  return (unsigned __int64)(v4 + *a1 + a1[1]) >= 0x80;
}
