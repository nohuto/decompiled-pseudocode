/*
 * XREFs of ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800BF668
 * Callers:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BF48C (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(_DWORD *a1)
{
  return *a1 <= TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::sc_rcInfinite && a1[2] >= dword_180147B78
      || a1[1] <= dword_180147B74 && a1[3] >= dword_180147B7C;
}
