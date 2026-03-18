/*
 * XREFs of SendShape @ 0x140213300
 * Callers:
 *     <none>
 * Callees:
 *     SendMessageTo @ 0x140048F20 (SendMessageTo.c)
 */

__int64 __fastcall SendShape(_DWORD *a1)
{
  *a1 = 6;
  return SendMessageTo(0LL, a1, 32LL);
}
