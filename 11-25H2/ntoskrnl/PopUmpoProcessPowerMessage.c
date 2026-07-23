/*
 * XREFs of PopUmpoProcessPowerMessage @ 0x140A18A88
 * Callers:
 *     PopUmpoProcessMessage @ 0x140A1899C (PopUmpoProcessMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14046D61C (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PfIoPowerEventNotify @ 0x140739AC4 (PfIoPowerEventNotify.c)
 *     PopPowerRequestNotificationsBegin @ 0x14073DC54 (PopPowerRequestNotificationsBegin.c)
 *     PopPowerRequestOverrideInitialize @ 0x14073DD34 (PopPowerRequestOverrideInitialize.c)
 *     PopIdleTriggerAdaptiveStandbyAction @ 0x14074FC70 (PopIdleTriggerAdaptiveStandbyAction.c)
 *     PopSetNewPolicyValue @ 0x1409648CC (PopSetNewPolicyValue.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140A3D5E8 (PopPowerAggregatorScheduleWorker.c)
 */

__int64 __fastcall PopUmpoProcessPowerMessage(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r11d
  char v4; // al
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r10d
  __int64 v8; // rcx

  if ( *(_DWORD *)a1 != 4 )
  {
    switch ( *(_DWORD *)a1 )
    {
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
        PopPowerAggregatorScheduleWorker(&PopPowerAggregatorContext);
        PopReleaseRwLock(&PopPowerAggregatorLock);
        if ( qword_140E672C0 )
          guard_dispatch_icall_no_overrides(v8);
        break;
      case 0xE:
        PopIdleTriggerAdaptiveStandbyAction(*(unsigned int *)(a1 + 8), a2);
        break;
      case 0x12:
        v3 = *(_DWORD *)(a1 + 8);
        v4 = *(_BYTE *)(a1 + 12);
        v5 = *(_QWORD *)(a1 + 24);
        v6 = *(_QWORD *)(a1 + 32);
        v7 = *(_DWORD *)(a1 + 16);
        if ( v3 )
        {
          if ( v3 == 1 )
          {
            *(_BYTE *)(a2 + 2) = v4;
            *(_QWORD *)(a2 + 48) = v5;
            *(_QWORD *)(a2 + 56) = v6;
            *(_DWORD *)(a2 + 12) = v7;
          }
        }
        else
        {
          *(_BYTE *)a2 = v4;
          *(_QWORD *)(a2 + 32) = v5;
          *(_QWORD *)(a2 + 40) = v6;
          *(_DWORD *)(a2 + 8) = v7;
        }
        break;
    }
    return 0LL;
  }
  result = PopSetNewPolicyValue(a1 + 8);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
