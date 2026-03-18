/*
 * XREFs of ExpInsertTimerResolutionEntry @ 0x1404A7A8C
 * Callers:
 *     NtSetTimerResolution @ 0x1409CC680 (NtSetTimerResolution.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

void __fastcall ExpInsertTimerResolutionEntry(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx
  _QWORD *v4; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  v3 = ExpTimerResolutionListHead;
  v4 = (_QWORD *)(a1 + 1440);
  if ( *(__int64 **)(ExpTimerResolutionListHead + 8) != &ExpTimerResolutionListHead )
    __fastfail(3u);
  *v4 = ExpTimerResolutionListHead;
  v4[1] = &ExpTimerResolutionListHead;
  *(_QWORD *)(v3 + 8) = v4;
  ExpTimerResolutionListHead = (__int64)v4;
  KeReleaseSpinLock(&ExpKernelResolutionLock, v2);
}
