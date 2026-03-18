/*
 * XREFs of ?GetPresentStatisticsDWM@CLegacyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1802D5420
 * Callers:
 *     ?GetPresentStatistics@CLegacyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1802D5380 (-GetPresentStatistics@CLegacyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::GetPresentStatisticsDWM(
        CLegacyRemotingSwapChain *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  __int64 v3; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // r10d
  int v8; // r9d
  __int64 v9; // rcx
  LONGLONG v10; // rax
  __int64 v11; // r8
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v3 = *((_QWORD *)this + 12);
  v13 = 0LL;
  v14 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v3 + 40LL))(v3, &v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x6Du, 0LL);
  }
  else
  {
    v7 = DWORD1(v13);
    v8 = DWORD2(v13);
    *(_DWORD *)a2 = v13;
    v9 = v14;
    *((_QWORD *)a2 + 1) = v14;
    *((_QWORD *)a2 + 3) = v9;
    *((_DWORD *)a2 + 1) = v7;
    *((_DWORD *)a2 + 4) = v8;
    v10 = g_qpcFrequency.QuadPart * *((unsigned int *)this + 27);
    v11 = *((unsigned int *)this + 26);
    *((_DWORD *)a2 + 8) = 0;
    *((_DWORD *)a2 + 9) = v8;
    *((_QWORD *)a2 + 8) = v10 / v11;
    *((_DWORD *)a2 + 18) = 1;
    *((_QWORD *)a2 + 5) = v9;
    *((_DWORD *)a2 + 12) = v7;
    *((_QWORD *)a2 + 7) = v9;
    *((_QWORD *)a2 + 8) = g_qpcFrequency.QuadPart * *((unsigned int *)this + 27) / *((unsigned int *)this + 26);
  }
  return v6;
}
