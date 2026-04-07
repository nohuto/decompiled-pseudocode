/*
 * XREFs of ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180029338
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180028130 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x180064B90 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     _CTopLevelWindow::ValidateVisual_::_1_::dtor$0 @ 0x1800F68A0 (_CTopLevelWindow--ValidateVisual_--_1_--dtor$0.c)
 *     _CTopLevelWindow::ValidateVisual_::_1_::dtor$1 @ 0x1800F68C0 (_CTopLevelWindow--ValidateVisual_--_1_--dtor$1.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall FastRegion::CRegion::FreeMemory(void **this, const struct std::nothrow_t *a2)
{
  _DWORD *v2; // rdi

  v2 = this + 1;
  if ( this + 1 != *this )
  {
    CDisplayBlackCurtainAnimatedVisual::operator delete(*this, a2);
    *this = v2;
    *v2 = 0;
  }
}
