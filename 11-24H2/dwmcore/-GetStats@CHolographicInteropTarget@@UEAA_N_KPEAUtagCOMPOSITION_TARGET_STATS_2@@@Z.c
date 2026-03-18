/*
 * XREFs of ?GetStats@CHolographicInteropTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x1802D0230
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?GetPresentStatistics@CHolographicManager@@QEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1802CF53C (-GetPresentStatistics@CHolographicManager@@QEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RAT.c)
 */

char __fastcall CHolographicInteropTarget::GetStats(
        CHolographicInteropTarget *this,
        __int64 a2,
        struct tagCOMPOSITION_TARGET_STATS_2 *a3)
{
  CHolographicManager *v5; // rcx
  LONGLONG v6; // rax
  int v7; // edx
  __int64 v8; // rcx
  LONGLONG v9; // rax
  struct _UNSIGNED_RATIO v11; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v12[6]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+48h] [rbp-50h]
  __int64 v14; // [rsp+68h] [rbp-30h]

  *(_DWORD *)a3 = 0;
  *((_QWORD *)a3 + 1) = *((_QWORD *)this + 10);
  v11 = 0LL;
  memset_0(v12, 0, 0x50uLL);
  v5 = (CHolographicManager *)*((_QWORD *)this + 3);
  if ( v5 && (int)CHolographicManager::GetPresentStatistics(v5, (struct DXGI_FRAME_STATISTICS_DWM *)v12, &v11) >= 0 )
  {
    v6 = g_qpcFrequency.QuadPart * v11.uiDenominator / v11.uiNumerator;
    v7 = v12[4];
    *((_QWORD *)a3 + 2) = v6;
    *((_DWORD *)a3 + 6) = *((_DWORD *)this + 19);
    *((_DWORD *)a3 + 15) = v7;
    *((_DWORD *)a3 + 7) = v7 + 1;
    *((_DWORD *)a3 + 8) = v7 + 1;
    v8 = v13;
    v9 = v13 + v6;
    *((_DWORD *)a3 + 16) = v7;
    *((_QWORD *)a3 + 5) = v9;
    *((_QWORD *)a3 + 6) = v9;
    *((_DWORD *)a3 + 14) = v12[0];
    *((_QWORD *)a3 + 10) = v14;
    *((_QWORD *)a3 + 9) = v8;
  }
  else
  {
    *((_QWORD *)a3 + 2) = 0LL;
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
