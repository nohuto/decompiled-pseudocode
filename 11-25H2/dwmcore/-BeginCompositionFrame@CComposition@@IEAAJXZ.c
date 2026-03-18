/*
 * XREFs of ?BeginCompositionFrame@CComposition@@IEAAJXZ @ 0x1800AE6D0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?GetLastMonitorTime@CDDisplayRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z @ 0x18013FE60 (-GetLastMonitorTime@CDDisplayRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z.c)
 *     ?GetLastMonitorTime@CLegacyRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z @ 0x1801418C0 (-GetLastMonitorTime@CLegacyRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z.c)
 *     ?GetDefaultVBlankDuration@CScheduler@@SA_KPEBVIMonitorTarget@@@Z @ 0x1801C1214 (-GetDefaultVBlankDuration@CScheduler@@SA_KPEBVIMonitorTarget@@@Z.c)
 *     ?BeginFrame@CKernelTransport@@UEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1801EA840 (-BeginFrame@CKernelTransport@@UEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801EB924 (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0qxxxxn_EventWriteTransfer @ 0x18022A93C (McTemplateU0qxxxxn_EventWriteTransfer.c)
 *     ?ResetDrawing@CRenderPerf@@IEAAXXZ @ 0x18022B0EC (-ResetDrawing@CRenderPerf@@IEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectHash@@@details@wil@@QEAA_NXZ @ 0x18024A934 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EffectHash@@@details@wil@@QEAA_NX.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::BeginCompositionFrame(CComposition *this)
{
  __int64 v2; // rax
  __m128i v3; // xmm2
  __int64 v4; // xmm0_8
  __int64 v5; // rax
  const struct IMonitorTarget *v6; // rdi
  bool (__fastcall *v7)(CLegacyRenderTarget *__hidden, struct MonitorTime *, struct MonitorTime *, bool); // rax
  bool LastMonitorTime; // al
  LARGE_INTEGER v9; // rax
  LARGE_INTEGER v10; // rdi
  unsigned __int64 v11; // r11
  LARGE_INTEGER v12; // r8
  int v13; // r10d
  LARGE_INTEGER v14; // r9
  int v15; // edi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rtt
  LONGLONG v18; // r8
  int v19; // r10d
  LARGE_INTEGER v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rtt
  LONGLONG v23; // r9
  int v24; // edi
  unsigned __int64 DefaultVBlankDuration; // rax
  __int128 v26; // xmm0
  _QWORD *v27; // rsi
  CKernelTransport *v28; // rcx
  unsigned __int64 *v29; // r8
  int (*v30)(CKernelTransport *__hidden, const struct COMPOSITION_FRAME_INFO *, unsigned __int64 *); // rax
  int v31; // eax
  int v32; // edx
  __int64 v33; // rcx
  unsigned int v34; // edi
  char v35; // al
  unsigned __int64 v37; // rtt
  unsigned __int64 v38; // rtt
  _QWORD *v39; // rcx
  unsigned __int64 CurrentFrameId; // rax
  __int64 v41; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-F8h] BYREF
  LARGE_INTEGER v43; // [rsp+58h] [rbp-F0h] BYREF
  unsigned __int64 v44; // [rsp+60h] [rbp-E8h]
  int v45; // [rsp+68h] [rbp-E0h]
  LARGE_INTEGER v46; // [rsp+70h] [rbp-D8h] BYREF
  unsigned __int64 v47; // [rsp+78h] [rbp-D0h]
  int v48; // [rsp+80h] [rbp-C8h]
  unsigned __int64 v49; // [rsp+90h] [rbp-B8h] BYREF
  __m128i v50; // [rsp+98h] [rbp-B0h]
  __int128 v51; // [rsp+A8h] [rbp-A0h]
  __int128 v52; // [rsp+B8h] [rbp-90h]
  __int64 v53; // [rsp+C8h] [rbp-80h]
  LARGE_INTEGER v54; // [rsp+D0h] [rbp-78h]
  LARGE_INTEGER v55; // [rsp+D8h] [rbp-70h]
  unsigned __int64 v56; // [rsp+E0h] [rbp-68h]
  unsigned __int64 v57; // [rsp+E8h] [rbp-60h]
  LARGE_INTEGER v58; // [rsp+F0h] [rbp-58h]
  LARGE_INTEGER v59; // [rsp+F8h] [rbp-50h]
  __int128 v60; // [rsp+100h] [rbp-48h]
  int v61; // [rsp+110h] [rbp-38h]
  __int64 v62; // [rsp+118h] [rbp-30h]
  __int64 v63; // [rsp+120h] [rbp-28h]
  int v64; // [rsp+128h] [rbp-20h]

  memset_0(&v49, 0, 0xA0uLL);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 24LL))(*((_QWORD *)this + 39));
  v3 = *(__m128i *)v2;
  v50 = *(__m128i *)v2;
  v51 = *(_OWORD *)(v2 + 16);
  v52 = *(_OWORD *)(v2 + 32);
  v4 = *(_QWORD *)(v2 + 48);
  v5 = *((_QWORD *)this + 38);
  v53 = v4;
  if ( *((_QWORD *)this + 39) == v5 )
    v49 = 0LL;
  else
    v49 = v3.m128i_i64[0] - _mm_srli_si128(v3, 8).m128i_u64[0];
  v6 = (const struct IMonitorTarget *)**((_QWORD **)g_pComposition + 77);
  v43.QuadPart = 0LL;
  v44 = 0LL;
  v45 = 0;
  v46.QuadPart = 0LL;
  v47 = 0LL;
  v48 = 0;
  if ( v6
    && ((v7 = *(bool (__fastcall **)(CLegacyRenderTarget *__hidden, struct MonitorTime *, struct MonitorTime *, bool))(*(_QWORD *)v6 + 216LL),
         v7 != CLegacyRenderTarget::GetLastMonitorTime)
      ? (v7 != CDDisplayRenderTarget::GetLastMonitorTime
       ? (LastMonitorTime = v7(v6, (struct MonitorTime *)&v43, (struct MonitorTime *)&v46, 0))
       : (LastMonitorTime = CDDisplayRenderTarget::GetLastMonitorTime(
                              v6,
                              (struct MonitorTime *)&v43,
                              (struct MonitorTime *)&v46,
                              0)))
      : (LastMonitorTime = CLegacyRenderTarget::GetLastMonitorTime(
                             v6,
                             (struct MonitorTime *)&v43,
                             (struct MonitorTime *)&v46,
                             0)),
        LastMonitorTime) )
  {
    v9 = *(LARGE_INTEGER *)((char *)this + 296);
    PerformanceCount = v9;
    v10 = v9;
    if ( !v9.QuadPart )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v9 = PerformanceCount;
      v10 = *(LARGE_INTEGER *)((char *)this + 296);
    }
    v11 = v44;
    v12 = v43;
    v13 = v45;
    if ( v44 + v43.QuadPart < v9.QuadPart )
    {
      v12.QuadPart = v44 * ((v9.QuadPart - v43.QuadPart) / v44) + v43.QuadPart;
      v13 = (v9.QuadPart - v43.QuadPart) / v44 + v45;
      v43 = v12;
      v45 = v13;
    }
    PerformanceCount = v10;
    if ( !v10.QuadPart )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v13 = v45;
      v11 = v44;
      v12 = v43;
      v10 = PerformanceCount;
    }
    v14 = v46;
    if ( v47 + v46.QuadPart >= v10.QuadPart )
    {
      v15 = v48;
    }
    else
    {
      v14.QuadPart = v47 * ((v10.QuadPart - v46.QuadPart) / v47) + v46.QuadPart;
      v15 = (v10.QuadPart - v46.QuadPart) / v47 + v48;
    }
    v54 = v12;
    v16 = v50.m128i_i64[0] + (v11 >> 1);
    v55 = v14;
    v56 = v11;
    v57 = v47;
    if ( v16 < v12.QuadPart )
    {
      v37 = v12.QuadPart - v16;
      v18 = v12.QuadPart - v11 * ((unsigned int)((v12.QuadPart - v16) / v11) + 1);
      v19 = v13 - (v37 / v11 + 1);
    }
    else
    {
      v17 = v16 - v12.QuadPart;
      v18 = v11 * (unsigned int)((v16 - v12.QuadPart) / v11) + v12.QuadPart;
      v19 = v17 / v11 + v13;
    }
    v20.QuadPart = v18 - v11;
    v21 = v50.m128i_i64[0] + (v47 >> 1);
    v43 = v20;
    v45 = v19 - 1;
    if ( v21 < v14.QuadPart )
    {
      v38 = v14.QuadPart - v21;
      v23 = v14.QuadPart - v47 * ((unsigned int)((v14.QuadPart - v21) / v47) + 1);
      v24 = v15 - (v38 / v47 + 1);
    }
    else
    {
      v22 = v21 - v14.QuadPart;
      v23 = v47 * (unsigned int)((v21 - v14.QuadPart) / v47) + v14.QuadPart;
      v24 = v22 / v47 + v15;
    }
    v58 = v20;
    v46.QuadPart = v23 - v47;
    v48 = v24 - 1;
    v59.QuadPart = v23 - v47;
  }
  else
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    DefaultVBlankDuration = CScheduler::GetDefaultVBlankDuration(v6);
    v54 = PerformanceCount;
    v55 = PerformanceCount;
    v58 = PerformanceCount;
    v59 = PerformanceCount;
    v56 = DefaultVBlankDuration;
    v57 = DefaultVBlankDuration;
  }
  v26 = *(_OWORD *)((char *)this + 6500);
  v61 = *((_DWORD *)this + 1629);
  v60 = v26;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EffectHash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EffectHash>::GetImpl'::`2'::impl) )
  {
    v39 = (_QWORD *)*((_QWORD *)this + 81);
    v62 = v39[26];
    v64 = (__int64)(v39[28] - v39[27]) >> 3;
    v63 = v39[27];
  }
  else
  {
    v62 = 0LL;
    v63 = 0LL;
    v64 = 0;
  }
  *((_QWORD *)this + 643) = v50.m128i_i64[1];
  v27 = (_QWORD *)((char *)this + 888);
  v28 = (CKernelTransport *)*((_QWORD *)this + 709);
  v29 = (unsigned __int64 *)((char *)this + 888);
  v30 = *(int (**)(CKernelTransport *__hidden, const struct COMPOSITION_FRAME_INFO *, unsigned __int64 *))(*(_QWORD *)v28 + 8LL);
  if ( v30 == CKernelTransport::BeginFrame )
    v31 = CKernelTransport::BeginFrame(v28, (const struct COMPOSITION_FRAME_INFO *)&v49, v29);
  else
    v31 = ((__int64 (__fastcall *)(CKernelTransport *, unsigned __int64 *, unsigned __int64 *))v30)(v28, &v49, v29);
  v34 = v31;
  if ( v31 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0xC40u, 0LL);
  v35 = Microsoft_Windows_Dwm_CompositorEnableBits;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
  {
    McTemplateU0qxxxxn_EventWriteTransfer(v33, v32, v34, *v27, v50.m128i_i8[0], v49, v50.m128i_i8[8]);
    v35 = Microsoft_Windows_Dwm_CompositorEnableBits;
  }
  if ( (v35 & 2) != 0 )
  {
    CurrentFrameId = GetCurrentFrameId();
    *(_QWORD *)v41 = CurrentFrameId;
    *(_QWORD *)(v41 + 48) = 0LL;
    *(_QWORD *)(v41 + 56) = 0LL;
    *(_QWORD *)(v41 + 64) = 0LL;
    *(_QWORD *)(v41 + 72) = 0LL;
    *(_QWORD *)(v41 + 80) = 0LL;
    *(_QWORD *)(v41 + 88) = 0LL;
    *(_QWORD *)(v41 + 96) = 0LL;
    *(_QWORD *)(v41 + 104) = 0LL;
    *(_QWORD *)(v41 + 112) = 0LL;
    *(_DWORD *)(v41 + 120) = 0;
    CRenderPerf::ResetDrawing((CRenderPerf *)v41);
  }
  if ( *((_BYTE *)this + 6494) )
  {
    (*(void (__fastcall **)(CComposition *))(*(_QWORD *)this + 104LL))(this);
    *((_BYTE *)this + 6494) = 0;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000000) != 0 )
    McTemplateU0x_EventWriteTransfer(v33, &::CurrentFrameId, *v27);
  if ( DWORD2(v60) )
    dword_1804067D0 |= 0x40u;
  return v34;
}
