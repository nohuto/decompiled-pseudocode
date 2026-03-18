/*
 * XREFs of BmlGetNextBestTargetMode @ 0x1402D37C8
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1402C4010 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlPinNextBestTargetMode @ 0x1402D3EC4 (BmlPinNextBestTargetMode.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140038FF0 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x140042750 (-GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14004A1A0 (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x140184A4C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     BmlDetermineBoostMultiplier @ 0x140262514 (BmlDetermineBoostMultiplier.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1402625B8 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModes @ 0x1402C7B9C (BmlCompareTargetModes.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x14037DD70 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 */

__int64 __fastcall BmlGetNextBestTargetMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        DMMVIDPNTARGETMODESET *a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        D3DDDI_RATIONAL *a8,
        _DWORD *a9)
{
  __int64 v10; // rbp
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edi
  __int64 v17; // rdx
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // r14
  _QWORD *v23; // rbp
  struct DMMVIDPNTARGETMODE *NextMode; // rbp
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _DWORD *v38; // rdx
  int v39; // ebp
  bool refreshed; // al
  const struct _D3DDDI_RATIONAL *v41; // rdx
  D3DDDI_RATIONAL PresentationVSync; // rax
  char v43; // r8
  __int64 v44; // rsi
  D3DDDI_RATIONAL v45; // rax
  unsigned int v46; // r9d
  __int64 v47; // rcx
  UINT v48; // edx
  struct DXGADAPTER *ContainingAdapter; // rax
  unsigned __int16 v51; // [rsp+80h] [rbp+18h]
  D3DDDI_RATIONAL v52; // [rsp+90h] [rbp+28h]
  char v53; // [rsp+98h] [rbp+30h]

  v51 = a3;
  v10 = (unsigned __int16)a3;
  v13 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v16 = 1;
  *(_QWORD *)(v13 + 24) = a4;
  *(_QWORD *)(v13 + 32) = a6;
  WdLogGlobalForLineNumber = 2698;
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2701;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2702;
  }
  v17 = a5;
  if ( !*(_QWORD *)(a5 + 144) )
  {
    WdLogSingleEntry2(1LL, a5, v10);
    result = 3223192328LL;
    WdLogGlobalForLineNumber = 2707;
    return result;
  }
  v19 = 0xFFFFFFFFLL;
  v20 = 0LL;
  *a7 = -1;
  if ( a6 != -1 )
  {
    v20 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)a4 + 24, a6);
    if ( !v20 )
    {
      WdLogNewEntry5_WdTrace(v19, v17, v14, v15);
      result = 3223192337LL;
      WdLogGlobalForLineNumber = 2724;
      return result;
    }
  }
  v21 = 0LL;
  v22 = 120 * v10;
  v53 = 0;
  *(_DWORD *)(v22 + a1 + 100) = 0;
  *(_DWORD *)(v22 + a1 + 104) = 0;
  if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
  {
    WdLogNewEntry5_WdTrace(v19, v17, v14, v15);
    WdLogGlobalForLineNumber = 2745;
    v53 = 1;
  }
  v23 = (_QWORD *)*((_QWORD *)a4 + 6);
  if ( v23 != (_QWORD *)((char *)a4 + 48) )
  {
    NextMode = (struct DMMVIDPNTARGETMODE *)(v23 - 1);
    if ( NextMode )
    {
      do
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v17, v14, v15);
        v25[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
        v25[4] = *((unsigned int *)NextMode + 21);
        v25[5] = *((unsigned int *)NextMode + 22);
        v26 = *((unsigned int *)NextMode + 23);
        v25[6] = v26;
        v25[7] = *((unsigned int *)NextMode + 24);
        WdLogGlobalForLineNumber = 2758;
        v29 = WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
        v33 = *((unsigned int *)NextMode + 32);
        *(_QWORD *)(v29 + 24) = v33;
        ++*(_DWORD *)(v22 + a1 + 100);
        WdLogGlobalForLineNumber = 2760;
        if ( NextMode == (struct DMMVIDPNTARGETMODE *)v20
          || !BmlDoesTargetModeObeyConstraint(a1, v51, (__int64)NextMode) )
        {
          WdLogNewEntry5_WdTrace(v33, v30, v31, v32);
          WdLogGlobalForLineNumber = 2768;
        }
        else
        {
          ++*(_DWORD *)(v22 + a1 + 104);
          if ( (unsigned int)BmlCompareTargetModes(a1, a2, v51, (__int64)NextMode, v21, v53) == 1
            && (!v20 || (unsigned int)BmlCompareTargetModes(a1, a2, v51, (__int64)NextMode, v20, v53) == -1) )
          {
            WdLogNewEntry5_WdTrace(v35, v34, v36, v37);
            WdLogGlobalForLineNumber = 2797;
            v21 = (__int64)NextMode;
          }
        }
        NextMode = DMMVIDPNTARGETMODESET::GetNextMode(a4, NextMode);
      }
      while ( NextMode );
      if ( v21 )
      {
        v38 = *(_DWORD **)(v22 + a1 + 16);
        *a7 = *(_DWORD *)(v21 + 24);
        if ( (*v38 & 0x1000000) == 0 )
        {
          PresentationVSync = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v21 + 72));
          *a9 = 1;
          if ( (v43 & 1) != 0 )
          {
            v44 = v21;
            *a8 = PresentationVSync;
            if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)v21)
              && (unsigned int)BmlDetermineBoostMultiplier(v21, (unsigned int *)&qword_14015C358) )
            {
              v45 = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v21 + 72));
              v47 = qword_14015C358;
              v52.Numerator = v45.Numerator;
              v48 = v46 * v45.Denominator;
              if ( v46 > 1 && __PAIR64__(v48, v45.Numerator) == qword_14015C358 )
              {
                v52.Denominator = v46 * v45.Denominator;
                *a8 = v52;
                *a9 = v46;
              }
              else if ( v45.Numerator * (unsigned __int64)(unsigned int)dword_14015C34C < (unsigned int)dword_14015C348
                                                                                        * (unsigned __int64)(v48 + v45.Denominator) )
              {
                if ( v46 > 1 )
                {
                  if ( v45.Numerator * (unsigned __int64)HIDWORD(qword_14015C350) < (unsigned int)qword_14015C350
                                                                                  * (unsigned __int64)v48
                    || __PAIR64__(v48, v45.Numerator) == qword_14015C350 )
                  {
                    *a9 = v46;
                    v52.Denominator = v46 * v45.Denominator;
                    *a8 = v52;
                  }
                  else
                  {
                    *a9 = v46;
                    *a8 = (D3DDDI_RATIONAL)v47;
                  }
                }
              }
              else
              {
                v52.Denominator = v48 + v45.Denominator;
                *a8 = v52;
                *a9 = v46 + 1;
              }
            }
            goto LABEL_48;
          }
          *a8 = PresentationVSync;
LABEL_47:
          v44 = v21;
LABEL_48:
          ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(a2 + 48));
          DxgkLogCodePointPacket(
            0x21u,
            v51,
            *(_DWORD *)(v44 + 84),
            *(_DWORD *)(v44 + 88),
            *(_QWORD *)((char *)ContainingAdapter + 412));
          return 0LL;
        }
        v39 = v38[60];
        if ( v39 == -1 )
          v39 = BmlDetermineBoostMultiplier(v21, v38 + 56);
        if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)v21) )
        {
          refreshed = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
                        (DMMVIDPNTARGETMODE *)v21,
                        (const struct _D3DDDI_RATIONAL *)(*(_QWORD *)(v22 + a1 + 16) + 224LL));
          v41 = (const struct _D3DDDI_RATIONAL *)(*(_QWORD *)(v22 + a1 + 16) + 224LL);
          if ( refreshed )
          {
            v16 = v39;
            *a8 = *v41;
LABEL_32:
            *a9 = v16;
            goto LABEL_47;
          }
          if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)v21, v41) )
          {
            *a8 = *(D3DDDI_RATIONAL *)(*(_QWORD *)(v22 + a1 + 16) + 224LL);
            goto LABEL_32;
          }
        }
        *a8 = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v21 + 72));
        goto LABEL_32;
      }
    }
  }
  WdLogNewEntry5_WdTrace(v19, v17, v14, v15);
  result = 3223192326LL;
  WdLogGlobalForLineNumber = 2954;
  return result;
}
