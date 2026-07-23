/*
 * XREFs of PopWnfAudioCallback @ 0x140A30FA0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x140444AC4 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopGetDozeTimerSource @ 0x1405D55F8 (PopGetDozeTimerSource.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14075B55C (PopUpdateSmartUserPresencePredictions.c)
 *     ExpWnfReadStateData @ 0x140901C9C (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140A313DC (ExpWnfAcquireSubscriptionNameInstance.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A314CC (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopAudioAccountingCallback @ 0x140A31584 (PopAudioAccountingCallback.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
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
          byte_140F0B3CD = 1;
          PopAudioAccountingCallback(v7);
          if ( (unsigned int)PopGetDozeTimerSource() == 2 )
            PopUpdateSmartUserPresencePredictions(0LL, 5u);
        }
        else
        {
          byte_140F0B3CD = 0;
          PopAudioAccountingCallback(0LL);
        }
        v8 = byte_140F0B3CD;
        PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
        if ( byte_140F0E222 != v8 )
        {
          byte_140F0E222 = v8;
          PopPowerRequestStatsNotifyScenarioStateChange(0, v8);
        }
        PopPowerRequestHandleExecutionEnablementUpdate();
        PopReleaseRwLock(&PopPowerRequestLock);
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
