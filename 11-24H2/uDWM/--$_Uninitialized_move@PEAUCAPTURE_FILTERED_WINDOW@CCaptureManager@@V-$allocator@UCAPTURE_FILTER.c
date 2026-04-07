/*
 * XREFs of ??$_Uninitialized_move@PEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU12@0PEAU12@AEAV?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@0@@Z @ 0x1800AC450
 * Callers:
 *     ??$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU23@$$QEAU23@@Z @ 0x1800AC0DC (--$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTURE_FILTERED_WIN.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAXPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU12@AEAV?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@0@@Z @ 0x1800ABD0C (--$_Destroy_range@V-$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAXPEAUCAPT.c)
 *     ??$construct@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@U12@@?$_Default_allocator_traits@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@SAXAEAV?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@1@QEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@$$QEAU34@@Z @ 0x1800AC55C (--$construct@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@U12@@-$_Default_allocator_traits@V-$alloc.c)
 */

__int64 __fastcall std::_Uninitialized_move<CCaptureManager::CAPTURE_FILTERED_WINDOW *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r9

  if ( a1 != a2 )
  {
    do
    {
      std::_Default_allocator_traits<std::allocator<CCaptureManager::CAPTURE_FILTERED_WINDOW>>::construct<CCaptureManager::CAPTURE_FILTERED_WINDOW,CCaptureManager::CAPTURE_FILTERED_WINDOW>(
        a1,
        a3,
        a1);
      a3 += 16LL;
      a1 = v4 + 16;
    }
    while ( a1 != v5 );
  }
  std::_Destroy_range<std::allocator<CCaptureManager::CAPTURE_FILTERED_WINDOW>>(a3, a3);
  return a3;
}
