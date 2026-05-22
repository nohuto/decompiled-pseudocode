/*
 * XREFs of ?PushStateToProxy@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180096D70
 * Callers:
 *     ?SendMaterializeProxy@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180082420 (-SendMaterializeProxy@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost.c)
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18013E5B0 (-PushStateToProxyOnOutboundMessagesResumed@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAAXPEA.c)
 * Callees:
 *     ?UpdateInputSpaceRemoteCache@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180096DA0 (-UpdateInputSpaceRemoteCache@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@.c)
 */

void __fastcall BamoImpl::BamoInputSpacePayloadPrincipalImpl::PushStateToProxy(
        BamoImpl::BamoInputSpacePayloadPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  BamoImpl::BamoInputSpacePayloadPrincipalImpl::UpdateInputSpaceRemoteCache(this, a2);
  BamoImpl::BamoInputSpacePayloadPrincipalImpl::UpdateRegionsRemoteCache(this, a2);
}
