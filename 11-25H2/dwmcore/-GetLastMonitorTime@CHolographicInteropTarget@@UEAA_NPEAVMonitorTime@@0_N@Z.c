/*
 * XREFs of ?GetLastMonitorTime@CHolographicInteropTarget@@UEAA_NPEAVMonitorTime@@0_N@Z @ 0x1802D9380
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?GetPresentStatistics@CHolographicManager@@QEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1802D87DC (-GetPresentStatistics@CHolographicManager@@QEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RAT.c)
 */

char __fastcall CHolographicInteropTarget::GetLastMonitorTime(
        CHolographicInteropTarget *this,
        struct MonitorTime *a2,
        struct MonitorTime *a3)
{
  CHolographicManager *v3; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  _UNSIGNED_RATIO v9; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-78h] BYREF
  int v11; // [rsp+40h] [rbp-68h]
  __int64 v12; // [rsp+48h] [rbp-60h]
  int v13; // [rsp+54h] [rbp-54h]
  __int64 v14; // [rsp+58h] [rbp-50h]
  __int64 v15; // [rsp+70h] [rbp-38h]
  unsigned int v16; // [rsp+78h] [rbp-30h]

  v3 = (CHolographicManager *)*((_QWORD *)this + 3);
  if ( !v3 )
    return 0;
  memset_0(v10, 0, 0x50uLL);
  v9 = 0LL;
  if ( (unsigned int)CHolographicManager::GetPresentStatistics(v3, (struct DXGI_FRAME_STATISTICS_DWM *)v10, &v9) )
    return 0;
  v6 = v15;
  *(_QWORD *)a2 = v12;
  *((_DWORD *)a2 + 4) = v11;
  v7 = v14;
  *((_QWORD *)a2 + 1) = v6;
  *(_QWORD *)a3 = v7;
  *((_DWORD *)a3 + 4) = v13;
  *((_QWORD *)a3 + 1) = v6 * v16;
  return 1;
}
