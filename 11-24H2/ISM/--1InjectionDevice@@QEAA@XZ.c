/*
 * XREFs of ??1InjectionDevice@@QEAA@XZ @ 0x180178FCC
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180178E8C (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x180197848 (--1MouseProcessor@@MEAA@XZ.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$5 @ 0x1801D835C (_ControllerProcessor--ControllerProcessor_--_1_--dtor$5.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$6 @ 0x1801D8375 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$6.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$7 @ 0x1801D838E (_ControllerProcessor--ControllerProcessor_--_1_--dtor$7.c)
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$4 @ 0x1801D8D64 (_MouseProcessor--MouseProcessor_--_1_--dtor$4.c)
 * Callees:
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x18017B7A0 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

void __fastcall InjectionDevice::~InjectionDevice(InjectionDevice *this)
{
  if ( *((_BYTE *)this + 1556) )
    InjectionDevice::Remove(this);
}
