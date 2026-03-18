/*
 * XREFs of TryDetachShellFrame @ 0x140237D24
 * Callers:
 *     xxxMNLoop @ 0x14009B5E0 (xxxMNLoop.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14004083C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140066508 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z @ 0x140147740 (--0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x140154180 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     IsDebuggerAttached @ 0x1401566A4 (IsDebuggerAttached.c)
 *     FindShellFrameThreadFromAssociation @ 0x14018E2D4 (FindShellFrameThreadFromAssociation.c)
 *     zzzAttachThreadInput @ 0x1401E1E5C (zzzAttachThreadInput.c)
 *     AssociateShellFrameAppThreads @ 0x140269F74 (AssociateShellFrameAppThreads.c)
 */

void __fastcall TryDetachShellFrame(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rcx
  struct tagWND *v16; // rcx
  __int64 v17; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2[4]; // [rsp+40h] [rbp-28h] BYREF

  if ( (*(_DWORD *)(a2 + 1360) & 0x100000LL) == 0
    && !FindShellFrameThreadFromAssociation((struct tagTHREADINFO *)a2)
    && !(unsigned int)IsDebuggerAttached(*(__int64 **)(a1 + 464))
    && !(unsigned int)IsDebuggerAttached(*(__int64 **)(a2 + 464))
    && (a4
     || (int)(((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
            - *(_DWORD *)(*(_QWORD *)(a1 + 472) + 468LL)) >= (a3 != 0 ? 5000 : 500))
    && (unsigned int)AssociateShellFrameAppThreads(a1, a2) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 472) + 120LL);
    v11 = PtiCurrent(v9, v8);
    Win32HM_LockIntoThread<1>((__int64)v11, v10, (__int64 *)BugCheckParameter3);
    Win32RawLockedW32Thread::Win32RawLockedW32Thread(
      (Win32RawLockedW32Thread *)BugCheckParameter2,
      (struct _W32THREAD *)a2);
    LODWORD(v10) = zzzAttachThreadInput(a1, a2, 0x4000);
    v14 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v12);
    if ( (int)v10 >= 0 )
    {
      *(_QWORD *)(a2 + 1360) |= 0x80000uLL;
      tagQ::LockFocusWnd(*(_QWORD *)(a1 + 472), *(_QWORD *)(*(_QWORD *)(a1 + 472) + 128LL), 0LL);
      if ( v14 )
      {
        v15 = *(_QWORD *)(a2 + 472);
        if ( *(_QWORD *)(*(_QWORD *)(v14 + 16) + 472LL) == v15 )
          tagQ::LockFocusWnd(v15, v14, 0LL);
      }
      v16 = *(struct tagWND **)(a1 + 1584);
      if ( v16 )
        _PostTransformableMessageExtended(v16, 0x348u, 1uLL, 0LL, 0LL, 1);
    }
    LOBYTE(v13) = 1;
    Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2, v13);
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v17);
  }
}
