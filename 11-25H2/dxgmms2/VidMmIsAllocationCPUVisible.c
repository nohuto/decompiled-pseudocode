/*
 * XREFs of VidMmIsAllocationCPUVisible @ 0x1401060E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall VidMmIsAllocationCPUVisible(__int64 a1)
{
  return **(_BYTE **)(a1 + 376) & 1;
}
