/*
 * XREFs of ?GetNominalRefreshRate@CHolographicInteropTarget@@UEBA?AUDXGI_RATIONAL@@XZ @ 0x1802D9440
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?GetPresentStatistics@CHolographicManager@@QEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1802D87DC (-GetPresentStatistics@CHolographicManager@@QEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RAT.c)
 */

struct DXGI_RATIONAL __fastcall CHolographicInteropTarget::GetNominalRefreshRate(
        CHolographicInteropTarget *this,
        struct _UNSIGNED_RATIO *a2)
{
  CHolographicManager *v2; // rdi
  struct DXGI_RATIONAL result; // rax
  struct _UNSIGNED_RATIO v5; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v6[80]; // [rsp+30h] [rbp-68h] BYREF

  v2 = (CHolographicManager *)*((_QWORD *)this + 3);
  v5.uiNumerator = 60;
  v5.uiDenominator = 1;
  if ( v2 )
  {
    memset_0(v6, 0, sizeof(v6));
    CHolographicManager::GetPresentStatistics(v2, (struct DXGI_FRAME_STATISTICS_DWM *)v6, &v5);
  }
  result = (struct DXGI_RATIONAL)a2;
  *a2 = v5;
  return result;
}
