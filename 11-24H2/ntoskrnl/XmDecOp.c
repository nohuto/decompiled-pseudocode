/*
 * XREFs of XmDecOp @ 0x140468240
 * Callers:
 *     <none>
 * Callees:
 *     XmSubOperands @ 0x140468260 (XmSubOperands.c)
 */

__int64 __fastcall XmDecOp(__int64 a1)
{
  *(_DWORD *)(a1 + 108) = 1;
  return XmSubOperands(a1, 0LL);
}
