/*
 * XREFs of MiInsertPageFileInList @ 0x1407DF450
 * Callers:
 *     MiCreatePagingFile @ 0x1407DE4C4 (MiCreatePagingFile.c)
 *     MmStoreRegister @ 0x1407ED518 (MmStoreRegister.c)
 *     MiCreateSpecialPurposeMemoryPageFile @ 0x1407EE284 (MiCreateSpecialPurposeMemoryPageFile.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     MiUpdateReserveClusterInfo @ 0x14045CBA0 (MiUpdateReserveClusterInfo.c)
 *     MiNumberWsSwapPagefiles @ 0x14047785C (MiNumberWsSwapPagefiles.c)
 *     MiMakePartitionActive @ 0x14048C0A0 (MiMakePartitionActive.c)
 *     MiUpdatePageFileList @ 0x14066E9BC (MiUpdatePageFileList.c)
 *     MiIncreaseCommitLimits @ 0x14067A97C (MiIncreaseCommitLimits.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x140A17780 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiInsertPageFileInList(unsigned int *a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r8
  _QWORD *v4; // rdx
  __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int64 *v7; // rdi
  __int64 *v8; // rax
  __int64 *v9; // rbx
  bool v10; // zf
  __int64 result; // rax
  __int64 *v12; // rax
  unsigned int v13; // ecx
  int v14; // r8d
  __int16 v15; // dx
  char v16; // r11
  unsigned int v17; // eax
  __int64 *v18; // r9
  __int64 v19; // r10
  __int64 v20; // rax
  unsigned __int8 v21; // cf
  int v22; // eax
  __int16 v23; // ax
  KPRIORITY v24; // edx
  BOOLEAN v25; // r8
  unsigned __int64 v26; // [rsp+50h] [rbp-30h]
  _QWORD Event[5]; // [rsp+58h] [rbp-28h] BYREF
  int PartitionActive; // [rsp+C0h] [rbp+40h]
  __int64 *v29; // [rsp+C0h] [rbp+40h]
  unsigned int v30; // [rsp+C0h] [rbp+40h]
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF
  PVOID Object; // [rsp+D0h] [rbp+50h] BYREF
  unsigned __int64 v33; // [rsp+D8h] [rbp+58h]

  v1 = *a1;
  Handle = 0LL;
  *((_BYTE *)a1 + 174) |= 1u;
  v2 = 0LL;
  v26 = v1;
  v33 = a1[1];
  memset(Event, 0, 32);
  if ( a1[10] )
  {
    do
    {
      v4 = *(_QWORD **)(*((_QWORD *)a1 + 4) + 8 * v2);
      v2 = (unsigned int)(v2 + 1);
      *v4 = 2575857425LL;
    }
    while ( (unsigned int)v2 < a1[10] );
  }
  v5 = *((_QWORD *)a1 + 27);
  CurrentThread = KeGetCurrentThread();
  v7 = (volatile signed __int64 *)(v5 + 1088);
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(v5 + 1088, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 1088), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 1088), v8, v5 + 1088);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  if ( dword_140E2FE04 )
  {
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 1088));
    KeAbPostRelease(v5 + 1088);
    v10 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v10 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 3221225738LL;
  }
  if ( !*(_QWORD *)(v5 + 176) )
  {
    Object = 0LL;
    PartitionActive = MiMakePartitionActive(v5);
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 1088));
    KeAbPostRelease(v5 + 1088);
    v10 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v10 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( !PartitionActive )
      return 3221225773LL;
    Event[0] = v5;
    memset(&Event[1], 0, 24);
    KeInitializeEvent((PRKEVENT)&Event[1], NotificationEvent, 0);
    result = PsCreateSystemThreadEx(
               &Handle,
               0x1FFFFFLL,
               0LL,
               *(_QWORD *)(*(_QWORD *)(v5 + 184) + 128LL),
               0LL,
               MiModifiedPageWriter,
               Event,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x66506D4Du, (__int64)&Object, 0LL, 0LL);
    KeWaitForSingleObject(&Event[1], WrKernel, 0, 0, 0LL);
    --CurrentThread->SpecialApcDisable;
    v12 = KeAbPreAcquire(v5 + 1088, 0LL);
    v29 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 1088), v12, v5 + 1088);
      v12 = v29;
    }
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
    if ( *(PVOID *)(v5 + 992) == Object )
      *(_QWORD *)(v5 + 176) = Handle;
    else
      ObCloseHandle(Handle, 0);
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  }
  v13 = *(_DWORD *)(v5 + 18520);
  v30 = v13;
  if ( v13 >= 0x10 )
  {
LABEL_52:
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 1088));
    KeAbPostRelease(v5 + 1088);
    v10 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v10 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 3221225623LL;
  }
  v14 = 0;
  v15 = *((_WORD *)a1 + 86) ^ ((unsigned __int8)*((_WORD *)a1 + 86) ^ (unsigned __int8)v13) & 0xF;
  v16 = 1;
  *((_WORD *)a1 + 86) = v15;
  v17 = *(_DWORD *)(v5 + 18520);
  if ( !v17 )
    goto LABEL_40;
  v18 = (__int64 *)(v5 + 18528);
  v19 = v17;
  do
  {
    v20 = *v18++;
    v21 = _bittest16((const signed __int16 *)(v20 + 172), 0xBu);
    v22 = v14 + 1;
    if ( !v21 )
      v22 = v14;
    v14 = v22;
    --v19;
  }
  while ( v19 );
  if ( !v22 )
  {
LABEL_40:
    v23 = *((_WORD *)a1 + 86);
    if ( (v23 & 0x50) == 0 )
    {
      MiIncreaseCommitLimits(v5, v26, v33, 0LL, 0, (__int64)a1);
      if ( (a1[43] & 0x20) == 0 && !*(_DWORD *)(v5 + 1084) )
        *(_DWORD *)(v5 + 1084) = 1;
      goto LABEL_59;
    }
    if ( (v23 & 0x10) == 0 || !(unsigned int)MiNumberWsSwapPagefiles(v5) )
    {
      MiUpdatePageFileList((__int64)a1, v16);
      *(_QWORD *)(v5 + 8LL * v30 + 18528) = a1;
      *(_DWORD *)(v5 + 18520) = v30 + 1;
LABEL_59:
      if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 1088));
      KeAbPostRelease(v5 + 1088);
      v10 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v10
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      MiUpdateReserveClusterInfo(v5, 0LL, 0);
      KeSetEvent((PRKEVENT)(v5 + 928), v24, v25);
      return 0LL;
    }
    goto LABEL_52;
  }
  if ( (v15 & 0x810) == 0 )
  {
    *((_WORD *)a1 + 86) = v15 | 0x20;
    goto LABEL_40;
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 1088));
  KeAbPostRelease(v5 + 1088);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return 3221225659LL;
}
