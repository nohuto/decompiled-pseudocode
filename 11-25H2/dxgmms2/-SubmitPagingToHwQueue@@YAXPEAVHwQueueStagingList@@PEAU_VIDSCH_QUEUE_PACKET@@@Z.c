/*
 * XREFs of ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400479E0
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001CBA0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 * Callees:
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140010190 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140019BE8 (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiMarkDeviceAsError @ 0x14002DD70 (VidSchiMarkDeviceAsError.c)
 *     ?DdiSubmitCommandToHwQueue@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x14003AD10 (-DdiSubmitCommandToHwQueue@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDTOHWQUEUE@@@Z.c)
 *     McTemplateK0pxpqq_EtwWriteTransfer @ 0x14003C464 (McTemplateK0pxpqq_EtwWriteTransfer.c)
 *     ?VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x14004A58C (-VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PE.c)
 *     memset @ 0x140056780 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall SubmitPagingToHwQueue(struct HwQueueStagingList ***a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v2; // rbx
  struct HwQueueStagingList ***v4; // r12
  LARGE_INTEGER *v5; // r13
  LARGE_INTEGER v6; // r15
  __int64 QuadPart; // rsi
  __int64 v8; // r14
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r8
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // r9
  _DWORD *v16; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v18; // rcx
  unsigned int v19; // [rsp+38h] [rbp-48h]
  _DXGKARG_SUBMITCOMMANDTOHWQUEUE v20; // [rsp+40h] [rbp-40h] BYREF

  v2 = *((_QWORD *)a2 + 12);
  v4 = a1;
  v5 = *(LARGE_INTEGER **)(v2 + 40);
  v6 = v5[2];
  QuadPart = v5[1].QuadPart;
  v8 = *(_QWORD *)(v6.QuadPart + 24);
  ++*(_DWORD *)(v2 + 152);
  *((_DWORD *)a2 + 20) |= 0x40u;
  if ( (*(_BYTE *)(v8 + 3268) & 1) != 0
    || (a1 = 0LL, *(_DWORD *)(v8 + 3244))
    || *(_BYTE *)(QuadPart + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(QuadPart + 200), 0, 0) )
  {
    VidSchiSimulateProgressFenceCompletion((struct HwQueueStagingList *)a1, a2, (struct VIDSCH_HW_QUEUE *)v2);
    VidSchiCompleteHwQueuePacket(v4, a2, 0);
  }
  else
  {
    *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)a2 + 13) = 9;
    VidSchiCalibrateHwClock((struct _VIDSCH_NODE *)v6.QuadPart);
    v9 = 0LL;
    if ( !*(_BYTE *)(344LL * *(unsigned __int16 *)(v6.QuadPart + 6)
                   + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL) + 2992LL)
                   + 48) )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 24576LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 906;
    }
    v10 = *((_QWORD *)a2 + 95);
    *(_QWORD *)&v20.Flags.0 = v9;
    v20.hHwQueue = *(HANDLE *)(v2 + 112);
    v20.HwQueueProgressFenceId = *((_QWORD *)a2 + 96);
    v20.HwQueueProgressFenceCpuVa = (void *)*((_QWORD *)a2 + 98);
    v20.HwQueueProgressFenceGpuVa = *((_QWORD *)a2 + 97);
    v20.DmaBufferVirtualAddress = *(_QWORD *)(v10 + 88) + *((unsigned int *)a2 + 201);
    v20.DmaBufferSize = *((_DWORD *)a2 + 202);
    v20.pDmaBufferPrivateData = (void *)(*(_QWORD *)(v10 + 120) + *((unsigned int *)a2 + 203));
    v20.DmaBufferPrivateDataSize = *((_DWORD *)a2 + 204);
    v20.Flags.Value = v9 | 1;
    v11 = ADAPTER_RENDER::DdiSubmitCommandToHwQueue(*(ADAPTER_RENDER **)(v8 + 8), &v20);
    v13 = v11;
    if ( (byte_140081241 & 1) != 0 )
    {
      v14 = *((_QWORD *)a2 + 12);
      v15 = *(_QWORD *)(v14 + 48);
      if ( !v15 )
        v15 = *((_QWORD *)a2 + 12);
      v19 = *(_DWORD *)(QuadPart + 1832);
      McTemplateK0pxpqq_EtwWriteTransfer(
        v14,
        v19,
        v12,
        v15,
        v20.HwQueueProgressFenceId,
        v20.DmaBufferVirtualAddress,
        v11,
        v19);
    }
    v16 = (_DWORD *)(*(_QWORD *)(v6.QuadPart + 184) + 112LL * *(unsigned int *)(v6.QuadPart + 196));
    memset(v16, 0, 0x70uLL);
    *(_DWORD *)(v6.QuadPart + 196) = (*(_DWORD *)(v6.QuadPart + 196) + 1) & (*(_DWORD *)(v6.QuadPart + 192) - 1);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *((LARGE_INTEGER *)v16 + 1) = PerformanceCounter;
    *v16 = 8;
    v18 = *((_QWORD *)a2 + 96);
    v16[22] = 0;
    *((_QWORD *)v16 + 10) = v18;
    *(_DXGKARG_SUBMITCOMMANDTOHWQUEUE *)(v16 + 4) = v20;
    v16[23] = v13;
    v5[27] = PerformanceCounter;
    if ( (int)(v13 + 0x80000000) >= 0 && v13 != -1073741822 )
      VidSchiMarkDeviceAsError((struct HwQueueStagingList *)v4, QuadPart, 19, 0LL);
  }
}
