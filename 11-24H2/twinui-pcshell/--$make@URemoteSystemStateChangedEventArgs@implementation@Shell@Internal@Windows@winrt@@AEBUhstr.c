/*
 * XREFs of ??$make@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@W4CloudPCState@3456@@winrt@@YA?A_PAEBUhstring@0@$$QEAW4CloudPCState@Shell@Internal@Windows@0@@Z @ 0x180646BE4
 * Callers:
 *     ?SetPhysicalDeviceAccessState@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXXZ @ 0x180650EAC (-SetPhysicalDeviceAccessState@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x180652544 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0RemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBW4CloudPCState@2345@@Z @ 0x180667988 (--0RemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstri.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::hstring const &,enum winrt::Windows::Internal::Shell::CloudPCState>(
        _QWORD *a1,
        const struct winrt::hstring *a2,
        const enum winrt::Windows::Internal::Shell::CloudPCState *a3)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs *v7; // [rsp+40h] [rbp+8h]

  v7 = (winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs *)operator new(0x28uLL);
  winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs::RemoteSystemStateChangedEventArgs(
    v7,
    a2,
    a3);
  *(_QWORD *)v7 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs>::`vftable';
  *a1 = (char *)v7 + 16;
  return a1;
}
