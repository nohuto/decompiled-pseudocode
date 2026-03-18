/*
 * XREFs of KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404B5390
 * Callers:
 *     KeQueryPriorityThread @ 0x140375500 (KeQueryPriorityThread.c)
 *     KeQueryEffectivePriorityThread @ 0x140433E70 (KeQueryEffectivePriorityThread.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x140204DB0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403E8170 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 */

char __fastcall KiUpdateVpBackingThreadPriorityOnPriorityQuery(ULONG_PTR BugCheckParameter1)
{
  unsigned __int8 v3; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v3 = 0;
  KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v3);
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
    KiUpdateVpBackingThreadPriorityFromTopLevel(BugCheckParameter1, (__int64)&v4, 1);
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  return KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v4, v3);
}
