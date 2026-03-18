/*
 * XREFs of CMFAllocFn @ 0x1407B30F0
 * Callers:
 *     XpressDecodeCreate @ 0x140696B60 (XpressDecodeCreate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 CMFAllocFn()
{
  return ExAllocatePool2(0x100uLL);
}
