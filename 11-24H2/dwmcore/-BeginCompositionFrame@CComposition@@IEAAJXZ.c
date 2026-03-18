/*
 * XREFs of ?BeginCompositionFrame@CComposition@@IEAAJXZ @ 0x18007C6F0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18007AD60 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x18005CC10 (McTemplateU0x_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDefaultVBlankDuration@CScheduler@@SA_KPEBVIMonitorTarget@@@Z @ 0x1800EE104 (-GetDefaultVBlankDuration@CScheduler@@SA_KPEBVIMonitorTarget@@@Z.c)
 *     ?UpdateToPrevious@MonitorTime@@QEAAX_K@Z @ 0x1801B9BC0 (-UpdateToPrevious@MonitorTime@@QEAAX_K@Z.c)
 *     ?SetToNearest@MonitorTime@@QEAAX_K@Z @ 0x1801BEB30 (-SetToNearest@MonitorTime@@QEAAX_K@Z.c)
 *     McTemplateU0qxxxxn_EventWriteTransfer @ 0x18021F410 (McTemplateU0qxxxxn_EventWriteTransfer.c)
 *     ?ResetDrawing@CRenderPerf@@IEAAXXZ @ 0x18021FE7C (-ResetDrawing@CRenderPerf@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::BeginCompositionFrame(CComposition *this)
{
  __int64 v2; // rax
  __m128i v3; // xmm2
  __int64 v4; // xmm0_8
  __int64 v5; // rax
  const struct IMonitorTarget *v6; // rbx
  LARGE_INTEGER v7; // rbx
  unsigned __int64 DefaultVBlankDuration; // rax
  _QWORD *v9; // rcx
  __int64 *v10; // rsi
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // edx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  CGlobalComposition *CurrentFrameId; // rax
  __int64 v19; // rcx
  LARGE_INTEGER v21; // [rsp+50h] [rbp-F8h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-F0h]
  int v23; // [rsp+60h] [rbp-E8h]
  LARGE_INTEGER v24; // [rsp+68h] [rbp-E0h] BYREF
  unsigned __int64 v25; // [rsp+70h] [rbp-D8h]
  int v26; // [rsp+78h] [rbp-D0h]
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp-C8h] BYREF
  unsigned __int64 v28; // [rsp+90h] [rbp-B8h] BYREF
  unsigned __int64 v29[2]; // [rsp+98h] [rbp-B0h]
  __int128 v30; // [rsp+A8h] [rbp-A0h]
  __int128 v31; // [rsp+B8h] [rbp-90h]
  __int64 v32; // [rsp+C8h] [rbp-80h]
  LARGE_INTEGER v33; // [rsp+D0h] [rbp-78h]
  LARGE_INTEGER v34; // [rsp+D8h] [rbp-70h]
  unsigned __int64 v35; // [rsp+E0h] [rbp-68h]
  unsigned __int64 v36; // [rsp+E8h] [rbp-60h]
  LARGE_INTEGER v37; // [rsp+F0h] [rbp-58h]
  LARGE_INTEGER v38; // [rsp+F8h] [rbp-50h]
  __int128 v39; // [rsp+100h] [rbp-48h]
  int v40; // [rsp+110h] [rbp-38h]
  __int64 v41; // [rsp+118h] [rbp-30h]
  __int64 v42; // [rsp+120h] [rbp-28h]
  int v43; // [rsp+128h] [rbp-20h]

  memset_0(&v28, 0, 0xA0uLL);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 24LL))(*((_QWORD *)this + 39));
  v3 = *(__m128i *)v2;
  *(_OWORD *)v29 = *(_OWORD *)v2;
  v30 = *(_OWORD *)(v2 + 16);
  v31 = *(_OWORD *)(v2 + 32);
  v4 = *(_QWORD *)(v2 + 48);
  v5 = *((_QWORD *)this + 38);
  v32 = v4;
  if ( *((_QWORD *)this + 39) == v5 )
    v28 = 0LL;
  else
    v28 = v3.m128i_i64[0] - _mm_srli_si128(v3, 8).m128i_u64[0];
  v6 = (const struct IMonitorTarget *)**((_QWORD **)g_pComposition + 77);
  v21.QuadPart = 0LL;
  v22 = 0LL;
  v23 = 0;
  v24.QuadPart = 0LL;
  v25 = 0LL;
  v26 = 0;
  if ( v6
    && (*(unsigned __int8 (__fastcall **)(const struct IMonitorTarget *, LARGE_INTEGER *, LARGE_INTEGER *, _QWORD))(*(_QWORD *)v6 + 216LL))(
         v6,
         &v21,
         &v24,
         0LL) )
  {
    MonitorTime::UpdateToPrevious((MonitorTime *)&v21, *((_QWORD *)this + 37));
    MonitorTime::UpdateToPrevious((MonitorTime *)&v24, *((_QWORD *)this + 37));
    v33 = v21;
    v34 = v24;
    v35 = v22;
    v36 = v25;
    MonitorTime::SetToNearest((MonitorTime *)&v21, v29[0]);
    --v23;
    v21.QuadPart -= v22;
    v7 = v21;
    MonitorTime::SetToNearest((MonitorTime *)&v24, v29[0]);
    --v26;
    v24.QuadPart -= v25;
    v38 = v24;
    v37 = v7;
  }
  else
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    DefaultVBlankDuration = CScheduler::GetDefaultVBlankDuration(v6);
    v33 = PerformanceCount;
    v34 = PerformanceCount;
    v37 = PerformanceCount;
    v38 = PerformanceCount;
    v35 = DefaultVBlankDuration;
    v36 = DefaultVBlankDuration;
  }
  v9 = (_QWORD *)*((_QWORD *)this + 81);
  v10 = (__int64 *)((char *)this + 888);
  v11 = *(_OWORD *)((char *)this + 6476);
  v40 = *((_DWORD *)this + 1623);
  v39 = v11;
  v41 = v9[26];
  v43 = (__int64)(v9[28] - v9[27]) >> 3;
  v12 = v9[27];
  v13 = *((_QWORD *)this + 709);
  v42 = v12;
  *((_QWORD *)this + 643) = v29[1];
  v14 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, char *))(*(_QWORD *)v13 + 8LL))(
          v13,
          &v28,
          (char *)this + 888);
  v16 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xBAFu, 0LL);
  v17 = (unsigned int)Microsoft_Windows_Dwm_CompositorEnableBits;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
  {
    McTemplateU0qxxxxn_EventWriteTransfer(
      Microsoft_Windows_Dwm_CompositorEnableBits,
      v15,
      v16,
      *v10,
      v29[0],
      v28,
      v29[1]);
    v17 = (unsigned int)Microsoft_Windows_Dwm_CompositorEnableBits;
  }
  if ( (v17 & 2) != 0 )
  {
    CurrentFrameId = GetCurrentFrameId();
    *(_QWORD *)v19 = CurrentFrameId;
    *(_QWORD *)(v19 + 48) = 0LL;
    *(_QWORD *)(v19 + 56) = 0LL;
    *(_QWORD *)(v19 + 64) = 0LL;
    *(_QWORD *)(v19 + 72) = 0LL;
    *(_QWORD *)(v19 + 80) = 0LL;
    *(_QWORD *)(v19 + 88) = 0LL;
    *(_QWORD *)(v19 + 96) = 0LL;
    *(_QWORD *)(v19 + 104) = 0LL;
    *(_QWORD *)(v19 + 112) = 0LL;
    *(_DWORD *)(v19 + 120) = 0;
    CRenderPerf::ResetDrawing((CRenderPerf *)v19);
  }
  if ( *((_BYTE *)this + 6470) )
  {
    (*(void (__fastcall **)(CComposition *))(*(_QWORD *)this + 104LL))(this);
    *((_BYTE *)this + 6470) = 0;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000000) != 0 )
    McTemplateU0x_EventWriteTransfer(v17, &::CurrentFrameId, *v10);
  if ( DWORD2(v39) )
    dword_1803FA770 |= 0x40u;
  return v16;
}
