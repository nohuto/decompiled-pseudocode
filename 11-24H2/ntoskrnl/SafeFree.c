/*
 * XREFs of SafeFree @ 0x1406A0A0C
 * Callers:
 *     FseInitializeGovernedFeaturesEffectiveStates @ 0x1408289BC (FseInitializeGovernedFeaturesEffectiveStates.c)
 *     FsepPropagateGovernedFeatureEffectiveState @ 0x140828BC4 (FsepPropagateGovernedFeatureEffectiveState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SafeFree(void **a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x6C506346u);
      *a1 = 0LL;
    }
  }
}
