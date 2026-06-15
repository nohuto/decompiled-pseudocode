/*
 * XREFs of ??_GWorkItem@CWorkFifo@@QEAAPEAXI@Z @ 0x18011819C
 * Callers:
 *     ??1?$_Temporary_owner@VWorkItem@CWorkFifo@@@std@@QEAA@XZ @ 0x180117ED0 (--1-$_Temporary_owner@VWorkItem@CWorkFifo@@@std@@QEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count@VWorkItem@CWorkFifo@@@std@@EEAAXXZ @ 0x18011AAE0 (-_Destroy@-$_Ref_count@VWorkItem@CWorkFifo@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CWorkFifo::WorkItem *__fastcall CWorkFifo::WorkItem::`scalar deleting destructor'(CWorkFifo::WorkItem *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
