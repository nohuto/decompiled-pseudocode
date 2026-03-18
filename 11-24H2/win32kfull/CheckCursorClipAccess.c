/*
 * XREFs of CheckCursorClipAccess @ 0x1400932B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x14009347C (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     CheckWinstaAttributeAccess @ 0x140093660 (CheckWinstaAttributeAccess.c)
 *     ?IsGpqForegroundAccessibleForPti@@YAHPEAUtagTHREADINFO@@H@Z @ 0x14009425C (-IsGpqForegroundAccessibleForPti@@YAHPEAUtagTHREADINFO@@H@Z.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1400945E8 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_BOOL8 __fastcall CheckCursorClipAccess(int a1, int a2)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rax
  struct tagRECT v15; // [rsp+20h] [rbp-28h] BYREF

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v6 = CurrentLogicalCursorThread;
  if ( a1 )
  {
    v13 = a1 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
        return 1LL;
      if ( !(unsigned int)IsDesktopApp(*((_QWORD *)CurrentLogicalCursorThread + 58)) )
      {
        if ( *(_DWORD *)(*((_QWORD *)v6 + 58) + 876LL) )
        {
          if ( (unsigned int)InForegroundQueue(v6, 0) )
          {
            v14 = *(_QWORD *)(*((_QWORD *)v6 + 58) + 832LL);
            if ( v14 )
            {
              if ( (*(_DWORD *)(v14 + 100) & 1) != 0 )
                return 1LL;
            }
          }
        }
      }
    }
    else
    {
      if ( RtlAreAllAccessesGranted(*(_DWORD *)(*((_QWORD *)CurrentLogicalCursorThread + 58) + 672LL), 2u) )
        return 1LL;
      UserSetLastError(5);
    }
    return 0LL;
  }
  v8 = *(_QWORD *)(W32GetUserGdiSessionState(v5) + 40);
  if ( **((_QWORD **)v6 + 58) != v8
    && !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    && (!(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)v6 + 58))
     || !(unsigned int)IsGpqForegroundAccessibleForPti(v6, 1)) )
  {
    return 0LL;
  }
  UserSessionState = W32GetUserSessionState(v8, v7);
  CCursorClip::GetClip(*(CCursorClip **)(UserSessionState + 36296), &v15);
  return *((_QWORD *)v6 + 59) == *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18944)
      || a2
      || v15.left < v15.right && v15.top < v15.bottom;
}
