/*
 * XREFs of PopWnfAudioCallback @ 0x140A36A30
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x14044E080 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopGetDozeTimerSource @ 0x1405D3718 (PopGetDozeTimerSource.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14074FCF8 (PopUpdateSmartUserPresencePredictions.c)
 *     ExpWnfReadStateData @ 0x1408E32C8 (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140A36EFC (ExpWnfAcquireSubscriptionNameInstance.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A37004 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopAudioAccountingCallback @ 0x140A370BC (PopAudioAccountingCallback.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
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
          byte_140F0B74D = 1;
          PopAudioAccountingCallback(v7);
          if ( (unsigned int)PopGetDozeTimerSource() == 2 )
            PopUpdateSmartUserPresencePredictions(0LL, 5u);
        }
        else
        {
          byte_140F0B74D = 0;
          PopAudioAccountingCallback(0LL);
        }
        v8 = byte_140F0B74D;
        PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
        if ( byte_140F0D8B2 != v8 )
        {
          byte_140F0D8B2 = v8;
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
