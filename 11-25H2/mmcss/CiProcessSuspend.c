/*
 * XREFs of CiProcessSuspend @ 0x1C00011E0
 * Callers:
 *     CiProcessNotification @ 0x1C0001180 (CiProcessNotification.c)
 * Callees:
 *     CiSchedulerUpdateSuspendState @ 0x1C0001390 (CiSchedulerUpdateSuspendState.c)
 *     CiSchedulerPostSuspend @ 0x1C00013E0 (CiSchedulerPostSuspend.c)
 *     WPP_SF_qqd @ 0x1C0004BA4 (WPP_SF_qqd.c)
 *     CiAcquireProcessLock @ 0x1C000D6E0 (CiAcquireProcessLock.c)
 *     CiThreadDecrementScheduledCount @ 0x1C000E2D0 (CiThreadDecrementScheduledCount.c)
 *     CiThreadIncrementScheduledCount @ 0x1C000E330 (CiThreadIncrementScheduledCount.c)
 *     CiReleaseProcessLock @ 0x1C000E640 (CiReleaseProcessLock.c)
 */

__int64 __fastcall CiProcessSuspend(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  unsigned __int8 v5; // bp
  char v6; // di
  _QWORD *v7; // rdi
  _QWORD *v8; // r14
  _QWORD *v9; // rcx
  __int64 v10; // r12
  _QWORD *i; // r14
  unsigned int v12; // r15d
  __int64 result; // rax
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  char v15; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  v14 = 0LL;
  v5 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_qqd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, a1, *(_QWORD *)(a1 + 80), (unsigned __int8)a2);
  v6 = 0;
  v15 = 0;
  CiAcquireProcessLock(a1);
  if ( *(_BYTE *)(a1 + 88) != v5 )
  {
    v7 = (_QWORD *)(a1 + 64);
    v8 = *(_QWORD **)(a1 + 64);
    if ( (_QWORD *)*v7 != v7 )
    {
      do
      {
        v9 = v8 - 14;
        if ( v5 )
          CiThreadDecrementScheduledCount(v9);
        else
          CiThreadIncrementScheduledCount(v9);
        v8 = (_QWORD *)*v8;
      }
      while ( v8 != v7 );
    }
    v10 = KeQueryInterruptTimePrecise(&v14);
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    for ( i = (_QWORD *)*v7; i != v7; v4 = v12 )
    {
      v12 = v4 + 1;
      if ( (*(_BYTE *)(*(_QWORD *)(*(i - 5) + 136LL) + 3LL) & 1) == 0 )
        v12 = v4;
      *((_BYTE *)i + 36) ^= (v5 ^ *((_BYTE *)i + 36)) & 1;
      CiSchedulerUpdateSuspendState(i - 14);
      i = (_QWORD *)*i;
    }
    CiSchedulerPostSuspend(v5, v4, v10, &v15);
    v6 = v15;
    *(_BYTE *)(a1 + 88) = v5;
  }
  result = CiReleaseProcessLock(a1);
  if ( v6 )
    return KeAlertThread(CiSchedulerThread, 0LL);
  return result;
}
