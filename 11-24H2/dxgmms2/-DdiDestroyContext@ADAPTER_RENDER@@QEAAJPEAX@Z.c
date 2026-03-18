/*
 * XREFs of ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x14004B578
 * Callers:
 *     VidSchTerminateHwContext @ 0x140021B40 (VidSchTerminateHwContext.c)
 *     VidSchTerminateContext @ 0x1400FFEA0 (VidSchTerminateContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyContext(ADAPTER_RENDER *this, void *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, void *))DxgCoreInterface[27])(this, a2);
}
