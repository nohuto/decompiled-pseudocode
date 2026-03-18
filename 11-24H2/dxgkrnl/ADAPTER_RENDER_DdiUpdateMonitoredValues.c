/*
 * XREFs of ADAPTER_RENDER_DdiUpdateMonitoredValues @ 0x14006BEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiUpdateMonitoredValues@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_UPDATEMONITOREDVALUES@@@Z @ 0x14006A2A4 (-DdiUpdateMonitoredValues@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_UPDATEMONITOREDVALUES@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiUpdateMonitoredValues(
        ADAPTER_RENDER *a1,
        struct _DXGKARG_UPDATEMONITOREDVALUES *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiUpdateMonitoredValues(a1, a2, a3);
}
