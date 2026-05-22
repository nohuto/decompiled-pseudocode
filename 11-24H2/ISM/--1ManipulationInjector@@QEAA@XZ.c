/*
 * XREFs of ??1ManipulationInjector@@QEAA@XZ @ 0x180110A68
 * Callers:
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x1800BCF3C (--1MPCGestureHandler@@UEAA@XZ.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180178E8C (--1ControllerProcessor@@MEAA@XZ.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$1 @ 0x1801D4CA6 (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$1.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$4 @ 0x1801D8343 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall ManipulationInjector::~ManipulationInjector(ManipulationInjector *this)
{
  void *v2; // rcx

  if ( *((_QWORD *)this + 12) )
    RemoveInjectionDevice();
  v2 = (void *)*((_QWORD *)this + 98);
  if ( v2 )
    CloseHandle(v2);
}
