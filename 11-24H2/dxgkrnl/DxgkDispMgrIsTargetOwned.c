/*
 * XREFs of DxgkDispMgrIsTargetOwned @ 0x1403C0410
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z @ 0x1403C0428 (-ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z.c)
 */

bool __fastcall DxgkDispMgrIsTargetOwned(DXGDISPLAYMANAGEROBJECT **a1, struct _LUID a2, unsigned int a3)
{
  return DXGDISPLAYMANAGEROBJECT::ContainsTarget(*a1, a2, a3);
}
