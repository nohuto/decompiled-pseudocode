/*
 * XREFs of wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_7e22c0f576fc86e89f8df846bfab63fc__void_ @ 0x180146468
 * Callers:
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x1801494B4 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     wistd::__function::__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl(void)_::__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl(void)_ @ 0x180146E60 (wistd--__function--__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl(void)_--__func_.c)
 */

__int64 __fastcall wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_7e22c0f576fc86e89f8df846bfab63fc__void_(
        __int64 a1)
{
  __int64 *v2; // rdx

  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 112) = wistd::__function::__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl_void__::__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl_void__(a1 + 8);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v2);
  return a1;
}
