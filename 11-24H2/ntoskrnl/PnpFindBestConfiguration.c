/*
 * XREFs of PnpFindBestConfiguration @ 0x14071FD40
 * Callers:
 *     PnpReallocateResources @ 0x140732604 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x1407327F0 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1407331E8 (PnpRebalance.c)
 *     PnpAllocateResources @ 0x140978AE0 (PnpAllocateResources.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x14071FD98 (PnpFindBestConfigurationWorker.c)
 */

__int64 __fastcall PnpFindBestConfiguration(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 2; ++i )
  {
    result = PnpFindBestConfigurationWorker(a1, a2, a3, i);
    if ( (int)result >= 0 )
      break;
  }
  return result;
}
