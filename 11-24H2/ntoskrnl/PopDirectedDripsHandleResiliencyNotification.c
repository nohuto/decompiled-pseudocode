/*
 * XREFs of PopDirectedDripsHandleResiliencyNotification @ 0x140A407D8
 * Callers:
 *     PopDirectedDripsWorkerRoutine @ 0x14074CB80 (PopDirectedDripsWorkerRoutine.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403CB4D8 (PopDeepSleepClearDisengageReason.c)
 *     PopQueueWorkItem @ 0x140497478 (PopQueueWorkItem.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdate @ 0x14049D55C (PopDirectedDripsDiagPnpActionQueueAccountingUpdate.c)
 *     PopDirectedDripsSuspendDevices @ 0x140A40034 (PopDirectedDripsSuspendDevices.c)
 *     PopDirectedDripsResumeDevices @ 0x140A406D0 (PopDirectedDripsResumeDevices.c)
 */

__int64 __fastcall PopDirectedDripsHandleResiliencyNotification(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  char v5; // bp
  int v6; // r14d
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rbp

  v1 = (unsigned __int64 *)(a1 + 160);
  v3 = KeAbPreAcquire(a1 + 160, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, (__int64)v3, (__int64)v1);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  v5 = *(_BYTE *)(a1 + 169);
  v6 = *(_DWORD *)(a1 + 172);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
  if ( *(_BYTE *)(a1 + 168) != v5 )
  {
    PopDirectedDripsDiagPnpActionQueueAccountingUpdate(v7, v5);
    if ( v5 )
      PopDirectedDripsSuspendDevices((signed __int32 *)a1);
    else
      PopDirectedDripsResumeDevices((signed __int32 *)a1, 0);
  }
  *(_BYTE *)(a1 + 168) = v5;
  v8 = KeAbPreAcquire((__int64)v1, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, (__int64)v8, (__int64)v1);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  if ( *(_DWORD *)(a1 + 172) == v6 )
  {
    *(_BYTE *)(a1 + 176) = 1;
    PopQueueWorkItem(a1 + 184, DelayedWorkQueue);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return PopDeepSleepClearDisengageReason(8u);
}
