/*
 * XREFs of ?PushStateToProxy@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018C138
 * Callers:
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018C180 (-PushStateToProxyOnOutboundMessagesResumed@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAAXP.c)
 *     ?SendMaterializeProxy@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018D610 (-SendMaterializeProxy@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHo.c)
 * Callees:
 *     ?UpdatePenDevicesRemoteCache@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018DF34 (-UpdatePenDevicesRemoteCache@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImp.c)
 *     ?UpdateTouchpadDevicesRemoteCache@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018E044 (-UpdateTouchpadDevicesRemoteCache@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoSt.c)
 */

void __fastcall BamoImpl::BamoHapticDeviceManagerPrincipalImpl::PushStateToProxy(
        BamoImpl::BamoHapticDeviceManagerPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  BamoImpl::BamoHapticDeviceManagerPrincipalImpl::UpdatePenDevicesRemoteCache(this, a2);
  BamoImpl::BamoHapticDeviceManagerPrincipalImpl::UpdateTouchpadDevicesRemoteCache(this, a2);
  BamoImpl::BamoHapticDeviceManagerPrincipalImpl::UpdateMouseDevicesRemoteCache(this, a2);
}
