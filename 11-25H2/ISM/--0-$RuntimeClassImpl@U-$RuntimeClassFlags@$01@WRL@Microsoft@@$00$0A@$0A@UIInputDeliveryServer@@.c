/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputDeliveryServer@@UIInputServiceProxyOwner@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180018878
 * Callers:
 *     ?Create@InputSiteTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@@Z @ 0x180018744 (-Create@InputSiteTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$ComPtr@VInputSite@@@.c)
 *     ??0ShellHandwritingProcessor@@QEAA@XZ @ 0x180095C90 (--0ShellHandwritingProcessor@@QEAA@XZ.c)
 *     ??0MessageProxyReconnectAdapter@@QEAA@XZ @ 0x18009640C (--0MessageProxyReconnectAdapter@@QEAA@XZ.c)
 *     ??0KeyboardOverriderDispatcher@@QEAA@XZ @ 0x1800EE218 (--0KeyboardOverriderDispatcher@@QEAA@XZ.c)
 *     ??0NonBamoInputDeliveryServer@@QEAA@XZ @ 0x18015CC88 (--0NonBamoInputDeliveryServer@@QEAA@XZ.c)
 *     ??0InputServiceProxy@@QEAA@XZ @ 0x18015D7A4 (--0InputServiceProxy@@QEAA@XZ.c)
 *     ??0ShellGesturesProcessor@@QEAA@XZ @ 0x180196C60 (--0ShellGesturesProcessor@@QEAA@XZ.c)
 *     ??0HotKeyProcessor@@QEAA@XZ @ 0x1801C2634 (--0HotKeyProcessor@@QEAA@XZ.c)
 *     ??0TextInputStateAdapter@@QEAA@XZ @ 0x1801C5CEC (--0TextInputStateAdapter@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IInputDeliveryServer,IInputServiceProxyOwner>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IInputDeliveryServer,IInputServiceProxyOwner>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 20) = 1;
  return a1;
}
