/*
 * XREFs of ?VidSchiProcessIsrVSyncMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x140005A14
 * Callers:
 *     VidSchiProcessIsrVSync @ 0x140005D2C (VidSchiProcessIsrVSync.c)
 * Callees:
 *     memset @ 0x140056340 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiProcessIsrVSyncMultiPlaneOverlay3(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a3,
        struct _VIDSCH_VSYNC_COOKIE *a4)
{
  __int64 EngineOrdinal; // rdi
  __int64 v6; // rcx
  __int64 v9; // rdx
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *pMultiPlaneOverlayVsyncInfo; // rax
  __int64 v11; // r9
  __int64 v12; // r8

  EngineOrdinal = a3->DmaCompleted.EngineOrdinal;
  v6 = *((unsigned int *)a1 + 38);
  if ( (unsigned int)EngineOrdinal > (unsigned int)v6 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 14LL, a1, EngineOrdinal, v6);
    WdLogGlobalForLineNumber = 906;
LABEL_8:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 14LL, a1, v12, v11);
    WdLogGlobalForLineNumber = 906;
    JUMPOUT(0x140005B34LL);
  }
  *((_QWORD *)a2 + 5542) = a3->MiracastEncodeChunkCompleted.pPrivateDriverData;
  *((_BYTE *)a4 + 124) ^= (*((_BYTE *)a4 + 124) ^ (a3->Flags.Value >> 1)) & 1;
  memset((char *)a4 + 132, 0, 0x50uLL);
  v9 = 0LL;
  *((_DWORD *)a4 + 32) = EngineOrdinal;
  while ( (unsigned int)v9 < (unsigned int)EngineOrdinal )
  {
    pMultiPlaneOverlayVsyncInfo = a3->CrtcVsyncWithMultiPlaneOverlay.pMultiPlaneOverlayVsyncInfo;
    v11 = *((unsigned int *)a1 + 38);
    v12 = *(&pMultiPlaneOverlayVsyncInfo->LayerIndex + 2 * v9);
    if ( (unsigned int)v12 >= (unsigned int)v11 )
      goto LABEL_8;
    *((_DWORD *)a4 + v9 + 33) = v12;
    *((_DWORD *)a4 + v9 + 43) = *(&pMultiPlaneOverlayVsyncInfo->Enabled + 2 * v9);
    v9 = (unsigned int)(v9 + 1);
  }
}
