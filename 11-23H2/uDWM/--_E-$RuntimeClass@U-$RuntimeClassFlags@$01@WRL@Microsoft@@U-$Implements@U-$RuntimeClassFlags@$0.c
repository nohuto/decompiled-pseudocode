/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVDisplayManager@Core@Display@Devices@Windows@@PEAVDisplayManagerPathsFailedOrInvalidatedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800A4A10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Devices::Display::Core::DisplayManager *,Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs *>,Microsoft::WRL::FtmBase>>::`vector deleting destructor'(
        __int64 a1,
        char a2)
{
  *(_DWORD *)(a1 + 60) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 32));
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
  return a1;
}
