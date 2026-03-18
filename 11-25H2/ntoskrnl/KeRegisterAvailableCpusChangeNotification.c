/*
 * XREFs of KeRegisterAvailableCpusChangeNotification @ 0x14072F8A0
 * Callers:
 *     PsRegisterProcessAvailableCpusChangeNotification @ 0x140764BA0 (PsRegisterProcessAvailableCpusChangeNotification.c)
 *     PsRegisterSystemAvailableCpusChangeNotification @ 0x140764BC0 (PsRegisterSystemAvailableCpusChangeNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KiUpdateProcessAvailableCpuState @ 0x140267998 (KiUpdateProcessAvailableCpuState.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KiInitializeAvailableCpusWorkItem @ 0x1404D2EE4 (KiInitializeAvailableCpusWorkItem.c)
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404F8BEC (KiAvailableCpusSubscriptionQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall KeRegisterAvailableCpusChangeNotification(
        __int64 **Object,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5)
{
  __int64 Pool2; // rax
  unsigned int v10; // edi
  __int64 v11; // r14
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v13; // rbp
  __int64 *v14; // rax
  __int64 *v15; // r15
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 **v18; // rdx
  __int64 *v19; // rbp
  __int64 *v20; // rax
  signed __int8 v21; // cf
  __int64 *v22; // rbp
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rax
  signed __int32 v27[18]; // [rsp+0h] [rbp-48h] BYREF

  Pool2 = ExAllocatePool2(0x40uLL);
  v10 = 0;
  v11 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  KiInitializeAvailableCpusWorkItem((_QWORD *)(Pool2 + 40), a2, a3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Object )
  {
    ObfReferenceObjectWithTag(Object, 0x7641694Bu);
    v13 = (unsigned __int64 *)(Object[56] + 4);
    v14 = KeAbPreAcquire((__int64)v13, 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
      ExfAcquirePushLockExclusiveEx(v13, v14, (__int64)v13);
    if ( v15 )
      *((_BYTE *)v15 + 10) = 1;
    *(_QWORD *)v11 = Object;
    v16 = (__int64 *)(v11 + 8);
    v17 = (__int64)(Object[56] + 5);
    v18 = (__int64 **)Object[56][6];
    if ( *v18 != (__int64 *)v17 )
LABEL_17:
      __fastfail(3u);
    *v16 = v17;
    *(_QWORD *)(v11 + 16) = v18;
    *v18 = v16;
    *(_QWORD *)(v17 + 8) = v16;
    v19 = Object[56];
    if ( (_InterlockedExchangeAdd64(v19 + 4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v19 + 4);
    KeAbPostRelease((ULONG_PTR)(v19 + 4));
  }
  v20 = KeAbPreAcquire((__int64)&KiAvailableCpusSubscriptionLock, 0LL);
  v21 = _interlockedbittestandset64((volatile signed __int32 *)&KiAvailableCpusSubscriptionLock, 0LL);
  v22 = v20;
  if ( v21 )
    ExfAcquirePushLockExclusiveEx(&KiAvailableCpusSubscriptionLock, v20, (__int64)&KiAvailableCpusSubscriptionLock);
  if ( v22 )
    *((_BYTE *)v22 + 10) = 1;
  v23 = (_QWORD *)qword_140F21E18;
  v24 = (_QWORD *)(v11 + 24);
  if ( *(__int64 **)qword_140F21E18 != &KiAvailableCpusSubscriptionList )
    goto LABEL_17;
  *v24 = &KiAvailableCpusSubscriptionList;
  *(_QWORD *)(v11 + 32) = v23;
  *v23 = v24;
  qword_140F21E18 = v11 + 24;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiAvailableCpusSubscriptionLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiAvailableCpusSubscriptionLock);
  KeAbPostRelease((ULONG_PTR)&KiAvailableCpusSubscriptionLock);
  KeLeaveCriticalRegion();
  if ( a4 )
  {
    _InterlockedOr(v27, 0);
    if ( Object )
    {
      if ( Object[56][1] != KiCpuSetSequence || Object[56][2] != KiForceParkingSequence )
        KiUpdateProcessAvailableCpuState((__int64)Object, 0);
      v25 = *Object[56];
    }
    else
    {
      v25 = KiSystemAvailableCpusSequence;
    }
    if ( *a4 != v25 )
      KiAvailableCpusSubscriptionQueueWorkItem((PWORK_QUEUE_ITEM)(v11 + 40));
  }
  *a5 = v11;
  return v10;
}
