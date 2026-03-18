/*
 * XREFs of ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14018DF04
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14004083C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _PostMessage @ 0x140066460 (_PostMessage.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     DelQEntry @ 0x14008E870 (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ??0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z @ 0x140147740 (--0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1401532E0 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x140154180 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     FindShellFrameThreadFromAssociation @ 0x14018E2D4 (FindShellFrameThreadFromAssociation.c)
 *     DisassociateShellFrameAppThreads @ 0x14018E304 (DisassociateShellFrameAppThreads.c)
 *     zzzAttachThreadInput @ 0x1401E1E5C (zzzAttachThreadInput.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x14023D6F8 (zzzInputFocusReceivedWindowEvent.c)
 */

void __fastcall TryAttachShellFrame(struct tagTHREADINFO *a1)
{
  struct tagTHREADINFO *v1; // rdi
  __int64 ShellFrameThreadFromAssociation; // rax
  __int64 v3; // rsi
  __int64 v4; // rax
  _QWORD *v5; // rbx
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r13
  __int64 v9; // rcx
  __int64 **v10; // r14
  __int64 *v11; // rax
  unsigned int *v12; // rdx
  __int64 v13; // rdx
  __int64 *v14; // rax
  __int64 *v15; // r12
  bool v16; // r15
  char v17; // bp
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  struct tagTHREADINFO *v21; // r15
  char v22; // bp
  bool v23; // r14
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // rbx
  struct tagTHREADINFO *v28; // rax
  int v29; // ebx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter2[11]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v40; // [rsp+E0h] [rbp+18h]

  v1 = a1;
  if ( *(_DWORD *)(*((_QWORD *)a1 + 59) + 40LL) < 0x14u )
  {
    ShellFrameThreadFromAssociation = FindShellFrameThreadFromAssociation();
    v40 = ShellFrameThreadFromAssociation;
    v3 = ShellFrameThreadFromAssociation;
    if ( ShellFrameThreadFromAssociation )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(ShellFrameThreadFromAssociation + 528), 0, 0) & 1) == 0 )
      {
        v4 = *(_QWORD *)(ShellFrameThreadFromAssociation + 712);
        if ( !v4 || (*(_DWORD *)(v4 + 200) & 0x8000) == 0 )
        {
          v5 = (_QWORD *)*((_QWORD *)v1 + 59);
          v6 = *((_QWORD *)v1 + 170);
          v7 = v6 & 0xFFFFFFFFFFF7FFFFuLL;
          v8 = v6 >> 20;
          *((_QWORD *)v1 + 170) = v7 | 0x100000;
          DisassociateShellFrameAppThreads(v1);
          v10 = (__int64 **)(v5 + 3);
          v11 = (__int64 *)v5[3];
          v12 = &WPP_RECORDER_INITIALIZED;
          if ( v11 )
          {
            do
            {
              if ( !(unsigned int)IsMiPMouseMessage(*((unsigned int *)v11 + 6)) )
                break;
              v14 = *v10;
              if ( *v10 == (__int64 *)v5[10] )
                v5[10] = 0LL;
              v15 = (__int64 *)v5[11];
              if ( v14 == v15 )
              {
                v16 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                   && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
                   && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                  || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                {
                  v17 = 0;
                }
                if ( v16 || v17 )
                {
                  UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
                  LOBYTE(v19) = v17;
                  LOBYTE(v20) = v16;
                  WPP_RECORDER_AND_TRACE_SF_qq(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v20,
                    v19,
                    *(_QWORD *)(UserSessionState + 69416),
                    5,
                    18,
                    18,
                    (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
                    (char)v5,
                    (char)v15);
                }
                v5[11] = 0LL;
              }
              DelQEntry((__int64)(v5 + 3), *v10, 1);
              v11 = *v10;
            }
            while ( *v10 );
            v1 = a1;
            v12 = &WPP_RECORDER_INITIALIZED;
            v3 = v40;
          }
          v21 = (struct tagTHREADINFO *)v5[9];
          if ( v21 == v1 )
          {
            v9 = *(_QWORD *)&WPP_GLOBAL_Control;
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
              || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
            {
              v22 = 0;
            }
            v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
              LOBYTE(v25) = v23;
              LOBYTE(v26) = v22;
              WPP_RECORDER_AND_TRACE_SF_qqq(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v26,
                v25,
                *(_QWORD *)(v24 + 69416),
                4,
                18,
                19,
                (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
                (char)v5,
                (char)v1,
                (char)v21);
            }
            v5[9] = 0LL;
          }
          v27 = v5[15];
          v28 = PtiCurrent(v9, (__int64)v12);
          Win32HM_LockIntoThread<1>((__int64)v28, v27, (__int64 *)BugCheckParameter3);
          Win32RawLockedW32Thread::Win32RawLockedW32Thread(
            (Win32RawLockedW32Thread *)BugCheckParameter2,
            (struct _W32THREAD *)v3);
          v29 = zzzAttachThreadInput(v1, v3, 32769LL);
          v30 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(*((_QWORD *)v1 + 59) + 468LL) = v30;
          v31 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v30);
          tagQ::LockFocusWnd(*((_QWORD *)v1 + 59), v31, 0LL);
          v33 = *(_QWORD *)(v3 + 1584);
          if ( v33 )
            PostMessage(v33, 840, 2, v29);
          v34 = *(_QWORD *)(W32GetUserSessionState(v33, v32) + 18944);
          if ( v34 == *((_QWORD *)v1 + 59) )
          {
            v34 = *(_QWORD *)(W32GetUserSessionState(v35, v34) + 18944);
            if ( *(_QWORD *)(v34 + 120) )
              zzzInputFocusReceivedWindowEvent(2LL);
          }
          LOBYTE(v34) = 1;
          *((_QWORD *)v1 + 170) = ((__int64)(int)v8 << 20) ^ (*((_QWORD *)v1 + 170) ^ ((__int64)(int)v8 << 20)) & 0xFFFFFFFFFFEFFFFFuLL;
          Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2, v34);
          Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v36);
        }
      }
    }
  }
}
