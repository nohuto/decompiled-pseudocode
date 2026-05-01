/*
 * XREFs of _lambda_d6b4118795ae303e935bbd5b6ca0014f_::_lambda_d6b4118795ae303e935bbd5b6ca0014f_ @ 0x18018EB40
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180600D50 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_d6b4118795ae303e935bbd5b6ca0014f_::_lambda_d6b4118795ae303e935bbd5b6ca0014f_(
        __int64 a1,
        volatile int *a2,
        __int64 *a3,
        _QWORD *a4,
        __int64 *a5)
{
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)a1 = a2;
  v6 = *a3;
  *(_QWORD *)(a1 + 8) = *a3;
  if ( v6 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v6 + 116), a2);
  *(_QWORD *)(a1 + 16) = *a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  v7 = *a5;
  *(_QWORD *)(a1 + 24) = *a5;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  *(_DWORD *)(a1 + 32) = *((_DWORD *)a5 + 2);
  return a1;
}
