/*
 * XREFs of ??1CVirtualDesktopContainerElement@@UEAA@XZ @ 0x1804DE624
 * Callers:
 *     ??_GCVirtualDesktopContainerElement@@UEAAPEAXI@Z @ 0x1804DE790 (--_GCVirtualDesktopContainerElement@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1802F6948 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::_EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_ @ 0x1804B5300 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChangedBegi.c)
 */

void __fastcall CVirtualDesktopContainerElement::~CVirtualDesktopContainerElement(
        CVirtualDesktopContainerElement *this)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi
  unsigned __int64 j; // rdi

  v1 = (unsigned __int64 *)((char *)this + 848);
  if ( *((_QWORD *)this + 105) )
  {
    for ( i = 0LL; i < *v1; ++i )
      Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 105)
                                                                                                  + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 105));
    *((_QWORD *)this + 105) = 0LL;
  }
  *v1 = 0LL;
  *((_QWORD *)this + 108) = 0LL;
  if ( *((_QWORD *)this + 99) )
  {
    for ( j = 0LL; j < *((_QWORD *)this + 100); ++j )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*((_QWORD *)this + 99) + 8 * j));
    CoTaskMemFree(*((LPVOID *)this + 99));
    *((_QWORD *)this + 99) = 0LL;
  }
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::_EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_((__int64)this + 280);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 30);
  *((_DWORD *)this + 59) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
}
