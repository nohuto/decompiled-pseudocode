/*
 * XREFs of ??1InjectionDevice@@QEAA@XZ @ 0x1801780D0
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180177F84 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x180191B88 (--1MouseProcessor@@MEAA@XZ.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$5 @ 0x1801D0B2E (_ControllerProcessor--ControllerProcessor_--_1_--dtor$5.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$6 @ 0x1801D0B47 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$6.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$7 @ 0x1801D0B60 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$7.c)
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$4 @ 0x1801D1322 (_MouseProcessor--MouseProcessor_--_1_--dtor$4.c)
 * Callees:
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x18017A000 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

void __fastcall InjectionDevice::~InjectionDevice(InjectionDevice *this)
{
  if ( *((_BYTE *)this + 1556) )
    InjectionDevice::Remove(this);
}
