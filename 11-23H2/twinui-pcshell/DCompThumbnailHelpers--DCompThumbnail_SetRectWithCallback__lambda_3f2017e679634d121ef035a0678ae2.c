/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_3f2017e679634d121ef035a0678ae2ba___ @ 0x1802160B0
 * Callers:
 *     ?Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z @ 0x18060BD28 (-Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___ @ 0x180216374 (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_7b.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_3f2017e679634d121ef035a0678ae2ba___(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+48h] [rbp-10h]

  v12 = *(_QWORD *)a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
  v13 = *(_DWORD *)(a4 + 8);
  v9 = DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___(
         a1,
         a2,
         v7,
         v8,
         0,
         (__int64)&v12);
  v10 = *(_QWORD *)a4;
  if ( *(_QWORD *)a4 )
  {
    *(_QWORD *)a4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v9;
}
