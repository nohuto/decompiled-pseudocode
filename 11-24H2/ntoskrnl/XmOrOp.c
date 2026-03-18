/*
 * XREFs of XmOrOp @ 0x140575960
 * Callers:
 *     <none>
 * Callees:
 *     XmSetLogicalResult @ 0x140469500 (XmSetLogicalResult.c)
 */

__int64 __fastcall XmOrOp(__int64 a1)
{
  return XmSetLogicalResult(a1, *(_DWORD *)(a1 + 104) | *(_DWORD *)(a1 + 108));
}
