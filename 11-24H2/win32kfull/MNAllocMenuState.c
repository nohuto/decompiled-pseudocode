/*
 * XREFs of MNAllocMenuState @ 0x14009A738
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxMNStartMenuState @ 0x14024F334 (xxxMNStartMenuState.c)
 * Callees:
 *     GreSelectFont @ 0x1400377A0 (GreSelectFont.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MNSetupAnimationDC @ 0x1401CDE94 (MNSetupAnimationDC.c)
 *     GetDpiMetricsForCurrentThread @ 0x1402F1688 (GetDpiMetricsForCurrentThread.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

_QWORD *__fastcall MNAllocMenuState(_QWORD **a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *result; // rax
  __int64 UserSessionState; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 DpiMetricsForCurrentThread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax

  v3 = PtiCurrent((__int64)a1, a2);
  if ( (*(_DWORD *)(W32GetUserSessionState(v5, v4) + 67056) & 0x2000000) != 0 )
  {
    v8 = (_QWORD *)Win32AllocPoolWithQuotaZInit(144LL, 1953330005LL);
    if ( !v8 )
      return 0LL;
    v8[17] = 0LL;
    if ( !(unsigned int)MNSetupAnimationDC(v8) )
    {
      Win32FreePool(v8);
      return 0LL;
    }
    GreSetDCOwnerEx(v8[17], 0LL, 0LL, 0LL);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    v13 = W32GetUserSessionState(v12, v11);
    v8 = (_QWORD *)(UserSessionState + 65928);
    *(_DWORD *)(v13 + 67056) |= 0x2000000u;
    GreSetDCOwnerEx(*(_QWORD *)(UserSessionState + 66064), 2147483650LL, 0LL, 1LL);
    DpiMetricsForCurrentThread = GetDpiMetricsForCurrentThread(v15, v14);
    GreSelectFont(*(HDC *)(UserSessionState + 66064), *(HFONT *)(DpiMetricsForCurrentThread + 8));
  }
  memset_0(v8, 0, 0x88uLL);
  v20 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 18944);
  if ( *((_QWORD *)v3 + 59) == v20 )
  {
    *((_DWORD *)v8 + 2) |= 0x2000000u;
    v21 = W32GetUserSessionState(v20, v19);
    ++*(_DWORD *)(v21 + 18904);
  }
  *v8 = **a1;
  v8[4] = v3;
  *(_DWORD *)**a1 |= 0x20000000u;
  v8[6] = *((_QWORD *)v3 + 81);
  result = v8;
  *((_QWORD *)v3 + 81) = v8;
  return result;
}
