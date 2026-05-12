/*
 * XREFs of NvmeControllerInitializeCQIoPolling @ 0x1400F0530
 * Callers:
 *     NvmeControllerIoQueuesInitialize @ 0x1400F159C (NvmeControllerIoQueuesInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAllocatePoolEx @ 0x14008AB5C (RaidAllocatePoolEx.c)
 *     NvmeControllerUninitializeCQIoPolling @ 0x1400F5BD8 (NvmeControllerUninitializeCQIoPolling.c)
 */

__int64 __fastcall NvmeControllerInitializeCQIoPolling(_QWORD *a1, __int64 a2)
{
  _BYTE *v2; // rax
  _DWORD *v3; // r15
  unsigned int v6; // ebx
  int v7; // r13d
  __int64 Pool; // rax
  int v9; // ecx
  KDPC_IMPORTANCE v10; // ebp
  ULONG v11; // r14d
  unsigned __int16 *v12; // rdx
  int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // rdx
  struct _KDPC *v16; // rcx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+80h] [rbp+18h]

  v2 = (_BYTE *)a1[217];
  v3 = g_CpuInfo;
  ProcNumber = 0;
  v6 = 0;
  v7 = 0;
  if ( *v2 && *(_BYTE *)(a2 + 80) )
  {
    Pool = RaidAllocatePool(72LL, 8LL * *((unsigned int *)g_CpuInfo + 2), 1363763538LL, *(_QWORD *)(a1[16] + 8LL));
    *(_QWORD *)(a2 + 88) = Pool;
    if ( Pool )
    {
      v9 = *(_DWORD *)(a1[131] + 36LL);
      v10 = ((*(_DWORD *)(a1[217] + 12LL) & 4) == 0) | 2;
      if ( v9 )
        v7 = -10 * v9;
      *(_DWORD *)(a2 + 84) = v7;
      v11 = 0;
      v19 = *(_DWORD *)(a1[217] + 12LL) & 2;
      if ( !v3[2] )
        return v6;
      do
      {
        if ( KeGetProcessorNumberFromIndex(v11, &ProcNumber) >= 0 )
        {
          v12 = *(unsigned __int16 **)(56LL * v11 + *((_QWORD *)v3 + 4) + 48);
          if ( v12 )
            v13 = *v12;
          else
            v13 = 0x80000000;
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 8LL * v11) = RaidAllocatePoolEx(
                                                            72LL,
                                                            32LL,
                                                            1363763538LL,
                                                            *(_QWORD *)(a1[16] + 8LL),
                                                            v13);
          v14 = *(_QWORD *)(a2 + 88);
          v15 = *(_QWORD *)(v14 + 8LL * v11);
          if ( !v15 )
            goto LABEL_4;
          if ( v7 )
          {
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 8LL * v11) + 16LL) = ExAllocateTimer(
                                                                                  &NvmeControllerIoPollingTimerCallback,
                                                                                  v15,
                                                                                  4LL);
            v14 = *(_QWORD *)(a2 + 88);
            if ( !*(_QWORD *)(*(_QWORD *)(v14 + 8LL * v11) + 16LL) )
              goto LABEL_4;
          }
          *(_DWORD *)(*(_QWORD *)(v14 + 8LL * v11) + 4LL) = v11;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 8LL * v11) + 24LL) = RaidAllocatePoolEx(
                                                                                72LL,
                                                                                64LL,
                                                                                1363763538LL,
                                                                                *(_QWORD *)(a1[16] + 8LL),
                                                                                v13);
          v16 = *(struct _KDPC **)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 8LL * v11) + 24LL);
          if ( !v16 )
            goto LABEL_4;
          if ( v19 )
            KeInitializeDpc(v16, NvmeIoPollingDpcRoutine, (PVOID)1);
          else
            KeInitializeThreadedDpc(v16, NvmeIoPollingDpcRoutine, (PVOID)1);
          KeSetImportanceDpc(*(PRKDPC *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 8LL * v11) + 24LL), v10);
          v6 = KeSetTargetProcessorDpcEx(*(PKDPC *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 8LL * v11) + 24LL), &ProcNumber);
        }
        ++v11;
      }
      while ( v11 < v3[2] );
      if ( (v6 & 0x80000000) == 0 )
        return v6;
    }
    else
    {
LABEL_4:
      v6 = -1073741670;
    }
    NvmeControllerUninitializeCQIoPolling(a1, a2);
    return v6;
  }
  return 0LL;
}
