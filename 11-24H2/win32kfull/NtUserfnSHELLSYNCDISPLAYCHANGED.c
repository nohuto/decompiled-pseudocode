/*
 * XREFs of NtUserfnSHELLSYNCDISPLAYCHANGED @ 0x1402A2AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

__int64 __fastcall NtUserfnSHELLSYNCDISPLAYCHANGED(__int64 a1, __int64 a2)
{
  PtiCurrent(a1, a2);
  UserSetLastError(5);
  return 0LL;
}
