/*
 * XREFs of NtUserMoveWindow @ 0x1C0084360
 * Callers:
 *     <none>
 * Callees:
 *     xxxMoveWindow @ 0x1C00844E0 (xxxMoveWindow.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserMoveWindow(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edi
  struct tagWND *v16; // r13
  int v17; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int128 v23; // [rsp+30h] [rbp-30h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h]
  int v25; // [rsp+48h] [rbp-18h] BYREF
  int v26; // [rsp+4Ch] [rbp-14h]
  int v27; // [rsp+50h] [rbp-10h]
  int v28; // [rsp+54h] [rbp-Ch]

  v24 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 0LL);
  v10 = ValidateHwnd(a1);
  v15 = 0;
  v16 = (struct tagWND *)v10;
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 40);
    v11 = (*(_WORD *)(v12 + 42) & 0x2FFFu) - 669;
    if ( (v11 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v23;
      *((_QWORD *)&v23 + 1) = v10;
      HMLockObject(v10);
      if ( a2 > 0x7FFF )
      {
        a2 = 0x7FFF;
      }
      else if ( a2 < -32768 )
      {
        a2 = -32768;
      }
      if ( a3 > 0x7FFF )
      {
        a3 = 0x7FFF;
      }
      else if ( a3 < -32768 )
      {
        a3 = -32768;
      }
      if ( a4 < 0 )
      {
        a4 = 0;
      }
      else if ( a4 > 0x7FFF )
      {
        a4 = 0x7FFF;
      }
      v17 = a5;
      if ( a5 < 0 )
      {
        v17 = 0;
      }
      else if ( a5 > 0x7FFF )
      {
        v17 = 0x7FFF;
      }
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(4294934528LL);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(v16, CurrentThreadDpiAwarenessContext) )
      {
        v25 = a2;
        v27 = a4 + a2;
        v26 = a3;
        v28 = a3 + v17;
        TransformRectBetweenCoordinateSpaces(&v25, &v25, v16, 0LL);
        v17 = v28 - v26;
      }
      v15 = xxxMoveWindow(v16, v17, a6);
      ThreadUnlock1(v20, v19, v21);
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v15;
}
