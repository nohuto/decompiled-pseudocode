/*
 * XREFs of WINRT_IMPL_SetEvent @ 0x1802D2E15
 * Callers:
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@4@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@234@AEBU6234@0@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x1801D7E50 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Stora.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@Uhstring@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@Uhstring@winrt@@@234@I@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x1802288F0 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@Uhstring@winrt@@@Foundation@Windows@winrt@@.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x18031C6A0 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@UIDataSourceAdapter@Multitasking@Composable.c)
 *     ?Invoke@?$delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@U1234@@4@YA?AUIAsyncAction@234@AEBU6234@00@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x180352200 (-Invoke@-$delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@Ushared_type@-1---$whe.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x1805E6EB0 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@UIRandomAccessStreamWithContentType@Streams.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall WINRT_IMPL_SetEvent(HANDLE hEvent)
{
  return SetEvent(hEvent);
}
