/*
 * XREFs of PopSetupMobileHotspotNotification @ 0x14073CED8
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x140A139C0 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupMobileHotspotNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (unsigned int)&v1,
           (unsigned int)&WNF_SEB_MOBILE_HOTSPOT,
           1,
           0,
           (__int64)PopWnfMobileHotspotCallback,
           0LL);
}
