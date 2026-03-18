/*
 * XREFs of Feature_58333519__private_IsEnabledDeviceUsageNoInline @ 0x1406956DC
 * Callers:
 *     sub_1408F9528 @ 0x1408F9528 (sub_1408F9528.c)
 *     sub_1408F980C @ 0x1408F980C (sub_1408F980C.c)
 * Callees:
 *     Feature_58333519__private_IsEnabledFallback @ 0x140695714 (Feature_58333519__private_IsEnabledFallback.c)
 */

__int64 Feature_58333519__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_58333519__private_featureState & 0x10) != 0 )
    return Feature_58333519__private_featureState & 1;
  else
    return Feature_58333519__private_IsEnabledFallback((unsigned int)Feature_58333519__private_featureState, 3LL);
}
