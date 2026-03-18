/*
 * XREFs of CMFAllocFn @ 0x1407C15FC
 * Callers:
 *     XpressDecodeCreate @ 0x1406A1D40 (XpressDecodeCreate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 CMFAllocFn()
{
  return ExAllocatePool2(0x100uLL);
}
