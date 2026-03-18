/*
 * XREFs of UserGetCurrentDesktopId @ 0x1401A9314
 * Callers:
 *     hdcOpenDCW @ 0x140067790 (hdcOpenDCW.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall UserGetCurrentDesktopId(_QWORD *a1)
{
  unsigned int v2; // edi
  struct tagTHREADINFO *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *a1 = -1LL;
  v2 = 0;
  v3 = PtiCurrent((__int64)a1);
  if ( *((_QWORD *)v3 + 62) == *(_QWORD *)(W32GetUserSessionState(v4) + 19200) )
  {
    v2 = 1;
    *a1 = ***(_QWORD ***)(*((_QWORD *)PtiCurrent(v5) + 62) + 8LL);
  }
  return v2;
}
