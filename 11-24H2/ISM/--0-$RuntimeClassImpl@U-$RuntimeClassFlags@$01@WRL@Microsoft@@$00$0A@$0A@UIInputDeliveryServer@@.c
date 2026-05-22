/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputDeliveryServer@@UIInputServiceProxyOwner@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180018E48
 * Callers:
 *     ?Create@InputSiteTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@@Z @ 0x180018D14 (-Create@InputSiteTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$ComPtr@VInputSite@@@.c)
 *     ??0ShellHandwritingProcessor@@QEAA@XZ @ 0x180095E90 (--0ShellHandwritingProcessor@@QEAA@XZ.c)
 *     ??0MessageProxyReconnectAdapter@@QEAA@XZ @ 0x180096614 (--0MessageProxyReconnectAdapter@@QEAA@XZ.c)
 *     ??0KeyboardOverriderDispatcher@@QEAA@XZ @ 0x1800EF038 (--0KeyboardOverriderDispatcher@@QEAA@XZ.c)
 *     ??0NonBamoInputDeliveryServer@@QEAA@XZ @ 0x18015DAB8 (--0NonBamoInputDeliveryServer@@QEAA@XZ.c)
 *     ??0InputServiceProxy@@QEAA@XZ @ 0x18015E5D4 (--0InputServiceProxy@@QEAA@XZ.c)
 *     ??0ShellGesturesProcessor@@QEAA@XZ @ 0x18019E430 (--0ShellGesturesProcessor@@QEAA@XZ.c)
 *     ??0HotKeyProcessor@@QEAA@XZ @ 0x1801C9EB4 (--0HotKeyProcessor@@QEAA@XZ.c)
 *     ??0TextInputStateAdapter@@QEAA@XZ @ 0x1801CD57C (--0TextInputStateAdapter@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IInputDeliveryServer,IInputServiceProxyOwner>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IInputDeliveryServer,IInputServiceProxyOwner>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 20) = 1;
  return a1;
}
