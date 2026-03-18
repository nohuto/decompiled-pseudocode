/*
 * XREFs of ??1CMmcssTask@@QEAA@XZ @ 0x180266D60
 * Callers:
 *     ??1CGlobalMit@@UEAA@XZ @ 0x180263960 (--1CGlobalMit@@UEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180264D94 (--1CComposition@@MEAA@XZ.c)
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x180268394 (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 *     ??1CGlobalManipulationManager@@EEAA@XZ @ 0x1802C0088 (--1CGlobalManipulationManager@@EEAA@XZ.c)
 *     ??_GCMmcssTask@@QEAAPEAXI@Z @ 0x1802C0CF4 (--_GCMmcssTask@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180266D88 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 */

void __fastcall CMmcssTask::~CMmcssTask(CMmcssTask *this)
{
  CMmcssTask::UnloadRuntime(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}
