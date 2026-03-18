/*
 * XREFs of ?CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z @ 0x18000CE50
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x180008F30 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000BCC0 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x18000D28C (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 */

void __fastcall CBackdropVisualImage::CreateDrawingContext(CBackdropVisualImage *this, struct CDrawingContext **a2)
{
  void **v4; // rbx
  void **v5; // rax
  char *v6; // [rsp+30h] [rbp+8h] BYREF
  char *v7; // [rsp+38h] [rbp+10h] BYREF

  CDrawingContext::Create(a2);
  *((_QWORD *)*a2 + 25) = this;
  CBackdropVisualImage::EnsureAncestorList(this);
  v4 = (void **)DwmDbg::DbgString::DbgString(&v6, word_180336D88);
  v5 = (void **)DwmDbg::DbgString::DbgString(&v7, "BVI-FullRender");
  CBackdropVisualImage::LogEtwEvent((__int64)this, v5, v4);
}
