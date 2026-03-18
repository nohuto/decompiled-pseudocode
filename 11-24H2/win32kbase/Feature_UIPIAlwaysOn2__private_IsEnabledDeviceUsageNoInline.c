/*
 * XREFs of Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3DE0
 * Callers:
 *     xxxInitProcessInfo @ 0x140161084 (xxxInitProcessInfo.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x140165460 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     EtwTraceUIPISystemError @ 0x14016A710 (EtwTraceUIPISystemError.c)
 *     GetKeyEventInputSource @ 0x1401891C4 (GetKeyEventInputSource.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A5A58 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     Win32UserInitialize @ 0x1402E5DE4 (Win32UserInitialize.c)
 * Callees:
 *     Feature_UIPIAlwaysOn2__private_IsEnabledFallback @ 0x1401A3E18 (Feature_UIPIAlwaysOn2__private_IsEnabledFallback.c)
 */

__int64 Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UIPIAlwaysOn2__private_featureState & 0x10) != 0 )
    return Feature_UIPIAlwaysOn2__private_featureState & 1;
  else
    return Feature_UIPIAlwaysOn2__private_IsEnabledFallback(
             (unsigned int)Feature_UIPIAlwaysOn2__private_featureState,
             3LL);
}
