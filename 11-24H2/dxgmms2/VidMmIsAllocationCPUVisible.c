/*
 * XREFs of VidMmIsAllocationCPUVisible @ 0x140103F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall VidMmIsAllocationCPUVisible(__int64 a1)
{
  return **(_BYTE **)(a1 + 392) & 1;
}
