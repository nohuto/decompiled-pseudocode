/*
 * XREFs of Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline @ 0x14026B4C0
 * Callers:
 *     SetMouseTrails @ 0x140239574 (SetMouseTrails.c)
 *     NtUserGetDwmCursorShape @ 0x140295E40 (NtUserGetDwmCursorShape.c)
 *     ?UpdateRoutingState@CursorApiRouter@@AEAA?AW4RoutingStateActionNeeded@1@_N@Z @ 0x1402DAFA0 (-UpdateRoutingState@CursorApiRouter@@AEAA-AW4RoutingStateActionNeeded@1@_N@Z.c)
 * Callees:
 *     Feature_DesktopDWMCursor__private_IsEnabledFallback @ 0x1402677BC (Feature_DesktopDWMCursor__private_IsEnabledFallback.c)
 */

__int64 Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DesktopDWMCursor__private_featureState & 0x10) != 0 )
    return Feature_DesktopDWMCursor__private_featureState & 1;
  else
    return Feature_DesktopDWMCursor__private_IsEnabledFallback(
             (unsigned int)Feature_DesktopDWMCursor__private_featureState,
             3LL);
}
