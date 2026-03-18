/*
 * XREFs of ?IsForegroundWindowWithThreadCheck@@YA_NPEBUtagWND@@PEBUtagTHREADINFO@@@Z @ 0x1402323B0
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsForegroundWindowWithThreadCheck(const struct tagWND *a1, const struct tagTHREADINFO *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  return *((_QWORD *)a2 + 59) == *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944)
      && a1 == *(const struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 18944) + 128LL);
}
