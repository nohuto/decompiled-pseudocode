/*
 * XREFs of ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1801B0BE4
 * Callers:
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180057F90 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180098EA4 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180099330 (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801B0810 (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18027F804 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180280800 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180280AF4 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x18007A2E0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CComposeTop::HasNewContent(CComposeTop *this, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v5; // rcx
  CRectanglesShape *v6; // rcx
  CRectanglesShape *(__fastcall *v7)(CRectanglesShape *, char, __int64); // rax

  v3 = 0;
  v5 = 0LL;
  if ( g_pComposition )
    v5 = *((_QWORD *)g_pComposition + 111);
  if ( *(_QWORD *)this == v5 )
    return 1;
  v6 = (CRectanglesShape *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v6 )
  {
    v7 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))v6;
    if ( v7 == CRectanglesShape::`scalar deleting destructor' )
      CRectanglesShape::`scalar deleting destructor'(v6, 1, a3);
    else
      ((void (__fastcall *)(CRectanglesShape *, __int64))v7)(v6, 1LL);
  }
  return v3;
}
