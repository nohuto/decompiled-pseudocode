/*
 * XREFs of ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x140076860
 * Callers:
 *     ?Cursor_DaemonTimeRateChanged@@YAX_N@Z @ 0x1401C2110 (-Cursor_DaemonTimeRateChanged@@YAX_N@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     zzzUpdateCursorImage @ 0x140075AF0 (zzzUpdateCursorImage.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x140076A4C (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     SetDeepDelayableVisRITTimer @ 0x140076B9C (SetDeepDelayableVisRITTimer.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

void __fastcall zzzAnimateCursor(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 UserSessionState; // rax
  struct tagCURSOR *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagCURSOR *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  signed int v13; // ebp
  int v14; // ebx
  int v15; // ebx
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned int v21; // esi
  int v22; // r10d
  int v23; // r8d
  int v24; // eax
  struct tagTHREADINFO *v25; // rax
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = FixupCursorForMonitor(*(struct tagCURSOR **)(UserSessionState + 36376));
  v8 = v5;
  if ( v5 && (v7 = *((unsigned int *)v5 + 20), (v7 & 8) != 0) && *((_QWORD *)v5 + 14) )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v7, v6) + 36392) )
    {
      v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v12 = W32GetUserSessionState(v10, v9);
      v10 = *((int *)v8 + 30);
      v13 = 0;
      v9 = 100 * *(_DWORD *)(*((_QWORD *)v8 + 14) + 4 * v10) / 6u;
      v14 = v11 - v9 - *(_DWORD *)(v12 + 36392);
      if ( v14 >= 0 )
        v13 = v14;
    }
    else
    {
      v13 = 0;
    }
    v15 = 0;
    if ( *((_DWORD *)v8 + 30) + 1 < *((_DWORD *)v8 + 23) )
      v15 = *((_DWORD *)v8 + 30) + 1;
    *((_DWORD *)v8 + 30) = v15;
    v16 = PtiCurrent(v10, v9);
    Win32HM_LockIntoThread<0>(v16, v8, BugCheckParameter3);
    if ( a3 )
      zzzUpdateCursorImage(v18, v17);
    v19 = *((_QWORD *)v8 + 14);
    v20 = (unsigned int)(100 * *(_DWORD *)(v19 + 4LL * v15));
    LODWORD(v17) = (2863311531u * (unsigned __int64)(unsigned int)v20) >> 32;
    v21 = (unsigned int)v20 / 6;
    if ( (int)((unsigned int)v20 / 6) <= v13 )
    {
      v22 = *((_DWORD *)v8 + 23);
      v23 = *((_DWORD *)v8 + 30);
      do
      {
        v24 = v23 + 1;
        v13 -= v21;
        v23 = 0;
        if ( v24 < v22 )
          v23 = v24;
        *((_DWORD *)v8 + 30) = v23;
        v20 = (unsigned int)(100 * *(_DWORD *)(v19 + 4LL * v23));
        LODWORD(v17) = (2863311531u * (unsigned __int64)(unsigned int)v20) >> 32;
        v21 = (unsigned int)v20 / 6;
      }
      while ( (int)((unsigned int)v20 / 6) <= v13 );
    }
    v25 = PtiCurrent(v20, v17);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v25, BugCheckParameter3);
    v26 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v13;
    *(_DWORD *)(W32GetUserSessionState(v28, v27) + 36392) = v26;
    v31 = W32GetUserSessionState(v30, v29);
    v32 = SetDeepDelayableVisRITTimer(*(_QWORD *)(v31 + 36328), v21 - v13);
    *(_QWORD *)(W32GetUserSessionState(v34, v33) + 36328) = v32;
  }
  else
  {
    *(_DWORD *)(W32GetUserSessionState(v7, v6) + 36392) = 0;
  }
}
