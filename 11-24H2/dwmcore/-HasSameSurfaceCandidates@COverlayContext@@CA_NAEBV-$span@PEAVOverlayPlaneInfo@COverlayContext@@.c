/*
 * XREFs of ?HasSameSurfaceCandidates@COverlayContext@@CA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@AEBVOverlayPlaneInfo@1@@Z @ 0x180205330
 * Callers:
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180232AB8 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     <none>
 */

char __fastcall COverlayContext::HasSameSurfaceCandidates(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  char v3; // r9
  __int64 v4; // r10

  v2 = a1[1];
  v3 = 0;
  v4 = v2 + 8LL * *a1;
  while ( v2 != v4 )
  {
    if ( *(_QWORD *)(a2 + 16) == *(_QWORD *)(*(_QWORD *)v2 + 16LL) )
      return 1;
    v2 += 8LL;
  }
  return v3;
}
