/*
 * XREFs of ??0ProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBIAEB_N@Z @ 0x180667B30
 * Callers:
 *     ??$make@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEAUhstring@6@AEAI_N@winrt@@YA?A_PAEAUhstring@0@AEAI$$QEA_N@Z @ 0x180646AE8 (--$make@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEAUhstring@6@.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs *__fastcall winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs::ProcessInfoChangedEventArgs(
        winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs *this,
        const struct winrt::hstring *a2,
        const unsigned int *a3,
        const bool *a4)
{
  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs,winrt::Windows::Internal::Shell::IProcessInfoChangedEventArgs>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs::`vftable';
  winrt::hstring::hstring(
    (winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs *)((char *)this + 24),
    a2);
  *((_DWORD *)this + 8) = *a3;
  *((_BYTE *)this + 36) = *a4;
  return this;
}
