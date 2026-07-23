/*
 * XREFs of Feature_CrossProcessorClassThreadStealing__private_IsEnabledDeviceUsageNoInline @ 0x1405C5150
 * Callers:
 *     KiMayStealStandbyThread @ 0x1402A6F50 (KiMayStealStandbyThread.c)
 * Callees:
 *     Feature_CrossProcessorClassThreadStealing__private_IsEnabledFallback @ 0x1405C5188 (Feature_CrossProcessorClassThreadStealing__private_IsEnabledFallback.c)
 */

__int64 Feature_CrossProcessorClassThreadStealing__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CrossProcessorClassThreadStealing__private_featureState & 0x10) != 0 )
    return Feature_CrossProcessorClassThreadStealing__private_featureState & 1;
  else
    return Feature_CrossProcessorClassThreadStealing__private_IsEnabledFallback(
             (unsigned int)Feature_CrossProcessorClassThreadStealing__private_featureState,
             3LL);
}
