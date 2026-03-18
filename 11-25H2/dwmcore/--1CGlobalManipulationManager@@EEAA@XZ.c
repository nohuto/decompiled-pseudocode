/*
 * XREFs of ??1CGlobalManipulationManager@@EEAA@XZ @ 0x1802C0088
 * Callers:
 *     ??_ECGlobalManipulationManager@@EEAAPEAXI@Z @ 0x1802C0260 (--_ECGlobalManipulationManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ShutDownManipulationThread@CManipulationManager@@IEAAXXZ @ 0x180261EF8 (-ShutDownManipulationThread@CManipulationManager@@IEAAXXZ.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x180266D60 (--1CMmcssTask@@QEAA@XZ.c)
 */

void __fastcall CGlobalManipulationManager::~CGlobalManipulationManager(CGlobalManipulationManager *this)
{
  *(_QWORD *)this = &CGlobalManipulationManager::`vftable';
  CManipulationManager::ShutDownManipulationThread(this);
  CMmcssTask::~CMmcssTask((CGlobalManipulationManager *)((char *)this + 312));
  CManipulationManager::~CManipulationManager(this);
}
