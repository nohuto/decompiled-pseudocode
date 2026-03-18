/*
 * XREFs of NtUserGetDC @ 0x1C004D400
 * Callers:
 *     <none>
 * Callees:
 *     _GetDC @ 0x1C000EB00 (_GetDC.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F2F0 (GreCreateRectRgnIndirect.c)
 *     ValidateHwnd @ 0x1C0045EC0 (ValidateHwnd.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     GreSelectVisRgn @ 0x1C004EBC0 (GreSelectVisRgn.c)
 *     GreLockVisRgn @ 0x1C0051080 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0051170 (GreUnlockVisRgn.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 */

HDC __fastcall NtUserGetDC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  BOOL v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  HDC DC; // rdi
  _QWORD *v18; // rcx

  v5 = 1;
  if ( (unsigned int)IsEtwUserCritEnabled(a1, a2, a3, a4) )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v11 = SGDGetUserSessionState(v7, v6, v8, v9);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v11 + 8));
  EtwTraceAcquiredSharedUserCrit();
  if ( a1 )
  {
    v14 = ValidateHwnd(a1);
    if ( !v14 )
    {
      DC = 0LL;
      goto LABEL_16;
    }
  }
  else
  {
    v14 = 0LL;
  }
  if ( (*((_DWORD *)PtiCurrentShared() + 122) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrentShared() + 53) + 768LL) + 24LL) & 1) != 0
    && !v14 )
  {
    v18 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 24LL);
    if ( v18 )
      v18 = (_QWORD *)*v18;
    v5 = ValidateHwnd((__int64)v18) != 0;
  }
  DC = (HDC)GetDC(v14);
  if ( !v5 )
  {
    GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
    GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
    GreSelectVisRgn(DC);
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v13, v12, v15, v16);
  return DC;
}
