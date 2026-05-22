/*
 * XREFs of ?PushStateToProxy@BamoDockDevicePrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018088C
 * Callers:
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoDockDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180180920 (-PushStateToProxyOnOutboundMessagesResumed@BamoDockDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIMessa.c)
 *     ?SendMaterializeProxy@BamoDockDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180181340 (-SendMaterializeProxy@BamoDockDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVB.c)
 * Callees:
 *     ?UpdateDisplayOcclusionSupportedRemoteCache@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180182308 (-UpdateDisplayOcclusionSupportedRemoteCache@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoS.c)
 *     ?UpdatePanelIdRemoteCache@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801824E8 (-UpdatePanelIdRemoteCache@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft.c)
 */

void __fastcall BamoImpl::BamoDockDevicePrincipalImpl::PushStateToProxy(
        BamoImpl::BamoDockDevicePrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  BamoImpl::BamoDockDevicePrincipalImpl::UpdatePanelIdRemoteCache(this, a2);
  BamoImpl::BamoDockDevicePrincipalImpl::UpdateDisplayOcclusionSupportedRemoteCache(this, a2);
  BamoImpl::BamoDockDevicePrincipalImpl::UpdateDisplayOcclusionLogicalRangeRemoteCache(this, a2);
}
