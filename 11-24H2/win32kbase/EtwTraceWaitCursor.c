/*
 * XREFs of EtwTraceWaitCursor @ 0x14009B930
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x14009BB90 (-EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x14009C6C4 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceWaitCursor(struct tagCURSOR *a1, struct tagCURSOR *a2)
{
  _UNKNOWN **v2; // rax
  unsigned int WaitCursorType; // esi
  unsigned int v5; // ebp
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned int ThreadId; // ebx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rcx
  unsigned __int64 v18; // r14
  unsigned int v19; // r14d
  char CurrentWin32kSessionId; // di
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rcx
  __int64 UserSessionState; // rax
  int v25; // ecx
  int v26; // r8d
  __int64 v27; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  v2 = &retaddr;
  if ( ((unsigned __int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x8000000000040000uLL) != 0 )
  {
    LOBYTE(v2) = byte_14029ADC8 - 1;
    if ( (unsigned __int8)(byte_14029ADC8 - 1) > 2u && (qword_14029ADB0 & 0x8000000000040000uLL) != 0 )
    {
      LOBYTE(v2) = 0;
      if ( (qword_14029ADB8 & 0x8000000000040000uLL) == qword_14029ADB8 )
      {
        WaitCursorType = EtwpGetWaitCursorType(a2);
        v5 = EtwpGetWaitCursorType(a1);
        if ( WaitCursorType == *(_DWORD *)(W32GetUserSessionState(v6) + 36408) )
        {
          if ( WaitCursorType )
          {
            if ( WaitCursorType != v5 )
            {
              v18 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
              v19 = v18 - *(_DWORD *)(W32GetUserSessionState(v7) + 36412);
              if ( v19 >= 0xC8 && (Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
              {
                CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
                v22 = *(_DWORD *)(W32GetUserSessionState(v21) + 36420);
                UserSessionState = W32GetUserSessionState(v23);
                McTemplateK0qqqqq_EtwWriteTransfer(
                  v25,
                  (unsigned int)&WaitCursorEvent,
                  v26,
                  *(_DWORD *)(UserSessionState + 36416),
                  v22,
                  CurrentWin32kSessionId,
                  WaitCursorType,
                  v19);
              }
            }
          }
        }
        *(_DWORD *)(W32GetUserSessionState(v7) + 36408) = v5;
        if ( v5 )
        {
          v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(W32GetUserSessionState(v8) + 36412) = v9;
        }
        if ( *(_QWORD *)(W32GetUserSessionState(v8) + 19232)
          && ((v11 = *(_QWORD *)(W32GetUserSessionState(v10) + 19232), (v12 = *(_QWORD *)(v11 + 112)) != 0)
            ? (v13 = *(_QWORD *)(v12 + 16))
            : (v13 = *(_QWORD *)(v11 + 96)),
              v13) )
        {
          ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v13);
          *(_DWORD *)(W32GetUserSessionState(v15) + 36416) = ThreadId;
          v16 = *(_DWORD *)(*(_QWORD *)(v13 + 464) + 56LL);
          v2 = (_UNKNOWN **)W32GetUserSessionState(v17);
          *((_DWORD *)v2 + 9105) = v16;
        }
        else
        {
          *(_DWORD *)(W32GetUserSessionState(v10) + 36416) = 0;
          v2 = (_UNKNOWN **)W32GetUserSessionState(v27);
          *((_DWORD *)v2 + 9105) = 0;
        }
      }
    }
  }
  return (char)v2;
}
