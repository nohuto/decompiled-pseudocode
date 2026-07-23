/*
 * XREFs of PopDirectedDripsHandleResiliencyNotification @ 0x140A360B8
 * Callers:
 *     PopDirectedDripsWorkerRoutine @ 0x14074AEB0 (PopDirectedDripsWorkerRoutine.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402B9FF0 (PopDeepSleepClearDisengageReason.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdate @ 0x14049835C (PopDirectedDripsDiagPnpActionQueueAccountingUpdate.c)
 *     PopDirectedDripsSuspendDevices @ 0x140A35914 (PopDirectedDripsSuspendDevices.c)
 *     PopDirectedDripsResumeDevices @ 0x140A35FB0 (PopDirectedDripsResumeDevices.c)
 */

__int64 __fastcall PopDirectedDripsHandleResiliencyNotification(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  char *v3; // rax
  char *v4; // rbx
  char v5; // bp
  int v6; // r14d
  __int64 v7; // rcx
  char *v8; // rax
  char *v9; // rbp

  v1 = (unsigned __int64 *)(a1 + 160);
  v3 = (char *)KeAbPreAcquire(a1 + 160, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (__int64)v1);
  if ( v4 )
    v4[10] = 1;
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
  v8 = (char *)KeAbPreAcquire((__int64)v1, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v8, (__int64)v1);
  if ( v9 )
    v9[10] = 1;
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
