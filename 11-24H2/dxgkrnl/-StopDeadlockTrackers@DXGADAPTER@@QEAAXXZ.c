/*
 * XREFs of ?StopDeadlockTrackers@DXGADAPTER@@QEAAXXZ @ 0x1403A9AF4
 * Callers:
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1402C801C (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 * Callees:
 *     ?Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1403B0C10 (-Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::StopDeadlockTrackers(DXGADAPTER *this)
{
  char *v2; // rdi
  char *v3; // rsi
  char *i; // rbx

  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 1231, 0, 1) == 1 )
  {
    WdLogSingleEntry0(9LL);
    WdLogGlobalForLineNumber = 12689;
    v2 = (char *)this + 4928;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 4928, 0LL);
    v3 = (char *)this + 4952;
    *((_QWORD *)this + 617) = KeGetCurrentThread();
    for ( i = (char *)*((_QWORD *)this + 619); i != v3; i = *(char **)i )
      DXGDEADLOCK_TRACKER::Cancel((DXGDEADLOCK_TRACKER *)(i - 224));
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
