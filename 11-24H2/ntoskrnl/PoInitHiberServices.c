/*
 * XREFs of PoInitHiberServices @ 0x140746E14
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407CF6FC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ExIsSoftBoot @ 0x1404F7160 (ExIsSoftBoot.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopInitializeHibernateGlobals @ 0x140750C3C (PopInitializeHibernateGlobals.c)
 *     PopSubscribeHibernatePolicyWnf @ 0x140751140 (PopSubscribeHibernatePolicyWnf.c)
 *     PopTraceHibernatePolicyUpdate @ 0x140756B68 (PopTraceHibernatePolicyUpdate.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x14075E0CC (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopBcdEstablishResumeObject @ 0x140762D7C (PopBcdEstablishResumeObject.c)
 *     PopBcdClearPendingResume @ 0x1409A6B48 (PopBcdClearPendingResume.c)
 *     BcdOpenStore @ 0x1409A8688 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x140A81A08 (BcdCloseStore.c)
 *     PopAcquireTransitionLock @ 0x140A8F05C (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140AA0760 (PopReleaseTransitionLock.c)
 *     PopHibernateEvaluation @ 0x140AAE820 (PopHibernateEvaluation.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
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
  UNICODE_STRING *v7; // rcx
  HANDLE v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF
  HANDLE BcdStoreHandle; // [rsp+38h] [rbp+10h] BYREF

  BcdStoreHandle = 0LL;
  v12 = 0;
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
  PopHibernateEvaluation(v5, v4, &v12);
  PopReleasePolicyLock();
  PopReleaseTransitionLock(2LL);
  LOBYTE(v6) = v12;
  PopTraceHibernatePolicyUpdate(v3, v6);
  if ( !ExIsSoftBoot()
    && (v12 || !PopHiberBootOptimizationEnabledReg)
    && BcdOpenStore(v7, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &BcdStoreHandle) >= 0 )
  {
    v8 = BcdStoreHandle;
    PopBcdEstablishResumeObject(BcdStoreHandle);
    PopBcdClearPendingResume(v8);
    BcdCloseStore(v8);
  }
  PopSubscribeHibernatePolicyWnf();
  PopAdaptiveClearInitialSystemPowerState();
  result = qword_140E67668;
  if ( qword_140E67668 )
    return guard_dispatch_icall_no_overrides(v10, v9);
  return result;
}
