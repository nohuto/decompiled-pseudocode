/*
 * XREFs of MiFreeLargePageCharges @ 0x14038BC4C
 * Callers:
 *     MiFreeContiguousPages @ 0x14038B910 (MiFreeContiguousPages.c)
 *     MiFinishLargePageFree @ 0x14038D7E8 (MiFinishLargePageFree.c)
 *     MiFreeContiguousLargePageRun @ 0x1406769C4 (MiFreeContiguousLargePageRun.c)
 *     MiFreeLargeProcessPagesToCache @ 0x1406872B4 (MiFreeLargeProcessPagesToCache.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x14038B398 (MiReleaseNonPagedResourcesNotExposed.c)
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
