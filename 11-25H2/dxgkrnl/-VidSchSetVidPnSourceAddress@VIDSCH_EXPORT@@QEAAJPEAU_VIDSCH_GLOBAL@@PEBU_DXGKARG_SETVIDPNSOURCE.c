/*
 * XREFs of ?VidSchSetVidPnSourceAddress@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x14005A308
 * Callers:
 *     ?PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1401B2378 (-PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x140312F00 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x140329108 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchSetVidPnSourceAddress(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a3)
{
  return (*(__int64 (__fastcall **)(struct _VIDSCH_GLOBAL *, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(*((_QWORD *)this + 1) + 824LL))(
           a2,
           a3);
}
