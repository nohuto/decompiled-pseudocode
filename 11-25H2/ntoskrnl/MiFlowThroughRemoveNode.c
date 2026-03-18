/*
 * XREFs of MiFlowThroughRemoveNode @ 0x14049A4C0
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
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
