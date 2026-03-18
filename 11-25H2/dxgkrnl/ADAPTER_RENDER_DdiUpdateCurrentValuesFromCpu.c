/*
 * XREFs of ADAPTER_RENDER_DdiUpdateCurrentValuesFromCpu @ 0x14006C180
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiUpdateCurrentValuesFromCpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_UPDATECURRENTVALUESFROMCPU@@@Z @ 0x14006A3E4 (-DdiUpdateCurrentValuesFromCpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_UPDATECURRENTVALUESFROMCPU@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiUpdateCurrentValuesFromCpu(
        ADAPTER_RENDER *a1,
        struct _DXGKARG_UPDATECURRENTVALUESFROMCPU *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiUpdateCurrentValuesFromCpu(a1, a2, a3);
}
