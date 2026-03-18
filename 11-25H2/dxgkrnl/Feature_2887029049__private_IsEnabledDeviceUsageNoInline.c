/*
 * XREFs of Feature_2887029049__private_IsEnabledDeviceUsageNoInline @ 0x140076234
 * Callers:
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403F0310 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 * Callees:
 *     Feature_2887029049__private_IsEnabledFallback @ 0x14007626C (Feature_2887029049__private_IsEnabledFallback.c)
 */

__int64 Feature_2887029049__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_2887029049__private_featureState & 0x10) != 0 )
    return Feature_2887029049__private_featureState & 1;
  else
    return Feature_2887029049__private_IsEnabledFallback((unsigned int)Feature_2887029049__private_featureState, 3LL);
}
