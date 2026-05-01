/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___ @ 0x180216374
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_3f2017e679634d121ef035a0678ae2ba___ @ 0x1802160B0 (DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_3f2017e679634d121ef035a0678ae2.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___ @ 0x180215F20 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_7bba5397718b556fa4d56bb755ea9.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IDCompThumbnail@@$BBI@AA @ 0x1802A82A0 (--_9IDCompThumbnail@@$BBI@AA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 *a6)
{
  __int64 *v8; // rbx
  __int64 v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // r8
  int AnimationHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba; // edi
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+28h] [rbp-10h]
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v16 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  v8 = a6;
  v14 = *a6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
  v15 = *((_DWORD *)v8 + 2);
  LOBYTE(v9) = a5;
  AnimationHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___(v9, &v14, v10, &v16);
  if ( AnimationHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba >= 0 )
    AnimationHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba =  IDCompThumbnail::`vcall'{24,{flat}}(a1, a2, 31LL, v16);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  v12 = *v8;
  if ( *v8 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)AnimationHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba;
}
