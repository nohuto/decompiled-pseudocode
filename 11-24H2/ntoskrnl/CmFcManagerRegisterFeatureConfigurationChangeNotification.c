/*
 * XREFs of CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140AA1C4C
 * Callers:
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x1406FB0B8 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CmpWorkItemQueueWork @ 0x1403A68B0 (CmpWorkItemQueueWork.c)
 *     PfpPartitionToParent @ 0x1404BCA40 (PfpPartitionToParent.c)
 *     CmFcpManagerAllocateChangeSubscription @ 0x140AA1D68 (CmFcpManagerAllocateChangeSubscription.c)
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
  _QWORD *v9; // rax
  signed __int8 v10; // cf
  _QWORD *v11; // rbp
  __int64 *v12; // rax

  v6 = 0;
  v7 = CmFcpManagerAllocateChangeSubscription();
  if ( v7 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = KeAbPreAcquire((__int64)&stru_140EF7178, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF7178, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&stru_140EF7178, (__int64)v9, (__int64)&stru_140EF7178);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    v12 = (__int64 *)qword_140EF7188;
    if ( *(__int64 **)qword_140EF7188 != &qword_140EF7180 )
      __fastfail(3u);
    *(_QWORD *)v7 = &qword_140EF7180;
    *(_QWORD *)(v7 + 8) = v12;
    *v12 = v7;
    qword_140EF7188 = v7;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF7178, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF7178);
    KeAbPostRelease((ULONG_PTR)&stru_140EF7178);
    KeLeaveCriticalRegion();
    if ( a4 && PfpPartitionToParent((__int64)&qword_140EF6F18) != *a4 )
      CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(v7 + 16));
    *a5 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
