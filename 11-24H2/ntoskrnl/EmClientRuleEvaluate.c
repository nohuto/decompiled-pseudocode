/*
 * XREFs of EmClientRuleEvaluate @ 0x140B68400
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1404BD99C (PopPepInitializeVetoMasks.c)
 *     PoRegisterPowerSettingCallback @ 0x140A6B150 (PoRegisterPowerSettingCallback.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140C32FBC (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EmpEvaluateTargetRule @ 0x14043D590 (EmpEvaluateTargetRule.c)
 *     EmpSearchTargetRuleList @ 0x14044FA4C (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x14045273C (EmpSearchRuleDatabase.c)
 *     EmpAcquirePagingReference @ 0x140B68538 (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x140B685E4 (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientRuleEvaluate(_QWORD *a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  _QWORD *v9; // rax
  signed __int8 v10; // cf
  _QWORD *v11; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx

  v4 = 0;
  if ( a1 && a2 && a4 && a3 )
  {
    *a4 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      v9 = KeAbPreAcquire((__int64)&EmpDatabaseLock, 0LL);
      v10 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
      v11 = v9;
      if ( v10 )
        ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, (__int64)v9, (__int64)&EmpDatabaseLock);
      if ( v11 )
        *((_BYTE *)v11 + 10) = 1;
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
