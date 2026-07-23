/*
 * XREFs of _guard_check_icall_no_overrides @ 0x1406B4D40
 * Callers:
 *     bsearch @ 0x1404FC020 (bsearch.c)
 *     bsearch_s @ 0x1404FC130 (bsearch_s.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     qsort_s @ 0x1404FC9C0 (qsort_s.c)
 *     sub_140506150 @ 0x140506150 (sub_140506150.c)
 *     sub_1405079D0 @ 0x1405079D0 (sub_1405079D0.c)
 *     sub_140507AB0 @ 0x140507AB0 (sub_140507AB0.c)
 *     sub_140516870 @ 0x140516870 (sub_140516870.c)
 *     HaliSaveProcessorContextAndSleep @ 0x1406A70F0 (HaliSaveProcessorContextAndSleep.c)
 *     KeGuardCheckICall @ 0x140BDCA70 (KeGuardCheckICall.c)
 * Callees:
 *     <none>
 */

void __fastcall guard_check_icall_no_overrides(ULONG_PTR a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r10
  unsigned __int64 v3; // r10

  if ( (a1 & 0x8000000000000000uLL) == 0LL )
    goto LABEL_8;
  if ( !guard_icall_bitmap )
    return;
  v1 = *(_QWORD *)(guard_icall_bitmap + 8 * (a1 >> 9));
  v2 = a1 >> 3;
  if ( (a1 & 0xF) == 0 )
  {
    if ( _bittest64(&v1, v2) )
      return;
LABEL_8:
    guard_icall_bugcheck(a1);
  }
  v3 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !_bittest64(&v1, v3) || !_bittest64(&v1, v3 | 1) )
    goto LABEL_8;
}
