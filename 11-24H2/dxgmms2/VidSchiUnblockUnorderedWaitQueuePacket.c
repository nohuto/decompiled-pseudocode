/*
 * XREFs of VidSchiUnblockUnorderedWaitQueuePacket @ 0x140037F88
 * Callers:
 *     VidSchiUnwaitMonitoredFences @ 0x14000E4E0 (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140011740 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     VidSchiSubmitWaitCommand @ 0x140013940 (VidSchiSubmitWaitCommand.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x14001F4A0 (VidSchiCleanupDeferredWaiterContext.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14002A774 (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x140037E9C (VidSchiUnblockUnorderedWaiter.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400458E8 (VidSchiUnwaitNativeFenceWaiters.c)
 *     ?VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14004A2DC (-VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14004EC5C (-VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x140048284 (VidSchiUnwaitWaitQueuePacket.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiUnblockUnorderedWaitQueuePacket(HwQueueStagingList *this, __int64 a2, char a3)
{
  __int64 v3; // rdi
  __int64 v7; // rdi
  __int64 v8; // rsi
  char v9; // cl
  __int64 v10; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 88);
  if ( v3 )
    v7 = *(_QWORD *)(v3 + 104);
  else
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 40LL) + 8LL);
  v8 = *(_QWORD *)(v7 + 32);
  v9 = *(_BYTE *)(v8 + 7059);
  if ( v9 && (*(_DWORD *)(a2 + 48) != 4 || (*(_DWORD *)(a2 + 752) & 4) == 0) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 61440LL, v8, a2, 0LL);
    WdLogGlobalForLineNumber = 906;
LABEL_20:
    result = VidSchiUnwaitWaitQueuePacket(this);
    if ( (byte_140081241 & 1) != 0 )
      result = McTemplateK0q_EtwWriteTransfer();
    _InterlockedIncrement(&gulSyncObjTimeouted);
    return result;
  }
  v10 = *(_QWORD *)(a2 + 760);
  if ( v9 )
  {
    *(LARGE_INTEGER *)(56LL * *(unsigned int *)(a2 + 744) + a2 + 296) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(56LL * *(unsigned int *)(a2 + 744) + a2 + 304) = *(_DWORD *)(a2 + 48);
    RtlCaptureStackBackTrace(1u, 5u, (PVOID *)(a2 + 56LL * *(unsigned int *)(a2 + 744) + 312), 0LL);
    *(_DWORD *)(a2 + 744) = ((unsigned __int8)*(_DWORD *)(a2 + 744) + 1) & 7;
  }
  v11 = (_QWORD *)(a2 + 768);
  v12 = *(_QWORD *)(a2 + 768);
  if ( *(_QWORD *)(v12 + 8) != a2 + 768
    || (v13 = *(_QWORD **)(a2 + 776), (_QWORD *)*v13 != v11)
    || (*v13 = v12, *(_QWORD *)(v12 + 8) = v13, v14 = *(_QWORD **)(v10 + 184), *v14 != v10 + 176) )
  {
    __fastfail(3u);
  }
  *v11 = v10 + 176;
  *(_QWORD *)(a2 + 776) = v14;
  *v14 = v11;
  *(_QWORD *)(v10 + 184) = v11;
  *(_DWORD *)(a2 + 752) &= ~4u;
  --*(_DWORD *)(v10 + 40);
  result = *(_QWORD *)(a2 + 88);
  if ( result )
  {
    --*(_DWORD *)(result + 796);
  }
  else
  {
    result = *(_QWORD *)(a2 + 96);
    if ( result )
      --*(_DWORD *)(result + 156);
  }
  --*(_DWORD *)(v7 + 1844);
  --*(_DWORD *)(v8 + 872);
  if ( a3 )
    goto LABEL_20;
  return result;
}
