/*
 * XREFs of XmPushOp @ 0x1404612E0
 * Callers:
 *     <none>
 * Callees:
 *     XmPushStack @ 0x1404615D8 (XmPushStack.c)
 */

__int64 __fastcall XmPushOp(__int64 a1)
{
  return XmPushStack(a1, *(unsigned int *)(a1 + 108));
}
