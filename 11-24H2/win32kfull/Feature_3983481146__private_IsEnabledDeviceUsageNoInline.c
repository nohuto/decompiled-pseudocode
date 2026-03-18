/*
 * XREFs of Feature_3983481146__private_IsEnabledDeviceUsageNoInline @ 0x14030FEC4
 * Callers:
 *     GreMakeBitmapStock @ 0x1401D6B00 (GreMakeBitmapStock.c)
 * Callees:
 *     Feature_3983481146__private_IsEnabledFallback @ 0x14030FEFC (Feature_3983481146__private_IsEnabledFallback.c)
 */

__int64 Feature_3983481146__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3983481146__private_featureState & 0x10) != 0 )
    return Feature_3983481146__private_featureState & 1;
  else
    return Feature_3983481146__private_IsEnabledFallback((unsigned int)Feature_3983481146__private_featureState, 3LL);
}
