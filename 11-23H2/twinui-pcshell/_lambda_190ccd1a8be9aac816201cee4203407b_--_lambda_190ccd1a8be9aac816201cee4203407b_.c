/*
 * XREFs of _lambda_190ccd1a8be9aac816201cee4203407b_::_lambda_190ccd1a8be9aac816201cee4203407b_ @ 0x1806CB504
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180257360 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_190ccd1a8be9aac816201cee4203407b_::_lambda_190ccd1a8be9aac816201cee4203407b_(
        __int64 a1,
        volatile int *a2,
        __int64 *a3,
        _QWORD *a4,
        _OWORD *a5,
        __int64 *a6)
{
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)a1 = a2;
  v7 = *a3;
  *(_QWORD *)(a1 + 8) = *a3;
  if ( v7 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v7 + 116), a2);
  *(_QWORD *)(a1 + 16) = *a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  v8 = *a6;
  *(_OWORD *)(a1 + 24) = *a5;
  *(_QWORD *)(a1 + 40) = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  *(_DWORD *)(a1 + 48) = *((_DWORD *)a6 + 2);
  return a1;
}
