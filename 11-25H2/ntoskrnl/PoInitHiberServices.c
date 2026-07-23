/*
 * XREFs of PoInitHiberServices @ 0x14073CB14
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407BF9FC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ExIsSoftBoot @ 0x1404F7080 (ExIsSoftBoot.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopInitializeHibernateGlobals @ 0x14074684C (PopInitializeHibernateGlobals.c)
 *     PopSubscribeHibernatePolicyWnf @ 0x140746D3C (PopSubscribeHibernatePolicyWnf.c)
 *     PopTraceHibernatePolicyUpdate @ 0x14074C628 (PopTraceHibernatePolicyUpdate.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x14075270C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopBcdEstablishResumeObject @ 0x1407538EC (PopBcdEstablishResumeObject.c)
 *     BcdOpenStore @ 0x140A24A98 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x140A24B8C (BcdCloseStore.c)
 *     PopBcdClearPendingResume @ 0x140A26F08 (PopBcdClearPendingResume.c)
 *     PopAcquireTransitionLock @ 0x140A8DB1C (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140AA0354 (PopReleaseTransitionLock.c)
 *     PopHibernateEvaluation @ 0x140AAE8C4 (PopHibernateEvaluation.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
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
  __int64 v9; // rcx
  __int64 result; // rax
  char v11; // [rsp+30h] [rbp+8h] BYREF
  HANDLE BcdStoreHandle; // [rsp+38h] [rbp+10h] BYREF

  BcdStoreHandle = 0LL;
  v11 = 0;
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
  PopHibernateEvaluation(v5, v4, &v11);
  PopReleasePolicyLock();
  PopReleaseTransitionLock(2LL);
  LOBYTE(v6) = v11;
  PopTraceHibernatePolicyUpdate(v3, v6);
  if ( !ExIsSoftBoot()
    && (v11 || !PopHiberBootOptimizationEnabledReg)
    && BcdOpenStore(v7, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &BcdStoreHandle) >= 0 )
  {
    v8 = BcdStoreHandle;
    PopBcdEstablishResumeObject(BcdStoreHandle);
    PopBcdClearPendingResume(v8);
    BcdCloseStore(v8);
  }
  PopSubscribeHibernatePolicyWnf();
  PopAdaptiveClearInitialSystemPowerState();
  result = qword_140E67218;
  if ( qword_140E67218 )
    return guard_dispatch_icall_no_overrides(v9);
  return result;
}
