/*
 * XREFs of ??1COPMProtectedOutput@@UEAA@XZ @ 0x1C015B124
 * Callers:
 *     ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C015B160 (--_ECOPMProtectedOutput@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMonitorPDO@OPM@@UEAA@XZ @ 0x1C0151260 (--1CMonitorPDO@OPM@@UEAA@XZ.c)
 *     ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1C015B5D0 (-Destroy@COPMProtectedOutput@@UEAAJXZ.c)
 */

void __fastcall COPMProtectedOutput::~COPMProtectedOutput(COPMProtectedOutput *this, unsigned int a2)
{
  bool v2; // zf

  v2 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &COPMProtectedOutput::`vftable';
  if ( !v2 )
    COPMProtectedOutput::Destroy(this);
  OPM::CMonitorPDO::~CMonitorPDO(this, a2);
}
