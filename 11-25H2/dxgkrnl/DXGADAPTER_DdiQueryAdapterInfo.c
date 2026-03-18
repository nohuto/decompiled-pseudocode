/*
 * XREFs of DXGADAPTER_DdiQueryAdapterInfo @ 0x14006C200
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1403707B8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER_DdiQueryAdapterInfo(DXGADAPTER *a1, struct _DXGKARG_QUERYADAPTERINFO *a2)
{
  return DXGADAPTER::DdiQueryAdapterInfo(a1, a2);
}
