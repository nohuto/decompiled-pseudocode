/*
 * XREFs of ?erase@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@@Z @ 0x1800B56F8
 * Callers:
 *     ?AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800AD280 (-AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKE.c)
 *     ?OnWindowClosed@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF0B0 (-OnWindowClosed@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowZOrderUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AFB30 (-OnWindowZOrderUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2CA0 (-_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTER.c)
 * Callees:
 *     ??$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x180096690 (--$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z.c)
 */

_QWORD *__fastcall std::vector<_DWMCaptureWindowInformation>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *result; // rax

  std::_Copy_memmove<tagRECT *,tagRECT *>((void *)(a3 + 32), *(_QWORD *)(a1 + 8), (void *)a3);
  *(_QWORD *)(a1 + 8) -= 32LL;
  result = a2;
  *a2 = a3;
  return result;
}
