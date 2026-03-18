/*
 * XREFs of _DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO @ 0x1402BDD28
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1402BE310 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(__int64 a1)
{
  unsigned int v2; // edi

  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)a1);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(a1 + 8));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(a1 + 16));
  v2 = 0;
  if ( *(_QWORD *)(a1 + 24) && *(_DWORD *)(a1 + 64) )
  {
    do
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(*(_QWORD *)(a1 + 24) + 8LL * v2++));
    while ( v2 < *(_DWORD *)(a1 + 64) );
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(a1 + 24));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(a1 + 32));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(a1 + 40));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(a1 + 48));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(a1 + 56));
}
