/*
 * XREFs of ?PushStateToProxy@BamoActivationWatcherPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18004AF9C
 * Callers:
 *     ?SendMaterializeProxy@BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18004ADF0 (-SendMaterializeProxy@BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost.c)
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800B1C20 (-PushStateToProxyOnOutboundMessagesResumed@BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAAXPEA.c)
 * Callees:
 *     ?UpdateActivatedEntityRemoteCache@BamoActivationWatcherPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18004A23C (-UpdateActivatedEntityRemoteCache@BamoActivationWatcherPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStub.c)
 *     ?UpdateActivatableEntityListRemoteCache@BamoActivationWatcherPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18004A384 (-UpdateActivatableEntityListRemoteCache@BamoActivationWatcherPrincipalImpl@BamoImpl@@AEAAXPEAVBa.c)
 */

void __fastcall BamoImpl::BamoActivationWatcherPrincipalImpl::PushStateToProxy(
        BamoImpl::BamoActivationWatcherPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  BamoImpl::BamoActivationWatcherPrincipalImpl::UpdateActivatableEntityListRemoteCache(this, a2);
  BamoImpl::BamoActivationWatcherPrincipalImpl::UpdateActivatedEntityRemoteCache(this, a2);
  BamoImpl::BamoActivationWatcherPrincipalImpl::UpdateTopLevelActivatedEntityRemoteCache(this, a2);
}
