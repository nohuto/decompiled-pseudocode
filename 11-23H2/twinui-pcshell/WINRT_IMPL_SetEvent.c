/*
 * XREFs of WINRT_IMPL_SetEvent @ 0x1801C7C8A
 * Callers:
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@4@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@234@AEBU6234@0@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x18006CA50 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Stora.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@Uhstring@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@Uhstring@winrt@@@234@I@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x180073030 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@Uhstring@winrt@@@Foundation@Windows@winrt@@.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x180630DD0 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@UAppData@Internal@InstallControl@Preview@St.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x1806A2F80 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@UIRandomAccessStreamWithConten_ea_1806A2F80.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall WINRT_IMPL_SetEvent(HANDLE hEvent)
{
  return SetEvent(hEvent);
}
