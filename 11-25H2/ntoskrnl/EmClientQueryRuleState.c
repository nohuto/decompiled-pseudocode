/*
 * XREFs of EmClientQueryRuleState @ 0x140B584B0
 * Callers:
 *     HalpInterruptIsMsiSupported @ 0x1404B7ECC (HalpInterruptIsMsiSupported.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x14074073C (PopDirectedDripsQueryEnabledMitigations.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x14074E1A4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopFilterCapabilities @ 0x140A10C3C (PopFilterCapabilities.c)
 *     PopEnableHiberFile @ 0x140AAE964 (PopEnableHiberFile.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140C1DA08 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140C1F4FC (PopEvaluateInputSuppressionRequired.c)
 *     PopReadErrataForIncorrectLidNotification @ 0x140C21E78 (PopReadErrataForIncorrectLidNotification.c)
 *     KeInitializeClock @ 0x140C4ECE8 (KeInitializeClock.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EmpSearchTargetRuleList @ 0x14044EAB8 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1404507DC (EmpSearchRuleDatabase.c)
 *     EmpUpdateRuleState @ 0x140492920 (EmpUpdateRuleState.c)
 *     EmpAcquirePagingReference @ 0x140B58708 (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x140B587B4 (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientQueryRuleState(_QWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edi
  __int64 *v5; // rax
  signed __int8 v6; // cf
  __int64 *v7; // rbx
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
      v5 = KeAbPreAcquire((__int64)&EmpDatabaseLock, 0LL);
      v6 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
      v7 = v5;
      if ( v6 )
        ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v5, (__int64)&EmpDatabaseLock);
      if ( v7 )
        *((_BYTE *)v7 + 10) = 1;
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
