/*
 * XREFs of CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140A9C35C
 * Callers:
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x1406EF278 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     CmpWorkItemQueueWork @ 0x1403B8E30 (CmpWorkItemQueueWork.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PfpPartitionToParent @ 0x1404BDA40 (PfpPartitionToParent.c)
 *     CmFcpManagerAllocateChangeSubscription @ 0x140A9C478 (CmFcpManagerAllocateChangeSubscription.c)
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
  __int64 *v9; // rax
  signed __int8 v10; // cf
  __int64 *v11; // rbp
  __int64 *v12; // rax

  v6 = 0;
  v7 = CmFcpManagerAllocateChangeSubscription();
  if ( v7 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = KeAbPreAcquire((__int64)&stru_140EF6DD8, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF6DD8, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EF6DD8, v9, (__int64)&stru_140EF6DD8);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    v12 = (__int64 *)qword_140EF6DE8;
    if ( *(__int64 **)qword_140EF6DE8 != &qword_140EF6DE0 )
      __fastfail(3u);
    *(_QWORD *)v7 = &qword_140EF6DE0;
    *(_QWORD *)(v7 + 8) = v12;
    *v12 = v7;
    qword_140EF6DE8 = v7;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF6DD8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF6DD8);
    KeAbPostRelease((ULONG_PTR)&stru_140EF6DD8);
    KeLeaveCriticalRegion();
    if ( a4 && PfpPartitionToParent((__int64)&qword_140EF6B78) != *a4 )
      CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(v7 + 16));
    *a5 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
