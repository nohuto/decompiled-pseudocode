/*
 * XREFs of ?UpdatePresentStats@CTargetStats@@IEAA_NXZ @ 0x1801059F0
 * Callers:
 *     ?GetLastMonitorTime@CDDisplayRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z @ 0x180104220 (-GetLastMonitorTime@CDDisplayRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z.c)
 *     ?GetTargetTime@CTargetStats@@QEAA_K_K0@Z @ 0x1801049C4 (-GetTargetTime@CTargetStats@@QEAA_K_K0@Z.c)
 *     ?GetStats@CTargetStats@@QEAAX_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x180104EF0 (-GetStats@CTargetStats@@QEAAX_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z.c)
 * Callees:
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18004E2E4 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?GetPresentStatisticsDWM@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180104C40 (-GetPresentStatisticsDWM@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetVBlankDuration@RefreshRateInfo@@QEBA_KXZ @ 0x1801062F4 (-GetVBlankDuration@RefreshRateInfo@@QEBA_KXZ.c)
 *     ?GetPresentStatisticsDWM@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180106330 (-GetPresentStatisticsDWM@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetPresentCount@CDDisplaySwapChain@@UEBAIXZ @ 0x1801F9040 (-GetPresentCount@CDDisplaySwapChain@@UEBAIXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CTargetStats::UpdatePresentStats(CTargetStats *this)
{
  CDDisplaySwapChain *v2; // rcx
  int v3; // esi
  unsigned int (__fastcall *v4)(CDDisplaySwapChain *__hidden); // rax
  _QWORD *v5; // rdi
  unsigned int v6; // edi
  CLegacySwapChain *v7; // rcx
  __int64 (__fastcall *v8)(CDDisplaySwapChain *, struct DXGI_FRAME_STATISTICS_DWM *); // rax
  int PresentStatisticsDWM; // eax
  __int64 v10; // r8
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __m128i v14; // xmm2
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  unsigned int v17; // eax
  unsigned int v18; // edi
  __int64 v19; // rcx
  __int64 (*v20)(void); // rax
  __int64 VBlankDuration; // rax
  int v22; // ecx
  __int64 v23; // rdx
  int v24; // ecx
  bool result; // al
  unsigned int v26; // eax
  _DWORD v27[4]; // [rsp+20h] [rbp-78h] BYREF
  __m128i v28; // [rsp+30h] [rbp-68h] BYREF
  __int128 v29; // [rsp+40h] [rbp-58h]
  __int128 v30; // [rsp+50h] [rbp-48h]
  __int128 v31; // [rsp+60h] [rbp-38h]
  __int128 v32; // [rsp+70h] [rbp-28h]

  v2 = (CDDisplaySwapChain *)*((_QWORD *)this + 4);
  if ( !v2 )
    return 0;
  v3 = 0;
  v4 = *(unsigned int (__fastcall **)(CDDisplaySwapChain *__hidden))(*(_QWORD *)v2 + 96LL);
  if ( v4 == CLegacySwapChain::GetPresentCount )
  {
    v5 = (_QWORD *)((char *)v2 + 264);
    v27[0] = 0;
    if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)v2 + 33) )
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)*v5 + 120LL))(*v5, v27);
    v6 = v27[0];
  }
  else
  {
    v26 = v4 == CDDisplaySwapChain::GetPresentCount
        ? CDDisplaySwapChain::GetPresentCount(v2)
        : ((__int64 (*)(void))v4)();
    v6 = v26;
  }
  if ( !v6 )
    return 0;
  v7 = (CLegacySwapChain *)*((_QWORD *)this + 4);
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v8 = *(__int64 (__fastcall **)(CDDisplaySwapChain *, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v7 + 328LL);
  if ( v8 == CLegacySwapChain::GetPresentStatisticsDWM )
    PresentStatisticsDWM = CLegacySwapChain::GetPresentStatisticsDWM(v7, (struct DXGI_FRAME_STATISTICS_DWM *)&v28);
  else
    PresentStatisticsDWM = v8 == CDDisplaySwapChain::GetPresentStatisticsDWM
                         ? CDDisplaySwapChain::GetPresentStatisticsDWM(v7, (struct DXGI_FRAME_STATISTICS_DWM *)&v28)
                         : v8(v7, (struct DXGI_FRAME_STATISTICS_DWM *)&v28);
  if ( PresentStatisticsDWM )
    return 0;
  v10 = *((_QWORD *)&v29 + 1);
  if ( !*((_QWORD *)&v29 + 1) )
    return 0;
  if ( !*((_QWORD *)&v30 + 1) )
    return 0;
  v11 = v32;
  if ( !(_QWORD)v32 || !DWORD2(v32) )
    return 0;
  v12 = v29;
  v13 = v30;
  v14 = v28;
  *((__m128i *)this + 3) = v28;
  *((_DWORD *)this + 62) = v6;
  *((_OWORD *)this + 4) = v12;
  v15 = v31;
  *((_OWORD *)this + 5) = v13;
  v16 = v32;
  *((_OWORD *)this + 6) = v15;
  *((_OWORD *)this + 7) = v16;
  if ( *((_QWORD *)this + 14) == 0xFFFFFFFFLL )
    *((_QWORD *)this + 16) = v10;
  else
    *((_QWORD *)this + 16) = v10 + 9 * v11 / 10;
  v17 = _mm_cvtsi128_si32(v14);
  if ( v6 > v17 )
  {
    v18 = v6 - v17;
    v3 = 8;
    if ( v18 < 8 )
      v3 = v18;
  }
  *((_DWORD *)this + 63) = v3;
  v19 = *((_QWORD *)this + 4);
  v20 = *(__int64 (**)(void))(*(_QWORD *)v19 + 256LL);
  if ( (char *)v20 == (char *)COverlaySwapChain::GetVBlankDuration )
    VBlankDuration = RefreshRateInfo::GetVBlankDuration((RefreshRateInfo *)(v19 + 104));
  else
    VBlankDuration = v20();
  v22 = *((_DWORD *)this + 16);
  *((_QWORD *)this + 17) = VBlankDuration;
  *((_QWORD *)this + 18) = *((_QWORD *)this + 9);
  *((_DWORD *)this + 40) = v22;
  *((_QWORD *)this + 19) = VBlankDuration;
  v23 = *((_QWORD *)this + 17) * *((unsigned int *)this + 30);
  v24 = *((_DWORD *)this + 21);
  *((_QWORD *)this + 21) = *((_QWORD *)this + 11);
  result = 1;
  *((_QWORD *)this + 22) = v23;
  *((_DWORD *)this + 46) = v24;
  return result;
}
