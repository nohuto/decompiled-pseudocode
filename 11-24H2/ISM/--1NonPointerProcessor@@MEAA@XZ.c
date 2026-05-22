/*
 * XREFs of ??1NonPointerProcessor@@MEAA@XZ @ 0x18002D598
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180178E8C (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x180197848 (--1MouseProcessor@@MEAA@XZ.c)
 *     ??_ENonPointerProcessor@@MEAAPEAXI@Z @ 0x180198BA0 (--_ENonPointerProcessor@@MEAAPEAXI@Z.c)
 *     ??1DockProcessor@@UEAA@XZ @ 0x1801B7B70 (--1DockProcessor@@UEAA@XZ.c)
 *     ??1GazeProcessor@@MEAA@XZ @ 0x1801B80BC (--1GazeProcessor@@MEAA@XZ.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x1801B8EE0 (--1HeatProcessor@@MEAA@XZ.c)
 *     ??1TouchProcessor@@MEAA@XZ @ 0x1801C5264 (--1TouchProcessor@@MEAA@XZ.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$0 @ 0x1801D82E9 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$0.c)
 *     _GazeProcessor::GazeProcessor_::_1_::dtor$0 @ 0x1801D8D1C (_GazeProcessor--GazeProcessor_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
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
