/*
 * XREFs of _lambda_24e08458ef26c9ee62f207e756e9a646_::_lambda_invoker_cdecl_ @ 0x1401DE3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1401EA2CC (DxgkRedrawCursorForPostCompositon.c)
 */

void __fastcall lambda_24e08458ef26c9ee62f207e756e9a646_::_lambda_invoker_cdecl_(DXGADAPTER **this)
{
  DxgkRedrawCursorForPostCompositon(*this);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)this, 0LL);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
}
