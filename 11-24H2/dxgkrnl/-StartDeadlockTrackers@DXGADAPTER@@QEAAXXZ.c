/*
 * XREFs of ?StartDeadlockTrackers@DXGADAPTER@@QEAAXXZ @ 0x1402C9140
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402C7A94 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     ?Activate@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1403B5AA8 (-Activate@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::StartDeadlockTrackers(DXGADAPTER *this)
{
  char *v2; // rdi
  char *v3; // rsi
  char *i; // rbx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 1231, 1, 0) )
  {
    WdLogSingleEntry0(9LL);
    WdLogGlobalForLineNumber = 12666;
    v2 = (char *)this + 4928;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 4928, 0LL);
    v3 = (char *)this + 4952;
    *((_QWORD *)this + 617) = KeGetCurrentThread();
    for ( i = (char *)*((_QWORD *)this + 619); i != v3; i = *(char **)i )
      DXGDEADLOCK_TRACKER::Activate((DXGDEADLOCK_TRACKER *)(i - 224));
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
