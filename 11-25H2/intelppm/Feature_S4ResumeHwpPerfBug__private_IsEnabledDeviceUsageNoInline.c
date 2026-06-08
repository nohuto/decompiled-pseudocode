/*
 * XREFs of Feature_S4ResumeHwpPerfBug__private_IsEnabledDeviceUsageNoInline @ 0x140007334
 * Callers:
 *     GetHwpPerfControlHandler @ 0x14002AC30 (GetHwpPerfControlHandler.c)
 * Callees:
 *     Feature_S4ResumeHwpPerfBug__private_IsEnabledFallback @ 0x14000736C (Feature_S4ResumeHwpPerfBug__private_IsEnabledFallback.c)
 */

__int64 Feature_S4ResumeHwpPerfBug__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_S4ResumeHwpPerfBug__private_featureState & 0x10) != 0 )
    return Feature_S4ResumeHwpPerfBug__private_featureState & 1;
  else
    return Feature_S4ResumeHwpPerfBug__private_IsEnabledFallback(
             (unsigned int)Feature_S4ResumeHwpPerfBug__private_featureState,
             3LL);
}
