/*
 * XREFs of __BmlGetPathModeListForAdapter_::_2_::_AUTO::__AUTO @ 0x1403F2748
 * Callers:
 *     _BmlGetPathModeListForAdapter @ 0x140269ADC (_BmlGetPathModeListForAdapter.c)
 *     _BmlGetPathModalityForAdapter @ 0x1403635A4 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall _BmlGetPathModeListForAdapter_::_2_::_AUTO::__AUTO(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v1);
}
