/*
 * XREFs of ?GetLastMonitorTime@CLegacyRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z @ 0x180105C80
 * Callers:
 *     ?UpdateTiming@CMonitorClock@@UEAA_KXZ @ 0x180242DA0 (-UpdateTiming@CMonitorClock@@UEAA_KXZ.c)
 * Callees:
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18004E2E4 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?GetPresentStatisticsDWM@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180104C40 (-GetPresentStatisticsDWM@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetVBlankDuration@RefreshRateInfo@@QEBA_KXZ @ 0x1801062F4 (-GetVBlankDuration@RefreshRateInfo@@QEBA_KXZ.c)
 *     ?GetPresentStatisticsDWM@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180106330 (-GetPresentStatisticsDWM@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetPresentCount@CDDisplaySwapChain@@UEBAIXZ @ 0x1801F9040 (-GetPresentCount@CDDisplaySwapChain@@UEBAIXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CLegacyRenderTarget::GetLastMonitorTime(
        CLegacyRenderTarget *this,
        struct MonitorTime *a2,
        struct MonitorTime *a3,
        char a4)
{
  int v4; // r14d
  CDDisplaySwapChain *v8; // rcx
  unsigned int (__fastcall *v9)(CDDisplaySwapChain *__hidden); // rax
  _QWORD *v10; // r15
  unsigned int v11; // ebp
  CLegacySwapChain *v12; // rcx
  __int64 (__fastcall *v13)(CDDisplaySwapChain *, struct DXGI_FRAME_STATISTICS_DWM *); // rax
  int PresentStatisticsDWM; // eax
  __int64 v15; // r8
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __m128i v19; // xmm2
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  unsigned int v22; // eax
  unsigned int v23; // ebp
  __int64 v24; // rcx
  __int64 (*v25)(void); // rax
  __int64 VBlankDuration; // rax
  int v27; // ecx
  __int64 v28; // rax
  int v29; // ecx
  bool result; // al
  unsigned int v31; // eax
  unsigned int v32; // [rsp+20h] [rbp-98h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+28h] [rbp-90h] BYREF
  __m128i v34; // [rsp+30h] [rbp-88h] BYREF
  __int128 v35; // [rsp+40h] [rbp-78h]
  __int128 v36; // [rsp+50h] [rbp-68h]
  __int128 v37; // [rsp+60h] [rbp-58h]
  __int128 v38; // [rsp+70h] [rbp-48h]

  v4 = 0;
  if ( !a4 )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart <= *((_QWORD *)this + 4137) )
    {
LABEL_24:
      result = 1;
      *(_OWORD *)a2 = *(_OWORD *)((char *)this + 33112);
      *((_QWORD *)a2 + 2) = *((_QWORD *)this + 4141);
      *(_OWORD *)a3 = *((_OWORD *)this + 2071);
      *((_QWORD *)a3 + 2) = *((_QWORD *)this + 4144);
      return result;
    }
  }
  v8 = (CDDisplaySwapChain *)*((_QWORD *)this + 4125);
  if ( v8 )
  {
    v9 = *(unsigned int (__fastcall **)(CDDisplaySwapChain *__hidden))(*(_QWORD *)v8 + 96LL);
    if ( v9 == CLegacySwapChain::GetPresentCount )
    {
      v10 = (_QWORD *)((char *)v8 + 264);
      v32 = 0;
      if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)v8 + 33) )
        (*(void (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v10 + 120LL))(*v10, &v32);
      v11 = v32;
    }
    else
    {
      v31 = v9 == CDDisplaySwapChain::GetPresentCount
          ? CDDisplaySwapChain::GetPresentCount(v8)
          : ((__int64 (*)(void))v9)();
      v11 = v31;
    }
    if ( v11 )
    {
      v12 = (CLegacySwapChain *)*((_QWORD *)this + 4125);
      v34 = 0LL;
      v35 = 0LL;
      v36 = 0LL;
      v37 = 0LL;
      v38 = 0LL;
      v13 = *(__int64 (__fastcall **)(CDDisplaySwapChain *, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v12 + 328LL);
      if ( v13 == CLegacySwapChain::GetPresentStatisticsDWM )
        PresentStatisticsDWM = CLegacySwapChain::GetPresentStatisticsDWM(v12, (struct DXGI_FRAME_STATISTICS_DWM *)&v34);
      else
        PresentStatisticsDWM = v13 == CDDisplaySwapChain::GetPresentStatisticsDWM
                             ? CDDisplaySwapChain::GetPresentStatisticsDWM(
                                 v12,
                                 (struct DXGI_FRAME_STATISTICS_DWM *)&v34)
                             : v13(v12, (struct DXGI_FRAME_STATISTICS_DWM *)&v34);
      if ( !PresentStatisticsDWM )
      {
        v15 = *((_QWORD *)&v35 + 1);
        if ( *((_QWORD *)&v35 + 1) )
        {
          if ( *((_QWORD *)&v36 + 1) )
          {
            v16 = v38;
            if ( (_QWORD)v38 )
            {
              if ( DWORD2(v38) )
              {
                v17 = v35;
                v18 = v36;
                v19 = v34;
                *(__m128i *)((char *)this + 33016) = v34;
                *((_DWORD *)this + 8304) = v11;
                *(_OWORD *)((char *)this + 33032) = v17;
                v20 = v37;
                *(_OWORD *)((char *)this + 33048) = v18;
                v21 = v38;
                *(_OWORD *)((char *)this + 33064) = v20;
                *(_OWORD *)((char *)this + 33080) = v21;
                if ( *((_QWORD *)this + 4135) == 0xFFFFFFFFLL )
                  *((_QWORD *)this + 4137) = v15;
                else
                  *((_QWORD *)this + 4137) = v15 + 9 * v16 / 10;
                v22 = _mm_cvtsi128_si32(v19);
                if ( v11 > v22 )
                {
                  v23 = v11 - v22;
                  v4 = 8;
                  if ( v23 < 8 )
                    v4 = v23;
                }
                *((_DWORD *)this + 8305) = v4;
                v24 = *((_QWORD *)this + 4125);
                v25 = *(__int64 (**)(void))(*(_QWORD *)v24 + 256LL);
                if ( (char *)v25 == (char *)COverlaySwapChain::GetVBlankDuration )
                  VBlankDuration = RefreshRateInfo::GetVBlankDuration((RefreshRateInfo *)(v24 + 104));
                else
                  VBlankDuration = v25();
                v27 = *((_DWORD *)this + 8258);
                *((_QWORD *)this + 4138) = VBlankDuration;
                *((_QWORD *)this + 4139) = *((_QWORD *)this + 4130);
                *((_DWORD *)this + 8282) = v27;
                *((_QWORD *)this + 4140) = VBlankDuration;
                v28 = *((_QWORD *)this + 4132);
                v29 = *((_DWORD *)this + 8263);
                *((_QWORD *)this + 4143) = *((_QWORD *)this + 4138) * *((unsigned int *)this + 8272);
                *((_QWORD *)this + 4142) = v28;
                *((_DWORD *)this + 8288) = v29;
                goto LABEL_24;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
