/*
 * XREFs of AllocateZeroMemory @ 0x140695610
 * Callers:
 *     FseInitializeGovernedFeaturesEffectiveStates @ 0x140818BC8 (FseInitializeGovernedFeaturesEffectiveStates.c)
 *     FsepPropagateGovernedFeatureEffectiveState @ 0x140818DD0 (FsepPropagateGovernedFeatureEffectiveState.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
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
