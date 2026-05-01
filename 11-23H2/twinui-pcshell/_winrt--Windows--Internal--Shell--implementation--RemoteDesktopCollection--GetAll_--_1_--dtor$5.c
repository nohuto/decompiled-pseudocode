/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::GetAll_::_1_::dtor$5 @ 0x1802B9BB3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::GetAll_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  return std::list<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>::~list<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>(*(_QWORD *)(a2 + 104) + 8LL);
}
