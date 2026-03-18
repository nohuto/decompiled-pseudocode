/*
 * XREFs of ??1CKst@@QEAA@XZ @ 0x1802C0CB8
 * Callers:
 *     ??_GCKst@@QEAAPEAXI@Z @ 0x1802C005C (--_GCKst@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCMmcssTask@@QEAAPEAXI@Z @ 0x1802C0CF4 (--_GCMmcssTask@@QEAAPEAXI@Z.c)
 */

void __fastcall CKst::~CKst(CKst *this, unsigned int a2)
{
  CMmcssTask *v3; // rcx

  *(_QWORD *)this = &CKst::`vftable';
  v3 = (CMmcssTask *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    CMmcssTask::`scalar deleting destructor'(v3, a2);
    *((_QWORD *)this + 7) = 0LL;
  }
  CKstBase::~CKstBase(this);
}
