/*
 * XREFs of ?IsDispBrokerProcess@DXGPROCESS@@QEBAEXZ @ 0x14006F448
 * Callers:
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x140313A24 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     DxgkDispMgrOperation @ 0x1403EE7D0 (DxgkDispMgrOperation.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGPROCESS::IsDispBrokerProcess(DXGPROCESS *this)
{
  return (*((_DWORD *)this + 102) & 4) != 0;
}
