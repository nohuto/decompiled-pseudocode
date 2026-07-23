/*
 * XREFs of CMFAllocFn @ 0x1407C2830
 * Callers:
 *     XpressDecodeCreate @ 0x1406A2D90 (XpressDecodeCreate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CMFAllocFn(__int64 a1, int a2)
{
  return ExAllocatePool2(0x100uLL, a2, 0x636D6650u);
}
