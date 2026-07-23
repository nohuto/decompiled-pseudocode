/*
 * XREFs of Feature_2866505016__private_IsEnabledDeviceUsageNoInline @ 0x1405C9A08
 * Callers:
 *     AlpcpReleaseAttributes @ 0x140899E50 (AlpcpReleaseAttributes.c)
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x140AC1D10 (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     Feature_2866505016__private_IsEnabledFallback @ 0x1405C9A40 (Feature_2866505016__private_IsEnabledFallback.c)
 */

__int64 Feature_2866505016__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_2866505016__private_featureState & 0x10) != 0 )
    return Feature_2866505016__private_featureState & 1;
  else
    return Feature_2866505016__private_IsEnabledFallback((unsigned int)Feature_2866505016__private_featureState, 3LL);
}
