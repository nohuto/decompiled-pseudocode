/*
 * XREFs of ?GetStats@CLegacyRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x1801051C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18004E2E4 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?GetPresentStatisticsDWM@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180104C40 (-GetPresentStatisticsDWM@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetVBlankDuration@RefreshRateInfo@@QEBA_KXZ @ 0x1801062F4 (-GetVBlankDuration@RefreshRateInfo@@QEBA_KXZ.c)
 *     ?GetPresentStatisticsDWM@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180106330 (-GetPresentStatisticsDWM@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetPresentCount@CDDisplaySwapChain@@UEBAIXZ @ 0x1801F9040 (-GetPresentCount@CDDisplaySwapChain@@UEBAIXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CLegacyRenderTarget::GetStats(
        CLegacyRenderTarget *this,
        LARGE_INTEGER a2,
        struct tagCOMPOSITION_TARGET_STATS_2 *a3)
{
  LARGE_INTEGER v4; // rsi
  CDDisplaySwapChain *v6; // rcx
  __int64 (*v7)(void); // rax
  _QWORD *v8; // r14
  unsigned int v9; // r14d
  CLegacySwapChain *v10; // rcx
  __int64 (__fastcall *v11)(CDDisplaySwapChain *, struct DXGI_FRAME_STATISTICS_DWM *); // rax
  int PresentStatisticsDWM; // eax
  __int64 v13; // r8
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __m128i v17; // xmm2
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  unsigned int v20; // eax
  unsigned int v21; // r14d
  int v22; // eax
  __int64 v23; // rcx
  __int64 (*v24)(void); // rax
  __int64 VBlankDuration; // rax
  int v26; // ecx
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // xmm1_8
  unsigned int v30; // ecx
  __int64 v31; // rax
  LARGE_INTEGER v32; // rax
  unsigned __int64 v33; // r8
  __int64 v34; // r9
  LONGLONG v35; // rax
  CGlobalComposition *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // r9d
  LARGE_INTEGER v40; // rax
  unsigned __int64 v41; // r14
  DWORD LowPart; // r10d
  unsigned int v43; // r8d
  __int64 v44; // r15
  unsigned __int64 v45; // r12
  __int64 v46; // r13
  LONGLONG v47; // rax
  __int64 v48; // r14
  DWORD v49; // r13d
  unsigned __int64 v50; // rsi
  unsigned int v51; // eax
  unsigned int PresentCount; // eax
  unsigned int v54; // [rsp+20h] [rbp-59h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+28h] [rbp-51h] BYREF
  LARGE_INTEGER v56; // [rsp+30h] [rbp-49h] BYREF
  __m128i v57; // [rsp+40h] [rbp-39h] BYREF
  __int128 v58; // [rsp+50h] [rbp-29h]
  __int128 v59; // [rsp+60h] [rbp-19h]
  __int128 v60; // [rsp+70h] [rbp-9h]
  __int128 v61; // [rsp+80h] [rbp+7h]

  v4 = a2;
  if ( a2.QuadPart > *((_QWORD *)this + 4137) )
  {
    v6 = (CDDisplaySwapChain *)*((_QWORD *)this + 4125);
    if ( v6 )
    {
      v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 96LL);
      if ( (char *)v7 == (char *)CLegacySwapChain::GetPresentCount )
      {
        v8 = (_QWORD *)((char *)v6 + 264);
        v54 = 0;
        if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)v6 + 33) )
          (*(void (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v8 + 120LL))(*v8, &v54);
        v9 = v54;
      }
      else
      {
        if ( (char *)v7 == (char *)CDDisplaySwapChain::GetPresentCount )
          PresentCount = CDDisplaySwapChain::GetPresentCount(v6);
        else
          PresentCount = v7();
        v9 = PresentCount;
      }
      if ( v9 )
      {
        memset_0(&v57, 0, 0x50uLL);
        v10 = (CLegacySwapChain *)*((_QWORD *)this + 4125);
        v11 = *(__int64 (__fastcall **)(CDDisplaySwapChain *, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v10 + 328LL);
        if ( v11 == CLegacySwapChain::GetPresentStatisticsDWM )
          PresentStatisticsDWM = CLegacySwapChain::GetPresentStatisticsDWM(
                                   v10,
                                   (struct DXGI_FRAME_STATISTICS_DWM *)&v57);
        else
          PresentStatisticsDWM = v11 == CDDisplaySwapChain::GetPresentStatisticsDWM
                               ? CDDisplaySwapChain::GetPresentStatisticsDWM(
                                   v10,
                                   (struct DXGI_FRAME_STATISTICS_DWM *)&v57)
                               : v11(v10, (struct DXGI_FRAME_STATISTICS_DWM *)&v57);
        if ( !PresentStatisticsDWM )
        {
          v13 = *((_QWORD *)&v58 + 1);
          if ( *((_QWORD *)&v58 + 1) )
          {
            if ( *((_QWORD *)&v59 + 1) )
            {
              v14 = v61;
              if ( (_QWORD)v61 )
              {
                if ( DWORD2(v61) )
                {
                  v15 = v58;
                  v16 = v59;
                  v17 = v57;
                  *(__m128i *)((char *)this + 33016) = v57;
                  *((_DWORD *)this + 8304) = v9;
                  *(_OWORD *)((char *)this + 33032) = v15;
                  v18 = v60;
                  *(_OWORD *)((char *)this + 33048) = v16;
                  v19 = v61;
                  *(_OWORD *)((char *)this + 33064) = v18;
                  *(_OWORD *)((char *)this + 33080) = v19;
                  if ( *((_QWORD *)this + 4135) == 0xFFFFFFFFLL )
                    *((_QWORD *)this + 4137) = v13;
                  else
                    *((_QWORD *)this + 4137) = v13 + 9 * v14 / 10;
                  v20 = _mm_cvtsi128_si32(v17);
                  if ( v9 <= v20 )
                  {
                    v22 = 0;
                  }
                  else
                  {
                    v21 = v9 - v20;
                    v22 = 8;
                    if ( v21 < 8 )
                      v22 = v21;
                  }
                  *((_DWORD *)this + 8305) = v22;
                  v23 = *((_QWORD *)this + 4125);
                  v24 = *(__int64 (**)(void))(*(_QWORD *)v23 + 256LL);
                  if ( (char *)v24 == (char *)COverlaySwapChain::GetVBlankDuration )
                    VBlankDuration = RefreshRateInfo::GetVBlankDuration((RefreshRateInfo *)(v23 + 104));
                  else
                    VBlankDuration = v24();
                  v26 = *((_DWORD *)this + 8258);
                  *((_QWORD *)this + 4138) = VBlankDuration;
                  *((_QWORD *)this + 4139) = *((_QWORD *)this + 4130);
                  *((_DWORD *)this + 8282) = v26;
                  *((_QWORD *)this + 4140) = VBlankDuration;
                  v27 = *((_QWORD *)this + 4132);
                  v28 = *((_DWORD *)this + 8263);
                  *((_QWORD *)this + 4143) = *((_QWORD *)this + 4138) * *((unsigned int *)this + 8272);
                  *((_QWORD *)this + 4142) = v27;
                  *((_DWORD *)this + 8288) = v28;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *((_QWORD *)this + 4137) )
  {
    v29 = *((_QWORD *)this + 4141);
    v30 = *((_DWORD *)this + 8305) + 1;
    *(_OWORD *)((char *)this + 33160) = *(_OWORD *)((char *)this + 33112);
    *((_QWORD *)this + 4147) = v29;
    v31 = *((_QWORD *)this + 4146) * v30;
    *((_DWORD *)this + 8294) += v30;
    *((_QWORD *)this + 4145) += v31;
    v32 = v4;
    v56 = v4;
    if ( !v4.QuadPart )
    {
      QueryPerformanceCounter(&v56);
      v32 = v56;
    }
    v33 = *((_QWORD *)this + 4146);
    v34 = *((_QWORD *)this + 4145);
    if ( v34 + v33 < v32.QuadPart )
    {
      v35 = (v32.QuadPart - v34) / v33;
      *((_DWORD *)this + 8294) += v35;
      *((_QWORD *)this + 4145) = v34 + v35 * v33;
    }
  }
  v36 = g_pComposition;
  *(_DWORD *)a3 = *((_DWORD *)this + 8305);
  v37 = 0LL;
  if ( v36 )
    v37 = *((_QWORD *)v36 + 111);
  if ( *((_QWORD *)this + 4154) == v37 )
    v38 = *((_QWORD *)this + 4153);
  else
    v38 = 0LL;
  *((_QWORD *)a3 + 1) = v38;
  *((_QWORD *)a3 + 2) = *((_QWORD *)this + 4138);
  if ( *((_QWORD *)this + 4137) )
  {
    v39 = *((_DWORD *)this + 8305);
    v40 = v4;
    v41 = *((_QWORD *)this + 4140);
    LowPart = *((_DWORD *)this + 8288);
    v43 = v39 + *((_DWORD *)this + 8282);
    v44 = *((_QWORD *)this + 4139) + v41 * v39;
    v45 = *((_QWORD *)this + 4143);
    v46 = *((_QWORD *)this + 4142);
    v56.LowPart = LowPart;
    v54 = v43;
    PerformanceCount = v4;
    if ( !v4.QuadPart )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v39 = *((_DWORD *)this + 8305);
      v40 = PerformanceCount;
      v43 = v54;
      LowPart = v56.LowPart;
    }
    if ( v41 + v44 < v40.QuadPart )
    {
      v47 = (v40.QuadPart - v44) / v41;
      v44 += v47 * v41;
      v54 = v47 + v43;
    }
    PerformanceCount = v4;
    v48 = v46 + v45 * (v39 / *((_DWORD *)this + 8272));
    v49 = v39 / *((_DWORD *)this + 8272) + LowPart;
    if ( !v4.QuadPart )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v4 = PerformanceCount;
    }
    if ( v48 + v45 < v4.QuadPart )
    {
      v50 = v4.QuadPart - v48;
      v48 += v45 * (v50 / v45);
      v49 += v50 / v45;
    }
    *((_DWORD *)a3 + 6) = *((_DWORD *)this + 8304);
    v51 = v54;
    *((_DWORD *)a3 + 8) = v49;
    *((_DWORD *)a3 + 7) = v51;
    *((_QWORD *)a3 + 5) = v44;
    *((_QWORD *)a3 + 6) = v48;
    *((_DWORD *)a3 + 14) = *((_DWORD *)this + 8254);
    *((_DWORD *)a3 + 15) = *((_DWORD *)this + 8255);
    *((_DWORD *)a3 + 16) = *((_DWORD *)this + 8266);
    *((_QWORD *)a3 + 9) = *((_QWORD *)this + 4128);
    *((_QWORD *)a3 + 10) = *((_QWORD *)this + 4134);
  }
  else
  {
    *((_QWORD *)a3 + 3) = 0LL;
    *((_DWORD *)a3 + 8) = 0;
    *((_QWORD *)a3 + 5) = 0LL;
    *((_QWORD *)a3 + 6) = 0LL;
    *((_QWORD *)a3 + 7) = 0LL;
    *((_DWORD *)a3 + 16) = 0;
    *((_QWORD *)a3 + 9) = 0LL;
    *((_QWORD *)a3 + 10) = 0LL;
  }
  return 1;
}
