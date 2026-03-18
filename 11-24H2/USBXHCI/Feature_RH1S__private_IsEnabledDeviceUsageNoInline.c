/*
 * XREFs of Feature_RH1S__private_IsEnabledDeviceUsageNoInline @ 0x140043E54
 * Callers:
 *     RootHub_UcxEvtInterruptTransfer @ 0x1400251A0 (RootHub_UcxEvtInterruptTransfer.c)
 *     Controller_IdleTimeoutUpdateWorker @ 0x1400369B0 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_PopulateDeviceFlags @ 0x140076BD8 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     Feature_RH1S__private_IsEnabledFallback @ 0x140043E8C (Feature_RH1S__private_IsEnabledFallback.c)
 */

__int64 Feature_RH1S__private_IsEnabledDeviceUsageNoInline()
{
  if ( ((__int64)WPP_MAIN_CB.Reserved & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.Reserved & 1;
  else
    return Feature_RH1S__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.Reserved), 3LL);
}
