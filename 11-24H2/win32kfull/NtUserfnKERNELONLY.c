/*
 * XREFs of NtUserfnKERNELONLY @ 0x1402A2B10
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserfnKERNELONLY(__int64 a1, __int64 a2)
{
  PtiCurrent(a1, a2);
  return 0LL;
}
