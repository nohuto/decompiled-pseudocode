/*
 * XREFs of ??1ObservableObjectArray@@QEAA@XZ @ 0x1804B2C9C
 * Callers:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1804B2C64 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservableObjectArray@@.c)
 *     ??1VirtualDesktopItemCollection@@UEAA@XZ @ 0x1804B3E3C (--1VirtualDesktopItemCollection@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804B3F90 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@V-$VirtualDes.c)
 *     ??1SwitchItemFilteredCollection@@UEAA@XZ @ 0x1804B5324 (--1SwitchItemFilteredCollection@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@UIObservableObjectArrayChanged@@UIObservableObjectArrayChangedBeginEnd@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$ChainInterfaces@UISwitchItemFilteredCollection@@UIObservableObjectArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804B5500 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@UIObservableO.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CGITRegistrationList@@QEAA@XZ @ 0x1800C9398 (--1CGITRegistrationList@@QEAA@XZ.c)
 */

void __fastcall ObservableObjectArray::~ObservableObjectArray(ObservableObjectArray *this)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 i; // rsi

  CGITRegistrationList::~CGITRegistrationList((ObservableObjectArray *)((char *)this + 96));
  CGITRegistrationList::~CGITRegistrationList((ObservableObjectArray *)((char *)this + 48));
  v2 = (unsigned __int64 *)((char *)this + 24);
  if ( *((_QWORD *)this + 2) )
  {
    for ( i = 0LL; i < *v2; ++i )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*((_QWORD *)this + 2) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  *v2 = 0LL;
  *((_QWORD *)this + 5) = 0LL;
}
