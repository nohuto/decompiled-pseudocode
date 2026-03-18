/*
 * XREFs of MiInsertPageFileInList @ 0x1407EF2F0
 * Callers:
 *     MiCreatePagingFile @ 0x1407EE364 (MiCreatePagingFile.c)
 *     MmStoreRegister @ 0x1407FD3A8 (MmStoreRegister.c)
 *     MiCreateSpecialPurposeMemoryPageFile @ 0x1407FE114 (MiCreateSpecialPurposeMemoryPageFile.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiNumberWsSwapPagefiles @ 0x1402D1B3C (MiNumberWsSwapPagefiles.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     MiUpdateReserveClusterInfo @ 0x14045C0E4 (MiUpdateReserveClusterInfo.c)
 *     MiMakePartitionActive @ 0x14048A21C (MiMakePartitionActive.c)
 *     MiUpdatePageFileList @ 0x14067A25C (MiUpdatePageFileList.c)
 *     MiIncreaseCommitLimits @ 0x14068620C (MiIncreaseCommitLimits.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x140A224A0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiInsertPageFileInList(unsigned int *a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r8
  _QWORD *v4; // rdx
  __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int64 *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  bool v11; // zf
  __int64 result; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rax
  unsigned int v15; // ecx
  int v16; // r8d
  __int16 v17; // dx
  char v18; // r11
  unsigned int v19; // eax
  __int64 *v20; // r9
  __int64 v21; // r10
  __int64 v22; // rax
  unsigned __int8 v23; // cf
  int v24; // eax
  __int16 v25; // ax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  KPRIORITY v30; // edx
  BOOLEAN v31; // r8
  unsigned __int64 v32; // [rsp+50h] [rbp-30h]
  _QWORD Event[5]; // [rsp+58h] [rbp-28h] BYREF
  int PartitionActive; // [rsp+C0h] [rbp+40h]
  _QWORD *v35; // [rsp+C0h] [rbp+40h]
  unsigned int v36; // [rsp+C0h] [rbp+40h]
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF
  PVOID Object; // [rsp+D0h] [rbp+50h] BYREF
  unsigned __int64 v39; // [rsp+D8h] [rbp+58h]

  v1 = *a1;
  Handle = 0LL;
  *((_BYTE *)a1 + 174) |= 1u;
  v2 = 0LL;
  v32 = v1;
  v39 = a1[1];
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
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 1088), (__int64)v8, v5 + 1088);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  if ( dword_140E30044 )
  {
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 1088));
    KeAbPostRelease(v5 + 1088);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(1LL, v10);
    return 3221225738LL;
  }
  if ( !*(_QWORD *)(v5 + 176) )
  {
    Object = 0LL;
    PartitionActive = MiMakePartitionActive(v5);
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 1088));
    KeAbPostRelease(v5 + 1088);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(1LL, v13);
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
    v14 = KeAbPreAcquire(v5 + 1088, 0LL);
    v35 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 1088), (__int64)v14, v5 + 1088);
      v14 = v35;
    }
    if ( v14 )
      *((_BYTE *)v14 + 10) = 1;
    if ( *(PVOID *)(v5 + 992) == Object )
      *(_QWORD *)(v5 + 176) = Handle;
    else
      ObCloseHandle(Handle, 0);
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  }
  v15 = *(_DWORD *)(v5 + 18520);
  v36 = v15;
  if ( v15 >= 0x10 )
  {
LABEL_52:
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 1088));
    KeAbPostRelease(v5 + 1088);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(1LL, v27);
    return 3221225623LL;
  }
  v16 = 0;
  v17 = *((_WORD *)a1 + 86) ^ ((unsigned __int8)*((_WORD *)a1 + 86) ^ (unsigned __int8)v15) & 0xF;
  v18 = 1;
  *((_WORD *)a1 + 86) = v17;
  v19 = *(_DWORD *)(v5 + 18520);
  if ( !v19 )
    goto LABEL_40;
  v20 = (__int64 *)(v5 + 18528);
  v21 = v19;
  do
  {
    v22 = *v20++;
    v23 = _bittest16((const signed __int16 *)(v22 + 172), 0xBu);
    v24 = v16 + 1;
    if ( !v23 )
      v24 = v16;
    v16 = v24;
    --v21;
  }
  while ( v21 );
  if ( !v24 )
  {
LABEL_40:
    v25 = *((_WORD *)a1 + 86);
    if ( (v25 & 0x50) == 0 )
    {
      MiIncreaseCommitLimits(v5, v32, v39, 0LL, 0, (__int64)a1);
      if ( (a1[43] & 0x20) == 0 && !*(_DWORD *)(v5 + 1084) )
        *(_DWORD *)(v5 + 1084) = 1;
      goto LABEL_59;
    }
    if ( (v25 & 0x10) == 0 || !(unsigned int)MiNumberWsSwapPagefiles(v5) )
    {
      MiUpdatePageFileList((__int64)a1, v18);
      *(_QWORD *)(v5 + 8LL * v36 + 18528) = a1;
      *(_DWORD *)(v5 + 18520) = v36 + 1;
LABEL_59:
      if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 1088));
      KeAbPostRelease(v5 + 1088);
      v11 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v11
        && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v29, v28);
      }
      MiUpdateReserveClusterInfo(v5, 0LL, 0);
      KeSetEvent((PRKEVENT)(v5 + 928), v30, v31);
      return 0LL;
    }
    goto LABEL_52;
  }
  if ( (v17 & 0x810) == 0 )
  {
    *((_WORD *)a1 + 86) = v17 | 0x20;
    goto LABEL_40;
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 1088));
  KeAbPostRelease(v5 + 1088);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(1LL, v26);
  return 3221225659LL;
}
