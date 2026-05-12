/*
 * XREFs of NvmeAdapterCreateFabricControllerQueue @ 0x1400E0A40
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400DFBF4 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterCreateConnectFabricControllerIoQueue @ 0x1400E05D4 (NvmeAdapterCreateConnectFabricControllerIoQueue.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaSrbSetMiniportContext @ 0x140010610 (RaSrbSetMiniportContext.c)
 *     RaidZeroXrb @ 0x140012070 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 *     RaidAllocateNvmeSrb @ 0x14007AEA0 (RaidAllocateNvmeSrb.c)
 *     NvmeAdapterAllocateContiguousIoResources @ 0x1400CCD48 (NvmeAdapterAllocateContiguousIoResources.c)
 *     NvmeAdapterExecuteXrb @ 0x1400CFAA4 (NvmeAdapterExecuteXrb.c)
 *     NvmeAdapterRaiseIrqlAndExecuteXrb @ 0x1400D63DC (NvmeAdapterRaiseIrqlAndExecuteXrb.c)
 *     McTemplateK0qjzshhdqsq_EtwWriteTransfer @ 0x1400DDDC8 (McTemplateK0qjzshhdqsq_EtwWriteTransfer.c)
 *     McTemplateK0qjzshhq_EtwWriteTransfer @ 0x1400DDF54 (McTemplateK0qjzshhq_EtwWriteTransfer.c)
 *     GetQueueCompletionAffinity @ 0x14012872C (GetQueueCompletionAffinity.c)
 */

__int64 __fastcall NvmeAdapterCreateFabricControllerQueue(__int64 a1)
{
  __int64 v2; // rsi
  void *v3; // r12
  LARGE_INTEGER v4; // rax
  __int64 v5; // r15
  LARGE_INTEGER v6; // rbx
  __int64 v7; // r14
  __int64 NvmeSrb; // rax
  __int64 v9; // rbp
  int v10; // edi
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 Pool; // rax
  __int64 v16; // rax
  __int64 ContiguousIoResources; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  bool v23; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rtt
  int v28; // r11d
  const char *v29; // r10
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rtt
  union _LARGE_INTEGER v34; // [rsp+B0h] [rbp+8h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+10h]

  v2 = 0LL;
  v34.QuadPart = 0LL;
  v3 = 0LL;
  if ( UseQPCTime )
    v4 = KeQueryPerformanceCounter(&v34);
  else
    v4.QuadPart = KeQueryUnbiasedInterruptTime();
  v5 = *(_QWORD *)(a1 + 88);
  v6 = v4;
  v7 = *(_QWORD *)(v5 + 128);
  NvmeSrb = RaidAllocateNvmeSrb(v5, 1);
  v9 = NvmeSrb;
  if ( !NvmeSrb )
    goto LABEL_5;
  if ( *(_BYTE *)(NvmeSrb + 2) == 40 && (v11 = *(_DWORD *)(NvmeSrb + 56)) != 0 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = *(unsigned int *)(v9 + 4LL * v12 + 120);
      if ( (unsigned int)v13 >= 0x80 && (unsigned int)v13 < *(_DWORD *)(v9 + 16) )
      {
        v14 = v13 + v9;
        if ( *(_DWORD *)(v13 + v9) == 68 )
          break;
      }
      if ( ++v12 >= v11 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    v14 = 0LL;
  }
  *(_DWORD *)(v14 + 16) = 2;
  Pool = RaidAllocatePool(64LL, 128LL, 1179541842LL, *(_QWORD *)(v7 + 8));
  v2 = Pool;
  if ( !Pool )
    goto LABEL_5;
  *(_DWORD *)Pool = 8388609;
  *(_QWORD *)(Pool + 8) = *(_QWORD *)(v5 + 560);
  *(_WORD *)(Pool + 4) = *(_WORD *)(a1 + 136);
  *(_WORD *)(Pool + 16) = *(_WORD *)(a1 + 124);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 96) + 24LL) + 4LL) == 1 )
  {
    GetQueueCompletionAffinity(*(unsigned int *)(v5 + 36), Pool + 24);
    GetQueueCompletionAffinity(*(unsigned int *)(v5 + 36), v2 + 40);
  }
  v16 = 316LL;
  if ( *(_DWORD *)v7 != 1314275652 )
    v16 = 524LL;
  ContiguousIoResources = NvmeAdapterAllocateContiguousIoResources(
                            524LL,
                            ((*(_DWORD *)(v16 + v7) + 7) & 0xFFFFFFF8) + 1184);
  v3 = (void *)ContiguousIoResources;
  if ( ContiguousIoResources )
  {
    v19 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, v18, 0, 0LL);
    *(_BYTE *)(v19 + 17) |= 0x20u;
    *(_QWORD *)(v19 + 184) = v2;
    *(_QWORD *)(v19 + 168) = v9;
    *(_QWORD *)(v19 + 216) = v7;
    *(_QWORD *)(v19 + 784) = v5;
    *(_QWORD *)(v9 + 96) = v19;
    *(_QWORD *)(v9 + 64) = v2;
    *(_DWORD *)(v9 + 60) = 128;
    *(_DWORD *)(v9 + 24) = 256;
    *(_DWORD *)(v9 + 40) = 10;
    RaSrbSetMiniportContext((int *)v7, v9, (__int64)v3 + 1184);
    Object = (PVOID)(v19 + 664);
    KeInitializeEvent((PRKEVENT)(v19 + 664), NotificationEvent, 0);
    *(_QWORD *)(v19 + 656) = RaidXrbSignalCompletion;
    *(_DWORD *)(a1 + 120) = 1;
    if ( (*(_DWORD *)(v7 + 144) & 0x1000LL) != 0 )
      v21 = NvmeAdapterRaiseIrqlAndExecuteXrb((_DWORD *)v7, v19);
    else
      v21 = NvmeAdapterExecuteXrb((_DWORD *)v7, v19, v20);
    v10 = v21;
    if ( v21 >= 0
      && (KeWaitForSingleObject(Object, Executive, 0, 0, 0LL),
          v10 = RaidSrbStatusToNtStatus(*(_BYTE *)(v9 + 3)),
          v10 >= 0)
      && (v22 = *(unsigned __int16 *)(v2 + 16), (_WORD)v22) )
    {
      *(_DWORD *)(a1 + 124) = v22;
      *(_DWORD *)(a1 + 120) = 2;
    }
    else
    {
      v23 = *(_WORD *)(v2 + 16) == 0;
      *(_DWORD *)(a1 + 120) = 0;
      if ( v23 )
        v10 = -1073741670;
    }
  }
  else
  {
LABEL_5:
    v10 = -1073741801;
  }
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( v10 < 0 )
  {
    if ( (byte_14017146A & 8) != 0 )
    {
      if ( v2 )
      {
        v28 = *(_DWORD *)(v2 + 56);
        v29 = (const char *)(v2 + 60);
      }
      else
      {
        v29 = byte_140151064;
        LOBYTE(v28) = 0;
      }
      if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v6.QuadPart )
        v30 = PerformanceCounter.QuadPart - v6.QuadPart;
      else
        v30 = PerformanceCounter.QuadPart - v6.QuadPart - 1;
      if ( UseQPCTime )
      {
        v31 = 0LL;
        if ( v34.QuadPart && v30 )
        {
          v32 = v30;
          v30 = 1000 * (v30 % v34.QuadPart);
          v31 = 10000 * (v30 % v34.QuadPart) / v34.QuadPart + 10000 * (1000 * (v32 / v34.QuadPart) + v30 / v34.QuadPart);
        }
      }
      else
      {
        v31 = v30;
      }
      McTemplateK0qjzshhdqsq_EtwWriteTransfer(
        v7 + 1032,
        &EventNVMeoFCreateControllerQueueFailure,
        v30,
        *(_DWORD *)(v7 + 56),
        v7 + 1032,
        *(const wchar_t **)(v7 + 1016),
        *(const char **)(v5 + 792),
        *(_WORD *)(v5 + 4),
        *(_WORD *)(a1 + 136),
        v10,
        v28,
        v29,
        v31 / 0xA);
    }
  }
  else if ( (byte_14017146A & 2) != 0 )
  {
    if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v6.QuadPart )
      v25 = PerformanceCounter.QuadPart - v6.QuadPart;
    else
      v25 = PerformanceCounter.QuadPart - v6.QuadPart - 1;
    if ( UseQPCTime )
    {
      v26 = 0LL;
      if ( v34.QuadPart && v25 )
      {
        v27 = v25;
        v25 = 1000 * (v25 % v34.QuadPart);
        v26 = 10000 * (v25 % v34.QuadPart) / v34.QuadPart + 10000 * (1000 * (v27 / v34.QuadPart) + v25 / v34.QuadPart);
      }
    }
    else
    {
      v26 = v25;
    }
    McTemplateK0qjzshhq_EtwWriteTransfer(
      v7 + 1032,
      &EventNVMeoFCreateControllerQueueSuccess,
      v25,
      *(_DWORD *)(v7 + 56),
      v7 + 1032,
      *(const wchar_t **)(v7 + 1016),
      *(const char **)(v5 + 792),
      *(_WORD *)(v5 + 4),
      *(_WORD *)(a1 + 136),
      v26 / 0xA);
  }
  if ( v3 )
    MmFreeContiguousMemory(v3);
  if ( v2 )
    ExFreePoolWithTag((PVOID)v2, 0x464E6152u);
  if ( v9 )
    ExFreePoolWithTag((PVOID)v9, 0x72536152u);
  return (unsigned int)v10;
}
