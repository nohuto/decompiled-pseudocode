/*
 * XREFs of PnpFindBestConfiguration @ 0x1407221B0
 * Callers:
 *     PnpReallocateResources @ 0x1407346D4 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x1407348C0 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1407352B8 (PnpRebalance.c)
 *     PnpAllocateResources @ 0x14098DAA8 (PnpAllocateResources.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x140722208 (PnpFindBestConfigurationWorker.c)
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
