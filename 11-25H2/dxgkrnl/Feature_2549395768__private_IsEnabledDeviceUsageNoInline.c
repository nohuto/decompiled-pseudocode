/*
 * XREFs of Feature_2549395768__private_IsEnabledDeviceUsageNoInline @ 0x140078ADC
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403B60A8 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 * Callees:
 *     Feature_2549395768__private_IsEnabledFallback @ 0x140078B14 (Feature_2549395768__private_IsEnabledFallback.c)
 */

__int64 Feature_2549395768__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_2549395768__private_featureState & 0x10) != 0 )
    return Feature_2549395768__private_featureState & 1;
  else
    return Feature_2549395768__private_IsEnabledFallback((unsigned int)Feature_2549395768__private_featureState, 3LL);
}
