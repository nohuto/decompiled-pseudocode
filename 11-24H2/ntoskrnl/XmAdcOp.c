/*
 * XREFs of XmAdcOp @ 0x140575980
 * Callers:
 *     <none>
 * Callees:
 *     XmAddOperands @ 0x140468A40 (XmAddOperands.c)
 */

__int64 __fastcall XmAdcOp(__int64 a1)
{
  return XmAddOperands(a1, *(_DWORD *)(a1 + 16) & 1);
}
