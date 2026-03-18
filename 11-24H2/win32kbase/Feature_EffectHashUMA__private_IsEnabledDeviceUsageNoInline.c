/*
 * XREFs of Feature_EffectHashUMA__private_IsEnabledDeviceUsageNoInline @ 0x140224530
 * Callers:
 *     ?EffectHashesCompiled@CConnection@DirectComposition@@QEBA_NPEB_KI@Z @ 0x1402243A0 (-EffectHashesCompiled@CConnection@DirectComposition@@QEBA_NPEB_KI@Z.c)
 * Callees:
 *     Feature_EffectHashUMA__private_IsEnabledFallback @ 0x140224568 (Feature_EffectHashUMA__private_IsEnabledFallback.c)
 */

__int64 Feature_EffectHashUMA__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EffectHashUMA__private_featureState & 0x10) != 0 )
    return Feature_EffectHashUMA__private_featureState & 1;
  else
    return Feature_EffectHashUMA__private_IsEnabledFallback(
             (unsigned int)Feature_EffectHashUMA__private_featureState,
             3LL);
}
