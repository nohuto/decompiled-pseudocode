/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::LaunchUriData::GetForLaunchUri_::_1_::catch$34 @ 0x1807031B4
 * Callers:
 *     <none>
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800537E8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::LaunchUriData::GetForLaunchUri_::_1_::catch_34(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  winrt::hstring::operator=((struct winrt::impl::hstring_header **)(a2 + 136), &c_hostSystemId, a3);
  return 0LL;
}
