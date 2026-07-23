/*
 * XREFs of KeCleanupThreadState @ 0x14043CF94
 * Callers:
 *     PspThreadDelete @ 0x140ACF4E0 (PspThreadDelete.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KeFlushQueuedDpcs @ 0x14032C480 (KeFlushQueuedDpcs.c)
 *     KiAbCleanupLockEntriesState @ 0x14043D07C (KiAbCleanupLockEntriesState.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall KeCleanupThreadState(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdx
  char v3; // al
  char v4; // al
  __int64 v5; // rcx
  unsigned __int8 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v6);
  if ( *(_DWORD *)(BugCheckParameter1 + 1028) != 32 )
  {
    v2 = *(char *)(BugCheckParameter1 + 1028);
    v3 = *(_BYTE *)(v2 + BugCheckParameter1 + 824);
    if ( !v3 )
      KeBugCheckEx(0x157u, BugCheckParameter1, *(char *)(BugCheckParameter1 + 1028), 2uLL, 0LL);
    v4 = v3 - 1;
    *(_BYTE *)(v2 + BugCheckParameter1 + 824) = v4;
    if ( !v4 )
      *(_DWORD *)(BugCheckParameter1 + 856) ^= 1 << v2;
    *(_DWORD *)(BugCheckParameter1 + 1028) = 32;
  }
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  if ( KiIrqlFlags )
  {
    LOBYTE(v2) = v6;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  }
  __writecr8(v6);
  if ( (*(_DWORD *)(BugCheckParameter1 + 116) & 1) != 0 )
  {
    KiAbCleanupLockEntriesState(*(_QWORD *)(BugCheckParameter1 + 1136), BugCheckParameter1);
    v5 = *(_QWORD *)(BugCheckParameter1 + 1144);
    if ( v5 )
      KiAbCleanupLockEntriesState(v5, BugCheckParameter1);
  }
  if ( *(_WORD *)(BugCheckParameter1 + 868) )
    KeFlushQueuedDpcs();
}
