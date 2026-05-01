/*
 * XREFs of _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_ @ 0x1805EC2C8
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___ @ 0x1805EBF94 (DCompThumbnailHelpers--DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___ @ 0x1805EC00C (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_e855345159f.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_____lambda_e855345159ffcf8e8cf911d9c3e7f6ed__&__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&_IDCompBatchAnimationCallback___&_ @ 0x1805EC184 (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_e85534515.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&_ @ 0x1805EC22C (Windows--Internal--ComTaskPool--QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__-_.c)
 *     ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x1805ED110 (-Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef(a1);
  a1[1] = a2[1];
  return a1;
}
