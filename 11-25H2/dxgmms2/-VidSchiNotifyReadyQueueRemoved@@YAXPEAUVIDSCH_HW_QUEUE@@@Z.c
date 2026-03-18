/*
 * XREFs of ?VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14003699C
 * Callers:
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140011180 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001C750 (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14001CEE0 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSuspendResumeHwContext @ 0x14002B380 (VidSchiSuspendResumeHwContext.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x140036730 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiNotifyReadyQueueRemoved(struct VIDSCH_HW_QUEUE *a1)
{
  __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rdx
  void (__fastcall *v6)(_QWORD, __int64, _QWORD); // rax

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  v3 = *(_DWORD *)(v2 + 1728);
  if ( !v3 || (v4 = *(_QWORD *)(v2 + 24), !*(_DWORD *)(v4 + 68)) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 4096LL, a1, v2, 0LL);
    WdLogGlobalForLineNumber = 906;
    JUMPOUT(0x140036A6BLL);
  }
  *(_DWORD *)(v2 + 1728) = v3 - 1;
  if ( !*((_BYTE *)a1 + 144) )
    --*(_DWORD *)(v2 + 1732);
  --*(_DWORD *)(v4 + 68);
  if ( !*(_DWORD *)(v2 + 1728) )
  {
    if ( !*(_DWORD *)(v2 + 1736) )
      *(_DWORD *)(v2 + 440) = 0;
    v5 = *(unsigned int *)(v2 + 16520);
    if ( (_DWORD)v5 != -1 )
    {
      v6 = *(void (__fastcall **)(_QWORD, __int64, _QWORD))(v4 + 3320);
      if ( v6 )
        v6(*(_QWORD *)(v4 + 3352), v5, 0LL);
    }
  }
}
