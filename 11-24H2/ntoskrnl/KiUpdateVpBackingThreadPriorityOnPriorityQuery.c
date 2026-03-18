/*
 * XREFs of KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404B4E30
 * Callers:
 *     KeQueryPriorityThread @ 0x140248260 (KeQueryPriorityThread.c)
 *     KeQueryEffectivePriorityThread @ 0x1404302D0 (KeQueryEffectivePriorityThread.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14049E5FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
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
