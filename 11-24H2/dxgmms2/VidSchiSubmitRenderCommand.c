/*
 * XREFs of VidSchiSubmitRenderCommand @ 0x1400B7268
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1400B68B0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1400B6B20 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x14001F860 (VidSchMarkDeviceAsError.c)
 *     VidSchIsTDRPending @ 0x140034DF0 (VidSchIsTDRPending.c)
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x140036AF4 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x140036F0C (VidSchiSchedulerNodeToDriverEngine.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x14004B41C (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     VidSchiAllocateDmaPacket @ 0x1400B67D0 (VidSchiAllocateDmaPacket.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1400B71FC (VidSchiSendToExecutionQueueWithWait.c)
 *     ?VidMmPrepareDmaBuffer@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_DMA_BUFFER@@IPEAIPEAT_LARGE_INTEGER@@@Z @ 0x1400B8180 (-VidMmPrepareDmaBuffer@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_DMA_BUFFER@@IPEAIPEAT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmIsDmaBufferPrepatched@@YA_NPEBUVIDMM_DMA_BUFFER@@@Z @ 0x1400B83C8 (-VidMmIsDmaBufferPrepatched@@YA_NPEBUVIDMM_DMA_BUFFER@@@Z.c)
 *     VidSchiDiscardQueuePacket @ 0x1400B83F8 (VidSchiDiscardQueuePacket.c)
 *     ?VidMmFlushDmaBufferPendingCPUAccess@@YAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x1400FB960 (-VidMmFlushDmaBufferPendingCPUAccess@@YAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiSubmitRenderCommand(union _LARGE_INTEGER *this)
{
  union _LARGE_INTEGER v1; // r15
  union _LARGE_INTEGER v2; // r14
  __int64 v4; // rbx
  __int64 v5; // rsi
  const struct VIDMM_GLOBAL *v6; // rcx
  unsigned int HighPart; // r8d
  int v8; // r12d
  union _LARGE_INTEGER *DmaPacket; // r13
  __int64 v10; // rax
  union _LARGE_INTEGER **v11; // rbx
  __int64 v12; // rax
  union _LARGE_INTEGER *v13; // rbx
  union _LARGE_INTEGER v14; // rbx
  __int64 v15; // rcx
  union _LARGE_INTEGER v16; // rax
  union _LARGE_INTEGER v17; // rdx
  LONG v18; // ecx
  LONG v19; // ecx
  bool v20; // cf
  DWORD v21; // ecx
  UINT LowPart; // ecx
  __int64 v24; // rax
  UINT v25; // ecx
  UINT v26; // ecx
  UINT v27; // ecx
  UINT v28; // eax
  DWORD v29; // edx
  int v30; // eax
  __int64 v31; // rax
  void (__fastcall *v32)(_QWORD); // rax
  struct _DXGKARG_PATCH v33; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v34; // [rsp+100h] [rbp+67h] BYREF
  __int64 v35; // [rsp+108h] [rbp+6Fh]
  union _LARGE_INTEGER v36; // [rsp+110h] [rbp+77h] BYREF
  union _LARGE_INTEGER *v37; // [rsp+118h] [rbp+7Fh]

  v1 = this[11];
  v2 = this[95];
  v36.QuadPart = 0LL;
  v4 = *(_QWORD *)(v1.QuadPart + 104);
  v35 = *(_QWORD *)(v1.QuadPart + 96);
  v5 = *(_QWORD *)(v4 + 32);
  if ( (*(_BYTE *)(v5 + 3268) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v4 + 32))
    || *(_BYTE *)(v4 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 200), 0, 0) )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry3)(
      4LL,
      v5,
      (union _LARGE_INTEGER)v1.QuadPart,
      this);
    WdLogGlobalForLineNumber = 2412;
    v8 = -1073741823;
    goto LABEL_17;
  }
  HighPart = this[101].HighPart;
  v34 = 0;
  v8 = VidMmPrepareDmaBuffer(v6, (const struct VIDMM_DMA_BUFFER *)v2.QuadPart, HighPart, &v34, &v36);
  if ( v8 < 0 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogSingleEntry4)(3LL, v5, (union _LARGE_INTEGER)v1.QuadPart);
    WdLogGlobalForLineNumber = 2444;
    VidSchMarkDeviceAsError(v4, 18LL);
LABEL_17:
    VidSchiDiscardQueuePacket((struct _VIDSCH_QUEUE_PACKET *)this);
    return (unsigned int)v8;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v2.QuadPart + 128) + 32LL) )
    DmaPacket = *(union _LARGE_INTEGER **)(*(_QWORD *)(v2.QuadPart + 48) + 232LL);
  else
    DmaPacket = *(union _LARGE_INTEGER **)(v2.QuadPart + 64);
  this[7].QuadPart = MEMORY[0xFFFFF78000000320];
  v10 = v35;
  this[6].HighPart = 7;
  v11 = *(union _LARGE_INTEGER ***)(v5 + 688);
  v37 = DmaPacket;
  v12 = *(unsigned __int16 *)(v10 + 4);
  if ( (unsigned int)v12 < *(_DWORD *)(v5 + 760) )
    v11 += v12;
  v13 = *v11;
  ++v13[6].QuadPart;
  v14 = v13[6];
  this[15] = v14;
  _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer((_VIDSCH_QUEUE_PACKET *)this);
  v15 = *(_QWORD *)(v1.QuadPart + 56);
  if ( ((*(_DWORD *)(v15 + 224) & 1) == 0
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 16LL) + 3032LL) & 1) == 0)
    && !VidMmIsDmaBufferPrepatched((const struct VIDMM_DMA_BUFFER *)v2.QuadPart)
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 768LL) + 6984LL) & 1) != 0 )
  {
    LowPart = this[100].LowPart;
    *(&v33.DmaBufferSegmentId + 1) = 0;
    *(&v33.DmaBufferSubmissionEndOffset + 1) = 0;
    *(&v33.DmaBufferPrivateDataSubmissionEndOffset + 1) = 0;
    *(&v33.AllocationListSize + 1) = 0;
    v33.hDevice = *(HANDLE *)(v1.QuadPart + 64);
    v33.DmaBufferSegmentId = v34;
    v33.DmaBufferPhysicalAddress = v36;
    v33.DmaBufferSize = *(_DWORD *)(v2.QuadPart + 36);
    v33.pDmaBufferPrivateData = *(void **)(v2.QuadPart + 120);
    v24 = *(_QWORD *)(v2.QuadPart + 128);
    v33.DmaBufferSubmissionStartOffset = LowPart;
    v33.DmaBufferSubmissionEndOffset = this[100].HighPart + LowPart;
    v33.pDmaBuffer = DmaPacket;
    v25 = *(_DWORD *)(v24 + 72);
    v33.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v2.QuadPart + 104);
    v33.AllocationListSize = this[101].HighPart;
    v33.pPatchLocationList = *(const D3DDDI_PATCHLOCATIONLIST **)(v2.QuadPart + 112);
    v33.PatchLocationListSize = *(_DWORD *)(v2.QuadPart + 44);
    LODWORD(v24) = this[102].LowPart;
    v33.DmaBufferPrivateDataSize = v25;
    v26 = this[103].LowPart;
    v33.PatchLocationListSubmissionStart = v24;
    LODWORD(v24) = this[102].HighPart;
    v33.DmaBufferPrivateDataSubmissionStartOffset = v26;
    v27 = this[103].HighPart + v26;
    v33.PatchLocationListSubmissionLength = v24;
    v33.DmaBufferPrivateDataSubmissionEndOffset = v27;
    v33.SubmissionFenceId = v14.LowPart;
    v28 = VidSchiSchedulerNodeToDriverEngine(v5, *(unsigned __int16 *)(v35 + 4));
    v29 = this[9].LowPart;
    v33.EngineOrdinal = v28;
    if ( (*(_DWORD *)(v1.QuadPart + 112) & 2) != 0 || (v29 & 0x8000) != 0 )
      v30 = 8;
    else
      v30 = 0;
    v33.Flags.Value = v30 | ((v29 & 0x20 | (v29 >> 1) & 0x40) >> 4);
    v8 = ADAPTER_RENDER::DdiPatch(*(ADAPTER_RENDER **)(v5 + 8), &v33);
    if ( v8 < 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
        0LL,
        281LL,
        3LL,
        v5,
        (union _LARGE_INTEGER)v1.QuadPart,
        this);
      WdLogGlobalForLineNumber = 906;
      goto LABEL_28;
    }
    VidMmFlushDmaBufferPendingCPUAccess((struct VIDMM_DMA_BUFFER *)v2.QuadPart);
  }
  DmaPacket = (union _LARGE_INTEGER *)VidSchiAllocateDmaPacket(v35);
  DmaPacket[7].QuadPart = (LONGLONG)this;
  DmaPacket->LowPart = 912353622;
  DmaPacket[6] = v1;
  DmaPacket[8] = v2;
  v16.QuadPart = MEMORY[0xFFFFF78000000320];
  DmaPacket[11].HighPart = 0;
  v17 = DmaPacket[7];
  DmaPacket[10] = v16;
  DmaPacket[9].LowPart = 7;
  v16.LowPart = (*(_DWORD *)(v17.QuadPart + 72) >> 3) & 4;
  DmaPacket[11].HighPart = v16.LowPart;
  v18 = v16.LowPart | (*(_DWORD *)(v17.QuadPart + 72) >> 4) & 8;
  DmaPacket[11].HighPart = v18;
  v16.LowPart = v18 | (*(_DWORD *)(v17.QuadPart + 72) >> 8) & 0x100;
  DmaPacket[11].HighPart = v16.LowPart;
  v19 = v16.LowPart | (4 * (*(_DWORD *)(v17.QuadPart + 72) & 4));
  DmaPacket[11].HighPart = v19;
  v20 = this[16].LowPart != 0;
  DmaPacket[13] = v14;
  DmaPacket[11].LowPart = 0;
  v17.LowPart = v19 | (v20 ? 0x4000 : 0);
  DmaPacket[11].HighPart = v17.LowPart;
  DmaPacket[12].LowPart = this[14].LowPart;
  DmaPacket[15].QuadPart = (LONGLONG)v37;
  DmaPacket[16].LowPart = v34;
  DmaPacket[17] = v36;
  DmaPacket[18].LowPart = this[100].LowPart;
  DmaPacket[18].HighPart = this[100].LowPart + this[100].HighPart;
  DmaPacket[19].LowPart = this[103].LowPart;
  DmaPacket[19].HighPart = this[103].HighPart + this[103].LowPart;
  DmaPacket[20].LowPart = this[101].LowPart;
  DmaPacket[20].HighPart = this[101].HighPart;
  DmaPacket[21].LowPart = this[102].LowPart;
  DmaPacket[21].HighPart = this[102].HighPart;
  DmaPacket[14] = *(union _LARGE_INTEGER *)(v2.QuadPart + 152);
  DmaPacket[11].HighPart = v17.LowPart | ((this[9].LowPart & 0x100 | 0x200) >> 8);
  v21 = this[9].LowPart;
  if ( (v21 & 1) != 0 )
  {
LABEL_28:
    v31 = (unsigned int)this[108].HighPart;
    if ( (_DWORD)v31 != -1 && (v21 & 0x40000) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v5 + 8 * v31 + 3432) + 44488LL) != -1 )
      {
        v32 = *(void (__fastcall **)(_QWORD))(v5 + 3288);
        if ( v32 )
          v32(*(_QWORD *)(v5 + 3352));
      }
      DmaPacket[11].HighPart |= 0x800u;
    }
  }
  VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, 0);
  return (unsigned int)v8;
}
