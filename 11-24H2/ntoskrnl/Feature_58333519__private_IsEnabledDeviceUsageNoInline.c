/*
 * XREFs of Feature_58333519__private_IsEnabledDeviceUsageNoInline @ 0x1406967AC
 * Callers:
 *     sub_14091BE04 @ 0x14091BE04 (sub_14091BE04.c)
 *     sub_14091C0E8 @ 0x14091C0E8 (sub_14091C0E8.c)
 * Callees:
 *     Feature_58333519__private_IsEnabledFallback @ 0x1406967E4 (Feature_58333519__private_IsEnabledFallback.c)
 */

__int64 Feature_58333519__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_58333519__private_featureState & 0x10) != 0 )
    return Feature_58333519__private_featureState & 1;
  else
    return Feature_58333519__private_IsEnabledFallback((unsigned int)Feature_58333519__private_featureState, 3LL);
}
