/*
 * XREFs of ?GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ @ 0x180077120
 * Callers:
 *     ?CheckForVirtualTouchpadFromInputSiteList@DWMInputRouter@@AEAA_NAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@PEAUVPTP_ID@@@Z @ 0x18007D818 (-CheckForVirtualTouchpadFromInputSiteList@DWMInputRouter@@AEAA_NAEBV-$vector@V-$ComPtr@VInputSit.c)
 *     ?TraceClients@ShellGesturesProcessor@@CAXXZ @ 0x18008A514 (-TraceClients@ShellGesturesProcessor@@CAXXZ.c)
 *     ?OnGamepadInterceptionEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180133A80 (-OnGamepadInterceptionEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ.c)
 *     ?OnConnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180135A50 (-OnConnected@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180135AF0 (-OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180135C30 (-OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180135DD0 (-OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?HandlesInput@ShellGesturesClientProxy@@QEAA_NW4InputType@@_NK@Z @ 0x18015ABF4 (-HandlesInput@ShellGesturesClientProxy@@QEAA_NW4InputType@@_NK@Z.c)
 *     ?GetEnabled@ControllerNavigationClientProxy@@UEAA_NXZ @ 0x180177080 (-GetEnabled@ControllerNavigationClientProxy@@UEAA_NXZ.c)
 *     ?OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801AD720 (-OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

bool __fastcall BamoShellGesturesClientProxy::GetTouchEnabled(BamoShellGesturesClientProxy *this)
{
  BamoShellGesturesClientProxy *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LOBYTE(v1) = *((_BYTE *)v1 + 40);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5, v2, v3);
  return (char)v1;
}
