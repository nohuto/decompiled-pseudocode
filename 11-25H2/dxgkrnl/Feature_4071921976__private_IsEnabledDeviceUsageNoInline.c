/*
 * XREFs of Feature_4071921976__private_IsEnabledDeviceUsageNoInline @ 0x1400788EC
 * Callers:
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x140078268 (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 * Callees:
 *     Feature_4071921976__private_IsEnabledFallback @ 0x140078924 (Feature_4071921976__private_IsEnabledFallback.c)
 */

__int64 Feature_4071921976__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_4071921976__private_featureState & 0x10) != 0 )
    return Feature_4071921976__private_featureState & 1;
  else
    return Feature_4071921976__private_IsEnabledFallback((unsigned int)Feature_4071921976__private_featureState, 3LL);
}
