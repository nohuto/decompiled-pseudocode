/*
 * XREFs of ?OnConnected@DragManagerClientProxy@@MEAAJXZ @ 0x18002E880
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckCapability@DragManagerClientProxy@@AEAAJXZ @ 0x18002EFDC (-CheckCapability@DragManagerClientProxy@@AEAAJXZ.c)
 *     ?GetDesktop@DragManagerClientProxy@@AEAAJXZ @ 0x18002F26C (-GetDesktop@DragManagerClientProxy@@AEAAJXZ.c)
 */

__int64 __fastcall DragManagerClientProxy::OnConnected(DragManagerClientProxy *this)
{
  DragManagerClientProxy::GetDesktop(this);
  DragManagerClientProxy::CheckCapability(this);
  return 0LL;
}
