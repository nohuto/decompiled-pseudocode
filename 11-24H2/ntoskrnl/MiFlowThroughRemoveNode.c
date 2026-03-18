/*
 * XREFs of MiFlowThroughRemoveNode @ 0x1403976A4
 * Callers:
 *     MiWaitForInPageComplete @ 0x140398598 (MiWaitForInPageComplete.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
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
