/*
 * XREFs of KsepSdbBootRelease @ 0x140734024
 * Callers:
 *     KseShimDatabaseBootRelease @ 0x140AA9AE4 (KseShimDatabaseBootRelease.c)
 *     KseShimDatabaseBootInitialize @ 0x140C1AE74 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404A64EC (KsepPoolFreePaged.c)
 *     SdbReleaseDatabase @ 0x14082AC3C (SdbReleaseDatabase.c)
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
