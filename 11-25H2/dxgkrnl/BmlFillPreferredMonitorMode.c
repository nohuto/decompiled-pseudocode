/*
 * XREFs of BmlFillPreferredMonitorMode @ 0x1402C9BA0
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1402C4010 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1402C80F4 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     ?MonitorGetNextFrequencyRange@@YAJPEAUHDXGMONITOR__@@PEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU2@@Z @ 0x1402C87E0 (-MonitorGetNextFrequencyRange@@YAJPEAUHDXGMONITOR__@@PEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPE.c)
 *     BmlIsLowResAnalogTvOutput @ 0x1402C97D4 (BmlIsLowResAnalogTvOutput.c)
 *     BmlIsEDIDCapableOutputTechonology @ 0x1402C9A00 (BmlIsEDIDCapableOutputTechonology.c)
 *     BmlGetMonitorModePreference @ 0x1402C9A54 (BmlGetMonitorModePreference.c)
 *     ?MonitorGetNextMonitorSourceMode@@YAJPEAUHDXGMONITOR__@@PEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@PEAW4_D3DKMDT_MONITOR_TIMING_TYPE@@@Z @ 0x1402C9E80 (-MonitorGetNextMonitorSourceMode@@YAJPEAUHDXGMONITOR__@@PEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEB.c)
 */

__int64 __fastcall BmlFillPreferredMonitorMode(__int64 a1, unsigned int a2, __int64 a3)
{
  void *v3; // rdi
  UINT cx; // r14d
  UINT cy; // r12d
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v7; // rdx
  int v8; // r13d
  struct HDXGMONITOR__ *v9; // rcx
  int NextFrequencyRange; // eax
  int v11; // esi
  D3DKMDT_2DREGION ActiveSize; // rbx
  __int64 v13; // r10
  struct HDXGMONITOR__ *v14; // rcx
  int NextMonitorSourceMode; // eax
  int MonitorModePreference; // eax
  char v17; // r11
  char v18; // cl
  int v19; // ecx
  unsigned int v20; // r11d
  unsigned int v21; // r10d
  __int64 v22; // rdx
  int v24; // eax
  __int64 v25; // rcx
  enum _D3DKMDT_MONITOR_TIMING_TYPE v26; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-30h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v28; // [rsp+30h] [rbp-28h] BYREF
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v29; // [rsp+38h] [rbp-20h] BYREF
  D3DKMDT_2DREGION v30; // [rsp+40h] [rbp-18h]
  int v33; // [rsp+B0h] [rbp+58h]
  __int64 v34; // [rsp+B0h] [rbp+58h]
  char v35; // [rsp+B8h] [rbp+60h]

  v3 = 0LL;
  cx = 0;
  v27 = 0LL;
  cy = 0;
  v30 = 0LL;
  if ( !*(_QWORD *)(a3 + 112) )
    return 3223192376LL;
  v33 = 0;
  v7 = 0LL;
  v35 = 0;
  v29 = 0LL;
  v8 = -1;
  while ( 1 )
  {
    v9 = *(struct HDXGMONITOR__ **)(a3 + 112);
    if ( !v9 )
    {
      v29 = 0LL;
      v11 = -1071774920;
LABEL_46:
      WdLogSingleEntry3(2LL, v3, *(_QWORD *)(a3 + 112), v11);
      WdLogGlobalForLineNumber = 990;
      return (unsigned int)v11;
    }
    NextFrequencyRange = MonitorGetNextFrequencyRange(v9, v7, (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)&v29);
    v11 = NextFrequencyRange;
    if ( NextFrequencyRange == 1075708748 )
      break;
    if ( NextFrequencyRange < 0 )
    {
      v3 = v29;
      goto LABEL_46;
    }
    v7 = v29;
    if ( v29->ConstraintType == D3DKMDT_MFRC_ACTIVESIZE )
    {
      if ( cx < v29->Constraint.ActiveSize.cx )
        cx = v29->Constraint.ActiveSize.cx;
      if ( cy < v29->Constraint.ActiveSize.cy )
        cy = v29->Constraint.ActiveSize.cy;
    }
  }
  ActiveSize = v30;
  v13 = 0LL;
  v28 = 0LL;
  v26 = D3DKMDT_MTT_UNINITIALIZED;
  while ( 1 )
  {
    v14 = *(struct HDXGMONITOR__ **)(a3 + 112);
    if ( !v14 )
    {
      v28 = 0LL;
      v11 = -1071774920;
      v26 = D3DKMDT_MTT_UNINITIALIZED;
LABEL_48:
      WdLogSingleEntry3(2LL, v3, *(_QWORD *)(a3 + 112), v11);
      WdLogGlobalForLineNumber = 1023;
      return (unsigned int)v11;
    }
    NextMonitorSourceMode = MonitorGetNextMonitorSourceMode(
                              v14,
                              (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)v13,
                              (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v28,
                              &v26);
    v11 = NextMonitorSourceMode;
    if ( NextMonitorSourceMode == 1075708748 )
      break;
    if ( NextMonitorSourceMode < 0 )
    {
      v3 = v28;
      goto LABEL_48;
    }
    if ( v28->Preference == D3DKMDT_MP_PREFERRED && v28->Origin == D3DKMDT_MCO_DRIVER )
    {
      ++v33;
      ActiveSize = v28->VideoSignalInfo.ActiveSize;
    }
    MonitorModePreference = BmlGetMonitorModePreference((__int64)v28, v26, a3);
    v18 = v35;
    if ( MonitorModePreference == 11 )
      v18 = v17;
    v35 = v18;
    v19 = 0;
    if ( MonitorModePreference != 11 )
      v19 = MonitorModePreference;
    if ( v19 > v8 )
    {
      v8 = v19;
      v27 = *(_QWORD *)(v13 + 20);
    }
    if ( cx < *(_DWORD *)(v13 + 20) )
      cx = *(_DWORD *)(v13 + 20);
    if ( cy < *(_DWORD *)(v13 + 24) )
      cy = *(_DWORD *)(v13 + 24);
  }
  if ( v33 == 1 && (v35 || BmlIsEDIDCapableOutputTechonology(a3) && v8 >= 8) )
  {
    v8 = 11;
    v27 = (unsigned __int64)ActiveSize;
  }
  if ( BmlIsLowResAnalogTvOutput(a3) )
  {
    if ( cx < 0x400 )
      cx = 1024;
    if ( cy < 0x300 )
      cy = 768;
    v24 = BmlCompareModeExtents((int *)&qword_14012C420, &v27);
    v25 = v27;
    if ( v24 == 1 )
      v25 = 0x30000000400LL;
    v27 = v25;
  }
  if ( v8 < 8 )
  {
    if ( BmlIsLowResAnalogTvOutput(a3) )
    {
      v21 = 800;
      v20 = 600;
    }
    v27 = __PAIR64__(v20, v21);
  }
  else
  {
    v20 = HIDWORD(v27);
    v21 = v27;
  }
  if ( cx < v21 )
    cx = v21;
  LODWORD(v34) = cx;
  if ( cy < v20 )
    cy = v20;
  v22 = 120LL * a2;
  HIDWORD(v34) = cy;
  *(_QWORD *)(v22 + a1 + 52) = v27;
  *(_QWORD *)(v22 + a1 + 44) = v34;
  return 1075708748LL;
}
