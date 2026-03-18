/*
 * XREFs of Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledDeviceUsageNoInline @ 0x1401B60C8
 * Callers:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140025B10 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140027710 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140041428 (-Allocate@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140068780 (-Allocate@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140085EAC (-Allocate@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1400861E0 (-Allocate@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140088C24 (-Allocate@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14010ACAC (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140110F64 (-Allocate@-$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14011E5BC (-Allocate@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledFallback @ 0x1401B6100 (Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledFallback.c)
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
