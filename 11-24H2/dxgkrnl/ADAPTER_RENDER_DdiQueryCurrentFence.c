/*
 * XREFs of ADAPTER_RENDER_DdiQueryCurrentFence @ 0x14006BD20
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiQueryCurrentFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYCURRENTFENCE@@@Z @ 0x140069000 (-DdiQueryCurrentFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYCURRENTFENCE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiQueryCurrentFence(
        ADAPTER_RENDER *a1,
        struct _DXGKARG_QUERYCURRENTFENCE *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiQueryCurrentFence(a1, a2, a3);
}
