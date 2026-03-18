/*
 * XREFs of ADAPTER_RENDER_DdiQueryDependentEngineGroup @ 0x14006C020
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiQueryDependentEngineGroup@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDEPENDENTENGINEGROUP@@@Z @ 0x1400695F8 (-DdiQueryDependentEngineGroup@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDEPENDENTENGINEGROUP@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiQueryDependentEngineGroup(
        ADAPTER_RENDER *a1,
        struct _DXGKARG_QUERYDEPENDENTENGINEGROUP *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiQueryDependentEngineGroup(a1, a2, a3);
}
