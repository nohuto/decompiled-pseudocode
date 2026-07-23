/*
 * XREFs of MiFlowThroughRemoveNode @ 0x1403517F4
 * Callers:
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiFlowThroughRemoveNode(__int64 a1)
{
  __int64 v1; // rsi
  KIRQL v3; // bl

  v1 = *(_QWORD *)(a1 + 336);
  if ( v1 )
  {
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 200));
    RtlAvlRemoveNode((unsigned __int64 *)(v1 + 208), a1 + 352);
    MiReleaseSpinLockExclusive((_DWORD *)(v1 + 200), v3);
  }
}
