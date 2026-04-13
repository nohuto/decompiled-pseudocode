/*
 * XREFs of ??$call_and_wait_for_completion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?A_PPEAUIStorageFolder@Storage@Windows@@P8123@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@@Z$$QEAPEAU4@@Z @ 0x180089170
 * Callers:
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180089D90 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wait_for_completion@PEAVStorageFile@Storage@Windows@@V?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x180089338 (--$wait_for_completion@PEAVStorageFile@Storage@Windows@@V-$ComPtr@UIStorageFile@Storage@Windows@.c)
 *     ??_9IStorageFolder@Storage@Windows@@$BFA@AA @ 0x1800895EC (--_9IStorageFolder@Storage@Windows@@$BFA@AA.c)
 */

__int64 __fastcall ___call_and_wait_for_completion_UIStorageFolder_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_A_PPEAUIStorageFolder_Storage_Windows__P8123_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3__Z__QEAPEAU4__Z(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v7; // eax
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  v7 =  Windows::Storage::IStorageFolder::`vcall'{80,{flat}}(a2, *a4, &v11);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x747,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v7,
      v9);
  wil::wait_for_completion<Windows::Storage::StorageFile *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFile>>(
    a1,
    v11);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  return a1;
}
