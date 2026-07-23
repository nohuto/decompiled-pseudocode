/*
 * XREFs of KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404AF630
 * Callers:
 *     KeQueryPriorityThread @ 0x1402E24A0 (KeQueryPriorityThread.c)
 *     KeQueryEffectivePriorityThread @ 0x1404DD960 (KeQueryEffectivePriorityThread.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1404993FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
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
