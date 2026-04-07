/*
 * XREFs of ?_Change_array@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAXQEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@_K1@Z @ 0x1800B3510
 * Callers:
 *     ??$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU23@$$QEAU23@@Z @ 0x1800AC0DC (--$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTURE_FILTERED_WIN.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAXPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU12@AEAV?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@0@@Z @ 0x1800ABD0C (--$_Destroy_range@V-$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAXPEAUCAPT.c)
 */

void __fastcall std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CCaptureManager::CAPTURE_FILTERED_WINDOW>>((__int64)v6, *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
