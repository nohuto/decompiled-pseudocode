/*
 * XREFs of ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x1805E6EB0
 * Callers:
 *     <none>
 * Callees:
 *     WINRT_IMPL_SetEvent @ 0x1802D2E15 (WINRT_IMPL_SetEvent.c)
 */

__int64 __fastcall _Invoke___delegate_U__AsyncOperationCompletedHandler_UIRandomAccessStreamWithContentType_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_UIRandomAccessStreamWithContentType_Streams_Storage_Windows_winrt___Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation_UIRandomAccessStreamWithContentType_Streams_Storage_Windows_winrt___234_I_Z__impl_winrt__UEAAHPEAXH_Z(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)(a1 + 24) = a3;
  WINRT_IMPL_SetEvent(*(HANDLE *)(a1 + 16));
  return 0LL;
}
