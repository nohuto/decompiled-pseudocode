/*
 * XREFs of PoInitHiberServices @ 0x140748B24
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407CF20C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ExIsSoftBoot @ 0x1404F9880 (ExIsSoftBoot.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopInitializeHibernateGlobals @ 0x14075291C (PopInitializeHibernateGlobals.c)
 *     PopSubscribeHibernatePolicyWnf @ 0x140752E20 (PopSubscribeHibernatePolicyWnf.c)
 *     PopTraceHibernatePolicyUpdate @ 0x1407586E8 (PopTraceHibernatePolicyUpdate.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x14075F12C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopBcdEstablishResumeObject @ 0x1407633AC (PopBcdEstablishResumeObject.c)
 *     BcdCloseStore @ 0x14085EED8 (BcdCloseStore.c)
 *     PopBcdClearPendingResume @ 0x1409C04F8 (PopBcdClearPendingResume.c)
 *     BcdOpenStore @ 0x1409C2038 (BcdOpenStore.c)
 *     PopAcquireTransitionLock @ 0x140A928AC (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140AA56F0 (PopReleaseTransitionLock.c)
 *     PopHibernateEvaluation @ 0x140AB38B0 (PopHibernateEvaluation.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 PoInitHiberServices()
{
  int v0; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  char v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = 0LL;
  v14 = 0;
  RtlInitUnicodeString(&PoHiberFileRoot, L"\\OSDataRoot");
  PopInitializeHibernateGlobals();
  v0 = PopHiberFileTypeReg;
  if ( PopHiberFileTypeReg != -1 || (v0 = PopHiberFileTypeDefaultReg, PopHiberFileTypeDefaultReg != -1) )
    PopHiberFileType = v0;
  PopAcquireTransitionLock(2LL);
  PopAcquirePolicyLock(v2, v1);
  v3 = PopAllowHibernateReg;
  LOBYTE(v4) = 1;
  LOBYTE(v5) = 1;
  PopHibernateEvaluation(v5, v4, &v14);
  PopReleasePolicyLock();
  PopReleaseTransitionLock(2LL);
  LOBYTE(v6) = v14;
  PopTraceHibernatePolicyUpdate(v3, v6);
  if ( !ExIsSoftBoot() && (v14 || !PopHiberBootOptimizationEnabledReg) && (int)BcdOpenStore(v7, 2LL, &v15) >= 0 )
  {
    v8 = v15;
    PopBcdEstablishResumeObject(v15, 0LL);
    PopBcdClearPendingResume(v8);
    BcdCloseStore(v8);
  }
  PopSubscribeHibernatePolicyWnf();
  PopAdaptiveClearInitialSystemPowerState();
  result = qword_140E674F8;
  if ( qword_140E674F8 )
    return guard_dispatch_icall_no_overrides(v10, v9, v11, v12);
  return result;
}
