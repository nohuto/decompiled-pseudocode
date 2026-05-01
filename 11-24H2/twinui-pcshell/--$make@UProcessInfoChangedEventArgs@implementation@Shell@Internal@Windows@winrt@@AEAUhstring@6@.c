/*
 * XREFs of ??$make@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEAUhstring@6@AEAI_N@winrt@@YA?A_PAEAUhstring@0@AEAI$$QEA_N@Z @ 0x180646AE8
 * Callers:
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x18064F958 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 *     ?UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x180652280 (-UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0ProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBIAEB_N@Z @ 0x180667B30 (--0ProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@A.c)
 */

_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs,winrt::hstring &,unsigned int &,bool>(
        _QWORD *a1,
        const struct winrt::hstring *a2,
        const unsigned int *a3,
        const bool *a4)
{
  winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs *v9; // [rsp+50h] [rbp+8h]

  v9 = (winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs *)operator new(0x28uLL);
  winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs::ProcessInfoChangedEventArgs(
    v9,
    a2,
    a3,
    a4);
  *(_QWORD *)v9 = &winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs::`vftable';
  *a1 = (char *)v9 + 16;
  return a1;
}
