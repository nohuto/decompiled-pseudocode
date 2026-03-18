/*
 * XREFs of _guard_check_icall_no_overrides @ 0x1406B3DA0
 * Callers:
 *     bsearch @ 0x1404FE760 (bsearch.c)
 *     bsearch_s @ 0x1404FE870 (bsearch_s.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 *     qsort_s @ 0x1404FF100 (qsort_s.c)
 *     sub_140508890 @ 0x140508890 (sub_140508890.c)
 *     sub_14050A110 @ 0x14050A110 (sub_14050A110.c)
 *     sub_14050A1F0 @ 0x14050A1F0 (sub_14050A1F0.c)
 *     sub_140518FB0 @ 0x140518FB0 (sub_140518FB0.c)
 *     HaliSaveProcessorContextAndSleep @ 0x1406A60C0 (HaliSaveProcessorContextAndSleep.c)
 *     HaliSaveProcessorContextAndSleepOld @ 0x1406A6160 (HaliSaveProcessorContextAndSleepOld.c)
 *     KeGuardCheckICall @ 0x140BDAA70 (KeGuardCheckICall.c)
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
