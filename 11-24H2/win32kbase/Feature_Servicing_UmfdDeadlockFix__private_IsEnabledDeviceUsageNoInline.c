/*
 * XREFs of Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x1401A3D38
 * Callers:
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x14015D194 (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     Feature_Servicing_UmfdDeadlockFix__private_IsEnabledFallback @ 0x1401A3D70 (Feature_Servicing_UmfdDeadlockFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_UmfdDeadlockFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_UmfdDeadlockFix__private_featureState & 1;
  else
    return Feature_Servicing_UmfdDeadlockFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_UmfdDeadlockFix__private_featureState,
             3LL);
}
