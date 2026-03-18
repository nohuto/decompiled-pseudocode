/*
 * XREFs of KiReleaseSubNodeLock @ 0x140434610
 * Callers:
 *     KiCompleteKernelInit @ 0x140B45C50 (KiCompleteKernelInit.c)
 * Callees:
 *     <none>
 */

void __fastcall KiReleaseSubNodeLock(volatile signed __int64 *a1)
{
  _InterlockedAnd64(a1, 0LL);
}
