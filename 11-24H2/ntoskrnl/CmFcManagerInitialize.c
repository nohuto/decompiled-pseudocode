/*
 * XREFs of CmFcManagerInitialize @ 0x140C4CE4C
 * Callers:
 *     CmFcInitSystem0 @ 0x140C4A170 (CmFcInitSystem0.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlInitializeSwapReference @ 0x14078D944 (RtlInitializeSwapReference.c)
 *     CmpWorkItemInitialize @ 0x1407D5B00 (CmpWorkItemInitialize.c)
 *     CmSiRWLockInitialize @ 0x140ABD190 (CmSiRWLockInitialize.c)
 *     CmFcpInitializeSectionState @ 0x140ABFD4C (CmFcpInitializeSectionState.c)
 */

__int64 *CmFcManagerInitialize()
{
  void *v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rdx
  int v3; // edx
  __int64 v4; // r9
  void *v5; // r11
  int v6; // edx
  __int64 v7; // r9
  int v8; // edx
  __int64 v9; // r9
  int v10; // edx
  __int64 v11; // r9
  __int64 *result; // rax
  __int64 v13; // r11

  memset_0(CmFcSystemManager, 0, 0x708uLL);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&stru_140EF6F08);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&stru_140EF6F10);
  v0 = &unk_140EF6F28;
  do
  {
    CmFcpInitializeSectionState((__int64)v0);
    v0 = (void *)(v1 + 24);
  }
  while ( v2 != 1 );
  memset_0(qword_140EF6F88, 0, 0xE8uLL);
  RtlInitializeSwapReference(qword_140EF6F88);
  memset_0(&unk_140EF6FA0, 0, 0x60uLL);
  memset_0(&unk_140EF7000, 0, 0x60uLL);
  RtlInitializeSwapReference(qword_140EF7078);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&stru_140EF7090);
  stru_140EF70B0.TargetInfoAsUlong = 275;
  stru_140EF70B0.DpcData = 0LL;
  stru_140EF70B0.DeferredRoutine = (PKDEFERRED_ROUTINE)CmFcpManagerDrainUsageNotificationsDpc;
  stru_140EF70B0.ProcessorHistory = 0LL;
  stru_140EF70B0.DeferredContext = CmFcSystemManager;
  CmpWorkItemInitialize(
    (__int64)&stru_140EF70F0,
    4,
    (__int64)CmFcpManagerDrainUsageNotificationsWorker,
    (__int64)CmFcSystemManager);
  CmpWorkItemInitialize((__int64)&unk_140EF7138, v3, (__int64)CmFcpManagerRetryUsageNotificationsWorker, v4);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&stru_140EF7178);
  qword_140EF7188 = (__int64)&qword_140EF7180;
  qword_140EF7180 = (__int64)&qword_140EF7180;
  qword_140EF7448 = (__int64)&qword_140EF7440;
  qword_140EF7440 = (__int64)&qword_140EF7440;
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&stru_140EF72C8);
  stru_140EF7480.TargetInfoAsUlong = 275;
  stru_140EF7480.DeferredRoutine = (PKDEFERRED_ROUTINE)CmFcpManagerArmFeatureUsageProviderFlushTimerDpc;
  stru_140EF7480.DeferredContext = CmFcSystemManager;
  stru_140EF74C0.DeferredRoutine = (PKDEFERRED_ROUTINE)CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc;
  stru_140EF7480.DpcData = v5;
  stru_140EF7480.ProcessorHistory = (KAFFINITY)v5;
  stru_140EF74C0.TargetInfoAsUlong = 275;
  stru_140EF74C0.DeferredContext = CmFcSystemManager;
  stru_140EF74C0.DpcData = v5;
  stru_140EF74C0.ProcessorHistory = (KAFFINITY)v5;
  RtlInitializeSwapReference(qword_140EF72B0);
  xmmword_140EF7460 = 0LL;
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&stru_140EF7478);
  CmpWorkItemInitialize((__int64)&stru_140EF7510, v6, (__int64)CmFcpManagerFlushFeatureUsageDataWorker, v7);
  CmpWorkItemInitialize((__int64)&unk_140EF7550, v8, (__int64)CmFcpManagerPublishFeatureUsageDataBuffersWorker, v9);
  CmpWorkItemInitialize(
    (__int64)&stru_140EF7590,
    v10,
    (__int64)CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker,
    v11);
  result = &qword_140EF75E8;
  qword_140EF75F0 = (__int64)&qword_140EF75E8;
  qword_140EF75E8 = (__int64)&qword_140EF75E8;
  qword_140EF7458 = (__int64)&qword_140EF7450;
  qword_140EF7450 = (__int64)&qword_140EF7450;
  qword_140EF7470 = v13;
  word_140EF75E0 = v13;
  byte_140EF75E2 = 6;
  dword_140EF75E4 = v13;
  return result;
}
