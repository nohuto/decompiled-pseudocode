/*
 * XREFs of ??$?9$$CBW4ShaderLinkingArgument@@$0A@@?$span_iterator@$$CBW4ShaderLinkingArgument@@@details@gsl@@QEBA_NAEBV012@@Z @ 0x1801C256C
 * Callers:
 *     HasLighting @ 0x1801C2454 (HasLighting.c)
 *     HasWhiteNoise @ 0x1801C24EC (HasWhiteNoise.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall gsl::details::span_iterator<enum ShaderLinkingArgument const>::operator!=<enum ShaderLinkingArgument const,0>(
        _QWORD *a1,
        _QWORD *a2)
{
  if ( *a1 != *a2 || a1[1] != a2[1] )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  return a1[2] != a2[2];
}
