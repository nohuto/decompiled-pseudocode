/*
 * XREFs of ??1CMmcssTask@@QEAA@XZ @ 0x18025CDF0
 * Callers:
 *     ??1CGlobalMit@@UEAA@XZ @ 0x180258A20 (--1CGlobalMit@@UEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180259E9C (--1CComposition@@MEAA@XZ.c)
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x18025E458 (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 *     ??1CGlobalManipulationManager@@EEAA@XZ @ 0x1802B6A38 (--1CGlobalManipulationManager@@EEAA@XZ.c)
 *     ??_GCMmcssTask@@QEAAPEAXI@Z @ 0x1802B76B4 (--_GCMmcssTask@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x18025CE18 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 */

void __fastcall CMmcssTask::~CMmcssTask(CMmcssTask *this)
{
  CMmcssTask::UnloadRuntime(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}
