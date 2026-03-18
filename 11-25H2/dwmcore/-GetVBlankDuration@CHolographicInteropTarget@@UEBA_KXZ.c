/*
 * XREFs of ?GetVBlankDuration@CHolographicInteropTarget@@UEBA_KXZ @ 0x1802D95E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?GetPresentStatistics@CHolographicManager@@QEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1802D87DC (-GetPresentStatistics@CHolographicManager@@QEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RAT.c)
 */

LONGLONG __fastcall CHolographicInteropTarget::GetVBlankDuration(CHolographicInteropTarget *this)
{
  UINT32 uiNumerator; // edi
  UINT32 uiDenominator; // esi
  CHolographicManager *v4; // rcx
  struct _UNSIGNED_RATIO v6; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v7[80]; // [rsp+30h] [rbp-68h] BYREF

  uiNumerator = 60;
  v6.uiNumerator = 60;
  uiDenominator = 1;
  v6.uiDenominator = 1;
  memset_0(v7, 0, sizeof(v7));
  v4 = (CHolographicManager *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    CHolographicManager::GetPresentStatistics(v4, (struct DXGI_FRAME_STATISTICS_DWM *)v7, &v6);
    uiDenominator = v6.uiDenominator;
    uiNumerator = v6.uiNumerator;
  }
  return g_qpcFrequency.QuadPart * uiDenominator / uiNumerator;
}
