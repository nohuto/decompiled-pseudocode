/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1802563C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$producer_ref@USearchAppHost@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEAA@XZ @ 0x1801DBB00 (--1-$producer_ref@USearchAppHost@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync__ResumeCoro_1_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 96) = *(_QWORD *)(a2 + 176) + 80LL;
  winrt::impl::producer_ref<winrt::WindowsUdk::UI::Shell::SearchAppHost>::~producer_ref<winrt::WindowsUdk::UI::Shell::SearchAppHost>(*(_QWORD **)(a2 + 96));
}
