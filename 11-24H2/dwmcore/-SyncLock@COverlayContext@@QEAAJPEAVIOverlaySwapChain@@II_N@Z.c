/*
 * XREFs of ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z @ 0x1800584AC
 * Callers:
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180057F90 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?SyncLock@CDDisplayRenderTarget@@UEAAXI@Z @ 0x180097250 (-SyncLock@CDDisplayRenderTarget@@UEAAXI@Z.c)
 *     ?SyncLock@CLegacyRenderTarget@@UEAAXI@Z @ 0x1801F8960 (-SyncLock@CLegacyRenderTarget@@UEAAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LegacyPresentRequired@COverlayContext@@AEBA_NXZ @ 0x1801E057C (-LegacyPresentRequired@COverlayContext@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::SyncLock(
        COverlayContext *this,
        struct IOverlaySwapChain *a2,
        unsigned int a3,
        int a4,
        bool a5)
{
  __int64 v6; // rsi
  unsigned int v9; // ebx
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // r9
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int64 (__fastcall *v19)(struct IOverlaySwapChain *, __int64, __int64, __int64, _QWORD, _BYTE *, int); // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // eax
  __int64 v23; // rax
  __int64 (__fastcall *v24)(struct IOverlaySwapChain *, __int64, __int64, __int128 *, int); // rax
  int v25; // eax
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rax
  __int128 v29; // xmm0
  __int64 v30; // r9
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int64 v33; // rax
  __int128 v34; // xmm1
  __int64 (__fastcall *v35)(struct IOverlaySwapChain *, __int64, __int64, __int64, _QWORD, _BYTE *, int); // rax
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  int v38; // eax
  __int64 v39; // rax
  __int64 (__fastcall *v40)(struct IOverlaySwapChain *, __int64, __int64, __int128 *, int); // rax
  int v41; // eax
  unsigned int v43; // [rsp+20h] [rbp-B1h]
  __int128 v44; // [rsp+40h] [rbp-91h] BYREF
  __int64 v45; // [rsp+50h] [rbp-81h]
  _BYTE v46[4]; // [rsp+60h] [rbp-71h] BYREF
  char v47; // [rsp+64h] [rbp-6Dh]
  __int64 v48; // [rsp+68h] [rbp-69h]
  __int128 v49; // [rsp+70h] [rbp-61h]
  __int128 v50; // [rsp+80h] [rbp-51h]
  __int128 v51; // [rsp+90h] [rbp-41h]
  __int128 v52; // [rsp+A0h] [rbp-31h]
  __int128 v53; // [rsp+B0h] [rbp-21h]
  __int128 v54; // [rsp+C0h] [rbp-11h]
  __int128 v55; // [rsp+D0h] [rbp-1h]

  v6 = a3;
  v9 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
  {
    if ( *((_BYTE *)this + 19208) && !*((_QWORD *)this + 2439) )
    {
      if ( (_DWORD)v6 )
      {
        v10 = (unsigned int)v6;
        do
        {
          if ( a5 || COverlayContext::LegacyPresentRequired(this) )
          {
            v23 = *(_QWORD *)a2;
            v45 = 0LL;
            v24 = *(__int64 (__fastcall **)(struct IOverlaySwapChain *, __int64, __int64, __int128 *, int))(v23 + 376);
            v44 = 0LL;
            v25 = v24(a2, 1LL, 2LL, &v44, a4);
            v9 = v25;
            if ( v25 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xDDEu, 0LL);
            if ( (_QWORD)v44 )
              std::_Deallocate<16,0>((_QWORD *)v44, (v45 - v44) & 0xFFFFFFFFFFFFFFF0uLL);
          }
          else
          {
            memset_0(v46, 0, 0x80uLL);
            v11 = *(_QWORD *)a2;
            v47 = 1;
            v12 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(v11 + 200))(a2);
            v13 = *(_OWORD *)((char *)this + 19096);
            v14 = *((unsigned int *)this + 2);
            v15 = *(_OWORD *)((char *)this + 19112);
            v48 = v12;
            v49 = v13;
            v16 = *(_OWORD *)((char *)this + 19128);
            v17 = *(_QWORD *)a2;
            v50 = v15;
            v18 = *(_OWORD *)((char *)this + 19144);
            v19 = *(__int64 (__fastcall **)(struct IOverlaySwapChain *, __int64, __int64, __int64, _QWORD, _BYTE *, int))(v17 + 392);
            v51 = v16;
            v53 = *(_OWORD *)((char *)this + 19160);
            v20 = *(_OWORD *)((char *)this + 19192);
            v52 = v18;
            v21 = *(_OWORD *)((char *)this + 19176);
            v55 = v20;
            v54 = v21;
            v22 = v19(a2, 1LL, 2LL, v14, 0LL, v46, 1);
            v9 = v22;
            if ( v22 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xDD4u, 0LL);
          }
          --v10;
        }
        while ( v10 );
      }
      return v9;
    }
    v43 = 3558;
LABEL_33:
    v9 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304309, v43, 0LL);
    return v9;
  }
  if ( !*((_BYTE *)this + 19088) || !*((_BYTE *)this + 19208) || *((_QWORD *)this + 2439) )
  {
    v43 = 3600;
    goto LABEL_33;
  }
  if ( (_DWORD)v6 )
  {
    v26 = v6;
    do
    {
      if ( a5 || COverlayContext::LegacyPresentRequired(this) )
      {
        v39 = *(_QWORD *)a2;
        v45 = 0LL;
        v40 = *(__int64 (__fastcall **)(struct IOverlaySwapChain *, __int64, __int64, __int128 *, int))(v39 + 376);
        v44 = 0LL;
        v41 = v40(a2, 1LL, 2LL, &v44, a4);
        v9 = v41;
        if ( v41 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0xE08u, 0LL);
        if ( (_QWORD)v44 )
          std::_Deallocate<16,0>((_QWORD *)v44, (v45 - v44) & 0xFFFFFFFFFFFFFFF0uLL);
      }
      else
      {
        memset_0(v46, 0, 0x80uLL);
        v27 = *(_QWORD *)a2;
        v47 = 1;
        v28 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(v27 + 200))(a2);
        v29 = *(_OWORD *)((char *)this + 19096);
        v30 = *((unsigned int *)this + 2);
        v31 = *(_OWORD *)((char *)this + 19112);
        v48 = v28;
        v49 = v29;
        v32 = *(_OWORD *)((char *)this + 19128);
        v33 = *(_QWORD *)a2;
        v50 = v31;
        v34 = *(_OWORD *)((char *)this + 19144);
        v35 = *(__int64 (__fastcall **)(struct IOverlaySwapChain *, __int64, __int64, __int64, _QWORD, _BYTE *, int))(v33 + 392);
        v51 = v32;
        v53 = *(_OWORD *)((char *)this + 19160);
        v36 = *(_OWORD *)((char *)this + 19192);
        v52 = v34;
        v37 = *(_OWORD *)((char *)this + 19176);
        v55 = v36;
        v54 = v37;
        v38 = v35(a2, 1LL, 2LL, v30, 0LL, v46, 1);
        v9 = v38;
        if ( v38 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xDFFu, 0LL);
      }
      --v26;
    }
    while ( v26 );
  }
  return v9;
}
