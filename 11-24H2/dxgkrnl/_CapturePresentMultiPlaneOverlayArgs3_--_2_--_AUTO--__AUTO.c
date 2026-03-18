/*
 * XREFs of _CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO @ 0x140378764
 * Callers:
 *     ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1402BFFE0 (-CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAP.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(__int64 a1)
{
  unsigned int v2; // edi

  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)a1);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(a1 + 8));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(a1 + 16));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(a1 + 24));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(a1 + 32));
  v2 = 0;
  if ( *(_QWORD *)(a1 + 48) && *(_DWORD *)(a1 + 64) )
  {
    do
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(*(_QWORD *)(a1 + 48) + 8LL * v2++));
    while ( v2 < *(_DWORD *)(a1 + 64) );
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(a1 + 48));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(a1 + 40));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(a1 + 56));
}
