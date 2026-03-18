/*
 * XREFs of ??_GCMmcssTask@@QEAAPEAXI@Z @ 0x1802B76B4
 * Callers:
 *     ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x180224A10 (-InitializeMmcssTask@CKst@@AEAAJXZ.c)
 *     ??1?$unique_ptr@VCMmcssTask@@U?$default_delete@VCMmcssTask@@@std@@@std@@QEAA@XZ @ 0x18022C4F8 (--1-$unique_ptr@VCMmcssTask@@U-$default_delete@VCMmcssTask@@@std@@@std@@QEAA@XZ.c)
 *     ??1CKst@@QEAA@XZ @ 0x1802B7678 (--1CKst@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x18025CDF0 (--1CMmcssTask@@QEAA@XZ.c)
 */

CMmcssTask *__fastcall CMmcssTask::`scalar deleting destructor'(CMmcssTask *this)
{
  CMmcssTask::~CMmcssTask(this);
  operator delete(this);
  return this;
}
