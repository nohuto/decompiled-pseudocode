/*
 * XREFs of Feature_DisableAppStateSuspendedTelemetry__private_IsEnabledDeviceUsageNoInline @ 0x1404F23E8
 * Callers:
 *     PsThawMultiProcess @ 0x1404EBCE4 (PsThawMultiProcess.c)
 *     PsFreezeProcess @ 0x140AC7BE0 (PsFreezeProcess.c)
 * Callees:
 *     Feature_DisableAppStateSuspendedTelemetry__private_IsEnabledFallback @ 0x1404F2420 (Feature_DisableAppStateSuspendedTelemetry__private_IsEnabledFallback.c)
 */

__int64 Feature_DisableAppStateSuspendedTelemetry__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisableAppStateSuspendedTelemetry__private_featureState & 0x10) != 0 )
    return Feature_DisableAppStateSuspendedTelemetry__private_featureState & 1;
  else
    return Feature_DisableAppStateSuspendedTelemetry__private_IsEnabledFallback(
             (unsigned int)Feature_DisableAppStateSuspendedTelemetry__private_featureState,
             3LL);
}
