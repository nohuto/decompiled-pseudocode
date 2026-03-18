/*
 * XREFs of ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x140238994
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x14008CEB0 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     GetRect @ 0x1400355F0 (GetRect.c)
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     ScaleDPIRect @ 0x140098C18 (ScaleDPIRect.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1401E4344 (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1401FE654 (-xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x140238CF0 (xxxAppAdjustDpiCandidateRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddddd @ 0x140281C18 (WPP_RECORDER_AND_TRACE_SF_qddddddd.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

bool __fastcall xxxSendDpiChangedMsgs(struct tagWND *a1, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  __int64 v5; // r9
  int v8; // r15d
  int v9; // esi
  int v10; // eax
  __int64 v11; // r9
  struct tagRECT *v12; // r10
  __int64 v13; // rbx
  char v14; // al
  char v15; // r12
  __int64 v16; // rsi
  __int16 v17; // di
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  __int64 *i; // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 *j; // rbx
  char v26; // [rsp+80h] [rbp-19h]
  char v27; // [rsp+81h] [rbp-18h]
  char v28; // [rsp+82h] [rbp-17h]
  struct tagRECT v29; // [rsp+98h] [rbp-1h] BYREF

  v5 = *((_QWORD *)a1 + 5);
  v8 = 0;
  v9 = 0;
  if ( (*(_BYTE *)(v5 + 288) & 0xF) == 3 )
  {
    v26 = 1;
  }
  else
  {
    v26 = 0;
    if ( *(_WORD *)(v5 + 286) )
      return 0;
    v10 = *((_DWORD *)a1 + 95);
    if ( (v10 & 0x40000) == 0 )
      return 0;
    *((_DWORD *)a1 + 95) = v10 & 0xFFFBFFFF;
  }
  v29 = 0LL;
  if ( IsTopLevelWindow((__int64)a1) )
  {
    v27 = 1;
    if ( (*(_BYTE *)(v11 + 31) & 1) != 0 )
    {
      GetRect((__int64)a1, (__int64)&v29, 66);
    }
    else if ( v12 )
    {
      v29 = *v12;
    }
    else
    {
      GetRect((__int64)a1, (__int64)&v29, 66);
      if ( a4 )
      {
        if ( a4 != *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL) )
        {
          v13 = *(_QWORD *)&v29.left;
          if ( !(unsigned int)xxxAppAdjustDpiCandidateRect(a1) )
            ScaleDPIRect(&v29, (__m128i *)&v29, *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL), a4, v13, *(__int64 *)&v29.left);
        }
      }
    }
  }
  else
  {
    v27 = 0;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v14 = 0;
  }
  v28 = v14;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v15 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v15 = 0;
  }
  if ( v14 || v15 )
  {
    v16 = *(_QWORD *)a1;
    v17 = *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL);
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v19) = v15;
    v20 = v29.bottom - v29.top;
    LOBYTE(v20) = v28;
    WPP_RECORDER_AND_TRACE_SF_qddddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v20,
      v19,
      *(_QWORD *)(UserSessionState + 69416),
      5,
      4,
      20,
      (__int64)&WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids,
      v16,
      v17,
      v29.left,
      v29.top,
      v29.right,
      v29.bottom,
      LOBYTE(v29.right) - LOBYTE(v29.left),
      LOBYTE(v29.bottom) - LOBYTE(v29.top));
    v9 = 0;
  }
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 || v26 )
  {
    if ( (*((_DWORD *)a1 + 95) & 0x100000) != 0 || v26 )
    {
      if ( a3 || (a3 = BuildHwndList(a1, 1LL, 0LL, 1), v9 = 1, a3) )
      {
        for ( i = (__int64 *)*((_QWORD *)a3 + 1);
              --i > (__int64 *)a3 + 4;
              v8 |= xxxSendDpiChangedMessageToChildWindow(*i, 1LL) )
        {
          ;
        }
        if ( v27 )
        {
          v22 = xxxSendDpiChangedMessageToTopLevelWindow(a1, &v29);
        }
        else
        {
          v8 |= xxxSendDpiChangedMessageToChildWindow(*(_QWORD *)a1, 1LL);
          v22 = xxxSendDpiChangedMessageToChildWindow(*(_QWORD *)a1, 0LL);
        }
        v8 |= v22;
        for ( j = (__int64 *)((char *)a3 + 40); (unsigned __int64)j < *((_QWORD *)a3 + 1); ++j )
          v8 |= xxxSendDpiChangedMessageToChildWindow(*j, 0LL);
        if ( v9 )
          FreeHwndList(a3, v23);
      }
    }
    else if ( v27 )
    {
      v8 = xxxSendDpiChangedMessageToTopLevelWindow(a1, &v29);
    }
  }
  return v8 != 0;
}
