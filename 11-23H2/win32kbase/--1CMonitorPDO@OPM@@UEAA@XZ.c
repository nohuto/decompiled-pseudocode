/*
 * XREFs of ??1CMonitorPDO@OPM@@UEAA@XZ @ 0x1C0151260
 * Callers:
 *     ??_ECMonitorPDO@OPM@@UEAAPEAXI@Z @ 0x1C01512A0 (--_ECMonitorPDO@OPM@@UEAAPEAXI@Z.c)
 *     ??1COPMProtectedOutput@@UEAA@XZ @ 0x1C015B124 (--1COPMProtectedOutput@@UEAA@XZ.c)
 * Callees:
 *     ??_GCMutex@OPM@@QEAAPEAXI@Z @ 0x1C0151334 (--_GCMutex@OPM@@QEAAPEAXI@Z.c)
 *     ?Destroy@CMonitorPDO@OPM@@UEAAJXZ @ 0x1C0151370 (-Destroy@CMonitorPDO@OPM@@UEAAJXZ.c)
 */

void __fastcall OPM::CMonitorPDO::~CMonitorPDO(OPM::CMonitorPDO *this, unsigned int a2)
{
  bool v2; // zf
  void *v4; // rcx

  v2 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &OPM::CMonitorPDO::`vftable';
  if ( !v2 )
    OPM::CMonitorPDO::Destroy(this);
  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
    OPM::CMutex::`scalar deleting destructor'(v4, a2);
  *((_QWORD *)this + 1) = 0LL;
}
