/*
 * XREFs of xxxUpdateWindows @ 0x1402166C8
 * Callers:
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     NtUserUpdateWindows @ 0x140247AF0 (NtUserUpdateWindows.c)
 * Callees:
 *     ?xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z @ 0x140032130 (-xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall xxxUpdateWindows(struct tagWND *a1, HRGN a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v7; // rax

  if ( !*((_QWORD *)PtiCurrent((__int64)a1, (__int64)a2) + 62)
    || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v5, v4) + 62) + 8LL) + 64LL) & 1) == 0 )
  {
    v7 = PtiCurrent(v5, v4);
    xxxUpdateThreadsWindows(v7, a1, a2);
  }
  return 1LL;
}
