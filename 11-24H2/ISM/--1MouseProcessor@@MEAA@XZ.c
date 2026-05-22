/*
 * XREFs of ??1MouseProcessor@@MEAA@XZ @ 0x180197848
 * Callers:
 *     ??_GMouseProcessor@@MEAAPEAXI@Z @ 0x180197930 (--_GMouseProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1InjectionDevice@@QEAA@XZ @ 0x180178FCC (--1InjectionDevice@@QEAA@XZ.c)
 */

void __fastcall MouseProcessor::~MouseProcessor(MouseProcessor *this)
{
  *((_QWORD *)this + 215) = 0LL;
  *(_QWORD *)this = &MouseProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &MouseProcessor::`vftable'{for `IMouseProcessorForwarding'};
  *((_QWORD *)this + 2) = &MouseProcessor::`vftable'{for `IInputProcessorDeviceQueryRemove'};
  *((_QWORD *)this + 3) = &MouseProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 4) = &MouseProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 5) = &MouseProcessor::`vftable'{for `RefCountedObject'};
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 214);
  InjectionDevice::~InjectionDevice((MouseProcessor *)((char *)this + 152));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
  NonPointerProcessor::~NonPointerProcessor((MouseProcessor *)((char *)this + 24));
}
