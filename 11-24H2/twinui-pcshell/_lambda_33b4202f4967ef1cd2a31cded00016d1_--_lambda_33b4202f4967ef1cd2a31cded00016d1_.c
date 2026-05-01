/*
 * XREFs of _lambda_33b4202f4967ef1cd2a31cded00016d1_::_lambda_33b4202f4967ef1cd2a31cded00016d1_ @ 0x1802B3A84
 * Callers:
 *     ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18022EFF0 (-RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEA.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_33b4202f4967ef1cd2a31cded00016d1_::_lambda_33b4202f4967ef1cd2a31cded00016d1_(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        __int64 *a8)
{
  __int64 v11; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  *(_QWORD *)(a1 + 8) = *a3;
  *(_QWORD *)(a1 + 16) = *a4;
  *(_QWORD *)(a1 + 24) = *a5;
  *(_DWORD *)(a1 + 32) = *a6;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( (_QWORD *)(a1 + 40) != a7 )
  {
    *(_QWORD *)(a1 + 40) = *a7;
    *a7 = 0LL;
  }
  v11 = *a8;
  *a8 = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 48) = v11;
  return result;
}
