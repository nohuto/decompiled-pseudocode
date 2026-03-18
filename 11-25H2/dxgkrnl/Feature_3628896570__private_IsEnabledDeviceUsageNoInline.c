/*
 * XREFs of Feature_3628896570__private_IsEnabledDeviceUsageNoInline @ 0x140076288
 * Callers:
 *     ?NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z @ 0x1401DC314 (-NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z.c)
 * Callees:
 *     Feature_3628896570__private_IsEnabledFallback @ 0x1400762C0 (Feature_3628896570__private_IsEnabledFallback.c)
 */

__int64 Feature_3628896570__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3628896570__private_featureState & 0x10) != 0 )
    return Feature_3628896570__private_featureState & 1;
  else
    return Feature_3628896570__private_IsEnabledFallback((unsigned int)Feature_3628896570__private_featureState, 3LL);
}
