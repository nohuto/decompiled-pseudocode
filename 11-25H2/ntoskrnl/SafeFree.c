/*
 * XREFs of SafeFree @ 0x14069566C
 * Callers:
 *     FseInitializeGovernedFeaturesEffectiveStates @ 0x140818BC8 (FseInitializeGovernedFeaturesEffectiveStates.c)
 *     FsepPropagateGovernedFeatureEffectiveState @ 0x140818DD0 (FsepPropagateGovernedFeatureEffectiveState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
