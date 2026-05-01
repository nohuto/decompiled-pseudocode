/*
 * XREFs of _lambda_eb7347f801496dc1bb0f8fceb055189e_::__lambda_eb7347f801496dc1bb0f8fceb055189e_ @ 0x1802D0888
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eb7347f801496dc1bb0f8fceb055189e___::_scalar_deleting_destructor_ @ 0x1803AD3C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_eb7347f801496dc1bb0f8fceb055189e___--_scala.c)
 *     ?ShowAsStandalone@CAppViewManager@@UEAAJPEAUIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803B13E0 (-ShowAsStandalone@CAppViewManager@@UEAAJPEAUIViewEventArgsForShowAsStandalone@ViewManagerInterop.c)
 *     ?ShowAsViewMode@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803B1540 (-ShowAsViewMode@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@She.c)
 *     ?DragSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x180580910 (-DragSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_eb7347f801496dc1bb0f8fceb055189e_::__lambda_eb7347f801496dc1bb0f8fceb055189e_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
