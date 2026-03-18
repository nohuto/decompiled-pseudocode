/*
 * XREFs of ??_GCMmcssTask@@QEAAPEAXI@Z @ 0x1802C0CF4
 * Callers:
 *     ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x18022F810 (-InitializeMmcssTask@CKst@@AEAAJXZ.c)
 *     ??1?$unique_ptr@VCMmcssTask@@U?$default_delete@VCMmcssTask@@@std@@@std@@QEAA@XZ @ 0x180238248 (--1-$unique_ptr@VCMmcssTask@@U-$default_delete@VCMmcssTask@@@std@@@std@@QEAA@XZ.c)
 *     ??1CKst@@QEAA@XZ @ 0x1802C0CB8 (--1CKst@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x180266D60 (--1CMmcssTask@@QEAA@XZ.c)
 */

CMmcssTask *__fastcall CMmcssTask::`scalar deleting destructor'(CMmcssTask *this)
{
  CMmcssTask::~CMmcssTask(this);
  operator delete(this);
  return this;
}
