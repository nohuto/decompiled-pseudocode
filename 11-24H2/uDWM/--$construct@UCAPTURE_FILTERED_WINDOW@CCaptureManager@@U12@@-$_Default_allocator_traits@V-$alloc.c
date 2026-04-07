/*
 * XREFs of ??$construct@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@U12@@?$_Default_allocator_traits@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@SAXAEAV?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@1@QEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@$$QEAU34@@Z @ 0x1800AC55C
 * Callers:
 *     ??$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU23@$$QEAU23@@Z @ 0x1800AC0DC (--$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTURE_FILTERED_WIN.c)
 *     ??$_Uninitialized_move@PEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU12@0PEAU12@AEAV?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@0@@Z @ 0x1800AC450 (--$_Uninitialized_move@PEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@V-$allocator@UCAPTURE_FILTER.c)
 *     ??$emplace@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@1@$$QEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@@Z @ 0x1800ACAB4 (--$emplace@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTURE_FILTERED_WINDOW@CCapture.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<CCaptureManager::CAPTURE_FILTERED_WINDOW>>::construct<CCaptureManager::CAPTURE_FILTERED_WINDOW,CCaptureManager::CAPTURE_FILTERED_WINDOW>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 *v4; // r8
  __int64 *v5; // rdx

  result = *a3;
  v4 = a3 + 1;
  *a2 = result;
  v5 = a2 + 1;
  *v5 = 0LL;
  if ( v5 != v4 )
  {
    result = *v4;
    *v5 = *v4;
    *v4 = 0LL;
  }
  return result;
}
