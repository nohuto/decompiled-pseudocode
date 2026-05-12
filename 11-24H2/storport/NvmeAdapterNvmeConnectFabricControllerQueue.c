/*
 * XREFs of NvmeAdapterNvmeConnectFabricControllerQueue @ 0x1400E40C0
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400DFBF4 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterCreateConnectFabricControllerIoQueue @ 0x1400E05D4 (NvmeAdapterCreateConnectFabricControllerIoQueue.c)
 *     NvmeAdapterReconnectFabricControllerAssociation @ 0x1400E69F4 (NvmeAdapterReconnectFabricControllerAssociation.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAllocateNvmeSrb @ 0x14007AEA0 (RaidAllocateNvmeSrb.c)
 *     McTemplateK0qjzshhdq_EtwWriteTransfer @ 0x1400DDB50 (McTemplateK0qjzshhdq_EtwWriteTransfer.c)
 *     McTemplateK0qjzshhq_EtwWriteTransfer @ 0x1400DDF54 (McTemplateK0qjzshhq_EtwWriteTransfer.c)
 *     McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer @ 0x1400DE078 (McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400E6500 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     NvmeControllerQueueIncrementProcessingCount @ 0x1400F3918 (NvmeControllerQueueIncrementProcessingCount.c)
 *     BuildNvmeConnectCommand @ 0x140119120 (BuildNvmeConnectCommand.c)
 *     BuildNvmeConnectData @ 0x140119190 (BuildNvmeConnectData.c)
 */

__int64 __fastcall NvmeAdapterNvmeConnectFabricControllerQueue(__int64 a1)
{
  __int64 v1; // r14
  void *v3; // r12
  LARGE_INTEGER v4; // rax
  __int64 v5; // r15
  LARGE_INTEGER v6; // rbx
  __int64 v7; // r13
  __int64 NvmeSrb; // rbp
  int v9; // esi
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  __int64 v12; // rdx
  int v13; // r8d
  int v14; // r9d
  unsigned __int16 *v15; // rax
  _BYTE *v16; // r12
  unsigned __int16 *v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // edx
  unsigned int v20; // edx
  int v21; // eax
  __int64 v22; // rcx
  const char *v23; // r11
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r9
  int v30; // [rsp+C8h] [rbp-B0h]
  int v31; // [rsp+D8h] [rbp-A0h]
  int v32; // [rsp+E8h] [rbp-90h]
  char v33; // [rsp+108h] [rbp-70h]
  __int64 Pool; // [rsp+120h] [rbp-58h]
  unsigned __int16 *v35; // [rsp+180h] [rbp+8h]
  unsigned __int16 *v36; // [rsp+188h] [rbp+10h]
  union _LARGE_INTEGER v37; // [rsp+190h] [rbp+18h] BYREF

  v1 = 0LL;
  v3 = 0LL;
  v37.QuadPart = 0LL;
  if ( UseQPCTime )
    v4 = KeQueryPerformanceCounter(&v37);
  else
    v4.QuadPart = KeQueryUnbiasedInterruptTime();
  v5 = *(_QWORD *)(a1 + 88);
  v6 = v4;
  v7 = *(_QWORD *)(v5 + 128);
  NvmeSrb = RaidAllocateNvmeSrb(v5, 0);
  if ( NvmeSrb && (Pool = RaidAllocatePool(64LL, 1024LL, 1380147538LL, *(_QWORD *)(v7 + 8)), (v3 = (void *)Pool) != 0LL) )
  {
    if ( *(_BYTE *)(NvmeSrb + 2) == 40 )
    {
      v10 = *(_DWORD *)(NvmeSrb + 56);
      if ( v10 )
      {
        v11 = 0;
        while ( 1 )
        {
          v12 = *(unsigned int *)(NvmeSrb + 4LL * v11 + 120);
          if ( (unsigned int)v12 >= 0x80 && (unsigned int)v12 < *(_DWORD *)(NvmeSrb + 16) )
          {
            v1 = v12 + NvmeSrb;
            if ( *(_DWORD *)(v12 + NvmeSrb) == 67 )
              break;
          }
          if ( ++v11 >= v10 )
          {
            v1 = 0LL;
            break;
          }
        }
      }
    }
    BuildNvmeConnectCommand(a1, v1 + 16);
    v9 = BuildNvmeConnectData(a1, Pool);
    if ( v9 >= 0 )
    {
      *(_QWORD *)(NvmeSrb + 64) = Pool;
      *(_DWORD *)(NvmeSrb + 60) = 1024;
      *(_DWORD *)(NvmeSrb + 24) = 128;
      *(_BYTE *)(v1 + 80) = 2;
      *(_WORD *)(v1 + 82) = 2;
      *(_WORD *)(v1 + 106) = *(_WORD *)(a1 + 136);
      *(_DWORD *)(a1 + 120) = 3;
      if ( *(_WORD *)(a1 + 136) )
        NvmeControllerQueueIncrementProcessingCount(a1);
      v15 = (unsigned __int16 *)(v1 + 86);
      v36 = (unsigned __int16 *)(v1 + 86);
      v16 = (_BYTE *)(NvmeSrb + 3);
      while ( 1 )
      {
        v35 = v15;
        v9 = NvmeAdapterProcessControllerQueueRequestSync(a1, NvmeSrb, v13, v14, 1, 0LL, 0LL, 0);
        if ( v9 >= 0 && *v16 == 1 && (*v36 & 0xE00) == 0 && (*v36 & 0x1FE) == 0 )
          break;
        if ( *(_DWORD *)(v5 + 572) != 2 || !*(_DWORD *)(v5 + 1076) )
        {
          v17 = v35;
LABEL_40:
          if ( (byte_14017146A & 1) != 0 )
          {
            v22 = *v17;
            v23 = (const char *)&word_140150F48;
            if ( *(_QWORD *)(v5 + 752) )
              v23 = *(const char **)(v5 + 752);
            v33 = (unsigned __int16)v22 >> 1;
            LOWORD(v22) = (unsigned __int16)v22 >> 9;
            LOBYTE(v22) = v22 & 7;
            McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer(
              v22,
              *(unsigned int *)(v1 + 96),
              v5 + 841,
              *(_DWORD *)(v7 + 56),
              v7 + 1032,
              *(const wchar_t **)(v7 + 1016),
              *(const char **)(v5 + 792),
              *(_WORD *)(v5 + 4),
              *(_WORD *)(a1 + 136),
              *(_BYTE *)(v5 + 744),
              v23,
              (const char *)(v5 + 800),
              (const char *)(v5 + 841),
              "Connect Command",
              "DW0",
              *(_DWORD *)(v1 + 96),
              byte_140151064,
              0,
              byte_140151064,
              0,
              byte_140151064,
              0,
              byte_140151064,
              0,
              byte_140151064,
              v30,
              byte_140151064,
              v31,
              byte_140151064,
              v32,
              v9,
              *(_BYTE *)(NvmeSrb + 3),
              v22,
              v33);
          }
          v9 = -1073741823;
          v21 = 2;
          goto LABEL_45;
        }
        v17 = v35;
        if ( v9 < 0 )
          goto LABEL_40;
        if ( *v16 != 1 )
          goto LABEL_40;
        v36 = v35;
        if ( (*v35 & 0xE00) != 0x200 || (*v35 & 0x1FE) != 0x104 )
          goto LABEL_40;
        *(_DWORD *)(v5 + 1076) = 0;
        BuildNvmeConnectCommand(a1, v1 + 16);
        v15 = v35;
      }
      v18 = *(_QWORD *)(a1 + 88);
      v19 = *(_DWORD *)(v1 + 96);
      if ( *(_WORD *)(v18 + 4) == 0xFFFF )
        *(_WORD *)(v18 + 4) = v19;
      if ( !*(_WORD *)(a1 + 136) )
      {
        v20 = HIWORD(v19);
        if ( (_WORD)v20 )
        {
          if ( (v20 & 2) != 0 || (v20 & 4) != 0 )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 88) + 136LL) |= 0x40uLL;
            if ( (v20 & 4) != 0 )
              *(_QWORD *)(*(_QWORD *)(a1 + 88) + 136LL) |= 0x80uLL;
          }
        }
      }
      v21 = 4;
LABEL_45:
      v3 = (void *)Pool;
      *(_DWORD *)(a1 + 120) = v21;
    }
  }
  else
  {
    v9 = -1073741801;
  }
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( v9 < 0 )
  {
    if ( (byte_14017146A & 8) != 0 )
    {
      if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v6.QuadPart )
        v27 = PerformanceCounter.QuadPart - v6.QuadPart;
      else
        v27 = PerformanceCounter.QuadPart - v6.QuadPart - 1;
      if ( UseQPCTime )
      {
        v28 = 0LL;
        if ( v37.QuadPart && v27 )
          v28 = 10000 * (1000 * (v27 % v37.QuadPart) % v37.QuadPart) / v37.QuadPart
              + 10000 * (1000 * (v27 / v37.QuadPart) + 1000 * (v27 % v37.QuadPart) / v37.QuadPart);
      }
      else
      {
        v28 = v27;
      }
      McTemplateK0qjzshhdq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 88),
        &EventNVMeoFConnectControllerQueueFailure,
        v7 + 1032,
        *(_DWORD *)(v7 + 56),
        v7 + 1032,
        *(const wchar_t **)(v7 + 1016),
        *(const char **)(v5 + 792),
        *(_WORD *)(*(_QWORD *)(a1 + 88) + 4LL),
        *(_WORD *)(a1 + 136),
        v9,
        v28 / 0xA);
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
      if ( v37.QuadPart && v25 )
        v26 = 10000 * (1000 * (v25 % v37.QuadPart) % v37.QuadPart) / v37.QuadPart
            + 10000 * (1000 * (v25 / v37.QuadPart) + 1000 * (v25 % v37.QuadPart) / v37.QuadPart);
    }
    else
    {
      v26 = v25;
    }
    McTemplateK0qjzshhq_EtwWriteTransfer(
      *(_QWORD *)(a1 + 88),
      &EventNVMeoFConnectControllerQueueSuccess,
      v7 + 1032,
      *(_DWORD *)(v7 + 56),
      v7 + 1032,
      *(const wchar_t **)(v7 + 1016),
      *(const char **)(v5 + 792),
      *(_WORD *)(*(_QWORD *)(a1 + 88) + 4LL),
      *(_WORD *)(a1 + 136),
      v26 / 0xA);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x52436152u);
  if ( NvmeSrb )
    ExFreePoolWithTag((PVOID)NvmeSrb, 0x72536152u);
  return (unsigned int)v9;
}
