/*
 * XREFs of Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_c66964d4c04018f15f5ab93036354322___lambda_6322593fd6617ded31d0a35e6b081f9a_____lambda_c66964d4c04018f15f5ab93036354322__&__lambda_6322593fd6617ded31d0a35e6b081f9a__&_IDCompBatchAnimationCallback___&_ @ 0x1805416C0
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081f9a___ @ 0x1805412BC (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____ @ 0x1803268E8 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a5e.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@@WRL@Microsoft@@QEAA@XZ @ 0x1804A4FD4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_c66964d4c04018f15f5ab93036354322___lambda_6322593fd6617ded31d0a35e6b081f9a_____lambda_c66964d4c04018f15f5ab93036354322_____lambda_6322593fd6617ded31d0a35e6b081f9a____IDCompBatchAnimationCallback_____(
        _QWORD *a1,
        void *a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rbx
  void *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  *a1 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v7;
  v8 = v7;
  if ( v7 )
  {
    v9 = *a4;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>(v7);
    *v8 = &off_1807516E8;
    v8[3] = *a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8 + 3);
    v8[4] = v9;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8 + 4);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    v11 = 0LL;
    *a1 = v8;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____(&v11);
  return a1;
}
