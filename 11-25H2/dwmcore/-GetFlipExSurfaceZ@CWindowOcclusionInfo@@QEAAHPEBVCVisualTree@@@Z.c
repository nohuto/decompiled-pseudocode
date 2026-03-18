/*
 * XREFs of ?GetFlipExSurfaceZ@CWindowOcclusionInfo@@QEAAHPEBVCVisualTree@@@Z @ 0x180109E90
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18023FEC0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z @ 0x1800CE110 (-UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 */

__int64 __fastcall CWindowOcclusionInfo::GetFlipExSurfaceZ(CWindowOcclusionInfo *this, const struct CVisualTree *a2)
{
  const struct CVisualTree *CurrentFrameId; // rax
  const struct CVisualTree *v4; // rdx
  COcclusionInfo *v5; // rcx
  int v7; // eax

  CurrentFrameId = (const struct CVisualTree *)GetCurrentFrameId();
  if ( *((const struct CVisualTree **)v5 + 2) != CurrentFrameId )
  {
    COcclusionInfo::UpdateZFromValidParent(v5, v4, CurrentFrameId);
    v7 = *((_DWORD *)this + 9);
    *((_DWORD *)this + 12) = v7;
    *((_DWORD *)this + 13) = v7;
  }
  return *((unsigned int *)this + 13);
}
