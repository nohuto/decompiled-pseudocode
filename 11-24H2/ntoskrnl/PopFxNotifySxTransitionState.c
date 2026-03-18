/*
 * XREFs of PopFxNotifySxTransitionState @ 0x14074E180
 * Callers:
 *     PoBroadcastSystemState @ 0x140B64C6C (PoBroadcastSystemState.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

NTSTATUS __fastcall PopFxNotifySxTransitionState(char a1)
{
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  struct _WORK_QUEUE_ITEM *v7; // rcx
  __int64 v8; // rax

  if ( a1 )
  {
    v1 = KeAbPreAcquire((__int64)&PopFxUpdateDripsConstraintContext, 0LL);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxUpdateDripsConstraintContext, 0LL);
    v3 = v1;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(
        &PopFxUpdateDripsConstraintContext,
        (__int64)v1,
        (__int64)&PopFxUpdateDripsConstraintContext);
    if ( v3 )
      *((_BYTE *)v3 + 10) = 1;
    byte_140F0D9B8 = 1;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopFxUpdateDripsConstraintContext,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
    KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
    return KeWaitForSingleObject(&stru_140F0D9C0, Executive, 0, 0, 0LL);
  }
  else
  {
    v5 = KeAbPreAcquire((__int64)&PopFxUpdateDripsConstraintContext, 0LL);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxUpdateDripsConstraintContext, 0LL);
    v6 = v5;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(
        &PopFxUpdateDripsConstraintContext,
        (__int64)v5,
        (__int64)&PopFxUpdateDripsConstraintContext);
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
    byte_140F0D9B8 = 0;
    while ( 1 )
    {
      v7 = (struct _WORK_QUEUE_ITEM *)qword_140F0D9A8;
      if ( (__int64 *)qword_140F0D9A8 == &qword_140F0D9A8 )
        break;
      if ( *(__int64 **)(qword_140F0D9A8 + 8) != &qword_140F0D9A8
        || (v8 = *(_QWORD *)qword_140F0D9A8, *(_QWORD *)(*(_QWORD *)qword_140F0D9A8 + 8LL) != qword_140F0D9A8) )
      {
        __fastfail(3u);
      }
      qword_140F0D9A8 = *(_QWORD *)qword_140F0D9A8;
      *(_QWORD *)(v8 + 8) = &qword_140F0D9A8;
      ExQueueWorkItem(v7 + 1, DelayedWorkQueue);
    }
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopFxUpdateDripsConstraintContext,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
    return KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
  }
}
