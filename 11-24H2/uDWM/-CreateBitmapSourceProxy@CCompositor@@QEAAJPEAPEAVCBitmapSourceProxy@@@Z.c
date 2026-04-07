/*
 * XREFs of ?CreateBitmapSourceProxy@CCompositor@@QEAAJPEAPEAVCBitmapSourceProxy@@@Z @ 0x18000B028
 * Callers:
 *     ?Initialize@CBitmapSource@@AEAAJXZ @ 0x18000AFD4 (-Initialize@CBitmapSource@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateBitmapSourceProxy(CCompositor *this, struct CBitmapSourceProxy **a2)
{
  return CCompositor::CreateProxy<CBitmapSourceProxy>(this, a2);
}
