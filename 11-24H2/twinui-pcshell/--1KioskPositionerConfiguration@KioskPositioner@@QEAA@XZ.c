/*
 * XREFs of ??1KioskPositionerConfiguration@KioskPositioner@@QEAA@XZ @ 0x1804F0FD0
 * Callers:
 *     _KioskPositioner::LoadAssignedAccessConfiguration_::_1_::dtor$2 @ 0x1806D9EFD (_KioskPositioner--LoadAssignedAccessConfiguration_--_1_--dtor$2.c)
 *     _KioskPositioner::LoadShellLauncherConfiguration_::_1_::dtor$1 @ 0x1806F080E (_KioskPositioner--LoadShellLauncherConfiguration_--_1_--dtor$1.c)
 * Callees:
 *     ??R?$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z @ 0x18007B16C (--R-$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z.c)
 */

void __fastcall KioskPositioner::KioskPositionerConfiguration::~KioskPositionerConfiguration(
        KioskPositioner::KioskPositionerConfiguration *this)
{
  if ( *(_QWORD *)this )
    std::default_delete<SnapLayoutBase>::operator()((__int64)this, *(__int64 (__fastcall ****)(_QWORD, __int64))this);
}
