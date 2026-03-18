/*
 * XREFs of PfpAvailablePagesForPrefetch @ 0x1409C8B60
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x1409C64B8 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchPrivatePages @ 0x1409C6B5C (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchDirectoryStream @ 0x1409C6DF4 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x1409C8848 (PfpPrefetchFilesTrickle.c)
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
