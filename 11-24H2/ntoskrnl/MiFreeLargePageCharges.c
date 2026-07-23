/*
 * XREFs of MiFreeLargePageCharges @ 0x1403988E0
 * Callers:
 *     MiFinishLargePageFree @ 0x14021B7C8 (MiFinishLargePageFree.c)
 *     MiFreeContiguousPages @ 0x140398278 (MiFreeContiguousPages.c)
 *     MiFreeContiguousLargePageRun @ 0x1406833D4 (MiFreeContiguousLargePageRun.c)
 *     MiFreeLargeProcessPagesToCache @ 0x1406937E4 (MiFreeLargeProcessPagesToCache.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x14039895C (MiReleaseNonPagedResourcesNotExposed.c)
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
