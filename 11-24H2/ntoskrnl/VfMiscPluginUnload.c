/*
 * XREFs of VfMiscPluginUnload @ 0x140615040
 * Callers:
 *     <none>
 * Callees:
 *     VfDeleteLookasideTree @ 0x140B9FE18 (VfDeleteLookasideTree.c)
 *     VfDeleteResourceTree @ 0x140BA1984 (VfDeleteResourceTree.c)
 */

__int64 VfMiscPluginUnload()
{
  if ( (VfRuleClasses & 0x400000) == 0 )
    _InterlockedAnd((volatile signed __int32 *)&KeNumberProcessorsGroup0[9], 0xFFFFFDF9);
  VfDeleteResourceTree();
  return VfDeleteLookasideTree();
}
