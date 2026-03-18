/*
 * XREFs of ??_ECMonitorPDO@OPM@@UEAAPEAXI@Z @ 0x1401C4030
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMonitorPDO@OPM@@UEAA@XZ @ 0x14008B050 (--1CMonitorPDO@OPM@@UEAA@XZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x14008C2B0 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x14013163C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

OPM::CMonitorPDO *__fastcall OPM::CMonitorPDO::`vector deleting destructor'(OPM::CMonitorPDO *this, char a2)
{
  int v3; // esi
  OPM *v4; // rdi
  void *v5; // rdx
  void *v7; // rdx

  v3 = a2 & 1;
  if ( (a2 & 2) != 0 )
  {
    v4 = (OPM::CMonitorPDO *)((char *)this - 8);
    `vector destructor iterator'(
      (char *)this,
      72LL,
      *((_QWORD *)this - 1),
      (void (__fastcall *)(char *))OPM::CMonitorPDO::~CMonitorPDO);
    if ( v3 )
      OPM::OPMFreeMemory(v4, v5);
    return v4;
  }
  else
  {
    OPM::CMonitorPDO::~CMonitorPDO(this, a2);
    if ( v3 )
      OPM::OPMFreeMemory(this, v7);
    return this;
  }
}
