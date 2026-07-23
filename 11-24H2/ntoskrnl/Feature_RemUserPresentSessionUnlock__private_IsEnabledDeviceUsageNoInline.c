/*
 * XREFs of Feature_RemUserPresentSessionUnlock__private_IsEnabledDeviceUsageNoInline @ 0x1405D80CC
 * Callers:
 *     PopSessionWinlogonNotification @ 0x140AC8DB8 (PopSessionWinlogonNotification.c)
 * Callees:
 *     Feature_RemUserPresentSessionUnlock__private_IsEnabledFallback @ 0x1405D8104 (Feature_RemUserPresentSessionUnlock__private_IsEnabledFallback.c)
 */

__int64 Feature_RemUserPresentSessionUnlock__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RemUserPresentSessionUnlock__private_featureState & 0x10) != 0 )
    return Feature_RemUserPresentSessionUnlock__private_featureState & 1;
  else
    return Feature_RemUserPresentSessionUnlock__private_IsEnabledFallback(
             (unsigned int)Feature_RemUserPresentSessionUnlock__private_featureState,
             3LL);
}
