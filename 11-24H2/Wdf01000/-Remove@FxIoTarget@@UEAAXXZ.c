/*
 * XREFs of ?Remove@FxIoTarget@@UEAAXXZ @ 0x140067150
 * Callers:
 *     <none>
 * Callees:
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140006B70 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1400671FC (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoTarget::Remove(FxIoTarget *this)
{
  unsigned __int8 v2; // [rsp+20h] [rbp-30h]
  _LIST_ENTRY pendedHead; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 wait; // [rsp+60h] [rbp+10h] BYREF
  _SINGLE_LIST_ENTRY sentHead; // [rsp+68h] [rbp+18h] BYREF

  sentHead.Next = 0LL;
  pendedHead.Blink = &pendedHead;
  wait = 0;
  pendedHead.Flink = &pendedHead;
  v2 = 1;
  this->GotoRemoveState(this, WdfIoTargetDeleted, &pendedHead, &sentHead, v2, &wait);
  FxIoTarget::CompletePendedRequestList(this, &pendedHead);
  FxIoTarget::_CancelSentRequests(&sentHead);
  if ( wait )
    this->WaitForSentIoToComplete(this);
  this->WaitForDisposeEvent(this);
}
