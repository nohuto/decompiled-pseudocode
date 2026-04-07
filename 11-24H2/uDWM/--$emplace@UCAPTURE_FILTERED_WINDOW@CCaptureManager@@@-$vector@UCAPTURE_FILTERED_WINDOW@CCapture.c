/*
 * XREFs of ??$emplace@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@1@$$QEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@@Z @ 0x1800ACAB4
 * Callers:
 *     ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800B30CC (-_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Emplace_back_with_unused_capacity@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAAEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@$$QEAU23@@Z @ 0x1800ABD8C (--$_Emplace_back_with_unused_capacity@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTU.c)
 *     ??$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU23@$$QEAU23@@Z @ 0x1800AC0DC (--$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTURE_FILTERED_WIN.c)
 *     ??$_Move_backward_unchecked@PEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@PEAU12@@std@@YAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@PEAU12@00@Z @ 0x1800AC3C8 (--$_Move_backward_unchecked@PEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@PEAU12@@std@@YAPEAUCAPT.c)
 *     ??$construct@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@U12@@?$_Default_allocator_traits@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@SAXAEAV?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@1@QEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@$$QEAU34@@Z @ 0x1800AC55C (--$construct@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@U12@@-$_Default_allocator_traits@V-$alloc.c)
 */

_QWORD *__fastcall std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::emplace<CCaptureManager::CAPTURE_FILTERED_WINDOW>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // r11
  __int64 v7; // rcx
  _QWORD *v8; // r11
  __int64 v9; // rcx
  CBaseObject **v10; // r11
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rax
  __int64 v14; // [rsp+28h] [rbp-20h] BYREF
  CBaseObject *v15; // [rsp+30h] [rbp-18h] BYREF
  CBaseObject *v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = a1[1];
  if ( v4 == a1[2] )
  {
    *a2 = std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::_Emplace_reallocate<CCaptureManager::CAPTURE_FILTERED_WINDOW>(
            a1,
            a3,
            (__int64)a4);
  }
  else
  {
    if ( a3 == v4 )
    {
      std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::_Emplace_back_with_unused_capacity<CCaptureManager::CAPTURE_FILTERED_WINDOW>(
        (__int64)a1,
        a4);
    }
    else
    {
      std::_Default_allocator_traits<std::allocator<CCaptureManager::CAPTURE_FILTERED_WINDOW>>::construct<CCaptureManager::CAPTURE_FILTERED_WINDOW,CCaptureManager::CAPTURE_FILTERED_WINDOW>(
        (__int64)a1,
        &v14,
        a4);
      std::_Default_allocator_traits<std::allocator<CCaptureManager::CAPTURE_FILTERED_WINDOW>>::construct<CCaptureManager::CAPTURE_FILTERED_WINDOW,CCaptureManager::CAPTURE_FILTERED_WINDOW>(
        v7,
        v8,
        v8 - 2);
      *(_QWORD *)(v9 + 8) += 16LL;
      std::_Move_backward_unchecked<CCaptureManager::CAPTURE_FILTERED_WINDOW *,CCaptureManager::CAPTURE_FILTERED_WINDOW *>(
        (CBaseObject **)a3,
        v10 - 2,
        v10);
      v11 = v15;
      v15 = 0LL;
      *(_QWORD *)a3 = v14;
      v12 = *(CBaseObject **)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v11;
      v16 = v12;
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v15);
    }
    *a2 = a3;
  }
  return a2;
}
