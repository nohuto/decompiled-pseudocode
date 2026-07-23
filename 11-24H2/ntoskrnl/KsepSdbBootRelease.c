/*
 * XREFs of KsepSdbBootRelease @ 0x14073DF74
 * Callers:
 *     KseShimDatabaseBootRelease @ 0x140942130 (KseShimDatabaseBootRelease.c)
 *     KseShimDatabaseBootInitialize @ 0x140C2E094 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404A18F4 (KsepPoolFreePaged.c)
 *     SdbReleaseDatabase @ 0x1409446EC (SdbReleaseDatabase.c)
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
