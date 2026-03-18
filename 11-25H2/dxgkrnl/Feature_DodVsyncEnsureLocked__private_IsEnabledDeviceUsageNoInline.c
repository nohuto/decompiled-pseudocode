/*
 * XREFs of Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline @ 0x140091F04
 * Callers:
 *     ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x140061AC0 (-QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z.c)
 * Callees:
 *     Feature_DodVsyncEnsureLocked__private_IsEnabledFallback @ 0x140091F3C (Feature_DodVsyncEnsureLocked__private_IsEnabledFallback.c)
 */

__int64 Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DodVsyncEnsureLocked__private_featureState & 0x10) != 0 )
    return Feature_DodVsyncEnsureLocked__private_featureState & 1;
  else
    return Feature_DodVsyncEnsureLocked__private_IsEnabledFallback(
             (unsigned int)Feature_DodVsyncEnsureLocked__private_featureState,
             3LL);
}
