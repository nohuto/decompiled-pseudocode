/*
 * XREFs of ?VidMmReferenceDisplayingAllocation@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DISPLAYING_ALLOCATION@@_K2@Z @ 0x14003B134
 * Callers:
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x14003A8E8 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14001A3B0 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

void __fastcall VidMmReferenceDisplayingAllocation(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_DISPLAYING_ALLOCATION *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  struct _VIDSCH_SYNC_OBJECT **v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v13 = a3;
  v4 = *((_QWORD *)a2 + 1);
  v7 = *(struct _VIDSCH_SYNC_OBJECT ***)(v4 + 32);
  if ( v7 )
  {
    if ( a3 && (int)VidSchiSignalSyncObjectsFromCpu(a1, 1u, v7, 0, (char *)&v13, 0LL) < 0 )
    {
      WdLogSingleEntry2(1LL, **(_QWORD **)(*((_QWORD *)a2 + 1) + 32LL), v13);
      WdLogGlobalForLineNumber = 30026;
      DxgkLogInternalTriageEvent(v12, 0x40000LL);
    }
    v9 = *((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 5) = a4;
    v10 = *(_QWORD *)(v9 + 32);
    v11 = 2LL * *(unsigned int *)(v10 + 32);
    *(_OWORD *)(v10 + 8 * v11 + 40) = 0LL;
    *(_DWORD *)(v10 + 32) = ((unsigned __int8)*(_DWORD *)(v10 + 32) + 1) & 7;
    *(_DWORD *)(v10 + 8 * v11 + 40) = 1;
    *(_QWORD *)(v10 + 8 * v11 + 48) = a4;
  }
  else
  {
    v8 = *(_QWORD *)(v4 + 24);
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  }
}
