/*
 * XREFs of NtUserHideCursorNoCapture @ 0x1C01D42B0
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00B03A0 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 */

__int64 NtUserHideCursorNoCapture()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 ThreadWin32Thread; // rax

  EnterCrit(0LL, 0LL);
  v5 = *((_QWORD *)PtiCurrentShared(v1, v0, v2, v3) + 54);
  if ( !*(_QWORD *)(v5 + 112) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x400u || (*(_DWORD *)(ThreadWin32Thread + 648) & 0x100) == 0 )
    {
      v5 = (unsigned int)gpdwCPUserPreferencesMask & 0x80010000;
      if ( (_DWORD)v5 == -2147418112 )
        zzzSetCursor(0LL);
    }
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return 0LL;
}
