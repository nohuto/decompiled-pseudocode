/*
 * XREFs of NtUserfnSHELLSYNCDISPLAYCHANGED @ 0x1C01E28A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserfnSHELLSYNCDISPLAYCHANGED(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PtiCurrentShared(a1, a2, a3, a4);
  UserSetLastError(5);
  return 0LL;
}
