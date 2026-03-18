/*
 * XREFs of _BmlGetPathModeListForPathTargetModes @ 0x14039C56C
 * Callers:
 *     _BmlGetPathModeListForPath @ 0x14039C1C8 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14001B358 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14001B394 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x140034934 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x14003953C (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x140042750 (-GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14004A1A0 (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x140184A4C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1402625B8 (BmlDoesTargetModeObeyConstraint.c)
 *     _BmlBuildVirtualRefreshRateListFromTargetModeSet @ 0x140262A9C (_BmlBuildVirtualRefreshRateListFromTargetModeSet.c)
 *     BmlPinPathContentRotation @ 0x1402D3CFC (BmlPinPathContentRotation.c)
 *     BmlPinPathContentScaling @ 0x1402D43AC (BmlPinPathContentScaling.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1402D6194 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x14037DD70 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x14039CC98 (BmlUnPinPartialPathModalityOnPath.c)
 *     ?AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1403DAD18 (-AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z.c)
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
  __int64 v43; // r9
  D3DDDI_RATIONAL v44; // r8
  __int64 i; // r12
  struct DMMVIDPNTARGETMODE *v46; // [rsp+20h] [rbp-A1h]
  __int64 v47; // [rsp+28h] [rbp-99h]
  VIDPN_MGR *v48; // [rsp+30h] [rbp-91h]
  DMMVIDPNSOURCEMODE *v49; // [rsp+38h] [rbp-89h]
  struct _D3DDDI_RATIONAL PresentationVSync; // [rsp+40h] [rbp-81h] BYREF
  struct DMMVIDPNTARGETMODESET *v51; // [rsp+48h] [rbp-79h] BYREF
  struct DMMVIDPNTARGETMODESET *v52; // [rsp+50h] [rbp-71h] BYREF
  _OWORD v53[11]; // [rsp+60h] [rbp-61h] BYREF
  void *v54; // [rsp+120h] [rbp+5Fh] BYREF
  __int64 v55; // [rsp+128h] [rbp+67h]
  char v56; // [rsp+130h] [rbp+6Fh]
  unsigned __int64 v57; // [rsp+138h] [rbp+77h] BYREF

  v55 = a2;
  refreshed = 0;
  v6 = a3;
  v8 = 120LL * a3;
  v48 = *(VIDPN_MGR **)(a2 + 48);
  v47 = v8;
  if ( !v48 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6549;
  }
  v52 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a4 + 88));
  v10 = (__int64)v52;
  if ( !v52 )
  {
    WdLogSingleEntry1(2LL, v6);
    result = 3223192328LL;
    WdLogGlobalForLineNumber = 6554;
    return result;
  }
  v12 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a4 + 96));
  v51 = v12;
  v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
  v17[3] = v12;
  v17[4] = *(unsigned __int16 *)(v8 + a1 + 68);
  v21 = *(unsigned __int16 *)(v8 + a1 + 70);
  v17[5] = v21;
  WdLogGlobalForLineNumber = 6560;
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
      WdLogGlobalForLineNumber = 6576;
      refreshed = -1071774968;
      goto LABEL_47;
    }
    v22 = *(_DWORD *)(a1 + 8);
    v56 = 0;
    if ( (v22 & 8) != 0 )
    {
      WdLogNewEntry5_WdTrace(v21, v18, v19, v20);
      WdLogGlobalForLineNumber = 6587;
      v56 = 1;
    }
    v49 = *(DMMVIDPNSOURCEMODE **)(v10 + 144);
    v23 = (struct DMMVIDPNTARGETMODE *)*((_QWORD *)v12 + 18);
    v57 = 0LL;
    v54 = 0LL;
    v46 = v23;
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
      ++*(_DWORD *)(v47 + a1 + 100);
      v30 = *(_QWORD *)(v47 + a1 + 16);
      WdLogGlobalForLineNumber = 6601;
      if ( v46 && v46 != NextMode || !BmlDoesTargetModeObeyConstraint(a1, v6, (__int64)NextMode) )
      {
        WdLogNewEntry5_WdTrace(v29, v26, v27, v28);
        WdLogGlobalForLineNumber = 6610;
        goto LABEL_26;
      }
      ++*(_DWORD *)(v47 + a1 + 104);
      v31 = *((unsigned int *)NextMode + 6);
      if ( v46 )
      {
        refreshed = 0;
      }
      else
      {
        refreshed = VIDPN_MGR::PinVidPnTargetMode(v48, v12, v31, 1);
        if ( refreshed < 0 )
        {
          refreshed = 0;
          goto LABEL_23;
        }
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v29, v26, v27, v28) + 24) = v31;
      v34 = *(_DWORD *)(v30 + 8);
      WdLogGlobalForLineNumber = 6629;
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
      v32 = v55;
      if ( (int)BmlPinPathContentScaling(a1, v55, v6) < 0 || (int)BmlPinPathContentRotation(a1, v32, v6) < 0 )
        goto LABEL_24;
      memset(v53, 0, 0x70uLL);
      GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v49);
      v38 = *(_OWORD *)&GraphicsInfo->PrimSurfSize.cx;
      v39 = *(_OWORD *)&GraphicsInfo->Stride;
      *((_QWORD *)&v53[5] + 1) = *((_QWORD *)NextMode + 19);
      *(_QWORD *)&v53[6] = *((_QWORD *)NextMode + 18);
      LODWORD(GraphicsInfo) = *((_DWORD *)NextMode + 32);
      *(_OWORD *)((char *)&v53[3] + 8) = v38;
      HIDWORD(v53[6]) = (_DWORD)GraphicsInfo;
      v40 = *(_OWORD *)((char *)NextMode + 72);
      LODWORD(GraphicsInfo) = *((_DWORD *)v49 + 18);
      *(_OWORD *)((char *)&v53[4] + 8) = v39;
      v41 = *(_OWORD *)((char *)NextMode + 88);
      v53[0] = v40;
      v42 = *(_OWORD *)((char *)NextMode + 104);
      v53[1] = v41;
      BYTE8(v53[6]) = (unsigned int)((_DWORD)GraphicsInfo - 3) <= 1;
      *(_QWORD *)&v41 = *((_QWORD *)NextMode + 15);
      v53[2] = v42;
      *(_QWORD *)&v53[3] = v41;
      refreshed = CCD_MODE_RESULT_SET::AddMode(a5, (const struct D3DKMT_PATHMODALITY_MODE_RESULT *)v53);
      if ( refreshed < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 6657;
        goto LABEL_46;
      }
      if ( v35 || !DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(NextMode) )
        goto LABEL_24;
      if ( !v57 )
      {
        refreshed = BmlBuildVirtualRefreshRateListFromTargetModeSet(v12, &v57, &v54, v43);
        if ( refreshed < 0 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 6678;
LABEL_46:
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v54);
          break;
        }
      }
      if ( !v54 )
        goto LABEL_24;
      PresentationVSync = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)NextMode + 72));
      for ( i = 0LL; (unsigned int)i < v57; i = (unsigned int)(i + 1) )
      {
        if ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
                &PresentationVSync,
                (const struct _D3DDDI_RATIONAL *)(*(_QWORD *)&v44 + 8 * i),
                0)
          && DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(NextMode, (const struct _D3DDDI_RATIONAL *)v54 + i) )
        {
          *((_QWORD *)&v53[5] + 1) = *((_QWORD *)v54 + i);
          refreshed = CCD_MODE_RESULT_SET::AddMode(a5, (const struct D3DKMT_PATHMODALITY_MODE_RESULT *)v53);
          if ( refreshed < 0 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 6697;
            goto LABEL_46;
          }
        }
        v44 = (D3DDDI_RATIONAL)v54;
      }
LABEL_23:
      v32 = v55;
LABEL_24:
      v33 = BmlUnPinPartialPathModalityOnPath(a1, v32, (unsigned int)v6);
      if ( v33 < 0 )
      {
        WdLogSingleEntry3(3LL, a1, v6, v32);
        WdLogGlobalForLineNumber = 6735;
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v54);
        refreshed = v33;
        break;
      }
      if ( v46 )
        goto LABEL_46;
LABEL_26:
      NextMode = DMMVIDPNTARGETMODESET::GetNextMode(v12, NextMode);
    }
  }
LABEL_47:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v51, 0LL);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v52, 0LL);
  return (unsigned int)refreshed;
}
