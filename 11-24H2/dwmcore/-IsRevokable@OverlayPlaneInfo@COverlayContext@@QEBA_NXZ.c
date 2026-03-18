/*
 * XREFs of ?IsRevokable@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18026C754
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x180231EE4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?BetterIsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x180268904 (-BetterIsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall COverlayContext::OverlayPlaneInfo::IsRevokable(COverlayContext::OverlayPlaneInfo *this)
{
  char v1; // bl

  v1 = 0;
  if ( !*((_DWORD *)this + 90) )
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 152LL))(*((_QWORD *)this + 2)) != 0;
  return v1;
}
