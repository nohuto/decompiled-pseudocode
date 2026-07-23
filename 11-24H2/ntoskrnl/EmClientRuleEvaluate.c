/*
 * XREFs of EmClientRuleEvaluate @ 0x140B6A540
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1404B8B0C (PopPepInitializeVetoMasks.c)
 *     PoRegisterPowerSettingCallback @ 0x140A646B0 (PoRegisterPowerSettingCallback.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140C350FC (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EmpEvaluateTargetRule @ 0x140431830 (EmpEvaluateTargetRule.c)
 *     EmpSearchTargetRuleList @ 0x140445014 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1404477EC (EmpSearchRuleDatabase.c)
 *     EmpAcquirePagingReference @ 0x140B6A678 (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x140B6A724 (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientRuleEvaluate(_QWORD *a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  char *v9; // rax
  signed __int8 v10; // cf
  char *v11; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx

  v4 = 0;
  if ( a1 && a2 && a4 && a3 )
  {
    *a4 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      v9 = (char *)KeAbPreAcquire((__int64)&EmpDatabaseLock, 0LL);
      v10 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
      v11 = v9;
      if ( v10 )
        ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v9, (__int64)&EmpDatabaseLock);
      if ( v11 )
        v11[10] = 1;
      v12 = EmpSearchRuleDatabase(a1);
      if ( v12 && (v13 = EmpSearchTargetRuleList((__int64)v12)) != 0LL )
      {
        if ( a3 == *(_DWORD *)(v14 + 48) )
          *a4 = EmpEvaluateTargetRule((__int64)v13, a2, a3);
        else
          v4 = -1073741811;
      }
      else
      {
        v4 = -1073741275;
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
  return v4;
}
