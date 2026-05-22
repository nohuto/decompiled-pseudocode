/*
 * XREFs of ??1MouseProcessor@@MEAA@XZ @ 0x180191B88
 * Callers:
 *     ??_GMouseProcessor@@MEAAPEAXI@Z @ 0x180191C70 (--_GMouseProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1InjectionDevice@@QEAA@XZ @ 0x1801780D0 (--1InjectionDevice@@QEAA@XZ.c)
 */

void __fastcall MouseProcessor::~MouseProcessor(MouseProcessor *this)
{
  *((_QWORD *)this + 214) = 0LL;
  *(_QWORD *)this = &MouseProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &MouseProcessor::`vftable'{for `IMouseProcessorForwarding'};
  *((_QWORD *)this + 2) = &MouseProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 3) = &MouseProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 4) = &MouseProcessor::`vftable'{for `RefCountedObject'};
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 213);
  InjectionDevice::~InjectionDevice((MouseProcessor *)((char *)this + 144));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 14);
  NonPointerProcessor::~NonPointerProcessor((MouseProcessor *)((char *)this + 16));
}
