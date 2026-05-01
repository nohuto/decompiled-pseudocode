/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1804DBFAC
 * Callers:
 *     ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1804DC06C (ElementDragData--HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 *     ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1804DC45C (ElementDragData--MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413_____lambda_0688f707641f84dad399f01864cccda0__&__lambda_b0b710aa7dd78fb14938fbcb95e31413__&_IDCompBatchAnimationCallback___&_ @ 0x1804DC170 (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_0688f7076.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rdx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v7; // edi
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  *a3 = 0LL;
  v9 = *(_QWORD *)a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  v10 = *(_DWORD *)(a1 + 8);
  v12 = 0LL;
  *a3 = 0LL;
  Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413_____lambda_0688f707641f84dad399f01864cccda0_____lambda_b0b710aa7dd78fb14938fbcb95e31413____IDCompBatchAnimationCallback_____(
    &v11,
    v5,
    &v9,
    &v12);
  v6 = v11;
  if ( v11 )
    v7 = (**v11)(v11, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, a3);
  else
    v7 = -2147024882;
  if ( v6 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v6)[2])(v6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1);
  return v7;
}
