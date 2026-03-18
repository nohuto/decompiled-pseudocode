/*
 * XREFs of PopWnfAudioCallback @ 0x140A3B7C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x14044DBC4 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopGetDozeTimerSource @ 0x1405D8078 (PopGetDozeTimerSource.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14075C5C0 (PopUpdateSmartUserPresencePredictions.c)
 *     ExpWnfReadStateData @ 0x1408ABA3C (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140A3BBFC (ExpWnfAcquireSubscriptionNameInstance.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A3BCEC (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopAudioAccountingCallback @ 0x140A3BDA4 (PopAudioAccountingCallback.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopWnfAudioCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v2; // rdi
  int v3; // ebx
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v8; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+20h] [rbp-38h]
  unsigned int v15; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+38h] [rbp-20h] BYREF
  _BYTE v17[8]; // [rsp+40h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v15 = 8;
  --CurrentThread->KernelApcDisable;
  v2 = (struct _EX_RUNDOWN_REF *)ExpWnfAcquireSubscriptionNameInstance(a1, a1);
  if ( v2 )
  {
    v3 = ExpWnfReadStateData((__int64)v2, &v16, v17, 8u, &v15);
    ExReleaseRundownProtection_0(v2 + 1);
    v4 = 0;
    if ( v3 < 0 )
      v4 = v3;
    KeLeaveCriticalRegion();
    if ( v4 >= 0 )
    {
      if ( v15 < 8 )
      {
        return 0;
      }
      else
      {
        PopAcquirePolicyLock(v6, v5);
        if ( (v17[0] & 2) != 0 )
        {
          LOBYTE(v7) = 1;
          byte_140F0BA8D = 1;
          PopAudioAccountingCallback(v7);
          if ( (unsigned int)PopGetDozeTimerSource() == 2 )
            PopUpdateSmartUserPresencePredictions(0LL, 5u);
        }
        else
        {
          byte_140F0BA8D = 0;
          PopAudioAccountingCallback(0LL);
        }
        v8 = byte_140F0BA8D;
        PopAcquireRwLockExclusive(&PopPowerRequestLock);
        if ( byte_140F0E082 != v8 )
        {
          byte_140F0E082 = v8;
          PopPowerRequestStatsNotifyScenarioStateChange(0, v8);
        }
        PopPowerRequestHandleExecutionEnablementUpdate();
        PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
        PopReleasePolicyLock(v10, v9, v11, v12, v14);
      }
    }
  }
  else
  {
    KeLeaveCriticalRegion();
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v4;
}
