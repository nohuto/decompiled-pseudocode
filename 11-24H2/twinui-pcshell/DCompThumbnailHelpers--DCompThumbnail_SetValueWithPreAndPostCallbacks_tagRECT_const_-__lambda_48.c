/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_484aa05d4e8e00993eb11fe3ca1c5d9d___lambda_9a7bfcc99c4e75b6f719d590bcf52609___ @ 0x180569730
 * Callers:
 *     ?Commit@VirtualDesktopHotKeyWindow@@QEAAJPEAUIVirtualDesktopSwitchAnimator2@@M@Z @ 0x180569D8C (-Commit@VirtualDesktopHotKeyWindow@@QEAAJPEAUIVirtualDesktopSwitchAnimator2@@M@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x1802E0970 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_484aa05d4e8e00993eb11fe3ca1c5d9d___lambda_9a7bfcc99c4e75b6f719d590bcf52609_____lambda_484aa05d4e8e00993eb11fe3ca1c5d9d__&__lambda_9a7bfcc99c4e75b6f719d590bcf52609__&_IDCompBatchAnimationCallback___&_ @ 0x1805698C4 (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_484aa05d4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_484aa05d4e8e00993eb11fe3ca1c5d9d___lambda_9a7bfcc99c4e75b6f719d590bcf52609___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // rdx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rbx
  int v10; // edi
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  a7 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_484aa05d4e8e00993eb11fe3ca1c5d9d___lambda_9a7bfcc99c4e75b6f719d590bcf52609_____lambda_484aa05d4e8e00993eb11fe3ca1c5d9d_____lambda_9a7bfcc99c4e75b6f719d590bcf52609____IDCompBatchAnimationCallback_____(
    &v12,
    v8,
    &a6,
    &a7);
  v9 = v12;
  if ( v12 )
    v10 = (**v12)(v12, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, &v13);
  else
    v10 = -2147024882;
  if ( v9 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v9)[2])(v9);
  if ( v10 >= 0 )
    v10 =  IVirtualDesktopNotification::`vcall'{24,{flat}}(a1);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  return (unsigned int)v10;
}
