/*
 * XREFs of DbgkpWerDeferredWriteRoutine @ 0x140706800
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     IoWriteDeferredLiveDumpData @ 0x140594B84 (IoWriteDeferredLiveDumpData.c)
 *     DbgkpWerCleanupContext @ 0x140706638 (DbgkpWerCleanupContext.c)
 */

void __fastcall DbgkpWerDeferredWriteRoutine(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  struct _KTIMER *v4; // rsi
  int v5; // ebp
  int v6; // eax

  DbgPrintEx(5u, 3u, "DBGK: DbgkpWerDeferredWriteRoutine entered, context 0x%p\n", (const void *)a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( *(_DWORD *)(a1 + 32) == 453 )
    v3 = -24000000000LL;
  else
    v3 = -10000000LL * DbgkpWerDeferredWriteTimeoutSeconds;
  v4 = *(struct _KTIMER **)(*(_QWORD *)(a1 + 120) + 16LL);
  if ( v4 )
    KiSetTimerEx((__int64)v4, v3, 0, 0, 0LL);
  v5 = IoWriteDeferredLiveDumpData(*(_QWORD *)(a1 + 128));
  KeCancelTimer(v4);
  *(_QWORD *)(a1 + 128) = 0LL;
  if ( v5 >= 0 )
  {
    v6 = WerLiveKernelSubmitReport(*(_QWORD *)(a1 + 96), 0LL);
    if ( v6 >= 0 )
      *(_DWORD *)(a1 + 104) |= 1u;
    else
      DbgPrintEx(
        5u,
        0,
        "DBGK: DbgkpWerDeferredWriteRoutine: WerLiveKernelSubmitReport failed with status 0x%X\n",
        (unsigned int)v6);
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: DbgkpWerDeferredWriteRoutine: dump write failed with status 0x%X\n", (unsigned int)v5);
  }
  DbgkpWerCleanupContext(a1);
  _InterlockedExchange(&DbgkpBusy, 0);
  KeLeaveCriticalRegion();
}
