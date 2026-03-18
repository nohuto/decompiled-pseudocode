/*
 * XREFs of ??0CRedirectedGDISurface@@IEAA@PEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@@Z @ 0x1801029E8
 * Callers:
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x18010291C (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

CRedirectedGDISurface *__fastcall CRedirectedGDISurface::CRedirectedGDISurface(
        CRedirectedGDISurface *this,
        HLSURF a2,
        struct CGdiSpriteBitmap *a3,
        struct CLegacySurfaceManager *a4)
{
  _QWORD *inserted; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int8 v10; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a4;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = a3;
  *(_QWORD *)this = &CRedirectedGDISurface::`vftable';
  v8[1] = this;
  v8[0] = a2;
  v8[2] = a3;
  v10 = 0;
  inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)a4 + 8), v8, 0x18u, &v10);
  if ( !inserted )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  if ( !v10 )
  {
    inserted[2] = a3;
    inserted[1] = this;
  }
  return this;
}
