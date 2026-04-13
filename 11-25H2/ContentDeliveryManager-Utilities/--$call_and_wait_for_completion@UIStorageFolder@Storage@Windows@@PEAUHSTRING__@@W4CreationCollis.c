/*
 * XREFs of ??$call_and_wait_for_completion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@W4CreationCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@W4523@@wil@@YA?A_PPEAUIStorageFolder@Storage@Windows@@P8123@EAAJPEAUHSTRING__@@W4CreationCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@@Z$$QEAPEAU4@$$QEAW4523@@Z @ 0x1800A391C
 * Callers:
 *     ??$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@W4CreationCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@W4523@@wil@@YA?A_PPEAUIStorageFolder@Storage@Windows@@P8123@EAAJPEAUHSTRING__@@W4CreationCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@@Z$$QEAPEAU4@$$QEAW4523@@Z @ 0x1800A3728 (--$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@W4CreationCollisionO.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IStorageItem@Storage@Windows@@$BEI@AA @ 0x180067390 (--_9IStorageItem@Storage@Windows@@$BEI@AA.c)
 *     ??$wait_for_completion@PEAVStorageFolder@Storage@Windows@@V?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800893B0 (--$wait_for_completion@PEAVStorageFolder@Storage@Windows@@V-$ComPtr@UIStorageFolder@Storage@Wind.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ___call_and_wait_for_completion_UIStorageFolder_Storage_Windows__PEAUHSTRING____W4CreationCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4_W4523__wil__YA_A_PPEAUIStorageFolder_Storage_Windows__P8123_EAAJPEAUHSTRING____W4CreationCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3__Z__QEAPEAU4___QEAW4523__Z(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // eax
  int v5; // r8d
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  v4 =  Windows::Storage::IStorageItem::`vcall'{72,{flat}}(a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x747,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v4,
      v7);
  wil::wait_for_completion<Windows::Storage::StorageFolder *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFolder>>(
    a1,
    v9,
    v5);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  return a1;
}
