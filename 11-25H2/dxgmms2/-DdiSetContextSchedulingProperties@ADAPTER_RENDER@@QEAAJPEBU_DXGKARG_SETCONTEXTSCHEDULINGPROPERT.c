/*
 * XREFs of ?DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES@@@Z @ 0x140042CF0
 * Callers:
 *     VidSchiUpdateDdiHwContextPriority @ 0x140102D04 (VidSchiUpdateDdiHwContextPriority.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetContextSchedulingProperties(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES *))DxgCoreInterface[45])(
           this,
           a2);
}
