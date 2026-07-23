/*
 * XREFs of PopPowerRequestDelete @ 0x140A414A0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PopUmpoSendPowerMessage @ 0x140426264 (PopUmpoSendPowerMessage.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     SleepstudyHelperDestroyBlocker @ 0x14047CB90 (SleepstudyHelperDestroyBlocker.c)
 *     PoDestroyReasonContext @ 0x1404E90C0 (PoDestroyReasonContext.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x14075A1F0 (TtmNotifySessionPowerRequestDeleted.c)
 *     PsReleaseProcessWakeCounter @ 0x1408B0AE0 (PsReleaseProcessWakeCounter.c)
 *     TtmIsEnabled @ 0x140964038 (TtmIsEnabled.c)
 *     PopPowerRequestTableDeleteEntry @ 0x140A415E0 (PopPowerRequestTableDeleteEntry.c)
 *     PopDiagTracePowerRequestClose @ 0x140A41610 (PopDiagTracePowerRequestClose.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x140A416A0 (PopUmpoSendPowerRequestOverrideCleanup.c)
 */

void __fastcall PopPowerRequestDelete(unsigned int *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rcx
  __int64 **v4; // rax
  void *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  KSPIN_LOCK *v11; // rcx
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
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
  PopReleaseRwLock(&PopPowerRequestLock);
  if ( v2 )
    PsReleaseProcessWakeCounter(v2);
  PoDestroyReasonContext(*((_QWORD **)a1 + 12), v8, v9, v10);
  v11 = (KSPIN_LOCK *)*((_QWORD *)a1 + 20);
  if ( v11 )
    SleepstudyHelperDestroyBlocker(v11);
  PopDiagTracePowerRequestClose(a1);
  if ( a1[26] )
  {
    if ( TtmIsEnabled() )
      TtmNotifySessionPowerRequestDeleted(a1[4], a1[9]);
    if ( PopPowerRequestNotificationsEnabled )
    {
      memset_0(Src, 0, 0x48uLL);
      Src[2] = a1[9];
      Src[0] = 17;
      PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
    }
  }
  if ( !*((_BYTE *)a1 + 152) )
    PopUmpoSendPowerRequestOverrideCleanup(a1);
}
