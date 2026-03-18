/*
 * XREFs of VfMajorInit @ 0x140B92F10
 * Callers:
 *     ViIovPluginUnload @ 0x1406A4090 (ViIovPluginUnload.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *VfMajorInit()
{
  return memset_0(&ViMajorVerifierRoutines, 0, 0xB40uLL);
}
