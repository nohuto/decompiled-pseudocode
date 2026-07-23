/*
 * XREFs of PopUmpoProcessPowerMessage @ 0x140A181C4
 * Callers:
 *     PopUmpoProcessMessage @ 0x140A180D8 (PopUmpoProcessMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x140464C2C (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PfIoPowerEventNotify @ 0x140743DD4 (PfIoPowerEventNotify.c)
 *     PopPowerRequestNotificationsBegin @ 0x140748004 (PopPowerRequestNotificationsBegin.c)
 *     PopPowerRequestOverrideInitialize @ 0x1407480E4 (PopPowerRequestOverrideInitialize.c)
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x1407608DC (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopPowerAggregatorScheduleWorker @ 0x1409A0BFC (PopPowerAggregatorScheduleWorker.c)
 *     PopSetNewPolicyValue @ 0x1409A2CCC (PopSetNewPolicyValue.c)
 */

__int64 __fastcall PopUmpoProcessPowerMessage(__int64 a1, __int64 a2)
{
  int v2; // r11d
  char v3; // al
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r10d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax

  switch ( *(_DWORD *)a1 )
  {
    case 4:
      result = PopSetNewPolicyValue(a1 + 8);
      if ( (int)result < 0 )
        return result;
      break;
    case 7:
      if ( *(_BYTE *)(a1 + 20) )
        PfIoPowerEventNotify(*(_DWORD *)(a1 + 12), a2, 1u);
      break;
    case 8:
      PopPowerRequestHandleRequestOverrideQueryResponse((unsigned int *)(a1 + 8));
      break;
    case 0xA:
      if ( *(_BYTE *)(a1 + 8) )
        PopPowerRequestNotificationsBegin(a1);
      PopPowerRequestOverrideInitialize();
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
      PopPowerAggregatorUmpoInitialized = 1;
      PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
      PopReleaseRwLock(&PopPowerAggregatorLock);
      if ( qword_140E67710 )
        guard_dispatch_icall_no_overrides(v8, v7);
      break;
    case 0x12:
      v2 = *(_DWORD *)(a1 + 8);
      v3 = *(_BYTE *)(a1 + 12);
      v4 = *(_QWORD *)(a1 + 24);
      v5 = *(_QWORD *)(a1 + 32);
      v6 = *(_DWORD *)(a1 + 16);
      if ( v2 )
      {
        if ( v2 == 1 )
        {
          *(_BYTE *)(a2 + 2) = v3;
          *(_QWORD *)(a2 + 48) = v4;
          *(_QWORD *)(a2 + 56) = v5;
          *(_DWORD *)(a2 + 12) = v6;
        }
      }
      else
      {
        *(_BYTE *)a2 = v3;
        *(_QWORD *)(a2 + 32) = v4;
        *(_QWORD *)(a2 + 40) = v5;
        *(_DWORD *)(a2 + 8) = v6;
      }
      break;
    default:
      if ( (unsigned int)(*(_DWORD *)a1 - 19) <= 1 )
        PopAdaptiveStandbyHandlePowerMessage(a1);
      break;
  }
  return 0LL;
}
