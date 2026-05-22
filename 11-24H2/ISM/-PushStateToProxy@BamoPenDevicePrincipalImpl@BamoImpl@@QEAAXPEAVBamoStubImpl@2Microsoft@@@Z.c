/*
 * XREFs of ?PushStateToProxy@BamoPenDevicePrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180190FBC
 * Callers:
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoPenDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180190FF0 (-PushStateToProxyOnOutboundMessagesResumed@BamoPenDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIMessag.c)
 *     ?SendMaterializeProxy@BamoPenDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180191300 (-SendMaterializeProxy@BamoPenDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBa.c)
 * Callees:
 *     ?UpdateUniqueIdRemoteCache@BamoPenDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180191844 (-UpdateUniqueIdRemoteCache@BamoPenDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft.c)
 */

void __fastcall BamoImpl::BamoPenDevicePrincipalImpl::PushStateToProxy(
        BamoImpl::BamoPenDevicePrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  BamoImpl::BamoPenDevicePrincipalImpl::UpdateUniqueIdRemoteCache(this, a2);
  BamoImpl::BamoPenDevicePrincipalImpl::UpdateHapticsRemoteCache(this, a2);
}
