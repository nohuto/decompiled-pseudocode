/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRemoteHotKeyProcessor@@UIMessageProxyListener@@@WRL@Microsoft@@UEAA@XZ @ 0x180070AA4
 * Callers:
 *     _ShellGesturesProcessor::ShellGesturesProcessor_::_1_::dtor$0 @ 0x1801CEC5D (_ShellGesturesProcessor--ShellGesturesProcessor_--_1_--dtor$0.c)
 *     _NonBamoInputDeliveryServer::NonBamoInputDeliveryServer_::_1_::dtor$0 @ 0x1801D0696 (_NonBamoInputDeliveryServer--NonBamoInputDeliveryServer_--_1_--dtor$0.c)
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$0 @ 0x1801D2084 (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRemoteHotKeyProcessor,IMessageProxyListener>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRemoteHotKeyProcessor,IMessageProxyListener>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 20) = -1073741823;
}
