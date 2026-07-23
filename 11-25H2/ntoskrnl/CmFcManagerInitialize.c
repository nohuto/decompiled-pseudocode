/*
 * XREFs of CmFcManagerInitialize @ 0x140C3BB50
 * Callers:
 *     CmFcInitSystem0 @ 0x140C38E74 (CmFcInitSystem0.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlInitializeSwapReference @ 0x14077E690 (RtlInitializeSwapReference.c)
 *     CmpWorkItemInitialize @ 0x1407C63B0 (CmpWorkItemInitialize.c)
 *     CmSiRWLockInitialize @ 0x140ABABF0 (CmSiRWLockInitialize.c)
 *     CmFcpInitializeSectionState @ 0x140ABB91C (CmFcpInitializeSectionState.c)
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
  CmSiRWLockInitialize(&stru_140EF6B68);
  CmSiRWLockInitialize(&stru_140EF6B70);
  v0 = &unk_140EF6B88;
  do
  {
    CmFcpInitializeSectionState((__int64)v0);
    v0 = (void *)(v1 + 24);
  }
  while ( v2 != 1 );
  memset_0(qword_140EF6BE8, 0, 0xE8uLL);
  RtlInitializeSwapReference(qword_140EF6BE8);
  memset_0(&unk_140EF6C00, 0, 0x60uLL);
  memset_0(&unk_140EF6C60, 0, 0x60uLL);
  RtlInitializeSwapReference(qword_140EF6CD8);
  CmSiRWLockInitialize(&stru_140EF6CF0);
  stru_140EF6D10.TargetInfoAsUlong = 275;
  stru_140EF6D10.DpcData = 0LL;
  stru_140EF6D10.DeferredRoutine = (PKDEFERRED_ROUTINE)CmFcpManagerDrainUsageNotificationsDpc;
  stru_140EF6D10.ProcessorHistory = 0LL;
  stru_140EF6D10.DeferredContext = CmFcSystemManager;
  CmpWorkItemInitialize(
    (__int64)&stru_140EF6D50,
    4,
    (__int64)CmFcpManagerDrainUsageNotificationsWorker,
    (__int64)CmFcSystemManager);
  CmpWorkItemInitialize((__int64)&unk_140EF6D98, v3, (__int64)CmFcpManagerRetryUsageNotificationsWorker, v4);
  CmSiRWLockInitialize(&stru_140EF6DD8);
  qword_140EF6DE8 = (__int64)&qword_140EF6DE0;
  qword_140EF6DE0 = (__int64)&qword_140EF6DE0;
  qword_140EF70A8 = (__int64)&qword_140EF70A0;
  qword_140EF70A0 = (__int64)&qword_140EF70A0;
  CmSiRWLockInitialize(&stru_140EF6F28);
  stru_140EF70E0.TargetInfoAsUlong = 275;
  stru_140EF70E0.DeferredRoutine = (PKDEFERRED_ROUTINE)CmFcpManagerArmFeatureUsageProviderFlushTimerDpc;
  stru_140EF70E0.DeferredContext = CmFcSystemManager;
  stru_140EF7120.DeferredRoutine = (PKDEFERRED_ROUTINE)CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc;
  stru_140EF70E0.DpcData = v5;
  stru_140EF70E0.ProcessorHistory = (KAFFINITY)v5;
  stru_140EF7120.TargetInfoAsUlong = 275;
  stru_140EF7120.DeferredContext = CmFcSystemManager;
  stru_140EF7120.DpcData = v5;
  stru_140EF7120.ProcessorHistory = (KAFFINITY)v5;
  RtlInitializeSwapReference(qword_140EF6F10);
  xmmword_140EF70C0 = 0LL;
  CmSiRWLockInitialize(&stru_140EF70D8);
  CmpWorkItemInitialize((__int64)&stru_140EF7170, v6, (__int64)CmFcpManagerFlushFeatureUsageDataWorker, v7);
  CmpWorkItemInitialize((__int64)&unk_140EF71B0, v8, (__int64)CmFcpManagerPublishFeatureUsageDataBuffersWorker, v9);
  CmpWorkItemInitialize(
    (__int64)&stru_140EF71F0,
    v10,
    (__int64)CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker,
    v11);
  result = &qword_140EF7248;
  qword_140EF7250 = (__int64)&qword_140EF7248;
  qword_140EF7248 = (__int64)&qword_140EF7248;
  qword_140EF70B8 = (__int64)&qword_140EF70B0;
  qword_140EF70B0 = (__int64)&qword_140EF70B0;
  qword_140EF70D0 = v13;
  word_140EF7240 = v13;
  byte_140EF7242 = 6;
  dword_140EF7244 = v13;
  return result;
}
