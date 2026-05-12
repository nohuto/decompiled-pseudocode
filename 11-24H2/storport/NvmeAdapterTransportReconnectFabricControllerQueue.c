/*
 * XREFs of NvmeAdapterTransportReconnectFabricControllerQueue @ 0x1400E932C
 * Callers:
 *     NvmeAdapterCreateConnectFabricControllerIoQueue @ 0x1400E05D4 (NvmeAdapterCreateConnectFabricControllerIoQueue.c)
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400E4E20 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
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
 */

__int64 __fastcall NvmeAdapterTransportReconnectFabricControllerQueue(__int64 a1)
{
  char *v1; // r14
  void *v2; // r12
  LARGE_INTEGER v4; // rax
  __int64 v5; // r15
  LARGE_INTEGER v6; // rbx
  __int64 v7; // rbp
  __int64 NvmeSrb; // rax
  __int64 v9; // rsi
  int v10; // edi
  unsigned int v11; // r8d
  __int64 v12; // rcx
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
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r9
  __int64 v26; // r9
  int v27; // r11d
  const char *v28; // r10
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r9
  __int64 v31; // r9
  union _LARGE_INTEGER v33; // [rsp+B0h] [rbp+8h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+10h]

  v1 = 0LL;
  v2 = 0LL;
  v33.QuadPart = 0LL;
  if ( UseQPCTime )
    v4 = KeQueryPerformanceCounter(&v33);
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
    v12 = 0LL;
    while ( 1 )
    {
      v13 = *(unsigned int *)(v9 + 4 * v12 + 120);
      if ( (unsigned int)v13 >= 0x80 && (unsigned int)v13 < *(_DWORD *)(v9 + 16) )
      {
        v14 = v9 + v13;
        if ( *(_DWORD *)(v9 + v13) == 68 )
          break;
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= v11 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    v14 = 0LL;
  }
  *(_DWORD *)(v14 + 16) = 6;
  Pool = RaidAllocatePool(64LL, 88LL, 1179541842LL, *(_QWORD *)(v7 + 8));
  v1 = (char *)Pool;
  if ( !Pool )
    goto LABEL_5;
  *(_DWORD *)Pool = 5767169;
  *(_QWORD *)(Pool + 8) = *(_QWORD *)(v5 + 560);
  *(_WORD *)(Pool + 4) = *(_WORD *)(a1 + 136);
  v16 = 316LL;
  if ( *(_DWORD *)v7 != 1314275652 )
    v16 = 524LL;
  ContiguousIoResources = NvmeAdapterAllocateContiguousIoResources(
                            524LL,
                            ((*(_DWORD *)(v16 + v7) + 7) & 0xFFFFFFF8) + 1184);
  v2 = (void *)ContiguousIoResources;
  if ( ContiguousIoResources )
  {
    v19 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, v18, 0, 0LL);
    *(_BYTE *)(v19 + 17) |= 0x20u;
    *(_QWORD *)(v19 + 184) = v1;
    *(_QWORD *)(v19 + 168) = v9;
    *(_QWORD *)(v19 + 216) = v7;
    *(_QWORD *)(v19 + 784) = v5;
    *(_QWORD *)(v9 + 96) = v19;
    *(_QWORD *)(v9 + 64) = v1;
    *(_DWORD *)(v9 + 60) = 88;
    *(_DWORD *)(v9 + 24) = 256;
    *(_DWORD *)(v9 + 40) = 10;
    RaSrbSetMiniportContext((int *)v7, v9, (__int64)v2 + 1184);
    Object = (PVOID)(v19 + 664);
    KeInitializeEvent((PRKEVENT)(v19 + 664), NotificationEvent, 0);
    *(_QWORD *)(v19 + 656) = RaidXrbSignalCompletion;
    *(_DWORD *)(a1 + 120) = 1;
    if ( (*(_DWORD *)(v7 + 144) & 0x1000LL) != 0 )
      v21 = NvmeAdapterRaiseIrqlAndExecuteXrb((_DWORD *)v7, v19);
    else
      v21 = NvmeAdapterExecuteXrb((_DWORD *)v7, v19, v20);
    v10 = v21;
    if ( v21 >= 0 )
    {
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      v10 = RaidSrbStatusToNtStatus(*(_BYTE *)(v9 + 3));
    }
    v22 = 0;
    if ( v10 >= 0 )
      v22 = 2;
    *(_DWORD *)(a1 + 120) = v22;
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
      if ( v1 )
      {
        v27 = *((_DWORD *)v1 + 4);
        v28 = v1 + 20;
      }
      else
      {
        v28 = byte_140151064;
        LOBYTE(v27) = 0;
      }
      if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v6.QuadPart )
        v29 = PerformanceCounter.QuadPart - v6.QuadPart;
      else
        v29 = PerformanceCounter.QuadPart - v6.QuadPart - 1;
      if ( UseQPCTime )
      {
        v30 = 0LL;
        if ( v33.QuadPart && v29 )
        {
          v31 = v29 / v33.QuadPart;
          v29 = 1000 * (v29 % v33.QuadPart);
          v30 = 10000 * (v29 % v33.QuadPart) / v33.QuadPart + 10000 * (1000 * v31 + v29 / v33.QuadPart);
        }
      }
      else
      {
        v30 = v29;
      }
      McTemplateK0qjzshhdqsq_EtwWriteTransfer(
        v7 + 1032,
        &EventNVMeoFReconnectControllerQueueTransportFailure,
        v29,
        *(_DWORD *)(v7 + 56),
        v7 + 1032,
        *(const wchar_t **)(v7 + 1016),
        *(const char **)(v5 + 792),
        *(_WORD *)(v5 + 4),
        *(_WORD *)(a1 + 136),
        v10,
        v27,
        v28,
        v30 / 0xA);
    }
  }
  else if ( (byte_14017146A & 2) != 0 )
  {
    if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v6.QuadPart )
      v24 = PerformanceCounter.QuadPart - v6.QuadPart;
    else
      v24 = PerformanceCounter.QuadPart - v6.QuadPart - 1;
    if ( UseQPCTime )
    {
      v25 = 0LL;
      if ( v33.QuadPart && v24 )
      {
        v26 = v24 / v33.QuadPart;
        v24 = 1000 * (v24 % v33.QuadPart);
        v25 = 10000 * (v24 % v33.QuadPart) / v33.QuadPart + 10000 * (1000 * v26 + v24 / v33.QuadPart);
      }
    }
    else
    {
      v25 = v24;
    }
    McTemplateK0qjzshhq_EtwWriteTransfer(
      v7 + 1032,
      &EventNVMeoFReconnectControllerQueueTransportSuccess,
      v24,
      *(_DWORD *)(v7 + 56),
      v7 + 1032,
      *(const wchar_t **)(v7 + 1016),
      *(const char **)(v5 + 792),
      *(_WORD *)(v5 + 4),
      *(_WORD *)(a1 + 136),
      v25 / 0xA);
  }
  if ( v2 )
    MmFreeContiguousMemory(v2);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x464E6152u);
  if ( v9 )
    ExFreePoolWithTag((PVOID)v9, 0x72536152u);
  return (unsigned int)v10;
}
