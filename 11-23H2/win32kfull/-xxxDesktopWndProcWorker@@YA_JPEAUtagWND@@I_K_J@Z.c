/*
 * XREFs of ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00DF38C
 * Callers:
 *     xxxDesktopWndProc @ 0x1C00DF320 (xxxDesktopWndProc.c)
 * Callees:
 *     xxxSetThreadDesktop @ 0x1C002B6D4 (xxxSetThreadDesktop.c)
 *     xxxSendNotifyMessage @ 0x1C0033170 (xxxSendNotifyMessage.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxRedrawWindow @ 0x1C004E1B4 (xxxRedrawWindow.c)
 *     xxxBeginPaint @ 0x1C00606C0 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x1C0061760 (xxxEndPaint.c)
 *     SetRITTimer @ 0x1C0086450 (SetRITTimer.c)
 *     GreRealizeDefaultPalette @ 0x1C0093BC4 (GreRealizeDefaultPalette.c)
 *     xxxInternalPaintDesktop @ 0x1C0095728 (xxxInternalPaintDesktop.c)
 *     GreGetSystemPaletteUse @ 0x1C0097B90 (GreGetSystemPaletteUse.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxSetWindowLong @ 0x1C00A76E4 (xxxSetWindowLong.c)
 *     xxxDWP_UpdateUIState @ 0x1C00AD604 (xxxDWP_UpdateUIState.c)
 *     SetDesktopPattern @ 0x1C00D6380 (SetDesktopPattern.c)
 *     xxxValidateClassAndSize @ 0x1C00DF5B4 (xxxValidateClassAndSize.c)
 *     xxxDefWindowProc @ 0x1C00DF700 (xxxDefWindowProc.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     xxxRealizeDesktop @ 0x1C01BE40C (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxDesktopWndProcWorker(struct tagWND **a1, unsigned int a2, HDC a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // r8
  struct tagWND *i; // rbx
  __int64 v15; // rbx
  unsigned int CurrentProcessId; // eax
  unsigned int CurrentThreadId; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  char v23[8]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v24; // [rsp+48h] [rbp-61h] BYREF
  __int128 v25; // [rsp+50h] [rbp-59h] BYREF
  __int64 v26; // [rsp+60h] [rbp-49h]
  __int64 v27[10]; // [rsp+70h] [rbp-39h] BYREF

  memset_0(v27, 0, 0x48uLL);
  v24 = 0LL;
  if ( !(unsigned int)xxxValidateClassAndSize((_DWORD)a1, a2, (_DWORD)a3, a4, 669, 1, (__int64)&v24) )
    return v24;
  if ( !a1[13] )
  {
    if ( a2 != 128 )
      return xxxDefWindowProc((struct tagWND *)a1);
    return 0LL;
  }
  if ( a2 <= 0x80 )
  {
    switch ( a2 )
    {
      case 0x80u:
        return 0LL;
      case 1u:
        v25 = 0LL;
        v26 = 0LL;
        v15 = CreateProfileUserName(&v25);
        SetDesktopPattern(v15, 0LL);
        FreeProfileUserName(v15, &v25);
        xxxSendNotifyMessage((struct tagWND *)a1, 0x15u, 0LL, 0LL, 1);
        xxxRealizeDesktop(a1);
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        xxxSetWindowLong((struct tagWND *)a1, 0, CurrentProcessId, 0LL, 0);
        CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
        xxxSetWindowLong((struct tagWND *)a1, 4, CurrentThreadId, 0LL, 0);
        return 0LL;
      case 0xFu:
        xxxBeginPaint((struct tagWND *)a1, v27);
        xxxEndPaint((__int64 *)a1, v27);
        return 0LL;
      case 0x10u:
        return 0LL;
    }
    if ( a2 != 20 )
    {
      switch ( a2 )
      {
        case 0x15u:
          xxxRedrawWindow((struct tagWND *)a1, 0LL, 0LL, 133);
          break;
        case 0x3Au:
          LODWORD(v24) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1297LL);
          break;
        case 0x46u:
          if ( (*(_DWORD *)(a4 + 32) & 4) == 0 && !*(_QWORD *)(a4 + 8) )
          {
            xxxSetThreadDesktop(0LL, grpdeskRitInput, v9);
            if ( (unsigned int)GreGetSystemPaletteUse(*(HDC *)(gpDispInfo + 56LL)) != 1 )
              GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 56LL), v11);
            if ( (*(_DWORD *)(grpdeskRitInput + 48LL) & 1) != 0 )
            {
              xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x311u, (unsigned __int64)*a1, 0LL, 1);
              *(_DWORD *)(grpdeskRitInput + 48LL) &= ~1u;
            }
          }
          break;
        case 0x51u:
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v23);
          for ( i = a1[14]; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
            xxxSendNotifyMessage(i, 0x51u, (unsigned __int64)a3, (struct _LARGE_STRING *)a4, 1);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v23, v12, v13);
          break;
        default:
          return xxxDefWindowProc((struct tagWND *)a1);
      }
      return 0LL;
    }
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
      xxxInternalPaintDesktop((__int64)a1, a3, 1);
    return 1LL;
  }
  else
  {
    if ( a2 == 161 )
      return 0LL;
    if ( a2 == 274 )
    {
      if ( a3 == (HDC)61760 )
        return xxxDefWindowProc((struct tagWND *)a1);
      return 0LL;
    }
    if ( a2 != 296 )
    {
      if ( a2 == 515 )
        return xxxDefWindowProc((struct tagWND *)a1);
      if ( a2 == 783 )
        goto LABEL_48;
      if ( a2 != 785 )
      {
        if ( a2 != 1025 )
          return xxxDefWindowProc((struct tagWND *)a1);
        if ( !gProtocolType
          && *(_DWORD *)(SGDGetUserSessionState(v8) + 15936)
          && !*(_QWORD *)(SGDGetUserSessionState(v18) + 15944) )
        {
          v20 = SGDGetUserSessionState(v19);
          v21 = SetRITTimer(*(_QWORD *)(v20 + 15944), 20, (int)HideMouseTrails, 0);
          *(_QWORD *)(SGDGetUserSessionState(v22) + 15944) = v21;
        }
        return 0LL;
      }
      if ( *a1 != (struct tagWND *)a3 )
LABEL_48:
        xxxRealizeDesktop(a1);
      return 0LL;
    }
    return xxxDWP_UpdateUIState((__int64)a1, (unsigned __int64)a3, a4);
  }
}
