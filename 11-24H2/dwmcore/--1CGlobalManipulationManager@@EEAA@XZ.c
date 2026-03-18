/*
 * XREFs of ??1CGlobalManipulationManager@@EEAA@XZ @ 0x1802B6A38
 * Callers:
 *     ??_ECGlobalManipulationManager@@EEAAPEAXI@Z @ 0x1802B6C10 (--_ECGlobalManipulationManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ShutDownManipulationThread@CManipulationManager@@IEAAXXZ @ 0x180256D84 (-ShutDownManipulationThread@CManipulationManager@@IEAAXXZ.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x18025CDF0 (--1CMmcssTask@@QEAA@XZ.c)
 */

void __fastcall CGlobalManipulationManager::~CGlobalManipulationManager(CGlobalManipulationManager *this)
{
  *(_QWORD *)this = &CGlobalManipulationManager::`vftable';
  CManipulationManager::ShutDownManipulationThread(this);
  CMmcssTask::~CMmcssTask((CGlobalManipulationManager *)((char *)this + 312));
  CManipulationManager::~CManipulationManager(this);
}
