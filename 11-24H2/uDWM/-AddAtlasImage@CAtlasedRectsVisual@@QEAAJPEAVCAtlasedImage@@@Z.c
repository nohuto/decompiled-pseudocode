/*
 * XREFs of ?AddAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@@Z @ 0x18002FFEC
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001E1D0 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180021928 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Initialize@CButton@@MEAAJXZ @ 0x18002F710 (-Initialize@CButton@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasedRectsVisual::AddAtlasImage(
        CAtlasedRectsVisual *this,
        struct CAtlasedImage *a2,
        __int64 a3,
        int a4)
{
  return CAtlasedRectsVisual::InsertAtlasImageAtIndex(this, a2, *((_DWORD *)this + 56), a4);
}
