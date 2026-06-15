/*
 * XREFs of ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1801133B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180048740 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18004E314 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18004E364 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x18004E690 (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180071B0C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     WPP_SF_qdg @ 0x1800736B8 (WPP_SF_qdg.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180086208 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     pow @ 0x1800A4E54 (pow.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800C3678 (WPP_SF_qd.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18011547C (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 *     WPP_SF_qdggg @ 0x180115A88 (WPP_SF_qdggg.c)
 *     WPP_SF_qgg @ 0x180115B78 (WPP_SF_qgg.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeHardware::GetLevelData(CVolumeHardware *this)
{
  CVolumeHardware *v1; // rsi
  int v2; // edi
  _QWORD *v3; // r13
  unsigned int *v4; // r15
  __int64 *v5; // rdx
  float v6; // xmm9_4
  float v7; // xmm8_4
  unsigned int v8; // ebx
  __int64 v9; // xmm10_8
  __int64 v10; // rdx
  __int64 v11; // r8
  float v12; // xmm7_4
  float v13; // xmm6_4
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // r14d
  double v17; // xmm8_8
  double v18; // xmm6_8
  _QWORD *v19; // rsi
  double *v20; // rbx
  int *v22; // rbx
  __int64 v23; // [rsp+0h] [rbp-138h] BYREF
  __int64 v24; // [rsp+20h] [rbp-118h]
  float v25; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-F4h]
  float v27; // [rsp+48h] [rbp-F0h]
  float v28; // [rsp+4Ch] [rbp-ECh]
  _QWORD *v29; // [rsp+50h] [rbp-E8h]
  _QWORD *v30; // [rsp+58h] [rbp-E0h]
  unsigned int *v31; // [rsp+60h] [rbp-D8h]
  ATL::CAtlException *v32; // [rsp+68h] [rbp-D0h] BYREF
  _BYTE v33[4]; // [rsp+70h] [rbp-C8h] BYREF
  float v34; // [rsp+74h] [rbp-C4h]
  float v35; // [rsp+78h] [rbp-C0h]
  float v36; // [rsp+84h] [rbp-B4h]
  float v38; // [rsp+148h] [rbp+10h] BYREF
  float v39; // [rsp+150h] [rbp+18h] BYREF
  float v40; // [rsp+158h] [rbp+20h] BYREF

  v1 = this;
  v2 = -2147467259;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, (__int64)&WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids, v1);
  }
  v3 = (_QWORD *)((char *)v1 + 256);
  v30 = (_QWORD *)((char *)v1 + 256);
  if ( !*((_QWORD *)v1 + 32) )
    goto LABEL_7;
  v4 = (unsigned int *)((char *)v1 + 116);
  v31 = (unsigned int *)((char *)v1 + 116);
  *((_DWORD *)v1 + 29) = *((_DWORD *)v1 + 71);
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LODWORD(v24) = *v4;
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Du,
      (__int64)&WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids,
      v1,
      v24);
  }
  v29 = (_QWORD *)((char *)v1 + 80);
  ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount((char *)v1 + 80, 0LL);
  if ( !*v3 )
  {
LABEL_7:
    v2 = -2147418113;
LABEL_42:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::GetLevelData", 1379, v2);
    return (unsigned int)v2;
  }
  v6 = FLOAT_1000_0;
  v7 = FLOAT_N1000_0;
  v8 = 0;
  v9 = *(_QWORD *)&DOUBLE_1_75;
  while ( 1 )
  {
    v26 = v8;
    if ( v8 >= *v4 )
      break;
    v25 = 0.0;
    CVolumeUnit::CVolumeUnit((CVolumeUnit *)v33, (__int64)v5);
    v40 = 0.0;
    v39 = 0.0;
    v38 = 0.0;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, float *, float *))(*(_QWORD *)*v3 + 32LL))(
           *v3,
           0LL,
           &v40,
           &v39,
           &v38);
    if ( v2 < 0 )
      goto LABEL_42;
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v24) = v8;
      WPP_SF_qdggg(*((_QWORD *)WPP_GLOBAL_Control + 2), v10, v11, v1, v24, v40, v39, v38);
    }
    v12 = v39;
    v13 = v40;
    CVolumeUnit::SetDBRange((__int64)v33, v10, v40, v39, SLODWORD(v38), v9);
    v6 = fminf(v13, v6);
    v27 = v6;
    v7 = fmaxf(v12, v7);
    v28 = v7;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(*(_QWORD *)*v3 + 40LL))(*v3, v8, &v25);
    if ( v2 < 0 )
      goto LABEL_42;
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v24) = v8;
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Fu,
        (__int64)&WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids,
        v1,
        v24,
        v25);
    }
    v34 = fmaxf(fminf(v25, v36), v35);
    v2 = 0;
    try
    {
      ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(v29, v8, (__int64)v33);
    }
    catch ( ATL::CAtlException *v32 )
    {
      v5 = &v23;
      v22 = (int *)v32;
      if ( *(_DWORD *)v32 == -1073741571 )
        _o__resetstkoflw();
      v38 = *(float *)v22;
      v2 = LODWORD(v38);
      if ( v38 < 0.0 )
        goto LABEL_42;
      v1 = this;
      v6 = v27;
      v7 = v28;
      v8 = v26;
      v9 = *(_QWORD *)&DOUBLE_1_75;
      v3 = v30;
      v4 = v31;
    }
    ++v8;
  }
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qgg(*((_QWORD *)WPP_GLOBAL_Control + 2), v14, v15, v1, v6, v7);
  }
  v16 = 0;
  if ( *v4 )
  {
    v17 = pow(10.0, v7 / 20.0);
    v18 = pow(10.0, v6 / 20.0);
    v19 = v29;
    do
    {
      v20 = (double *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](v19, v16);
      v20[3] = CVolumeUnit::TaperFromScalar((CVolumeUnit *)v20, v18, v17);
      v20[4] = CVolumeUnit::TaperFromScalar((CVolumeUnit *)v20, v17, v17);
      ++v16;
    }
    while ( v16 < *v4 );
    v1 = this;
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(v1);
  if ( v2 < 0 )
    goto LABEL_42;
  return (unsigned int)v2;
}
