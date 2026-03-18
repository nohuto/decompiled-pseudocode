/*
 * XREFs of HUBDSM_QueryingRegistryValuesForDevice @ 0x1400236E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x140085F20 (HUBMISC_QueryAndCacheRegistryValuesForDevice.c)
 */

__int64 __fastcall HUBDSM_QueryingRegistryValuesForDevice(__int64 a1)
{
  return HUBMISC_QueryAndCacheRegistryValuesForDevice(*(_QWORD *)(a1 + 960));
}
