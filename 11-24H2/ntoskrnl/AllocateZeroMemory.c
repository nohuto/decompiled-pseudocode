/*
 * XREFs of AllocateZeroMemory @ 0x1406A1AB8
 * Callers:
 *     FseInitializeGovernedFeaturesEffectiveStates @ 0x14082918C (FseInitializeGovernedFeaturesEffectiveStates.c)
 *     FsepPropagateGovernedFeatureEffectiveState @ 0x140829394 (FsepPropagateGovernedFeatureEffectiveState.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall AllocateZeroMemory(_QWORD *a1, ULONG_PTR a2)
{
  void *Pool2; // rax

  if ( !a1 )
    return 3221225485LL;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, a2, 0x6C506346u);
  *a1 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  memset_0(Pool2, 0, a2);
  return 0LL;
}
