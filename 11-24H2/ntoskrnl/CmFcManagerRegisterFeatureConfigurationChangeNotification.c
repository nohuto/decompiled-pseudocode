/*
 * XREFs of CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140A9CFDC
 * Callers:
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x1406F8CF8 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     CmpWorkItemQueueWork @ 0x14021E9B0 (CmpWorkItemQueueWork.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PfpPartitionToParent @ 0x1404B7BB0 (PfpPartitionToParent.c)
 *     CmFcpManagerAllocateChangeSubscription @ 0x140A9D0F8 (CmFcpManagerAllocateChangeSubscription.c)
 */

__int64 __fastcall CmFcManagerRegisterFeatureConfigurationChangeNotification(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5)
{
  unsigned int v6; // esi
  __int64 v7; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char *v9; // rax
  signed __int8 v10; // cf
  char *v11; // rbp
  __int64 *v12; // rax

  v6 = 0;
  v7 = CmFcpManagerAllocateChangeSubscription();
  if ( v7 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (char *)KeAbPreAcquire((__int64)&stru_140EF73B8, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF73B8, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EF73B8, v9, (__int64)&stru_140EF73B8);
    if ( v11 )
      v11[10] = 1;
    v12 = (__int64 *)qword_140EF73C8;
    if ( *(__int64 **)qword_140EF73C8 != &qword_140EF73C0 )
      __fastfail(3u);
    *(_QWORD *)v7 = &qword_140EF73C0;
    *(_QWORD *)(v7 + 8) = v12;
    *v12 = v7;
    qword_140EF73C8 = v7;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF73B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF73B8);
    KeAbPostRelease((ULONG_PTR)&stru_140EF73B8);
    KeLeaveCriticalRegion();
    if ( a4 && PfpPartitionToParent((__int64)&qword_140EF7158) != *a4 )
      CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(v7 + 16));
    *a5 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
