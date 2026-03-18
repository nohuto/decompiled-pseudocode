/*
 * XREFs of ?Initialize@CCompositionSurfaceInfo@@IEAAJPEAX@Z @ 0x1801A496C
 * Callers:
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x1801A471C (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAPEAVIBitmapRealization@@XZ @ 0x18004CF90 (-GetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAPEAVIBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddToSurfaceMap@CCompositionSurfaceManager@@IEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x1801A49F4 (-AddToSurfaceMap@CCompositionSurfaceManager@@IEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::Initialize(
        CCompositionSurfaceManager **this,
        CCompositionSurfaceManager *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  CCompositionSurfaceManager *v6; // rdx
  struct IBitmapRealization *(__fastcall *v7)(CGlobalCompositionSurfaceInfo *); // rax

  v4 = CCompositionSurfaceManager::AddToSurfaceMap(this[3], (struct CCompositionSurfaceInfo *)this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x1Bu, 0LL);
  }
  else
  {
    v6 = *this;
    this[4] = a2;
    v7 = (struct IBitmapRealization *(__fastcall *)(CGlobalCompositionSurfaceInfo *))*((_QWORD *)v6 + 6);
    if ( v7 == CGlobalCompositionSurfaceInfo::GetRenderingRealization )
      CGlobalCompositionSurfaceInfo::GetRenderingRealization((CGlobalCompositionSurfaceInfo *)this);
    else
      v7((CGlobalCompositionSurfaceInfo *)this);
  }
  return v5;
}
