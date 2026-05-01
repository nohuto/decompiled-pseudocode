/*
 * XREFs of ?CalcWidthForDesktopCount@CVirtualDesktopContainerElement@@IEAAHH@Z @ 0x1804DE940
 * Callers:
 *     ?CalcIdealWidth@CVirtualDesktopContainerElement@@IEAAHXZ @ 0x1804DE8C4 (-CalcIdealWidth@CVirtualDesktopContainerElement@@IEAAHXZ.c)
 *     ?GetVisibleRect@CVirtualDesktopContainerElement@@UEAA?AUCRect@Geometry@@XZ @ 0x1804DED60 (-GetVisibleRect@CVirtualDesktopContainerElement@@UEAA-AUCRect@Geometry@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopContainerElement::CalcWidthForDesktopCount(
        CVirtualDesktopContainerElement *this,
        int a2)
{
  return (unsigned int)(a2
                      * MulDiv(
                          *((_DWORD *)this + 82),
                          *((_DWORD *)this + 64) - *((_DWORD *)this + 62),
                          *((_DWORD *)this + 65) - *((_DWORD *)this + 63))
                      + *((_DWORD *)this + 83) * (a2 - 1)
                      + 2 * *((_DWORD *)this + 99));
}
