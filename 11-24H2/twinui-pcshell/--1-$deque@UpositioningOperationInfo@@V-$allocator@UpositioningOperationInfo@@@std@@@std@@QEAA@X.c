/*
 * XREFs of ??1?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@QEAA@XZ @ 0x1802BE28C
 * Callers:
 *     ??1FullScreenPositioner@@UEAA@XZ @ 0x1800C92D8 (--1FullScreenPositioner@@UEAA@XZ.c)
 *     ??1?$queue@UpositioningOperationInfo@@V?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@@std@@QEAA@XZ @ 0x1802D0BCC (--1-$queue@UpositioningOperationInfo@@V-$deque@UpositioningOperationInfo@@V-$allocator@Uposition.c)
 * Callees:
 *     ?_Tidy@?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@AEAAXXZ @ 0x1802BE2B8 (-_Tidy@-$deque@UpositioningOperationInfo@@V-$allocator@UpositioningOperationInfo@@@std@@@std@@AE.c)
 */

void __fastcall std::deque<positioningOperationInfo>::~deque<positioningOperationInfo>(void **a1)
{
  void *v2; // rcx

  std::deque<positioningOperationInfo>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x10);
}
