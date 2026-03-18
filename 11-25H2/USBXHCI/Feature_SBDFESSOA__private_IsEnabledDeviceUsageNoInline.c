/*
 * XREFs of Feature_SBDFESSOA__private_IsEnabledDeviceUsageNoInline @ 0x140044304
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140076CC0 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     Feature_SBDFESSOA__private_IsEnabledFallback @ 0x14004433C (Feature_SBDFESSOA__private_IsEnabledFallback.c)
 */

__int64 Feature_SBDFESSOA__private_IsEnabledDeviceUsageNoInline()
{
  if ( ((__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink & 1;
  else
    return Feature_SBDFESSOA__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink), 3LL);
}
