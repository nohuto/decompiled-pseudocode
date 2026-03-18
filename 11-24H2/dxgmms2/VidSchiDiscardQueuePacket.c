/*
 * XREFs of VidSchiDiscardQueuePacket @ 0x1400B83F8
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1400B6414 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1400B6C90 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1400B7268 (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushPendingCommand @ 0x140105420 (VidSchFlushPendingCommand.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x14001DB80 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1400383A8 (VidSchiProcessCompletedQueuePacket.c)
 *     ?VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x1400383E8 (-VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     VidMmUnreferenceDmaBuffer @ 0x140039780 (VidMmUnreferenceDmaBuffer.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400430D0 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z @ 0x14004B554 (-DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z.c)
 *     memset @ 0x140056340 (memset.c)
 *     VidMmBeginDmaBufferCPUAccess_0 @ 0x1400F3ED0 (VidMmBeginDmaBufferCPUAccess_0.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiDiscardQueuePacket(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r13
  _DWORD *v4; // rdi
  __int64 v5; // rsi
  __int64 v7; // r12
  __int64 v8; // r15
  bool v10; // zf
  UINT v11; // ecx
  UINT v12; // eax
  __int64 v13; // rcx
  UINT v14; // eax
  void *v15; // rax
  __int64 v16; // rcx
  UINT v17; // eax
  UINT v18; // ecx
  const D3DDDI_PATCHLOCATIONLIST *v19; // rax
  int v20; // eax
  _DXGKARG_CANCELCOMMAND v21; // [rsp+38h] [rbp-39h] BYREF

  v3 = *((_QWORD *)a1 + 11);
  v4 = (_DWORD *)((char *)a1 + 72);
  v5 = *((_QWORD *)a1 + 95);
  v7 = *(_QWORD *)(v3 + 96);
  v8 = *(_QWORD *)(*(_QWORD *)(v3 + 104) + 32LL);
  if ( *(_BYTE *)(v8 + 46) )
  {
    memset(&v21, 0, sizeof(v21));
    v10 = (*v4 & 0x8000000) == 0;
    v21.hContext = *(HANDLE *)(v3 + 64);
    if ( v10 )
    {
      if ( !v5 )
        goto LABEL_3;
      v16 = *(_QWORD *)(v5 + 128);
      v21.DmaBufferSize = *(_DWORD *)(v5 + 36);
      v21.pDmaBufferPrivateData = *(void **)(v5 + 120);
      v21.DmaBufferPrivateDataSize = *(_DWORD *)(v16 + 72);
      VidMmBeginDmaBufferCPUAccess_0(v16, v5, &v21.pDmaBuffer);
      v17 = *((_DWORD *)a1 + 201);
      v18 = *((_DWORD *)a1 + 206);
      v21.DmaBufferSubmissionStartOffset = 0;
      v21.DmaBufferSubmissionEndOffset = v17;
      v21.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v5 + 104);
      v21.AllocationListSize = *((_DWORD *)a1 + 203);
      v19 = *(const D3DDDI_PATCHLOCATIONLIST **)(v5 + 112);
      v21.DmaBufferPrivateDataSubmissionStartOffset = v18;
      v21.PatchLocationListSubmissionStart = 0;
      v21.pPatchLocationList = v19;
      v21.PatchLocationListSize = *(_DWORD *)(v5 + 44);
      v21.PatchLocationListSubmissionLength = v21.PatchLocationListSize;
      v21.DmaBufferPrivateDataSubmissionEndOffset = v21.DmaBufferPrivateDataSize + v18;
    }
    else
    {
      v11 = *((_DWORD *)a1 + 201);
      v21.DmaBufferVirtualAddress = *((_QWORD *)a1 + 99);
      v12 = *((_DWORD *)a1 + 208);
      v21.DmaBufferSize = v11;
      v21.DmaBufferSubmissionEndOffset = v11;
      v13 = *((_QWORD *)a1 + 96);
      v21.DmaBufferUmdPrivateDataSize = v12;
      v14 = *((_DWORD *)a1 + 207);
      v21.DmaBufferPrivateDataSubmissionEndOffset = v14;
      if ( v13 )
      {
        v21.DmaBufferPrivateDataSize = *(_DWORD *)(v13 + 8);
        v15 = (void *)(v13 + 16);
      }
      else if ( v5 )
      {
        v21.DmaBufferPrivateDataSize = v14;
        v15 = *(void **)(v5 + 120);
      }
      else
      {
        v21.DmaBufferPrivateDataSize = 0;
        v15 = 0LL;
      }
      v21.pDmaBufferPrivateData = v15;
    }
    v20 = ADAPTER_RENDER::DdiCancelCommand(*(ADAPTER_RENDER **)(v8 + 8), &v21);
    if ( v20 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 9LL, v20, &v21, a1);
      WdLogGlobalForLineNumber = 906;
LABEL_20:
      VidSchiFreeHistoryBufferStorage(a1);
      return VidSchiProcessCompletedQueuePacket(a1, a2, a3);
    }
  }
  if ( v5 && !*((_DWORD *)a1 + 12) )
    VidMmUnreferenceDmaBuffer(v5, 0);
LABEL_3:
  if ( (*v4 & 0x100) != 0 )
  {
    VidMmReleaseDmaBuffer((struct VIDMM_DMA_BUFFER *)v5, *((_DWORD *)a1 + 12) == 8);
    VidSchiSignalRegisteredEvent(v8, (struct _KEVENT **)(v3 + 376));
    VidSchiSignalRegisteredEvent(v8, (struct _KEVENT **)(v7 + 408));
    VidSchiSignalRegisteredEvent(v8, (struct _KEVENT **)(v8 + 1896));
    *(_QWORD *)(v3 + 352) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 320), 0, 0);
    *(_QWORD *)(v7 + 272) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v7 + 240), 0, 0);
    *(_QWORD *)(v8 + 1704) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v8 + 1672), 0, 0);
    VidSchiSignalRegisteredEvent(v8, (struct _KEVENT **)(v8 + 1944));
  }
  *((_DWORD *)a1 + 20) |= 0x20u;
  if ( *((_QWORD *)a1 + 36) )
    goto LABEL_20;
  return VidSchiProcessCompletedQueuePacket(a1, a2, a3);
}
