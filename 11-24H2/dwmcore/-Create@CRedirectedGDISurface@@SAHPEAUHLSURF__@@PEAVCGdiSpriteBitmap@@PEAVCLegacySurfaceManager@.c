/*
 * XREFs of ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1801A747C
 * Callers:
 *     ?OnSurfaceChanging@CGdiSpriteBitmap@@QEAAJPEAUHLSURF__@@@Z @ 0x1801A73E4 (-OnSurfaceChanging@CGdiSpriteBitmap@@QEAAJPEAUHLSURF__@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180110290 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ??0CRedirectedGDISurface@@IEAA@PEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@@Z @ 0x1801A7548 (--0CRedirectedGDISurface@@IEAA@PEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@@Z.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJXZ @ 0x1801A75E0 (-Initialize@CRedirectedGDISurface@@IEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRedirectedGDISurface::Create(
        HLSURF a1,
        struct CGdiSpriteBitmap *a2,
        struct CLegacySurfaceManager *a3,
        struct CRedirectedGDISurface **a4)
{
  CRedirectedGDISurface *v8; // rax
  CRedirectedGDISurface *v9; // rax
  CRedirectedGDISurface *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  v8 = (CRedirectedGDISurface *)DefaultHeap::AllocClear(0x30uLL);
  if ( !v8 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v9 = CRedirectedGDISurface::CRedirectedGDISurface(v8, a1, a2, a3);
  v10 = v9;
  if ( !v9 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  CMILRefCountImpl::AddReference((CRedirectedGDISurface *)((char *)v9 + 8));
  v11 = CRedirectedGDISurface::Initialize(v10);
  v12 = v11;
  if ( v11 >= 0 )
  {
    *a4 = v10;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1Au, 0LL);
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v10);
  }
  return v12;
}
