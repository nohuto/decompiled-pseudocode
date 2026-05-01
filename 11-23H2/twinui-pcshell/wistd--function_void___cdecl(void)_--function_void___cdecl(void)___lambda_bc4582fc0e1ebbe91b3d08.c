/*
 * XREFs of wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void_ @ 0x1801DD628
 * Callers:
 *     ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x18012837C (-SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     wistd::__function::__func__lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void___cdecl(void)_::__func__lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void___cdecl(void)_ @ 0x1801DDBC8 (wistd--__function--__func__lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void___cdecl(void)_--__func_.c)
 */

__int64 __fastcall wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void_(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r9

  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 112) = wistd::__function::__func__lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void___cdecl_void__::__func__lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void___cdecl_void__(
                            a1 + 8,
                            a2,
                            a3,
                            a2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v4 + 8));
  return a1;
}
