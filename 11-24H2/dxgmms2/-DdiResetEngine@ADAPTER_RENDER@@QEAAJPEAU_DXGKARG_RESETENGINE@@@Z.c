/*
 * XREFs of ?DdiResetEngine@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETENGINE@@@Z @ 0x14004B464
 * Callers:
 *     VidSchiReportHwHang @ 0x140044F38 (VidSchiReportHwHang.c)
 *     VidSchiResetEngine @ 0x140047318 (VidSchiResetEngine.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiResetEngine(ADAPTER_RENDER *this, struct _DXGKARG_RESETENGINE *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, struct _DXGKARG_RESETENGINE *))DxgCoreInterface[41])(this, a2);
}
