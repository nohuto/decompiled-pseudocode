/*
 * XREFs of Feature_Servicing_TVSNonVolatileReadInAdapterCxx__private_IsEnabledDeviceUsageNoInline @ 0x140066870
 * Callers:
 *     ?DeadlockPulseDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1400658A0 (-DeadlockPulseDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     Feature_Servicing_TVSNonVolatileReadInAdapterCxx__private_IsEnabledFallback @ 0x1400668A8 (Feature_Servicing_TVSNonVolatileReadInAdapterCxx__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_TVSNonVolatileReadInAdapterCxx__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_TVSNonVolatileReadInAdapterCxx__private_featureState & 0x10) != 0 )
    return Feature_Servicing_TVSNonVolatileReadInAdapterCxx__private_featureState & 1;
  else
    return Feature_Servicing_TVSNonVolatileReadInAdapterCxx__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_TVSNonVolatileReadInAdapterCxx__private_featureState,
             3LL);
}
