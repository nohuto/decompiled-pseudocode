/*
 * XREFs of ??1CMonitorAPI@@QEAA@XZ @ 0x1403220B0
 * Callers:
 *     DDCCICleanUpWrap @ 0x140282640 (DDCCICleanUpWrap.c)
 * Callees:
 *     ??1?$CList@VCPhysicalMonitorHandle@@@OPM@@QEAA@XZ @ 0x140322044 (--1-$CList@VCPhysicalMonitorHandle@@@OPM@@QEAA@XZ.c)
 */

void __fastcall CMonitorAPI::~CMonitorAPI(CMonitorAPI *this)
{
  void *v2; // rdx

  OPM::CMutex::~CMutex((CMonitorAPI *)((char *)this + 32));
  OPM::CList<CPhysicalMonitorHandle>::~CList<CPhysicalMonitorHandle>((__int64)this + 8, v2);
  OPM::CMutex::~CMutex(this);
}
