/*
 * XREFs of DifObjTrkAllocNode @ 0x14060BC80
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 DifObjTrkAllocNode()
{
  return ExAllocatePool2(0x40uLL);
}
