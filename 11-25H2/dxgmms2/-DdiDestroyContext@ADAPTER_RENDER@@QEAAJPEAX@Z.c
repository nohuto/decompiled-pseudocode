/*
 * XREFs of ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x14004BE68
 * Callers:
 *     VidSchTerminateHwContext @ 0x1400291F0 (VidSchTerminateHwContext.c)
 *     VidSchTerminateContext @ 0x1401005F0 (VidSchTerminateContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyContext(ADAPTER_RENDER *this, void *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, void *))DxgCoreInterface[27])(this, a2);
}
