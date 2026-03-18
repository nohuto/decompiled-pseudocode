/*
 * XREFs of _BmlGetPathModeListForPathTargetModes @ 0x1402DC488
 * Callers:
 *     _BmlGetPathModeListForPath @ 0x1402DC9A4 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14000BD78 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14000BDB4 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x140034864 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1400390E0 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x140042210 (-GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x140049918 (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x140186D9C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1402694B8 (BmlDoesTargetModeObeyConstraint.c)
 *     _BmlBuildVirtualRefreshRateListFromTargetModeSet @ 0x14026999C (_BmlBuildVirtualRefreshRateListFromTargetModeSet.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1402DBB50 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1402DBE68 (BmlUnPinPartialPathModalityOnPath.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1403168E0 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     BmlPinPathContentScaling @ 0x14038B9E0 (BmlPinPathContentScaling.c)
 *     BmlPinPathContentRotation @ 0x14038BBEC (BmlPinPathContentRotation.c)
 *     ?AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1403D3E28 (-AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z.c)
 */

__int64 __fastcall BmlGetPathModeListForPathTargetModes(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        CCD_MODE_RESULT_SET *a5)
{
  int refreshed; // esi
  __int64 v6; // r13
  __int64 v8; // r12
  __int64 v10; // rbx
  __int64 result; // rax
  struct DMMVIDPNTARGETMODESET *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // eax
  struct DMMVIDPNTARGETMODE *v23; // rax
  struct DMMVIDPNTARGETMODESET *v24; // r14
  struct DMMVIDPNTARGETMODE *NextMode; // r14
  _QWORD *v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r12
  __int64 v31; // rbx
  __int64 v32; // r12
  int v33; // ebx
  int v34; // eax
  char v35; // bl
  int v36; // ecx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  D3DDDI_RATIONAL v43; // r8
  __int64 i; // r12
  struct DMMVIDPNTARGETMODE *v45; // [rsp+20h] [rbp-A1h]
  __int64 v46; // [rsp+28h] [rbp-99h]
  VIDPN_MGR *v47; // [rsp+30h] [rbp-91h]
  DMMVIDPNSOURCEMODE *v48; // [rsp+38h] [rbp-89h]
  struct _D3DDDI_RATIONAL PresentationVSync; // [rsp+40h] [rbp-81h] BYREF
  struct DMMVIDPNTARGETMODESET *v50; // [rsp+48h] [rbp-79h] BYREF
  struct DMMVIDPNTARGETMODESET *v51; // [rsp+50h] [rbp-71h] BYREF
  _OWORD v52[11]; // [rsp+60h] [rbp-61h] BYREF
  void *v53; // [rsp+120h] [rbp+5Fh] BYREF
  __int64 v54; // [rsp+128h] [rbp+67h]
  char v55; // [rsp+130h] [rbp+6Fh]
  unsigned __int64 v56; // [rsp+138h] [rbp+77h] BYREF

  v54 = a2;
  refreshed = 0;
  v6 = a3;
  v8 = 120LL * a3;
  v47 = *(VIDPN_MGR **)(a2 + 48);
  v46 = v8;
  if ( !v47 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6591;
  }
  v51 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a4 + 88));
  v10 = (__int64)v51;
  if ( !v51 )
  {
    WdLogSingleEntry1(2LL, v6);
    result = 3223192328LL;
    WdLogGlobalForLineNumber = 6596;
    return result;
  }
  v12 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a4 + 96));
  v50 = v12;
  v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
  v17[3] = v12;
  v17[4] = *(unsigned __int16 *)(v8 + a1 + 68);
  v21 = *(unsigned __int16 *)(v8 + a1 + 70);
  v17[5] = v21;
  WdLogGlobalForLineNumber = 6602;
  if ( !v12 )
  {
    refreshed = -1071774967;
    goto LABEL_47;
  }
  if ( *((struct DMMVIDPNTARGETMODESET **)v12 + 6) != (struct DMMVIDPNTARGETMODESET *)((char *)v12 + 48) )
  {
    if ( !*(_QWORD *)(v10 + 144) )
    {
      WdLogSingleEntry2(1LL, v10, v6);
      WdLogGlobalForLineNumber = 6618;
      refreshed = -1071774968;
      goto LABEL_47;
    }
    v22 = *(_DWORD *)(a1 + 8);
    v55 = 0;
    if ( (v22 & 8) != 0 )
    {
      WdLogNewEntry5_WdTrace(v21, v18, v19, v20);
      WdLogGlobalForLineNumber = 6629;
      v55 = 1;
    }
    v48 = *(DMMVIDPNSOURCEMODE **)(v10 + 144);
    v23 = (struct DMMVIDPNTARGETMODE *)*((_QWORD *)v12 + 18);
    v56 = 0LL;
    v53 = 0LL;
    v45 = v23;
    v24 = (struct DMMVIDPNTARGETMODESET *)*((_QWORD *)v12 + 6);
    if ( v24 == (struct DMMVIDPNTARGETMODESET *)((char *)v12 + 48) )
      NextMode = 0LL;
    else
      NextMode = (struct DMMVIDPNTARGETMODESET *)((char *)v24 - 8);
    while ( 1 )
    {
      if ( !NextMode )
        goto LABEL_46;
      v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v18, v19, v20);
      v26[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
      v26[4] = *((unsigned int *)NextMode + 21);
      v29 = *((unsigned int *)NextMode + 22);
      v26[5] = v29;
      v26[6] = *((unsigned int *)NextMode + 23);
      v26[7] = *((unsigned int *)NextMode + 24);
      ++*(_DWORD *)(v46 + a1 + 100);
      v30 = *(_QWORD *)(v46 + a1 + 16);
      WdLogGlobalForLineNumber = 6643;
      if ( v45 && v45 != NextMode || !BmlDoesTargetModeObeyConstraint(a1, v6, (__int64)NextMode) )
      {
        WdLogNewEntry5_WdTrace(v29, v26, v27, v28);
        WdLogGlobalForLineNumber = 6652;
        goto LABEL_26;
      }
      ++*(_DWORD *)(v46 + a1 + 104);
      v31 = *((unsigned int *)NextMode + 6);
      if ( v45 )
      {
        refreshed = 0;
      }
      else
      {
        refreshed = VIDPN_MGR::PinVidPnTargetMode(v47, v12, v31, 1);
        if ( refreshed < 0 )
        {
          refreshed = 0;
          goto LABEL_23;
        }
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v29, v26, v27, v28) + 24) = v31;
      v34 = *(_DWORD *)(v30 + 8);
      WdLogGlobalForLineNumber = 6671;
      if ( (v34 & 0x1000000) != 0 )
      {
        v35 = 1;
        v36 = *(_DWORD *)(v30 + 240);
        *((_QWORD *)NextMode + 19) = *(_QWORD *)(v30 + 224);
        *((_DWORD *)NextMode + 40) = v36;
      }
      else
      {
        v35 = 0;
      }
      v32 = v54;
      if ( (int)BmlPinPathContentScaling(a1, v54, (unsigned __int16)v6) < 0
        || (int)BmlPinPathContentRotation(a1, v32, (unsigned __int16)v6) < 0 )
      {
        goto LABEL_24;
      }
      memset(v52, 0, 0x70uLL);
      GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v48);
      v38 = *(_OWORD *)&GraphicsInfo->PrimSurfSize.cx;
      v39 = *(_OWORD *)&GraphicsInfo->Stride;
      *((_QWORD *)&v52[5] + 1) = *((_QWORD *)NextMode + 19);
      *(_QWORD *)&v52[6] = *((_QWORD *)NextMode + 18);
      LODWORD(GraphicsInfo) = *((_DWORD *)NextMode + 32);
      *(_OWORD *)((char *)&v52[3] + 8) = v38;
      HIDWORD(v52[6]) = (_DWORD)GraphicsInfo;
      v40 = *(_OWORD *)((char *)NextMode + 72);
      LODWORD(GraphicsInfo) = *((_DWORD *)v48 + 18);
      *(_OWORD *)((char *)&v52[4] + 8) = v39;
      v41 = *(_OWORD *)((char *)NextMode + 88);
      v52[0] = v40;
      v42 = *(_OWORD *)((char *)NextMode + 104);
      v52[1] = v41;
      BYTE8(v52[6]) = (unsigned int)((_DWORD)GraphicsInfo - 3) <= 1;
      *(_QWORD *)&v41 = *((_QWORD *)NextMode + 15);
      v52[2] = v42;
      *(_QWORD *)&v52[3] = v41;
      refreshed = CCD_MODE_RESULT_SET::AddMode(a5, (const struct D3DKMT_PATHMODALITY_MODE_RESULT *)v52);
      if ( refreshed < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 6699;
        goto LABEL_46;
      }
      if ( v35 || !DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(NextMode) )
        goto LABEL_24;
      if ( !v56 )
      {
        refreshed = BmlBuildVirtualRefreshRateListFromTargetModeSet(v12, &v56, &v53);
        if ( refreshed < 0 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 6720;
LABEL_46:
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v53);
          break;
        }
      }
      if ( !v53 )
        goto LABEL_24;
      PresentationVSync = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)NextMode + 72));
      for ( i = 0LL; (unsigned int)i < v56; i = (unsigned int)(i + 1) )
      {
        if ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
                &PresentationVSync,
                (const struct _D3DDDI_RATIONAL *)(*(_QWORD *)&v43 + 8 * i),
                0)
          && DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(NextMode, (const struct _D3DDDI_RATIONAL *)v53 + i) )
        {
          *((_QWORD *)&v52[5] + 1) = *((_QWORD *)v53 + i);
          refreshed = CCD_MODE_RESULT_SET::AddMode(a5, (const struct D3DKMT_PATHMODALITY_MODE_RESULT *)v52);
          if ( refreshed < 0 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 6739;
            goto LABEL_46;
          }
        }
        v43 = (D3DDDI_RATIONAL)v53;
      }
LABEL_23:
      v32 = v54;
LABEL_24:
      v33 = BmlUnPinPartialPathModalityOnPath(a1, v32, v6);
      if ( v33 < 0 )
      {
        WdLogSingleEntry3(3LL, a1, v6, v32);
        WdLogGlobalForLineNumber = 6777;
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v53);
        refreshed = v33;
        break;
      }
      if ( v45 )
        goto LABEL_46;
LABEL_26:
      NextMode = DMMVIDPNTARGETMODESET::GetNextMode(v12, NextMode);
    }
  }
LABEL_47:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v50, 0LL);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v51, 0LL);
  return (unsigned int)refreshed;
}
