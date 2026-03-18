/*
 * XREFs of ?GetPresentStatistics@CHolographicManager@@QEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1802CF53C
 * Callers:
 *     ?GetLastMonitorTime@CHolographicInteropTarget@@UEAA_NPEAVMonitorTime@@0_N@Z @ 0x1802D00E0 (-GetLastMonitorTime@CHolographicInteropTarget@@UEAA_NPEAVMonitorTime@@0_N@Z.c)
 *     ?GetNominalRefreshRate@CHolographicInteropTarget@@UEBA?AUDXGI_RATIONAL@@XZ @ 0x1802D01A0 (-GetNominalRefreshRate@CHolographicInteropTarget@@UEBA-AUDXGI_RATIONAL@@XZ.c)
 *     ?GetStats@CHolographicInteropTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x1802D0230 (-GetStats@CHolographicInteropTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z.c)
 *     ?GetVBlankDuration@CHolographicInteropTarget@@UEBA_KXZ @ 0x1802D0340 (-GetVBlankDuration@CHolographicInteropTarget@@UEBA_KXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicManager::GetPresentStatistics(
        CHolographicManager *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  __int64 v3; // rax
  unsigned int v6; // r9d
  __int64 v7; // rcx
  __int64 uiNumerator; // rcx
  LONGLONG v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  struct _UNSIGNED_RATIO v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 5);
  v6 = -2147467259;
  if ( v3 )
  {
    v7 = *(_QWORD *)(v3 + 32);
    if ( v7 )
    {
      v13 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, struct DXGI_FRAME_STATISTICS_DWM *, struct _UNSIGNED_RATIO *, __int64))(*(_QWORD *)v7 + 24LL))(
             v7,
             a2,
             &v13,
             2147500037LL);
      *a3 = v13;
    }
    uiNumerator = a3->uiNumerator;
    v9 = g_qpcFrequency.QuadPart * a3->uiDenominator;
    *((_DWORD *)a2 + 18) = 1;
    v10 = v9 / uiNumerator;
    LODWORD(uiNumerator) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 8) = 0;
    *((_DWORD *)a2 + 9) = uiNumerator;
    *((_QWORD *)a2 + 5) = *((_QWORD *)a2 + 3);
    *((_DWORD *)a2 + 12) = *((_DWORD *)a2 + 1);
    v11 = *((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 8) = v10;
    *((_QWORD *)a2 + 7) = v11;
  }
  return v6;
}
