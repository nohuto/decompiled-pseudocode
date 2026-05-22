/*
 * XREFs of ?OnConnected@DragManagerClientProxy@@MEAAJXZ @ 0x18002E2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckCapability@DragManagerClientProxy@@AEAAJXZ @ 0x18002EA1C (-CheckCapability@DragManagerClientProxy@@AEAAJXZ.c)
 *     ?GetDesktop@DragManagerClientProxy@@AEAAJXZ @ 0x18002ECAC (-GetDesktop@DragManagerClientProxy@@AEAAJXZ.c)
 */

__int64 __fastcall DragManagerClientProxy::OnConnected(DragManagerClientProxy *this)
{
  DragManagerClientProxy::GetDesktop(this);
  DragManagerClientProxy::CheckCapability(this);
  return 0LL;
}
