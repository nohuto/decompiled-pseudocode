/*
 * XREFs of Feature_592146746__private_IsEnabledDeviceUsageNoInline @ 0x140077CC4
 * Callers:
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1401EBDCC (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 * Callees:
 *     Feature_592146746__private_IsEnabledFallback @ 0x140077CFC (Feature_592146746__private_IsEnabledFallback.c)
 */

__int64 Feature_592146746__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_592146746__private_featureState & 0x10) != 0 )
    return Feature_592146746__private_featureState & 1;
  else
    return Feature_592146746__private_IsEnabledFallback((unsigned int)Feature_592146746__private_featureState, 3LL);
}
