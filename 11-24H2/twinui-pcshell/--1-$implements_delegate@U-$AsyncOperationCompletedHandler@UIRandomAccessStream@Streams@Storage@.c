/*
 * XREFs of ??1?$implements_delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@234@I@Z@@impl@winrt@@QEAA@XZ @ 0x180102788
 * Callers:
 *     ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@Uhstring@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@Uhstring@winrt@@@234@I@Z@@impl@winrt@@UEAAIXZ @ 0x180102740 (-Release@-$implements_delegate@U-$AsyncOperationCompletedHandler@Uhstring@winrt@@@Foundation@Win.c)
 *     ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAIXZ @ 0x1805E7E40 (-Release@-$implements_delegate@U-$AsyncOperationCompletedHandler@U-$IKeyValuePair@ULogoInfo@Logo.c)
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x180102D54 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 *     WINRT_IMPL_CloseHandle @ 0x1802D2A98 (WINRT_IMPL_CloseHandle.c)
 */

int __fastcall __1__implements_delegate_U__AsyncOperationCompletedHandler_UIRandomAccessStream_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_UIRandomAccessStream_Streams_Storage_Windows_winrt___Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation_UIRandomAccessStream_Streams_Storage_Windows_winrt___234_I_Z__impl_winrt__QEAA_XZ(
        __int64 a1)
{
  int result; // eax
  void *v3; // rcx

  result = winrt::impl::module_lock_updater<1>::~module_lock_updater<1>(a1 + 32);
  v3 = *(void **)(a1 + 16);
  if ( v3 )
  {
    result = WINRT_IMPL_CloseHandle(v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
