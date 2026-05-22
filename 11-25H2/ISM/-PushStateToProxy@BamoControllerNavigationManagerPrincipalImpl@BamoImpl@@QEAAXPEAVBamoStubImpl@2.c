/*
 * XREFs of ?PushStateToProxy@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18005B27C
 * Callers:
 *     ?SendMaterializeProxy@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18005B0D0 (-SendMaterializeProxy@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCa.c)
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801751E0 (-PushStateToProxyOnOutboundMessagesResumed@BamoControllerNavigationManagerPrincipalImpl@BamoImpl.c)
 * Callees:
 *     ?UpdateEnabledRemoteCache@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18005B2AC (-UpdateEnabledRemoteCache@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoSt.c)
 */

void __fastcall BamoImpl::BamoControllerNavigationManagerPrincipalImpl::PushStateToProxy(
        BamoImpl::BamoControllerNavigationManagerPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdateEnabledRemoteCache(this, a2);
  BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdatePausedRemoteCache(this, a2);
}
