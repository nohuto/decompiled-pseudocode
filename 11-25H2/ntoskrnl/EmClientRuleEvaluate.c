/*
 * XREFs of EmClientRuleEvaluate @ 0x140B585D0
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1404BF148 (PopPepInitializeVetoMasks.c)
 *     PoRegisterPowerSettingCallback @ 0x140A686B0 (PoRegisterPowerSettingCallback.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140C21EC4 (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EmpEvaluateTargetRule @ 0x14043D2E8 (EmpEvaluateTargetRule.c)
 *     EmpSearchTargetRuleList @ 0x14044EAB8 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1404507DC (EmpSearchRuleDatabase.c)
 *     EmpAcquirePagingReference @ 0x140B58708 (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x140B587B4 (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientRuleEvaluate(_QWORD *a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  __int64 *v9; // rax
  signed __int8 v10; // cf
  __int64 *v11; // rdi
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
        ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v9, (__int64)&EmpDatabaseLock);
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
