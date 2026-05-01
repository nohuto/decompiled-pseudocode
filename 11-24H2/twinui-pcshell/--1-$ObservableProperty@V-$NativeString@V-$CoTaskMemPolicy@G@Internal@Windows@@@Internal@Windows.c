/*
 * XREFs of ??1?$ObservableProperty@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@QEAA@XZ @ 0x1804BF194
 * Callers:
 *     ??1SwitchItem@@UEAA@XZ @ 0x1804BF208 (--1SwitchItem@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableItem@@UISwitchItem@@UISwitchItemInternal@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804BF2B0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableItem@@UISwitchItem@@UISwit.c)
 *     ??1VirtualDesktopItem@@UEAA@XZ @ 0x1804C0628 (--1VirtualDesktopItem@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableItem@@U?$ChainInterfaces@UIVirtualDesktopItemInternal@@UIVirtualDesktopItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804C0710 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableItem@@U-$ChainInterfaces@U.c)
 * Callees:
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1802F6948 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

void __fastcall ObservableProperty<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::~ObservableProperty<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>(
        __int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi

  v1 = (unsigned __int64 *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) )
  {
    for ( i = 0LL; i < *v1; ++i )
      Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*(_QWORD *)(a1 + 24)
                                                                                                  + 8 * i));
    CoTaskMemFree(*(LPVOID *)(a1 + 24));
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  *v1 = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
}
