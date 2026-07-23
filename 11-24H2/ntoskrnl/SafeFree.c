/*
 * XREFs of SafeFree @ 0x1406A1B14
 * Callers:
 *     FseInitializeGovernedFeaturesEffectiveStates @ 0x14082918C (FseInitializeGovernedFeaturesEffectiveStates.c)
 *     FsepPropagateGovernedFeatureEffectiveState @ 0x140829394 (FsepPropagateGovernedFeatureEffectiveState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
