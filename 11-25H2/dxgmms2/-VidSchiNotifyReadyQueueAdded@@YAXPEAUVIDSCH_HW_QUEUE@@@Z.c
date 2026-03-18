/*
 * XREFs of ?VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1400368A4
 * Callers:
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140011180 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001C750 (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14001CEE0 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSuspendResumeHwContext @ 0x14002B380 (VidSchiSuspendResumeHwContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiNotifyReadyQueueAdded(struct VIDSCH_HW_QUEUE *a1)
{
  __int64 v1; // rdx
  int v2; // eax
  __int64 v3; // rbx
  void (__fastcall *v4)(_QWORD); // rax

  v1 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  v2 = *(_DWORD *)(v1 + 1728);
  v3 = *(_QWORD *)(v1 + 24);
  if ( v2 == -1 || *(_DWORD *)(v3 + 68) == -1 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 28672LL, a1, v1, 0LL);
    WdLogGlobalForLineNumber = 906;
    JUMPOUT(0x140036993LL);
  }
  *(_DWORD *)(v1 + 1728) = v2 + 1;
  if ( !*((_BYTE *)a1 + 144) )
    ++*(_DWORD *)(v1 + 1732);
  ++*(_DWORD *)(v3 + 68);
  if ( *(_DWORD *)(v1 + 1728) == 1 && *(_DWORD *)(v1 + 16520) != -1 )
  {
    v4 = *(void (__fastcall **)(_QWORD))(v3 + 3312);
    if ( v4 )
      v4(*(_QWORD *)(v3 + 3352));
  }
  if ( *(_DWORD *)(v3 + 68) == 1 )
  {
    *(_QWORD *)(v3 + 1480) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 1448), 0, 0);
  }
}
