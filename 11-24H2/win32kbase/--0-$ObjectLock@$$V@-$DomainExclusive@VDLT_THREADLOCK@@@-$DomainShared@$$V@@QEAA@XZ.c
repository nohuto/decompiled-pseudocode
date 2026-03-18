/*
 * XREFs of ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400477C0
 * Callers:
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x140045BD8 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     HMUnlockObjectInternal @ 0x140046060 (HMUnlockObjectInternal.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x140121A30 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x140043D80 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_THREADLOCK@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x1400480E4 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_THREADLOCK@@@-$DomainSharedB.c)
 */

__int64 __fastcall DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::ObjectLock<>(__int64 a1)
{
  __int64 v2; // rcx
  __int64 UserSessionState; // rax

  *(_QWORD *)a1 = GetDomainLockRef(12LL);
  *(_BYTE *)(a1 + 8) = 1;
  UserSessionState = W32GetUserSessionState(v2);
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = UserSessionState + 42424;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  DomainSharedBase<>::DomainExclusiveBase<DLT_THREADLOCK>::ObjectLockBase<>::vInitAndLock<>(a1);
  return a1;
}
