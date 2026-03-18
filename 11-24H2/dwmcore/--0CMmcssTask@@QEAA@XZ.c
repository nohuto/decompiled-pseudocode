/*
 * XREFs of ??0CMmcssTask@@QEAA@XZ @ 0x1800EE954
 * Callers:
 *     ??0CGlobalSurfaceManager@@IEAA@XZ @ 0x1800EF460 (--0CGlobalSurfaceManager@@IEAA@XZ.c)
 *     ??0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1800EFA14 (--0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CComposition@@IEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x1801F4850 (--0CComposition@@IEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 *     ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x180224A10 (-InitializeMmcssTask@CKst@@AEAAJXZ.c)
 *     ??0CGlobalMit@@IEAA@PEAVCComposition@@@Z @ 0x180249670 (--0CGlobalMit@@IEAA@PEAVCComposition@@@Z.c)
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
