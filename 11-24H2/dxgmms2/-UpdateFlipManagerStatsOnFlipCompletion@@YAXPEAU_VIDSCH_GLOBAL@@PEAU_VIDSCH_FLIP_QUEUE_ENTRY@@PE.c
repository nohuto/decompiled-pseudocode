/*
 * XREFs of ?UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IW4_VIDSCH_FLIP_STATUS@@@Z @ 0x14002CD68
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14002AB90 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     ?GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_K0@Z @ 0x14000C710 (-GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_K0@Z.c)
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x14000C930 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     ?GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z @ 0x14000CDEC (-GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z.c)
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x14002CF78 (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     McTemplateK0xxdtxi_EtwWriteTransfer @ 0x14004F640 (McTemplateK0xxdtxi_EtwWriteTransfer.c)
 */

__int64 __fastcall UpdateFlipManagerStatsOnFlipCompletion(
        struct _VIDSCH_GLOBAL *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  __int64 result; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rbp
  unsigned __int64 QuadPart; // rdi
  int v13; // ecx
  int v14; // r8d
  unsigned __int64 CurrentVSyncPeriodQpc; // r12
  _QWORD *v16; // r15
  unsigned __int64 *v17; // r14
  int v18; // edx
  unsigned __int64 v19; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+98h] [rbp+10h] BYREF

  result = (__int64)GetFlipManagerAuxiliaryPresentInfo(*(struct _D3DKMT_AUXILIARYPRESENTINFO **)(a2 + 1344));
  v10 = 0LL;
  v11 = result;
  if ( !result )
    return result;
  QuadPart = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  if ( !a5 )
  {
    CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(a1, a4, 0);
    if ( *(_DWORD *)(a3 + 3192) == -1 || !*((_BYTE *)a1 + 7058) || (v16 = (_QWORD *)(a2 + 1320), *(_QWORD *)(a2 + 1320)) )
    {
      v17 = (unsigned __int64 *)(a2 + 1112);
      QuadPart = *(_QWORD *)(a2 + 1112);
      v16 = (_QWORD *)(a2 + 1320);
      v20 = QuadPart;
    }
    else
    {
      v17 = (unsigned __int64 *)(a2 + 1112);
      if ( (int)VIDSCH_VSYNC_SMOOTHER::GetSmoothenedFrameTimeQpc(
                  *(VIDSCH_VSYNC_SMOOTHER **)(a3 + 44408),
                  *(_QWORD *)(a2 + 1128),
                  *(_QWORD *)(a2 + 1112),
                  &v20,
                  CurrentVSyncPeriodQpc) >= 0 )
      {
        QuadPart = v20;
      }
      else
      {
        QuadPart = *v17;
        v20 = *v17;
      }
      if ( (int)VIDSCH_VSYNC_SMOOTHER::GetSmoothenedDurationQpc(
                  *(VIDSCH_VSYNC_SMOOTHER **)(a3 + 44408),
                  CurrentVSyncPeriodQpc,
                  &v19) >= 0 )
      {
        v10 = v19;
LABEL_13:
        if ( (*(_DWORD *)(a2 + 1152) & 0x100) != 0 )
        {
          QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
          v20 = QuadPart;
        }
        v18 = *(_DWORD *)(a3 + 3192);
        result = -1LL;
        if ( v18 == -1 )
          v10 = -1LL;
        v19 = v10;
        if ( (byte_140081241 & 1) != 0 )
          result = McTemplateK0xxdtxi_EtwWriteTransfer(
                     v13,
                     v18,
                     v14,
                     *v17,
                     *v16,
                     v18,
                     BYTE1(*(_DWORD *)(a2 + 1152)) & 1,
                     QuadPart,
                     v10);
        goto LABEL_19;
      }
    }
    v10 = CurrentVSyncPeriodQpc;
    goto LABEL_13;
  }
LABEL_19:
  *(_DWORD *)(v11 + 36) = 1;
  *(_QWORD *)(v11 + 40) = QuadPart;
  if ( v10 > 0xFFFFFFFF )
  {
    result = WdLogSingleEntry1(3LL, v10);
    WdLogGlobalForLineNumber = 7016;
  }
  *(_DWORD *)(v11 + 48) = v10;
  return result;
}
