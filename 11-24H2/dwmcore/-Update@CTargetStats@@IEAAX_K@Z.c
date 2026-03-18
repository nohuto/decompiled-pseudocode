/*
 * XREFs of ?Update@CTargetStats@@IEAAX_K@Z @ 0x180105FB0
 * Callers:
 *     ?Ready@CTargetStats@@QEAA_N_K_N@Z @ 0x18009B218 (-Ready@CTargetStats@@QEAA_N_K_N@Z.c)
 *     ?GetStats@CDDisplayRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x1801D5980 (-GetStats@CDDisplayRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z.c)
 *     ?GetOutstandingPresents@CTargetStats@@QEAAI_K@Z @ 0x18020C318 (-GetOutstandingPresents@CTargetStats@@QEAAI_K@Z.c)
 * Callees:
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18004E2E4 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?GetPresentStatisticsDWM@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180104C40 (-GetPresentStatisticsDWM@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetVBlankDuration@RefreshRateInfo@@QEBA_KXZ @ 0x1801062F4 (-GetVBlankDuration@RefreshRateInfo@@QEBA_KXZ.c)
 *     ?GetPresentStatisticsDWM@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180106330 (-GetPresentStatisticsDWM@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetPresentCount@CDDisplaySwapChain@@UEBAIXZ @ 0x1801F9040 (-GetPresentCount@CDDisplaySwapChain@@UEBAIXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTargetStats::Update(CTargetStats *this, LARGE_INTEGER a2)
{
  LARGE_INTEGER v2; // rdi
  CDDisplaySwapChain *v4; // rcx
  int v5; // ebp
  __int64 (*v6)(void); // rax
  _QWORD *v7; // rsi
  DWORD LowPart; // esi
  CLegacySwapChain *v9; // rcx
  __int64 (__fastcall *v10)(CDDisplaySwapChain *, struct DXGI_FRAME_STATISTICS_DWM *); // rax
  int PresentStatisticsDWM; // eax
  __int64 v12; // r8
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __m128i v16; // xmm2
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  unsigned int v19; // eax
  unsigned int v20; // esi
  __int64 v21; // rcx
  __int64 (*v22)(void); // rax
  __int64 VBlankDuration; // rax
  int v24; // ecx
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // xmm1_8
  unsigned int v28; // ecx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // rdi
  unsigned int PresentCount; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-88h] BYREF
  __m128i v35; // [rsp+30h] [rbp-78h] BYREF
  __int128 v36; // [rsp+40h] [rbp-68h]
  __int128 v37; // [rsp+50h] [rbp-58h]
  __int128 v38; // [rsp+60h] [rbp-48h]
  __int128 v39; // [rsp+70h] [rbp-38h]

  v2 = a2;
  if ( a2.QuadPart > *((_QWORD *)this + 16) )
  {
    v4 = (CDDisplaySwapChain *)*((_QWORD *)this + 4);
    if ( v4 )
    {
      v5 = 0;
      v6 = *(__int64 (**)(void))(*(_QWORD *)v4 + 96LL);
      if ( (char *)v6 == (char *)CLegacySwapChain::GetPresentCount )
      {
        v7 = (_QWORD *)((char *)v4 + 264);
        PerformanceCount.LowPart = 0;
        if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)v4 + 33) )
          (*(void (__fastcall **)(_QWORD, LARGE_INTEGER *))(*(_QWORD *)*v7 + 120LL))(*v7, &PerformanceCount);
        LowPart = PerformanceCount.LowPart;
      }
      else
      {
        if ( (char *)v6 == (char *)CDDisplaySwapChain::GetPresentCount )
          PresentCount = CDDisplaySwapChain::GetPresentCount(v4);
        else
          PresentCount = v6();
        LowPart = PresentCount;
      }
      if ( LowPart )
      {
        v9 = (CLegacySwapChain *)*((_QWORD *)this + 4);
        v35 = 0LL;
        v36 = 0LL;
        v37 = 0LL;
        v38 = 0LL;
        v39 = 0LL;
        v10 = *(__int64 (__fastcall **)(CDDisplaySwapChain *, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v9 + 328LL);
        if ( v10 == CLegacySwapChain::GetPresentStatisticsDWM )
          PresentStatisticsDWM = CLegacySwapChain::GetPresentStatisticsDWM(v9, (struct DXGI_FRAME_STATISTICS_DWM *)&v35);
        else
          PresentStatisticsDWM = v10 == CDDisplaySwapChain::GetPresentStatisticsDWM
                               ? CDDisplaySwapChain::GetPresentStatisticsDWM(
                                   v9,
                                   (struct DXGI_FRAME_STATISTICS_DWM *)&v35)
                               : v10(v9, (struct DXGI_FRAME_STATISTICS_DWM *)&v35);
        if ( !PresentStatisticsDWM )
        {
          v12 = *((_QWORD *)&v36 + 1);
          if ( *((_QWORD *)&v36 + 1) )
          {
            if ( *((_QWORD *)&v37 + 1) )
            {
              v13 = v39;
              if ( (_QWORD)v39 )
              {
                if ( DWORD2(v39) )
                {
                  v14 = v36;
                  v15 = v37;
                  v16 = v35;
                  *((__m128i *)this + 3) = v35;
                  *((_DWORD *)this + 62) = LowPart;
                  *((_OWORD *)this + 4) = v14;
                  v17 = v38;
                  *((_OWORD *)this + 5) = v15;
                  v18 = v39;
                  *((_OWORD *)this + 6) = v17;
                  *((_OWORD *)this + 7) = v18;
                  if ( *((_QWORD *)this + 14) == 0xFFFFFFFFLL )
                    *((_QWORD *)this + 16) = v12;
                  else
                    *((_QWORD *)this + 16) = v12 + 9 * v13 / 10;
                  v19 = _mm_cvtsi128_si32(v16);
                  if ( LowPart > v19 )
                  {
                    v20 = LowPart - v19;
                    v5 = 8;
                    if ( v20 < 8 )
                      v5 = v20;
                  }
                  *((_DWORD *)this + 63) = v5;
                  v21 = *((_QWORD *)this + 4);
                  v22 = *(__int64 (**)(void))(*(_QWORD *)v21 + 256LL);
                  if ( (char *)v22 == (char *)COverlaySwapChain::GetVBlankDuration )
                    VBlankDuration = RefreshRateInfo::GetVBlankDuration((RefreshRateInfo *)(v21 + 104));
                  else
                    VBlankDuration = v22();
                  v24 = *((_DWORD *)this + 16);
                  *((_QWORD *)this + 17) = VBlankDuration;
                  *((_QWORD *)this + 18) = *((_QWORD *)this + 9);
                  *((_DWORD *)this + 40) = v24;
                  *((_QWORD *)this + 19) = VBlankDuration;
                  v25 = *((_QWORD *)this + 11);
                  v26 = *((_DWORD *)this + 21);
                  *((_QWORD *)this + 22) = *((_QWORD *)this + 17) * *((unsigned int *)this + 30);
                  *((_QWORD *)this + 21) = v25;
                  *((_DWORD *)this + 46) = v26;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *((_QWORD *)this + 16) )
  {
    v27 = *((_QWORD *)this + 20);
    v28 = *((_DWORD *)this + 63) + 1;
    *((_OWORD *)this + 12) = *((_OWORD *)this + 9);
    *((_QWORD *)this + 26) = v27;
    v29 = *((_QWORD *)this + 25) * v28;
    *((_DWORD *)this + 52) += v28;
    *((_QWORD *)this + 24) += v29;
    PerformanceCount = v2;
    if ( !v2.QuadPart )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v2 = PerformanceCount;
    }
    v30 = *((_QWORD *)this + 25);
    v31 = *((_QWORD *)this + 24);
    if ( v31 + v30 < v2.QuadPart )
    {
      v32 = v2.QuadPart - v31;
      *((_DWORD *)this + 52) += v32 / v30;
      *((_QWORD *)this + 24) = v31 + v32 / v30 * v30;
    }
  }
}
