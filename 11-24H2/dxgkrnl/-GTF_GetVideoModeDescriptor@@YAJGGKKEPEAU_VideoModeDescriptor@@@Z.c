/*
 * XREFs of ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x14003D308
 * Callers:
 *     ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x14003D1B4 (-ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EP.c)
 *     ?ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PEAU_VideoModeDescriptor@@@Z @ 0x140098A40 (-ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PE.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@MonitorModes@DxgMonitor@@AEAAJXZ @ 0x1403E9134 (-_CreateDefaultMonitorProfileForWDDMv1_0@MonitorModes@DxgMonitor@@AEAAJXZ.c)
 * Callees:
 *     ?GTF_UsingVerticalRefreshFrequency_Stage1@MonDescParser@@YAXJJJJJPEAU_GTF_WORKSET@1@@Z @ 0x14003D46C (-GTF_UsingVerticalRefreshFrequency_Stage1@MonDescParser@@YAXJJJJJPEAU_GTF_WORKSET@1@@Z.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall GTF_GetVideoModeDescriptor(
        unsigned __int16 a1,
        unsigned __int16 a2,
        ULONG a3,
        ULONG a4,
        BOOLEAN a5,
        struct _VideoModeDescriptor *a6)
{
  int v7; // esi
  int v8; // ebp
  __int64 v10; // r11
  int v11; // ecx
  int v12; // r8d
  int v13; // eax
  struct MonDescParser::_GTF_WORKSET *v15[30]; // [rsp+30h] [rbp-F8h] BYREF

  v7 = a2;
  v8 = a1;
  memset(v15, 0, 0xE8uLL);
  if ( !a6 || !(_WORD)v8 || !(_WORD)v7 || !a3 || !a4 )
    return 3221225485LL;
  a6->IsInterlaced = a5;
  a6->VideoStandardType = 2;
  a6->HorizontalActivePixels = v8;
  a6->VerticalActivePixels = v7;
  a6->VerticalRefreshRateNumerator = a3;
  a6->VerticalRefreshRateDenominator = a4;
  MonDescParser::GTF_UsingVerticalRefreshFrequency_Stage1(
    (MonDescParser *)a5,
    v8,
    v7,
    a3,
    a4,
    (MonDescParser *)v15,
    v15[0]);
  v11 = 10000;
  v12 = -(int)(*(double *)&v15[5] * 10000.0);
  if ( (int)(*(double *)&v15[5] * 10000.0) > 0 )
    v12 = (int)(*(double *)&v15[5] * 10000.0);
  while ( v11 )
  {
    v12 %= v11;
    if ( !v12 )
      goto LABEL_10;
    v11 %= v12;
  }
  v11 = v12;
LABEL_10:
  *(_DWORD *)(v10 + 12) = (int)(*(double *)&v15[5] * 10000.0) / v11;
  v13 = (int)*(double *)&v15[13];
  *(_DWORD *)(v10 + 16) = (unsigned __int16)(10000 / v11);
  *(_DWORD *)v10 = v13;
  *(_WORD *)(v10 + 24) = (int)*(double *)&v15[4];
  *(_WORD *)(v10 + 26) = (int)*(double *)&v15[19];
  return 0LL;
}
