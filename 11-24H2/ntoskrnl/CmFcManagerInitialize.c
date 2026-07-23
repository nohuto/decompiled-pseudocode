/*
 * XREFs of CmFcManagerInitialize @ 0x140C4EFE8
 * Callers:
 *     CmFcInitSystem0 @ 0x140C4C294 (CmFcInitSystem0.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlInitializeSwapReference @ 0x14078D874 (RtlInitializeSwapReference.c)
 *     CmpWorkItemInitialize @ 0x1407D5FF0 (CmpWorkItemInitialize.c)
 *     CmSiRWLockInitialize @ 0x140AB8200 (CmSiRWLockInitialize.c)
 *     CmFcpInitializeSectionState @ 0x140ABAE2C (CmFcpInitializeSectionState.c)
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

  memset_0(CmFcSystemManager, 0, 0x750uLL);
  CmSiRWLockInitialize(&stru_140EF7148);
  CmSiRWLockInitialize(&stru_140EF7150);
  v0 = &unk_140EF7168;
  do
  {
    CmFcpInitializeSectionState((__int64)v0);
    v0 = (void *)(v1 + 24);
  }
  while ( v2 != 1 );
  memset_0(qword_140EF71C8, 0, 0xE8uLL);
  RtlInitializeSwapReference(qword_140EF71C8);
  memset_0(&unk_140EF71E0, 0, 0x60uLL);
  memset_0(&unk_140EF7240, 0, 0x60uLL);
  RtlInitializeSwapReference(qword_140EF72B8);
  CmSiRWLockInitialize(&stru_140EF72D0);
  Dpc.TargetInfoAsUlong = 275;
  Dpc.DpcData = 0LL;
  Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)CmFcpManagerDrainUsageNotificationsDpc;
  Dpc.ProcessorHistory = 0LL;
  Dpc.DeferredContext = CmFcSystemManager;
  CmpWorkItemInitialize(
    (__int64)&stru_140EF7330,
    4,
    (__int64)CmFcpManagerDrainUsageNotificationsWorker,
    (__int64)CmFcSystemManager);
  CmpWorkItemInitialize((__int64)&unk_140EF7378, v3, (__int64)CmFcpManagerRetryUsageNotificationsWorker, v4);
  CmSiRWLockInitialize(&stru_140EF73B8);
  qword_140EF73C8 = (__int64)&qword_140EF73C0;
  qword_140EF73C0 = (__int64)&qword_140EF73C0;
  qword_140EF76D0 = (__int64)&qword_140EF76C8;
  qword_140EF76C8 = (__int64)&qword_140EF76C8;
  CmSiRWLockInitialize(&stru_140EF7508);
  stru_140EF7708.TargetInfoAsUlong = 275;
  stru_140EF7708.DeferredRoutine = (PKDEFERRED_ROUTINE)CmFcpManagerArmFeatureUsageProviderFlushTimerDpc;
  stru_140EF7708.DeferredContext = CmFcSystemManager;
  stru_140EF7748.DeferredRoutine = (PKDEFERRED_ROUTINE)CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc;
  stru_140EF7708.DpcData = v5;
  stru_140EF7708.ProcessorHistory = (KAFFINITY)v5;
  stru_140EF7748.TargetInfoAsUlong = 275;
  stru_140EF7748.DeferredContext = CmFcSystemManager;
  stru_140EF7748.DpcData = v5;
  stru_140EF7748.ProcessorHistory = (KAFFINITY)v5;
  RtlInitializeSwapReference(qword_140EF74F0);
  xmmword_140EF76E8 = 0LL;
  CmSiRWLockInitialize(&stru_140EF7700);
  CmpWorkItemInitialize((__int64)&stru_140EF7798, v6, (__int64)CmFcpManagerFlushFeatureUsageDataWorker, v7);
  CmpWorkItemInitialize((__int64)&unk_140EF77D8, v8, (__int64)CmFcpManagerPublishFeatureUsageDataBuffersWorker, v9);
  CmpWorkItemInitialize(
    (__int64)&stru_140EF7818,
    v10,
    (__int64)CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker,
    v11);
  result = &qword_140EF7870;
  qword_140EF7878 = (__int64)&qword_140EF7870;
  qword_140EF7870 = (__int64)&qword_140EF7870;
  qword_140EF76E0 = (__int64)&qword_140EF76D8;
  qword_140EF76D8 = (__int64)&qword_140EF76D8;
  qword_140EF76F8 = v13;
  word_140EF7868 = v13;
  byte_140EF786A = 6;
  dword_140EF786C = v13;
  return result;
}
