/*
 * XREFs of AllocateZeroMemory @ 0x1406A09B0
 * Callers:
 *     FseInitializeGovernedFeaturesEffectiveStates @ 0x1408289BC (FseInitializeGovernedFeaturesEffectiveStates.c)
 *     FsepPropagateGovernedFeatureEffectiveState @ 0x140828BC4 (FsepPropagateGovernedFeatureEffectiveState.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall AllocateZeroMemory(_QWORD *a1, size_t a2)
{
  void *Pool2; // rax

  if ( !a1 )
    return 3221225485LL;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  *a1 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  memset_0(Pool2, 0, a2);
  return 0LL;
}
