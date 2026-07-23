/*
 * XREFs of XmDecOp @ 0x140460BF0
 * Callers:
 *     <none>
 * Callees:
 *     XmSubOperands @ 0x140460C10 (XmSubOperands.c)
 */

__int64 __fastcall XmDecOp(__int64 a1)
{
  *(_DWORD *)(a1 + 108) = 1;
  return XmSubOperands(a1, 0LL);
}
