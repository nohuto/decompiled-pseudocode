/*
 * XREFs of XmXorOp @ 0x140460E80
 * Callers:
 *     <none>
 * Callees:
 *     XmSetLogicalResult @ 0x140461EB0 (XmSetLogicalResult.c)
 */

__int64 __fastcall XmXorOp(__int64 a1)
{
  return XmSetLogicalResult(a1, (unsigned int)(*(_DWORD *)(a1 + 104) ^ *(_DWORD *)(a1 + 108)));
}
