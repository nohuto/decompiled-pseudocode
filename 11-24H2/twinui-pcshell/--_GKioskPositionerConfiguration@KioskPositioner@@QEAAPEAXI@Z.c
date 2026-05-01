/*
 * XREFs of ??_GKioskPositionerConfiguration@KioskPositioner@@QEAAPEAXI@Z @ 0x1804F1254
 * Callers:
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1800DBCDC (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 *     ??1?$_Optional_destruct_base@UKioskPositionerConfiguration@KioskPositioner@@$0A@@std@@QEAA@XZ @ 0x1804F0F40 (--1-$_Optional_destruct_base@UKioskPositionerConfiguration@KioskPositioner@@$0A@@std@@QEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z @ 0x18007B16C (--R-$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z.c)
 */

KioskPositioner::KioskPositionerConfiguration *__fastcall KioskPositioner::KioskPositionerConfiguration::`scalar deleting destructor'(
        KioskPositioner::KioskPositionerConfiguration *this)
{
  if ( *(_QWORD *)this )
    std::default_delete<SnapLayoutBase>::operator()((__int64)this, *(__int64 (__fastcall ****)(_QWORD, __int64))this);
  return this;
}
