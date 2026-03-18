/*
 * XREFs of ?GetWindowCompositionVisualBitmap@@YAJPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C0015318
 * Callers:
 *     NtUserGetDCompositionHwndBitmap @ 0x1C0015220 (NtUserGetDCompositionHwndBitmap.c)
 * Callees:
 *     ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x1C0015414 (-_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall GetWindowCompositionVisualBitmap(HWND a1, struct CompositionObject **a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagWND *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int WindowCompositionVisualBitmap; // ebx
  __int64 v13; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v4;
  if ( v4 && (v6 = *(_QWORD *)(v4 + 40), v5 = (*(_WORD *)(v6 + 42) & 0x2FFFu) - 669, (v5 & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v4;
    HMLockObject(v4);
    if ( *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*((_QWORD *)v9 + 2) + 424LL) )
    {
      WindowCompositionVisualBitmap = _GetWindowCompositionVisualBitmap(v9, a2);
    }
    else
    {
      WindowCompositionVisualBitmap = -1073741811;
      UserSetLastError(5LL);
    }
    ThreadUnlock1(v11, v10, v13);
  }
  else
  {
    WindowCompositionVisualBitmap = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return WindowCompositionVisualBitmap;
}
