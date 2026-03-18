/*
 * XREFs of Feature_CrossProcessorClassThreadStealing__private_IsEnabledNoReportingNoInline @ 0x1405C7A3C
 * Callers:
 *     KiMayStealStandbyThread @ 0x140298460 (KiMayStealStandbyThread.c)
 * Callees:
 *     Feature_CrossProcessorClassThreadStealing__private_IsEnabledFallback @ 0x1405C7A20 (Feature_CrossProcessorClassThreadStealing__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_CrossProcessorClassThreadStealing__private_IsEnabledNoReportingNoInline(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (Feature_CrossProcessorClassThreadStealing__private_featureState & 2) != 0 )
    return Feature_CrossProcessorClassThreadStealing__private_featureState & 1;
  else
    return Feature_CrossProcessorClassThreadStealing__private_IsEnabledFallback(
             (unsigned int)Feature_CrossProcessorClassThreadStealing__private_featureState,
             0,
             a3,
             a4);
}
