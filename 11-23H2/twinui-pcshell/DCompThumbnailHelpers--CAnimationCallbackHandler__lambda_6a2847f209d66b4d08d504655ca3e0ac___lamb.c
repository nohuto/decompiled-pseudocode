/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___::CAnimationCallbackHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___ @ 0x180216E14
 * Callers:
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed_____lambda_6a2847f209d66b4d08d504655ca3e0ac__&__lambda_c0d8e1709f705684b7fc3b88b56d28ed__&_IDCompBatchAnimationCallback___&_ @ 0x1802165D4 (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_6a2847f20.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@@WRL@Microsoft@@QEAA@XZ @ 0x1805550F8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___::CAnimationCallbackHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>();
  *(_QWORD *)a1 = off_1807C7F78;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a3 + 8);
  *(_QWORD *)(a1 + 40) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  return a1;
}
