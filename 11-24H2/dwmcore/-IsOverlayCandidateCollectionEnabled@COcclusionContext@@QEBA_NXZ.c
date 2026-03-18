/*
 * XREFs of ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ @ 0x180100FAC
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800FF480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18023E480 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall COcclusionContext::IsOverlayCandidateCollectionEnabled(COcclusionContext *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_BYTE *)this + 1565) )
    return *((_QWORD *)this + 226) != *((_QWORD *)this + 225);
  return v1;
}
