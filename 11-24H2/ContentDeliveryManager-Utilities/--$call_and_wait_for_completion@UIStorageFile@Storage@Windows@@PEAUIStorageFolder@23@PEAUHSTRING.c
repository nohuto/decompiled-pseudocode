/*
 * XREFs of ??$call_and_wait_for_completion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@W4NameCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU423@PEAU5@W4623@@wil@@YA?A_PPEAUIStorageFile@Storage@Windows@@P8123@EAAJPEAUIStorageFolder@23@PEAUHSTRING__@@W4NameCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@@Z$$QEAPEAU423@$$QEAPEAU5@$$QEAW4623@@Z @ 0x180089474
 * Callers:
 *     ??$CallAndWaitForCompletion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@W4NameCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU423@PEAU5@W4623@@wil@@YA?A_PPEAUIStorageFile@Storage@Windows@@P8123@EAAJPEAUIStorageFolder@23@PEAUHSTRING__@@W4NameCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@@Z$$QEAPEAU423@$$QEAPEAU5@$$QEAW4623@@Z @ 0x180088DB8 (--$CallAndWaitForCompletion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wait_for_completion@PEAVStorageFile@Storage@Windows@@V?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x180089768 (--$wait_for_completion@PEAVStorageFile@Storage@Windows@@V-$ComPtr@UIStorageFile@Storage@Windows@.c)
 *     ??_9IStorageFile@Storage@Windows@@$BGA@AA @ 0x1800899F4 (--_9IStorageFile@Storage@Windows@@$BGA@AA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___call_and_wait_for_completion_UIStorageFile_Storage_Windows__PEAUIStorageFolder_23_PEAUHSTRING____W4NameCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3___ZPEAU423_PEAU5_W4623__wil__YA_A_PPEAUIStorageFile_Storage_Windows__P8123_EAAJPEAUIStorageFolder_23_PEAUHSTRING____W4NameCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3__Z__QEAPEAU423___QEAPEAU5___QEAW4623__Z(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned int *a6)
{
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  v9 =  Windows::Storage::IStorageFile::`vcall'{96,{flat}}(a2, *a4, *a5, *a6);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x747,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v9,
      (int)&v12);
  wil::wait_for_completion<Windows::Storage::StorageFile *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFile>>(
    a1,
    v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  return a1;
}
