/*
 * XREFs of ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x1800A908C
 * Callers:
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_66ed2df52651243ff863a12d97446406_@@@impl@winrt@@UEAAIXZ @ 0x18006CD30 (-Release@-$implements_delegate@U-$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationM.c)
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_be02bfc96701eec5f3a0245d87020f54_@@@impl@winrt@@UEAAIXZ @ 0x18006CD80 (-Release@-$implements_delegate@U-$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@.c)
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::Release @ 0x1800DC030 (winrt--impl--implements_delegate_winrt--Windows--System--Threading--WorkItemHandler_ea_1800DC030.c)
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_f7189cc794088eeaf33bed95e453010f_@@@impl@winrt@@UEAAIXZ @ 0x1800FE540 (-Release@-$implements_delegate@U-$TypedEventHandler@UIUniversalAppModelWatcher@Wind_ea_1800FE540.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::impl::implements_delegate_base::decrement_reference(volatile signed __int32 *this)
{
  return winrt::impl::atomic_ref_count::operator--(this);
}
