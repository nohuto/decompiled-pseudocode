/*
 * XREFs of EmClientQueryRuleState @ 0x140B6A420
 * Callers:
 *     HalpInterruptIsMsiSupported @ 0x1404B1F6C (HalpInterruptIsMsiSupported.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x14074AB3C (PopDirectedDripsQueryEnabledMitigations.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x140758E64 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopFilterCapabilities @ 0x14099F88C (PopFilterCapabilities.c)
 *     PopEnableHiberFile @ 0x140AAE8C0 (PopEnableHiberFile.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140C30C2C (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140C3271C (PopEvaluateInputSuppressionRequired.c)
 *     PopReadErrataForIncorrectLidNotification @ 0x140C350B0 (PopReadErrataForIncorrectLidNotification.c)
 *     KeInitializeClock @ 0x140C624A0 (KeInitializeClock.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EmpSearchTargetRuleList @ 0x140445014 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1404477EC (EmpSearchRuleDatabase.c)
 *     EmpUpdateRuleState @ 0x14048CA20 (EmpUpdateRuleState.c)
 *     EmpAcquirePagingReference @ 0x140B6A678 (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x140B6A724 (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientQueryRuleState(_QWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edi
  char *v5; // rax
  signed __int8 v6; // cf
  char *v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
  volatile signed __int32 *v10; // rax
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rsi

  v2 = 0;
  if ( a1 && a2 )
  {
    *a2 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      v5 = (char *)KeAbPreAcquire((__int64)&EmpDatabaseLock, 0LL);
      v6 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
      v7 = v5;
      if ( v6 )
        ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v5, (__int64)&EmpDatabaseLock);
      if ( v7 )
        v7[10] = 1;
      v8 = EmpSearchRuleDatabase(a1);
      v9 = v8;
      if ( v8 && (v10 = (volatile signed __int32 *)EmpSearchTargetRuleList((__int64)v8), (v12 = v10) != 0LL) )
      {
        _InterlockedIncrement(v10);
        EmpUpdateRuleState(v11, 0LL);
        _InterlockedAdd(v12, 0xFFFFFFFF);
        *a2 = *((_DWORD *)v9 + 4);
      }
      else
      {
        v2 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
      KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
      EmpReleasePagingReference();
    }
    else
    {
      return (unsigned int)-1073741818;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
