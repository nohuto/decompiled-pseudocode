/*
 * XREFs of MiFreeLargePageCharges @ 0x1403A9C50
 * Callers:
 *     MiFinishLargePageFree @ 0x1403A3D48 (MiFinishLargePageFree.c)
 *     MiFreeContiguousPages @ 0x1403A95E8 (MiFreeContiguousPages.c)
 *     MiFreeContiguousLargePageRun @ 0x1406821E4 (MiFreeContiguousLargePageRun.c)
 *     MiFreeLargeProcessPagesToCache @ 0x140692714 (MiFreeLargeProcessPagesToCache.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x1403A9CCC (MiReleaseNonPagedResourcesNotExposed.c)
 */

void __fastcall MiFreeLargePageCharges(__int64 a1, unsigned __int64 a2, char a3)
{
  if ( a2 )
  {
    if ( (a3 & 0x20) != 0 )
      MiReleaseNonPagedResourcesNotExposed(a1, a2);
    else
      MiReleaseNonPagedResources(a1, a2);
  }
}
