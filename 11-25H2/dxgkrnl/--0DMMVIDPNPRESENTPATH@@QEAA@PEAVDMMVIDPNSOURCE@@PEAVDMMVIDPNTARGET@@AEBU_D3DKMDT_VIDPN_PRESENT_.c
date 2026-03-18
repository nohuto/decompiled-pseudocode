/*
 * XREFs of ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x14008E7C4
 * Callers:
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x14025D058 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x140012D10 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x14001C81C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x14003B498 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x14004523C (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x140046934 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1400493D8 (-SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x14005C0DC (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x14008DE50 (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x14008ED8C (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ @ 0x1402DA174 (-_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ.c)
 */

DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
        DMMVIDPNPRESENTPATH *this,
        struct DMMVIDPNSOURCE *a2,
        struct DMMVIDPNTARGET *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4)
{
  __int64 v8; // r9
  __int64 v9; // rax
  ReferenceCounted *v10; // rsi
  int v11; // eax
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING Scaling; // edx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation; // edx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 8) = 1833173003;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *(_QWORD *)this = &DMMVIDPNPRESENTPATH::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNPRESENTPATH::`vftable'{for `SignedWithClassSignature<DMMVIDPNPRESENTPATH>'};
  *((_QWORD *)this + 5) = &DMMVIDPNPRESENTPATH::`vftable'{for `ContainedBy<DMMVIDPNTOPOLOGY>'};
  *((_QWORD *)this + 7) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 9) = &DMMVIDPNPRESENTPATH::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a3;
  *((_DWORD *)this + 28) = 254;
  *((_DWORD *)this + 29) = 254;
  *((_DWORD *)this + 41) = 255;
  *((_DWORD *)this + 20) = 1;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 139;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 140;
  }
  *((_QWORD *)this + 16) = a4->VisibleFromActiveTLOffset;
  *((_QWORD *)this + 17) = a4->VisibleFromActiveBROffset;
  *((_DWORD *)this + 36) = a4->VidPnTargetColorBasis;
  *(D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES *)((char *)this + 148) = a4->VidPnTargetColorCoeffDynamicRanges;
  if ( IsValidGammaRamp(&a4->GammaRamp) && a4->GammaRamp.Type != D3DDDI_GAMMARAMP_DEFAULT )
  {
    v9 = operator new(0x30uLL, 0x4B677844u, 256LL, v8);
    v10 = (ReferenceCounted *)v9;
    if ( !v9 )
    {
      WdLogSingleEntry3(
        6LL,
        *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
        *(unsigned int *)(*((_QWORD *)this + 12) + 24LL),
        -1073741801LL);
      WdLogGlobalForLineNumber = 158;
      *((_DWORD *)this + 16) = -1073741801;
      return this;
    }
    *(_WORD *)(v9 + 40) = 0;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_QWORD *)v9 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *(_QWORD *)v9 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v9 + 8) = 1;
    *(_DWORD *)(v9 + 16) = 1;
    v11 = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v9, &a4->GammaRamp);
    v12 = v11;
    if ( v11 < 0 )
    {
      ReferenceCounted::Release(v10);
      v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
      v17[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v17[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v17[5] = v12;
      WdLogGlobalForLineNumber = 170;
      *((_DWORD *)this + 16) = v12;
      return this;
    }
    *((_QWORD *)this + 23) = v10;
  }
  *((_DWORD *)this + 42) = a4->CopyProtection.CopyProtectionSupport;
  v18 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(this, a4->CopyProtection.CopyProtectionType);
  LODWORD(v19) = v18;
  if ( v18 >= 0 )
  {
    *((_DWORD *)this + 44) = a4->CopyProtection.APSTriggerBits;
    DMMVIDPNPRESENTPATH::SetScalingSupport(
      (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)this,
      &a4->ContentTransformation.ScalingSupport);
    DMMVIDPNPRESENTPATH::SetRotationSupport(this, &a4->ContentTransformation.RotationSupport);
    v20 = DMMVIDPNPRESENTPATH::SetContentType(this, a4->Content);
    v19 = v20;
    if ( v20 >= 0 )
    {
      Scaling = a4->ContentTransformation.Scaling;
      if ( Scaling == D3DKMDT_VPPS_UNPINNED
        || (v27 = DMMVIDPNPRESENTPATH::PinContentScaling(this, Scaling), v19 = v27, v27 >= 0) )
      {
        Rotation = a4->ContentTransformation.Rotation;
        if ( Rotation == D3DKMDT_VPPR_UNPINNED
          || (v34 = DMMVIDPNPRESENTPATH::PinContentRotation(this, Rotation), v19 = v34, v34 >= 0) )
        {
          v40 = DMMVIDPNPRESENTPATH::SetImportanceOrdinal(this, a4->ImportanceOrdinal);
          v19 = v40;
          if ( v40 >= 0 )
          {
            DMMVIDPNPRESENTPATH::_SetIsSupportSetTargetPathProperties(this);
            *((_DWORD *)this + 20) = 2;
            return this;
          }
          v45 = (_QWORD *)WdLogNewEntry5_WdTrace(v42, v41, v43, v44);
          v45[3] = a4->ImportanceOrdinal;
          v45[4] = *((unsigned int *)a2 + 6);
          v45[5] = *((unsigned int *)a3 + 6);
          v45[6] = v19;
          WdLogGlobalForLineNumber = 259;
        }
        else
        {
          v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v36, v35, v37, v38);
          v39[3] = a4->ContentTransformation.Rotation;
          v39[4] = *((unsigned int *)a2 + 6);
          v39[5] = *((unsigned int *)a3 + 6);
          v39[6] = v19;
          WdLogGlobalForLineNumber = 245;
        }
      }
      else
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
        v32[3] = a4->ContentTransformation.Scaling;
        v32[4] = *((unsigned int *)a2 + 6);
        v32[5] = *((unsigned int *)a3 + 6);
        v32[6] = v19;
        WdLogGlobalForLineNumber = 230;
      }
    }
    else
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
      v25[3] = a4->Content;
      v25[4] = *((unsigned int *)a2 + 6);
      v25[5] = *((unsigned int *)a3 + 6);
      v25[6] = v19;
      WdLogGlobalForLineNumber = 215;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, a4->CopyProtection.CopyProtectionType, this, v18);
    WdLogGlobalForLineNumber = 191;
  }
  *((_DWORD *)this + 16) = v19;
  return this;
}
