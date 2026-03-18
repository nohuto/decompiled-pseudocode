/*
 * XREFs of IsPrecisionTouchPadEnabled @ 0x14014CF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPrecisionTouchPadEnabled(__int64 a1)
{
  return *(unsigned int *)(W32GetUserSessionState(a1) + 328);
}
