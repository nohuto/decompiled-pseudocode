/*
 * XREFs of ?GetLastMonitorTime@CTargetStats@@QEAA_NPEAVMonitorTime@@0_N@Z @ 0x180141350
 * Callers:
 *     ?WaitForNextTick@CMonitorClock@@UEAA?AW4WaitResult@ICompositorClock@@PEAX@Z @ 0x1801BF400 (-WaitForNextTick@CMonitorClock@@UEAA-AW4WaitResult@ICompositorClock@@PEAX@Z.c)
 * Callees:
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18001E0A0 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?GetPresentStatisticsDWM@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180140880 (-GetPresentStatisticsDWM@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetVBlankDuration@RefreshRateInfo@@QEBA_KXZ @ 0x180141F34 (-GetVBlankDuration@RefreshRateInfo@@QEBA_KXZ.c)
 *     ?GetPresentStatisticsDWM@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180141F70 (-GetPresentStatisticsDWM@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetPresentCount@CDDisplaySwapChain@@UEBAIXZ @ 0x180204BB0 (-GetPresentCount@CDDisplaySwapChain@@UEBAIXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CTargetStats::GetLastMonitorTime(
        CTargetStats *this,
        struct MonitorTime *a2,
        struct MonitorTime *a3,
        char a4)
{
  int v4; // esi
  CDDisplaySwapChain *v8; // rcx
  unsigned int (__fastcall *v9)(CDDisplaySwapChain *__hidden); // rax
  _QWORD *v10; // rdi
  DWORD LowPart; // edi
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
  unsigned int v23; // edi
  __int64 v24; // rcx
  __int64 (*v25)(void); // rax
  __int64 VBlankDuration; // rax
  int v27; // ecx
  __int64 v28; // rax
  int v29; // ecx
  bool result; // al
  DWORD v31; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-98h] BYREF
  __m128i v33; // [rsp+30h] [rbp-88h] BYREF
  __int128 v34; // [rsp+40h] [rbp-78h]
  __int128 v35; // [rsp+50h] [rbp-68h]
  __int128 v36; // [rsp+60h] [rbp-58h]
  __int128 v37; // [rsp+70h] [rbp-48h]

  v4 = 0;
  if ( !a4 )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart <= *((_QWORD *)this + 16) )
    {
LABEL_24:
      result = 1;
      *(_OWORD *)a2 = *((_OWORD *)this + 9);
      *((_QWORD *)a2 + 2) = *((_QWORD *)this + 20);
      *(_OWORD *)a3 = *(_OWORD *)((char *)this + 168);
      *((_QWORD *)a3 + 2) = *((_QWORD *)this + 23);
      return result;
    }
  }
  v8 = (CDDisplaySwapChain *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    v9 = *(unsigned int (__fastcall **)(CDDisplaySwapChain *__hidden))(*(_QWORD *)v8 + 96LL);
    if ( v9 == CLegacySwapChain::GetPresentCount )
    {
      v10 = (_QWORD *)((char *)v8 + 264);
      PerformanceCount.LowPart = 0;
      if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)v8 + 33) )
        (*(void (__fastcall **)(_QWORD, LARGE_INTEGER *))(*(_QWORD *)*v10 + 120LL))(*v10, &PerformanceCount);
      LowPart = PerformanceCount.LowPart;
    }
    else
    {
      v31 = v9 == CDDisplaySwapChain::GetPresentCount
          ? CDDisplaySwapChain::GetPresentCount(v8)
          : ((__int64 (*)(void))v9)();
      LowPart = v31;
    }
    if ( LowPart )
    {
      v12 = (CLegacySwapChain *)*((_QWORD *)this + 4);
      v33 = 0LL;
      v34 = 0LL;
      v35 = 0LL;
      v36 = 0LL;
      v37 = 0LL;
      v13 = *(__int64 (__fastcall **)(CDDisplaySwapChain *, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v12 + 328LL);
      if ( v13 == CLegacySwapChain::GetPresentStatisticsDWM )
        PresentStatisticsDWM = CLegacySwapChain::GetPresentStatisticsDWM(v12, (struct DXGI_FRAME_STATISTICS_DWM *)&v33);
      else
        PresentStatisticsDWM = v13 == CDDisplaySwapChain::GetPresentStatisticsDWM
                             ? CDDisplaySwapChain::GetPresentStatisticsDWM(
                                 v12,
                                 (struct DXGI_FRAME_STATISTICS_DWM *)&v33)
                             : v13(v12, (struct DXGI_FRAME_STATISTICS_DWM *)&v33);
      if ( !PresentStatisticsDWM )
      {
        v15 = *((_QWORD *)&v34 + 1);
        if ( *((_QWORD *)&v34 + 1) )
        {
          if ( *((_QWORD *)&v35 + 1) )
          {
            v16 = v37;
            if ( (_QWORD)v37 )
            {
              if ( DWORD2(v37) )
              {
                v17 = v34;
                v18 = v35;
                v19 = v33;
                *((__m128i *)this + 3) = v33;
                *((_DWORD *)this + 62) = LowPart;
                *((_OWORD *)this + 4) = v17;
                v20 = v36;
                *((_OWORD *)this + 5) = v18;
                v21 = v37;
                *((_OWORD *)this + 6) = v20;
                *((_OWORD *)this + 7) = v21;
                if ( *((_QWORD *)this + 14) == 0xFFFFFFFFLL )
                  *((_QWORD *)this + 16) = v15;
                else
                  *((_QWORD *)this + 16) = v15 + 9 * v16 / 10;
                v22 = _mm_cvtsi128_si32(v19);
                if ( LowPart > v22 )
                {
                  v23 = LowPart - v22;
                  v4 = 8;
                  if ( v23 < 8 )
                    v4 = v23;
                }
                *((_DWORD *)this + 63) = v4;
                v24 = *((_QWORD *)this + 4);
                v25 = *(__int64 (**)(void))(*(_QWORD *)v24 + 256LL);
                if ( (char *)v25 == (char *)COverlaySwapChain::GetVBlankDuration )
                  VBlankDuration = RefreshRateInfo::GetVBlankDuration((RefreshRateInfo *)(v24 + 104));
                else
                  VBlankDuration = v25();
                v27 = *((_DWORD *)this + 16);
                *((_QWORD *)this + 17) = VBlankDuration;
                *((_QWORD *)this + 18) = *((_QWORD *)this + 9);
                *((_DWORD *)this + 40) = v27;
                *((_QWORD *)this + 19) = VBlankDuration;
                v28 = *((_QWORD *)this + 11);
                v29 = *((_DWORD *)this + 21);
                *((_QWORD *)this + 22) = *((_QWORD *)this + 17) * *((unsigned int *)this + 30);
                *((_QWORD *)this + 21) = v28;
                *((_DWORD *)this + 46) = v29;
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
