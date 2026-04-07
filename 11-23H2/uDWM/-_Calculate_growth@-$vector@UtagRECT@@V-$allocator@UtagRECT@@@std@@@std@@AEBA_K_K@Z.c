/*
 * XREFs of ?_Calculate_growth@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z @ 0x1800BC380
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800BB5C8 (--$_Emplace_reallocate@AEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniq.c)
 *     ??$_Emplace_reallocate@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEBU2@@Z @ 0x1800D8D70 (--$_Emplace_reallocate@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<tagRECT>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0xFFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 4;
  v4 = v3 >> 1;
  if ( v3 <= 0xFFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
