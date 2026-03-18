/*
 * XREFs of ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z @ 0x1801EAD80
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x180231EE4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
        COverlayContext::OverlayPlaneInfo *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  *(_OWORD *)((char *)this + 260) = *(_OWORD *)((char *)a2 + 260);
  *((_DWORD *)this + 69) = *((_DWORD *)a2 + 69);
  *((_BYTE *)this + 367) = *((_BYTE *)a2 + 367);
  *((_DWORD *)this + 93) = *((_DWORD *)a2 + 93);
  *((_BYTE *)this + 370) = *((_BYTE *)a2 + 370);
  *((_DWORD *)this + 97) = *((_DWORD *)a2 + 97);
  *((_BYTE *)this + 368) = *((_BYTE *)a2 + 368);
  *((_BYTE *)this + 369) = *((_BYTE *)a2 + 369);
  *((_DWORD *)this + 94) = *((_DWORD *)a2 + 94);
  *((_DWORD *)this + 95) = *((_DWORD *)a2 + 95);
  *((_BYTE *)this + 371) = *((_BYTE *)a2 + 371);
  *((_DWORD *)this + 96) = *((_DWORD *)a2 + 96);
}
