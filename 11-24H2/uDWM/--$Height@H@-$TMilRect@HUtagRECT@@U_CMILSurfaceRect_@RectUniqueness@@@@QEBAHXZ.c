/*
 * XREFs of ??$Height@H@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBAHXZ @ 0x18008BF5C
 * Callers:
 *     ?Height@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ @ 0x18009B1E4 (-Height@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::Height<int>(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 4));
}
