/*
 * XREFs of ??1NonPointerProcessor@@MEAA@XZ @ 0x18002CFD8
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180177F84 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x180191B88 (--1MouseProcessor@@MEAA@XZ.c)
 *     ??_ENonPointerProcessor@@MEAAPEAXI@Z @ 0x180192C60 (--_ENonPointerProcessor@@MEAAPEAXI@Z.c)
 *     ??1DockProcessor@@UEAA@XZ @ 0x1801B05E0 (--1DockProcessor@@UEAA@XZ.c)
 *     ??1GazeProcessor@@MEAA@XZ @ 0x1801B0B2C (--1GazeProcessor@@MEAA@XZ.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x1801B19B0 (--1HeatProcessor@@MEAA@XZ.c)
 *     ??1TouchProcessor@@MEAA@XZ @ 0x1801BDD74 (--1TouchProcessor@@MEAA@XZ.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$0 @ 0x1801D0ABB (_ControllerProcessor--ControllerProcessor_--_1_--dtor$0.c)
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$0 @ 0x1801D12DD (_MouseProcessor--MouseProcessor_--_1_--dtor$0.c)
 *     _GazeProcessor::GazeProcessor_::_1_::dtor$0 @ 0x1801D1A95 (_GazeProcessor--GazeProcessor_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall NonPointerProcessor::~NonPointerProcessor(NonPointerProcessor *this)
{
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &NonPointerProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
