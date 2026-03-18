/*
 * XREFs of PnpFindBestConfiguration @ 0x1407160B0
 * Callers:
 *     PnpReallocateResources @ 0x140728444 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x140728630 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x140729028 (PnpRebalance.c)
 *     PnpAllocateResources @ 0x1408310F4 (PnpAllocateResources.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x140716108 (PnpFindBestConfigurationWorker.c)
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
