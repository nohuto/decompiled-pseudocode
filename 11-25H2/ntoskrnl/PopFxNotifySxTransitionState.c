/*
 * XREFs of PopFxNotifySxTransitionState @ 0x1407420B0
 * Callers:
 *     PoBroadcastSystemState @ 0x140B54B5C (PoBroadcastSystemState.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

NTSTATUS __fastcall PopFxNotifySxTransitionState(char a1)
{
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rdi
  __int64 *v5; // rax
  __int64 *v6; // rdi
  struct _WORK_QUEUE_ITEM *v7; // rcx
  __int64 v8; // rax

  if ( a1 )
  {
    v1 = KeAbPreAcquire((__int64)&PopFxUpdateDripsConstraintContext, 0LL);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxUpdateDripsConstraintContext, 0LL);
    v3 = v1;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(&PopFxUpdateDripsConstraintContext, v1, (__int64)&PopFxUpdateDripsConstraintContext);
    if ( v3 )
      *((_BYTE *)v3 + 10) = 1;
    byte_140F0D058 = 1;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopFxUpdateDripsConstraintContext,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
    KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
    return KeWaitForSingleObject(&stru_140F0D060, Executive, 0, 0, 0LL);
  }
  else
  {
    v5 = KeAbPreAcquire((__int64)&PopFxUpdateDripsConstraintContext, 0LL);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxUpdateDripsConstraintContext, 0LL);
    v6 = v5;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(&PopFxUpdateDripsConstraintContext, v5, (__int64)&PopFxUpdateDripsConstraintContext);
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
    byte_140F0D058 = 0;
    while ( 1 )
    {
      v7 = (struct _WORK_QUEUE_ITEM *)qword_140F0D048;
      if ( (__int64 *)qword_140F0D048 == &qword_140F0D048 )
        break;
      if ( *(__int64 **)(qword_140F0D048 + 8) != &qword_140F0D048
        || (v8 = *(_QWORD *)qword_140F0D048, *(_QWORD *)(*(_QWORD *)qword_140F0D048 + 8LL) != qword_140F0D048) )
      {
        __fastfail(3u);
      }
      qword_140F0D048 = *(_QWORD *)qword_140F0D048;
      *(_QWORD *)(v8 + 8) = &qword_140F0D048;
      ExQueueWorkItem(v7 + 1, DelayedWorkQueue);
    }
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopFxUpdateDripsConstraintContext,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
    return KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
  }
}
