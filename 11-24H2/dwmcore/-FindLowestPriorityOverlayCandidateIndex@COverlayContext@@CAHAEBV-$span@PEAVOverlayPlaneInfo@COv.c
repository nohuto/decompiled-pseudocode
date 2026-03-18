/*
 * XREFs of ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x18005E3CC
 * Callers:
 *     ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18005FD04 (-TrimCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x18005E9A0 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::FindLowestPriorityOverlayCandidateIndex(_QWORD *a1)
{
  int v1; // edx
  unsigned int i; // edi
  int v5; // esi
  bool IsHigherProprity; // al

  v1 = -1;
  if ( *a1 )
  {
    v1 = 0;
    for ( i = 1; i < *(_DWORD *)a1; ++i )
    {
      v5 = v1;
      if ( (unsigned __int64)v1 >= *a1 || (unsigned __int64)i >= *a1 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      IsHigherProprity = COverlayContext::IsHigherProprity(
                           *(const struct COverlayContext::OverlayPlaneInfo **)(a1[1] + 8LL * i),
                           *(const struct COverlayContext::OverlayPlaneInfo **)(a1[1] + 8LL * v1));
      v1 = i;
      if ( IsHigherProprity )
        v1 = v5;
    }
  }
  return (unsigned int)v1;
}
