/*
 * XREFs of Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledDeviceUsageNoInline @ 0x140285C50
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401BB45C (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401C7978 (-Allocate@-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14020208C (-Allocate@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1402E0D34 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledFallback @ 0x140285C88 (Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_RgnObjCopyHandleNotRetained__private_featureState & 0x10) != 0 )
    return Feature_Servicing_RgnObjCopyHandleNotRetained__private_featureState & 1;
  else
    return Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_RgnObjCopyHandleNotRetained__private_featureState,
             3LL);
}
