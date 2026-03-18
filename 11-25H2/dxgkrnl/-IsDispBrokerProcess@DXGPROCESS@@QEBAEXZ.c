/*
 * XREFs of ?IsDispBrokerProcess@DXGPROCESS@@QEBAEXZ @ 0x14006E9B8
 * Callers:
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1402D69A0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     DxgkDispMgrOperation @ 0x1403F47A0 (DxgkDispMgrOperation.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGPROCESS::IsDispBrokerProcess(DXGPROCESS *this)
{
  return (*((_DWORD *)this + 102) & 4) != 0;
}
