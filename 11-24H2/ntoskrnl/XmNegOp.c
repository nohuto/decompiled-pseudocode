/*
 * XREFs of XmNegOp @ 0x140572EC0
 * Callers:
 *     <none>
 * Callees:
 *     XmSubOperands @ 0x140460C10 (XmSubOperands.c)
 */

__int64 __fastcall XmNegOp(_DWORD *a1)
{
  int v1; // eax

  v1 = a1[26];
  a1[26] = 0;
  a1[27] = v1;
  return XmSubOperands(a1, 0);
}
