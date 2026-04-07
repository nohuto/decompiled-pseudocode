/*
 * XREFs of ??$_Uninitialized_move@PEAU_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@YAPEAU_DWMCaptureWindowInformation@@QEAU1@0PEAU1@AEAV?$allocator@U_DWMCaptureWindowInformation@@@0@@Z @ 0x1800AC494
 * Callers:
 *     ??$_Emplace_reallocate@AEBU_DWMCaptureWindowInformation@@@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@AEAAPEAU_DWMCaptureWindowInformation@@QEAU2@AEBU2@@Z @ 0x1800ABEC8 (--$_Emplace_reallocate@AEBU_DWMCaptureWindowInformation@@@-$vector@U_DWMCaptureWindowInformation.c)
 * Callees:
 *     ??$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x180096690 (--$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z.c)
 */

char *__fastcall std::_Uninitialized_move<_DWMCaptureWindowInformation *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<tagRECT *,tagRECT *>(a1, a2, a3);
  return &a3[(a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFE0uLL];
}
