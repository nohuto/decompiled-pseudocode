/*
 * XREFs of VfAvlInitializeTree @ 0x14060ECB4
 * Callers:
 *     VfMiscPluginEntry @ 0x140BA0670 (VfMiscPluginEntry.c)
 *     ViIovInitialization @ 0x140BA6ED4 (ViIovInitialization.c)
 * Callees:
 *     VfAvlInitializeTreeEx @ 0x140B85CD8 (VfAvlInitializeTreeEx.c)
 */

__int64 __fastcall VfAvlInitializeTree(void *a1)
{
  return VfAvlInitializeTreeEx(a1);
}
