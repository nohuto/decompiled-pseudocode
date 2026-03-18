/*
 * XREFs of IsTouchpadPointerInputMessage @ 0x1401554D4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsTouchpadPointerInputMessage(int a1)
{
  return (unsigned int)(a1 - 593) <= 2 || (unsigned int)(a1 - 577) <= 9;
}
