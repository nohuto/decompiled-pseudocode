/*
 * XREFs of PopPowerRequestDelete @ 0x1409BAA40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PopUmpoSendPowerMessage @ 0x140331990 (PopUmpoSendPowerMessage.c)
 *     PoDestroyReasonContext @ 0x140331BA4 (PoDestroyReasonContext.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     SleepstudyHelperDestroyBlocker @ 0x14047C6C0 (SleepstudyHelperDestroyBlocker.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x140769BB0 (TtmNotifySessionPowerRequestDeleted.c)
 *     PsReleaseProcessWakeCounter @ 0x14088E750 (PsReleaseProcessWakeCounter.c)
 *     PopPowerRequestTableDeleteEntry @ 0x1409BAB80 (PopPowerRequestTableDeleteEntry.c)
 *     PopDiagTracePowerRequestClose @ 0x1409BABB0 (PopDiagTracePowerRequestClose.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x1409BAC40 (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     TtmIsEnabled @ 0x1409BBDE8 (TtmIsEnabled.c)
 */

void __fastcall PopPowerRequestDelete(unsigned int *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rcx
  __int64 **v4; // rax
  void *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  KSPIN_LOCK *v8; // rcx
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0LL;
  PopAcquireRwLockExclusive(&PopPowerRequestLock);
  v3 = *(__int64 **)a1;
  if ( *(unsigned int **)(*(_QWORD *)a1 + 8LL) != a1 || (v4 = (__int64 **)*((_QWORD *)a1 + 1), *v4 != (__int64 *)a1) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = (__int64)v4;
  v5 = (void *)*((_QWORD *)a1 + 17);
  if ( v5 )
  {
    ObfDereferenceObjectWithTag(v5, 0x72506F50u);
    *((_QWORD *)a1 + 17) = 0LL;
  }
  v6 = *((_QWORD *)a1 + 18);
  if ( v6 )
  {
    *((_QWORD *)a1 + 18) = 0LL;
    v2 = v6;
  }
  v7 = a1[9];
  --PopPowerRequestObjectCount;
  PopPowerRequestTableDeleteEntry(v7);
  PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
  if ( v2 )
    PsReleaseProcessWakeCounter(v2);
  PoDestroyReasonContext(*((_QWORD **)a1 + 12));
  v8 = (KSPIN_LOCK *)*((_QWORD *)a1 + 20);
  if ( v8 )
    SleepstudyHelperDestroyBlocker(v8);
  PopDiagTracePowerRequestClose(a1);
  if ( a1[26] )
  {
    if ( (unsigned __int8)TtmIsEnabled() )
      TtmNotifySessionPowerRequestDeleted(a1[4], a1[9]);
    if ( PopPowerRequestNotificationsEnabled )
    {
      memset_0(Src, 0, 0x48uLL);
      Src[2] = a1[9];
      Src[0] = 17;
      PopUmpoSendPowerMessage(Src, 0x48uLL, 0, 0LL);
    }
  }
  if ( !*((_BYTE *)a1 + 152) )
    PopUmpoSendPowerRequestOverrideCleanup(a1);
}
