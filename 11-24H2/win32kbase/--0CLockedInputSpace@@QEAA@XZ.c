/*
 * XREFs of ??0CLockedInputSpace@@QEAA@XZ @ 0x1400E71A0
 * Callers:
 *     ?ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1400550CC (-ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14005F298 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     NtInputSpaceRegionFromPoint @ 0x1401B7A50 (NtInputSpaceRegionFromPoint.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1401E1C98 (RIMSetPointerDeviceInputSpace.c)
 *     ?BoundPoint@CCursorClip@@QEAA?AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x14020AA90 (-BoundPoint@CCursorClip@@QEAA-AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mouse.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x14020AD1C (-BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F39BC (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

CLockedInputSpace *__fastcall CLockedInputSpace::CLockedInputSpace(CLockedInputSpace *this)
{
  __int64 UserSessionState; // rax

  *(_QWORD *)this = 0LL;
  UserSessionState = W32GetUserSessionState(this);
  CEResourceLockShared::CEResourceLockShared(
    (CLockedInputSpace *)((char *)this + 8),
    (struct CEResourceLock *)(UserSessionState + 18696));
  return this;
}
