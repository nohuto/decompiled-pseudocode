/*
 * XREFs of ADAPTER_RENDER_DdiGetRootPageTableSize @ 0x140059350
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1403E0124 (-DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z.c)
 */

unsigned __int64 __fastcall ADAPTER_RENDER_DdiGetRootPageTableSize(
        ADAPTER_RENDER *a1,
        struct _DXGKARG_GETROOTPAGETABLESIZE *a2)
{
  return ADAPTER_RENDER::DdiGetRootPageTableSize(a1, a2);
}
