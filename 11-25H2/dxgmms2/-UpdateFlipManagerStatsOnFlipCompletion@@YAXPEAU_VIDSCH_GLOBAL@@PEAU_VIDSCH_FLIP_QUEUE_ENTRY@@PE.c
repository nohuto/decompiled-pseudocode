/*
 * XREFs of ?UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IW4_VIDSCH_FLIP_STATUS@@@Z @ 0x14000C3A4
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x14000C59C (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     ?GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z @ 0x1400162B8 (-GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z.c)
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x140016400 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     ?GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_K0@Z @ 0x1400181F0 (-GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_K0@Z.c)
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14004F674 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0xxdtxi_EtwWriteTransfer @ 0x14004FD58 (McTemplateK0xxdtxi_EtwWriteTransfer.c)
 */

__int64 __fastcall UpdateFlipManagerStatsOnFlipCompletion(
        struct _VIDSCH_GLOBAL *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  __int64 result; // rax
  __int64 v10; // r14
  unsigned __int64 QuadPart; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 CurrentVSyncPeriodQpc; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  unsigned __int64 v17; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v18; // [rsp+98h] [rbp+38h] BYREF

  result = (__int64)GetFlipManagerAuxiliaryPresentInfo(*(struct _D3DKMT_AUXILIARYPRESENTINFO **)(a2 + 1344));
  v10 = result;
  if ( !result )
    return result;
  QuadPart = 0LL;
  v12 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  if ( !a5 )
  {
    CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(a1, a4, 0);
    v12 = CurrentVSyncPeriodQpc;
    if ( *(_DWORD *)(a3 + 3192) == -1 || !*((_BYTE *)a1 + 7058) || *(_QWORD *)(a2 + 1320) )
    {
      QuadPart = *(_QWORD *)(a2 + 1112);
      v18 = QuadPart;
    }
    else
    {
      if ( (int)VIDSCH_VSYNC_SMOOTHER::GetSmoothenedFrameTimeQpc(
                  *(VIDSCH_VSYNC_SMOOTHER **)(a3 + 44408),
                  *(_QWORD *)(a2 + 1128),
                  *(_QWORD *)(a2 + 1112),
                  &v18,
                  CurrentVSyncPeriodQpc) >= 0 )
      {
        QuadPart = v18;
      }
      else
      {
        QuadPart = *(_QWORD *)(a2 + 1112);
        v18 = QuadPart;
      }
      if ( (int)VIDSCH_VSYNC_SMOOTHER::GetSmoothenedDurationQpc(*(VIDSCH_VSYNC_SMOOTHER **)(a3 + 44408), v12, &v17) >= 0 )
      {
        v12 = v17;
        goto LABEL_13;
      }
    }
    v17 = v12;
LABEL_13:
    result = Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline();
    if ( (_DWORD)result )
    {
      if ( (*(_DWORD *)(a2 + 1152) & 0x100) != 0 )
      {
        QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
        v18 = QuadPart;
      }
      v16 = *(_DWORD *)(a3 + 3192);
      result = -1LL;
      if ( v16 == -1 )
        v12 = -1LL;
      v17 = v12;
      if ( (byte_140081241 & 1) != 0 )
        result = McTemplateK0xxdtxi_EtwWriteTransfer(
                   v14,
                   v16,
                   v15,
                   *(_QWORD *)(a2 + 1112),
                   *(_QWORD *)(a2 + 1320),
                   v16,
                   BYTE1(*(_DWORD *)(a2 + 1152)) & 1,
                   QuadPart,
                   v12);
    }
  }
  *(_DWORD *)(v10 + 36) = 1;
  *(_QWORD *)(v10 + 40) = QuadPart;
  if ( v12 > 0xFFFFFFFF )
  {
    result = WdLogSingleEntry1(3LL, v12);
    WdLogGlobalForLineNumber = 7003;
  }
  *(_DWORD *)(v10 + 48) = v12;
  return result;
}
