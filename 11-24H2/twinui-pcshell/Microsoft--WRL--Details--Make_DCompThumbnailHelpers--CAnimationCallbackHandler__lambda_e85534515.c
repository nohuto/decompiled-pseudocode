/*
 * XREFs of Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_____lambda_e855345159ffcf8e8cf911d9c3e7f6ed__&__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&_IDCompBatchAnimationCallback___&_ @ 0x18054177C
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___ @ 0x180541364 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_e855345159ffcf8e8cf911d9c3e7f.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____ @ 0x1803268E8 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a5e.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@@WRL@Microsoft@@QEAA@XZ @ 0x1804A4FD4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_____lambda_e855345159ffcf8e8cf911d9c3e7f6ed_____lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e____IDCompBatchAnimationCallback_____(
        _QWORD *a1,
        void *a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rdi
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  *a1 = 0LL;
  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v7;
  v8 = v7;
  if ( v7 )
  {
    v9 = *a4;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>(v7);
    *v8 = &off_180751740;
    v8[3] = *a3;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v8 + 3);
    v8[4] = a3[1];
    v8[5] = v9;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8 + 5);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    v11 = 0LL;
    *a1 = v8;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____(&v11);
  return a1;
}
