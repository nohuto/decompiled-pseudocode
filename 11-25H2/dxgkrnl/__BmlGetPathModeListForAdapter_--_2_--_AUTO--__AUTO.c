/*
 * XREFs of __BmlGetPathModeListForAdapter_::_2_::_AUTO::__AUTO @ 0x1403F8958
 * Callers:
 *     _BmlGetPathModeListForAdapter @ 0x140262BDC (_BmlGetPathModeListForAdapter.c)
 *     _BmlGetPathModalityForAdapter @ 0x1402C3BBC (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall _BmlGetPathModeListForAdapter_::_2_::_AUTO::__AUTO(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v1);
}
