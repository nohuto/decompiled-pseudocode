/*
 * XREFs of PopFxNotifySxTransitionState @ 0x14074C4B0
 * Callers:
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

NTSTATUS __fastcall PopFxNotifySxTransitionState(char a1)
{
  char *v1; // rax
  signed __int8 v2; // cf
  char *v3; // rdi
  char *v5; // rax
  char *v6; // rdi
  struct _WORK_QUEUE_ITEM *v7; // rcx
  __int64 v8; // rax

  if ( a1 )
  {
    v1 = (char *)KeAbPreAcquire((__int64)&PopFxUpdateDripsConstraintContext, 0LL);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxUpdateDripsConstraintContext, 0LL);
    v3 = v1;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(&PopFxUpdateDripsConstraintContext, v1, (__int64)&PopFxUpdateDripsConstraintContext);
    if ( v3 )
      v3[10] = 1;
    byte_140F0DB38 = 1;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopFxUpdateDripsConstraintContext,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
    KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
    return KeWaitForSingleObject(&stru_140F0DB40, Executive, 0, 0, 0LL);
  }
  else
  {
    v5 = (char *)KeAbPreAcquire((__int64)&PopFxUpdateDripsConstraintContext, 0LL);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxUpdateDripsConstraintContext, 0LL);
    v6 = v5;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(&PopFxUpdateDripsConstraintContext, v5, (__int64)&PopFxUpdateDripsConstraintContext);
    if ( v6 )
      v6[10] = 1;
    byte_140F0DB38 = 0;
    while ( 1 )
    {
      v7 = (struct _WORK_QUEUE_ITEM *)qword_140F0DB28;
      if ( (__int64 *)qword_140F0DB28 == &qword_140F0DB28 )
        break;
      if ( *(__int64 **)(qword_140F0DB28 + 8) != &qword_140F0DB28
        || (v8 = *(_QWORD *)qword_140F0DB28, *(_QWORD *)(*(_QWORD *)qword_140F0DB28 + 8LL) != qword_140F0DB28) )
      {
        __fastfail(3u);
      }
      qword_140F0DB28 = *(_QWORD *)qword_140F0DB28;
      *(_QWORD *)(v8 + 8) = &qword_140F0DB28;
      ExQueueWorkItem(v7 + 1, DelayedWorkQueue);
    }
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopFxUpdateDripsConstraintContext,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
    return KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
  }
}
