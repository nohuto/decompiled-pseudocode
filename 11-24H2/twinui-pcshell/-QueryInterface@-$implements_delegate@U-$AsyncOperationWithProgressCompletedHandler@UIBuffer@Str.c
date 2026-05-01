/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$AsyncOperationWithProgressCompletedHandler@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@234@I@Z@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18064F110
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031CA3C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall _QueryInterface___implements_delegate_U__AsyncOperationWithProgressCompletedHandler_UIBuffer_Streams_Storage_Windows_winrt__I_Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperationWithProgress_UIBuffer_Streams_Storage_Windows_winrt__I_Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperationWithProgress_UIBuffer_Streams_Storage_Windows_winrt__I_234_I_Z__impl_winrt__UEAAHAEBUguid_3_PEAPEAX_Z(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           (winrt::impl::implements_delegate_base *)(a1 + 8),
           a2,
           a3,
           a1,
           winrt::impl::guid_v<winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler<winrt::Windows::Storage::Streams::IBuffer,unsigned int>>);
}
