/*
 * XREFs of ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x140313734
 * Callers:
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1403133EC (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAK2AEAV?$unique_ptr@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@U?$default_delete@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@@wistd@@@wistd@@AEAV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@5@4@Z @ 0x14042C500 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_M.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14000BDB4 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x140022020 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ColorSpaceTransformCombine @ 0x140043914 (ColorSpaceTransformCombine.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x140052E04 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x14009001C (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?IsDefaultGammaRamp@DXGK_GAMMA_RAMP@@QEBAEXZ @ 0x140199988 (-IsDefaultGammaRamp@DXGK_GAMMA_RAMP@@QEBAEXZ.c)
 *     ?GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x1401D430C (-GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::UpdateGammaRamp(DMMVIDPNPRESENTPATH *this)
{
  unsigned int v2; // r14d
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbx
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DXGADAPTER *v7; // rbx
  DXGGLOBAL *Global; // rax
  const void **DefaultColorSpaceTransform; // rsi
  __int64 v11; // rax
  ReferenceCounted *v12; // rbx
  int v13; // eax
  int v14; // esi
  __int64 v15; // rcx
  int v16; // eax
  struct DMMVIDPNTARGETMODESET *v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 96LL) + 128LL);
  if ( v3 && !IsValidGammaRamp((const struct _D3DKMDT_GAMMA_RAMP *)(v3 + 16)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 49;
  }
  v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v4 + 40) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  if ( *((_QWORD *)VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(*(_QWORD *)(v4 + 40) + 88LL)) + 391)
    && v3
    && DXGK_GAMMA_RAMP::IsDefaultGammaRamp((DXGK_GAMMA_RAMP *)v3) )
  {
    v3 = 0LL;
  }
  v5 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v5 + 40) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(*(_QWORD *)(v5 + 40) + 88LL));
  v7 = ContainingAdapter;
  if ( !v3 || (*((_DWORD *)ContainingAdapter + 612) & 0x18) == 0 )
    goto LABEL_9;
  v14 = 4;
  v17 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)this + 12));
  v15 = *((_QWORD *)v17 + 18);
  if ( v15 )
    v14 = *(_DWORD *)(v15 + 136);
  if ( (((auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v17, 0LL), v14 == 12) || v14 == 32)
     && (*((_DWORD *)v7 + 612) & 0x10) != 0
     || v14 == 30 && (*((_DWORD *)v7 + 612) & 8) != 0)
    && (Global = DXGGLOBAL::GetGlobal(),
        (DefaultColorSpaceTransform = (const void **)DXGGLOBAL::GetDefaultColorSpaceTransform(Global)) != 0LL) )
  {
    v11 = operator new(0x30uLL, 0x4B677844u, 256LL);
    v12 = (ReferenceCounted *)v11;
    if ( v11 )
    {
      *(_WORD *)(v11 + 40) = 0;
      *(_DWORD *)(v11 + 16) = 1;
      *(_QWORD *)v11 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
      *(_DWORD *)(v11 + 8) = 1;
      *(_QWORD *)v11 = &DXGK_GAMMA_RAMP::`vftable';
      *(_QWORD *)(v11 + 24) = 0LL;
      *(_QWORD *)(v11 + 32) = 0LL;
      v13 = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v11, 4, 0LL);
      v2 = v13;
      if ( v13 >= 0 )
      {
        v16 = ColorSpaceTransformCombine(DefaultColorSpaceTransform + 2, (int *)(v3 + 16), (__int64)v12 + 16);
        v2 = v16;
        if ( v16 >= 0 )
        {
          DefaultColorSpaceTransform = (const void **)v12;
        }
        else
        {
          WdLogSingleEntry1(2LL, v16);
          WdLogGlobalForLineNumber = 146;
        }
      }
      else
      {
        WdLogSingleEntry3(
          2LL,
          *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
          *(unsigned int *)(*((_QWORD *)this + 12) + 24LL),
          v13);
        WdLogGlobalForLineNumber = 125;
      }
    }
    else
    {
      v12 = 0LL;
      WdLogSingleEntry2(
        6LL,
        *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
        *(unsigned int *)(*((_QWORD *)this + 12) + 24LL));
      WdLogGlobalForLineNumber = 116;
      v2 = -1073741801;
    }
    DMMVIDPNPRESENTPATH::SetGammaRamp(this, (const struct DXGK_GAMMA_RAMP *)DefaultColorSpaceTransform);
    if ( v12 )
      ReferenceCounted::Release(v12);
  }
  else
  {
LABEL_9:
    DMMVIDPNPRESENTPATH::SetGammaRamp(this, (const struct DXGK_GAMMA_RAMP *)v3);
  }
  return v2;
}
