/*
 * XREFs of NvmeAdapterDrainFabricControllerQueue @ 0x1400E1D28
 * Callers:
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400E4E20 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 *     NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400E884C (NvmeAdapterStopFabricNvmeControllerOperations.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaSrbSetMiniportContext @ 0x140010610 (RaSrbSetMiniportContext.c)
 *     RaidZeroXrb @ 0x140012070 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 *     RaidAllocateNvmeSrb @ 0x14007AEA0 (RaidAllocateNvmeSrb.c)
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterAllocateContiguousIoResources @ 0x1400CCD48 (NvmeAdapterAllocateContiguousIoResources.c)
 *     NvmeAdapterExecuteXrb @ 0x1400CFAA4 (NvmeAdapterExecuteXrb.c)
 *     NvmeAdapterRaiseIrqlAndExecuteXrb @ 0x1400D63DC (NvmeAdapterRaiseIrqlAndExecuteXrb.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall NvmeAdapterDrainFabricControllerQueue(__int64 a1)
{
  __int64 v1; // r15
  __int64 v3; // rsi
  __int64 v4; // rbp
  void *v5; // r14
  __int64 NvmeSrb; // rax
  __int64 v7; // rbx
  int v8; // edi
  unsigned int v9; // r8d
  unsigned int i; // ecx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 Pool; // rax
  __int64 v14; // rax
  __int64 ContiguousIoResources; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  void *v18; // r12
  __int64 v19; // r8
  int v20; // eax
  struct _UNICODE_STRING v21; // [rsp+A0h] [rbp-E8h] BYREF
  struct _STRING DestinationString; // [rsp+B0h] [rbp-D8h] BYREF
  _WORD v23[64]; // [rsp+D0h] [rbp-B8h] BYREF

  v1 = *(_QWORD *)(a1 + 88);
  DestinationString = 0LL;
  v3 = 0LL;
  v21 = 0LL;
  v4 = *(_QWORD *)(v1 + 128);
  v5 = 0LL;
  NvmeSrb = RaidAllocateNvmeSrb(v1, 1);
  v7 = NvmeSrb;
  if ( !NvmeSrb )
    goto LABEL_2;
  if ( *(_BYTE *)(NvmeSrb + 2) == 40 )
  {
    v9 = *(_DWORD *)(NvmeSrb + 56);
    if ( v9 )
    {
      for ( i = 0; i < v9; ++i )
      {
        v11 = *(unsigned int *)(v7 + 4LL * i + 120);
        if ( (unsigned int)v11 >= 0x80 && (unsigned int)v11 < *(_DWORD *)(v7 + 16) )
        {
          v12 = v7 + v11;
          if ( *(_DWORD *)(v7 + v11) == 68 )
            goto LABEL_12;
        }
      }
    }
  }
  v12 = 0LL;
LABEL_12:
  *(_DWORD *)(v12 + 16) = 4;
  Pool = RaidAllocatePool(64LL, 88LL, 1179541842LL, *(_QWORD *)(v4 + 8));
  v3 = Pool;
  if ( !Pool )
    goto LABEL_2;
  *(_DWORD *)Pool = 5767169;
  *(_QWORD *)(Pool + 8) = *(_QWORD *)(v1 + 560);
  *(_WORD *)(Pool + 4) = *(_WORD *)(a1 + 136);
  v14 = 316LL;
  if ( *(_DWORD *)v4 != 1314275652 )
    v14 = 524LL;
  ContiguousIoResources = NvmeAdapterAllocateContiguousIoResources(
                            524LL,
                            ((*(_DWORD *)(v14 + v4) + 7) & 0xFFFFFFF8) + 1184);
  v5 = (void *)ContiguousIoResources;
  if ( !ContiguousIoResources )
  {
LABEL_2:
    LOBYTE(v8) = 23;
    goto LABEL_22;
  }
  v17 = ContiguousIoResources + 48;
  RaidZeroXrb(ContiguousIoResources + 48, v16, 0, 0LL);
  *(_BYTE *)(v17 + 17) |= 0x20u;
  *(_QWORD *)(v17 + 184) = v3;
  *(_QWORD *)(v17 + 168) = v7;
  *(_QWORD *)(v17 + 216) = v4;
  *(_QWORD *)(v17 + 784) = v1;
  *(_QWORD *)(v7 + 96) = v17;
  *(_QWORD *)(v7 + 64) = v3;
  *(_DWORD *)(v7 + 60) = 88;
  *(_DWORD *)(v7 + 24) = 256;
  *(_DWORD *)(v7 + 40) = 10;
  RaSrbSetMiniportContext((int *)v4, v7, (__int64)v5 + 1184);
  v18 = (void *)(v17 + 664);
  KeInitializeEvent((PRKEVENT)(v17 + 664), NotificationEvent, 0);
  *(_QWORD *)(v17 + 656) = RaidXrbSignalCompletion;
  if ( (*(_DWORD *)(v4 + 144) & 0x1000LL) != 0 )
    v20 = NvmeAdapterRaiseIrqlAndExecuteXrb((_DWORD *)v4, v17);
  else
    v20 = NvmeAdapterExecuteXrb((_DWORD *)v4, v17, v19);
  v8 = v20;
  if ( v20 >= 0 )
  {
    KeWaitForSingleObject(v18, Executive, 0, 0, 0LL);
    v8 = RaidSrbStatusToNtStatus(*(_BYTE *)(v7 + 3));
  }
  *(_WORD *)(a1 + 148) = 0;
  if ( v8 < 0 )
  {
LABEL_22:
    RtlInitAnsiString(&DestinationString, (PCSZ)(v3 + 20));
    v21.MaximumLength = 128;
    v21.Buffer = v23;
    RtlAnsiStringToUnicodeString(&v21, &DestinationString, 0);
    StorEtwNvmeControllerEvent(
      v1,
      1,
      3,
      (__int64)L"Controller drain queue failure",
      L"QueueId",
      *(_WORD *)(a1 + 136),
      L"Status",
      v8,
      L"TransportErrorCode",
      *(_DWORD *)(v3 + 16),
      v23,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0);
    if ( !v5 )
      goto LABEL_24;
  }
  MmFreeContiguousMemory(v5);
LABEL_24:
  ExFreePoolWithTag((PVOID)v3, 0x464E6152u);
  if ( v7 )
    ExFreePoolWithTag((PVOID)v7, 0x72536152u);
}
