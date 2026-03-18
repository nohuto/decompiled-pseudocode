/*
 * XREFs of ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1402D71F8
 * Callers:
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402D6EB0 (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAK2AEAV?$unique_ptr@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@U?$default_delete@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@@wistd@@@wistd@@AEAV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@5@4@Z @ 0x14042AC60 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_M.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x140012B90 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14001B394 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ColorSpaceTransformCombine @ 0x140043CA4 (ColorSpaceTransformCombine.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x140053154 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x14008ED8C (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?IsDefaultGammaRamp@DXGK_GAMMA_RAMP@@QEBAEXZ @ 0x1401974FC (-IsDefaultGammaRamp@DXGK_GAMMA_RAMP@@QEBAEXZ.c)
 *     ?GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x1401CEFCC (-GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  const void **DefaultColorSpaceTransform; // rsi
  __int64 v14; // r9
  __int64 v15; // rax
  ReferenceCounted *v16; // rbx
  int v17; // eax
  int v18; // esi
  __int64 v19; // rcx
  int v20; // eax
  struct DMMVIDPNTARGETMODESET *v21; // [rsp+50h] [rbp+8h] BYREF

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
  v18 = 4;
  v21 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)this + 12));
  v19 = *((_QWORD *)v21 + 18);
  if ( v19 )
    v18 = *(_DWORD *)(v19 + 136);
  if ( (((auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v21, 0LL), v18 == 12) || v18 == 32)
     && (*((_DWORD *)v7 + 612) & 0x10) != 0
     || v18 == 30 && (*((_DWORD *)v7 + 612) & 8) != 0)
    && (Global = DXGGLOBAL::GetGlobal(),
        (DefaultColorSpaceTransform = (const void **)DXGGLOBAL::GetDefaultColorSpaceTransform(Global, v10, v11, v12)) != 0LL) )
  {
    v15 = operator new(0x30uLL, 0x4B677844u, 256LL, v14);
    v16 = (ReferenceCounted *)v15;
    if ( v15 )
    {
      *(_WORD *)(v15 + 40) = 0;
      *(_DWORD *)(v15 + 16) = 1;
      *(_QWORD *)v15 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
      *(_DWORD *)(v15 + 8) = 1;
      *(_QWORD *)v15 = &DXGK_GAMMA_RAMP::`vftable';
      *(_QWORD *)(v15 + 24) = 0LL;
      *(_QWORD *)(v15 + 32) = 0LL;
      v17 = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v15, D3DDDI_GAMMARAMP_MATRIX_3x4, 0LL);
      v2 = v17;
      if ( v17 >= 0 )
      {
        v20 = ColorSpaceTransformCombine(DefaultColorSpaceTransform + 2, (int *)(v3 + 16), (__int64)v16 + 16);
        v2 = v20;
        if ( v20 >= 0 )
        {
          DefaultColorSpaceTransform = (const void **)v16;
        }
        else
        {
          WdLogSingleEntry1(2LL, v20);
          WdLogGlobalForLineNumber = 146;
        }
      }
      else
      {
        WdLogSingleEntry3(
          2LL,
          *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
          *(unsigned int *)(*((_QWORD *)this + 12) + 24LL),
          v17);
        WdLogGlobalForLineNumber = 125;
      }
    }
    else
    {
      v16 = 0LL;
      WdLogSingleEntry2(
        6LL,
        *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
        *(unsigned int *)(*((_QWORD *)this + 12) + 24LL));
      WdLogGlobalForLineNumber = 116;
      v2 = -1073741801;
    }
    DMMVIDPNPRESENTPATH::SetGammaRamp(this, (const struct DXGK_GAMMA_RAMP *)DefaultColorSpaceTransform);
    if ( v16 )
      ReferenceCounted::Release(v16);
  }
  else
  {
LABEL_9:
    DMMVIDPNPRESENTPATH::SetGammaRamp(this, (const struct DXGK_GAMMA_RAMP *)v3);
  }
  return v2;
}
