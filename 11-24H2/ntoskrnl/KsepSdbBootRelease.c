/*
 * XREFs of KsepSdbBootRelease @ 0x140740044
 * Callers:
 *     KseShimDatabaseBootRelease @ 0x14095A670 (KseShimDatabaseBootRelease.c)
 *     KseShimDatabaseBootInitialize @ 0x140C2BF74 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404A6F94 (KsepPoolFreePaged.c)
 *     SdbReleaseDatabase @ 0x14095CC2C (SdbReleaseDatabase.c)
 */

void __fastcall KsepSdbBootRelease(_QWORD *a1)
{
  void *v2; // rcx

  if ( *a1 )
  {
    SdbReleaseDatabase();
    *a1 = 0LL;
  }
  v2 = (void *)a1[1];
  if ( v2 )
  {
    KsepPoolFreePaged(v2);
    a1[1] = 0LL;
  }
}
