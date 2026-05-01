/*
 * XREFs of ?CreateScopedBatch@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4CompositionBatchTypes@Composition@UI@Windows@3@@Z @ 0x1804A6C5C
 * Callers:
 *     ?Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z @ 0x1804A52EC (-Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z.c)
 *     ?SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x1804A9DC0 (-SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z.c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x1804AA5D8 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 *     ?StartDismissAnimation@TouchEdgeGripperWindow@@AEAAXXZ @ 0x18059A2C8 (-StartDismissAnimation@TouchEdgeGripperWindow@@AEAAXXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateScopedBatch(
        __int64 **a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 *v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  int v9; // [rsp+28h] [rbp-20h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *a1;
  v11 = 0LL;
  v9 = 0;
  v5 = *v3;
  v6 = *a3;
  v10 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v5 + 168))(v3, v6, &v11);
  winrt::check_hresult((int *)&v12, v7, (__int64)&v9);
  *a2 = v11;
  return a2;
}
