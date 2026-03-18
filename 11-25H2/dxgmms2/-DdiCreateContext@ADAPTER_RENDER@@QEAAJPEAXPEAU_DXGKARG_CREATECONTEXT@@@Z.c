/*
 * XREFs of ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x14004BC58
 * Callers:
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x140031674 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCreateContext(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_CREATECONTEXT *a3)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, void *, struct _DXGKARG_CREATECONTEXT *))DxgCoreInterface[21])(
           this,
           a2,
           a3);
}
