/*
 * XREFs of ??0CMmcssTask@@QEAA@XZ @ 0x18022F980
 * Callers:
 *     ??0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1800FD0B4 (--0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CGlobalSurfaceManager@@IEAA@XZ @ 0x1800FD614 (--0CGlobalSurfaceManager@@IEAA@XZ.c)
 *     ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x18022F810 (-InitializeMmcssTask@CKst@@AEAAJXZ.c)
 *     ??0CComposition@@IEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x18023C03C (--0CComposition@@IEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 *     ??0CGlobalMit@@IEAA@PEAVCComposition@@@Z @ 0x1802549C4 (--0CGlobalMit@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CMmcssTask *__fastcall CMmcssTask::CMmcssTask(CMmcssTask *this)
{
  InitializeCriticalSection((LPCRITICAL_SECTION)this);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = 0;
  return this;
}
