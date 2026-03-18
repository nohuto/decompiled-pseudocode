/*
 * XREFs of ??1?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@QEAA@XZ @ 0x1801BEE58
 * Callers:
 *     ??1CDrawListEntryBatch@@EEAA@XZ @ 0x1801BEDF8 (--1CDrawListEntryBatch@@EEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@AEAAXXZ @ 0x1801BEE90 (-_Tidy@-$deque@PEAVCMegaRectBatchCommand@@V-$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@AE.c)
 */

void __fastcall std::deque<CMegaRectBatchCommand *>::~deque<CMegaRectBatchCommand *>(_QWORD **a1)
{
  _QWORD *v2; // rcx

  std::deque<CMegaRectBatchCommand *>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, 0x10uLL);
}
