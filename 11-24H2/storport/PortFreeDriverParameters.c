/*
 * XREFs of PortFreeDriverParameters @ 0x1401B35EC
 * Callers:
 *     RaidDeleteAdapter @ 0x1400437A8 (RaidDeleteAdapter.c)
 *     DeleteNvmeAdapter @ 0x1400CB320 (DeleteNvmeAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall PortFreeDriverParameters(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
