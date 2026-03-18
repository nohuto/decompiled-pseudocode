/*
 * XREFs of ?Remove@FxIoTargetRemote@@UEAAXXZ @ 0x140029AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x140029B9C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 */

void __fastcall FxIoTargetRemote::Remove(FxIoTargetRemote *this)
{
  FxIoTargetRemote::Close(this, FxIoTargetRemoteCloseReasonDelete);
}
