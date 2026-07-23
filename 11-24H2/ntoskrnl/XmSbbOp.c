/*
 * XREFs of XmSbbOp @ 0x140572EF0
 * Callers:
 *     <none>
 * Callees:
 *     XmSubOperands @ 0x140460C10 (XmSubOperands.c)
 */

__int64 __fastcall XmSbbOp(_DWORD *a1)
{
  return XmSubOperands(a1, a1[4] & 1);
}
