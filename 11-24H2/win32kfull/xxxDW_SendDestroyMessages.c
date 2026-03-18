/*
 * XREFs of xxxDW_SendDestroyMessages @ 0x14008A4B0
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x14008A4B0 (xxxDW_SendDestroyMessages.c)
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024FA00 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxDW_SendDestroyMessages @ 0x14008A4B0 (xxxDW_SendDestroyMessages.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x14008A638 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14026A570 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall xxxDW_SendDestroyMessages(const struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rbx
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // rax
  __int64 v19; // rax
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR v22[3]; // [rsp+30h] [rbp-18h] BYREF

  xxxMoveFocusAway(a1);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  if ( CurrentProcessWin32Process )
  {
    v4 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  v5 = *(_QWORD *)(CurrentProcessWin32Process + 656);
  if ( v5 && a1 == *(const struct tagWND **)(v5 + 112) )
  {
    xxxDisownClipboard(a1);
  }
  else if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 63560) )
  {
    v7 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 63560);
    if ( a1 == *(const struct tagWND **)(v7 + 112) )
    {
      UserSessionState = W32GetUserSessionState(v7, v6);
      HMAssignmentUnlock(*(_QWORD *)(UserSessionState + 63560) + 112LL);
    }
  }
  PtiCurrent(v7, v6);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 232LL) & 0x20) != 0 )
  {
    xxxSendMessage(a1, 0x272u);
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x20u;
  }
  xxxSendMessage(a1, 2u);
  v10 = *((_QWORD *)a1 + 14);
  do
  {
    if ( !v10 )
      break;
    v11 = *(_QWORD *)(v10 + 88);
    v12 = PtiCurrent(v9, v8);
    Win32HM_LockIntoThread<1>((__int64)v12, v11, (__int64 *)BugCheckParameter3);
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v22, v10);
    xxxDW_SendDestroyMessages(v10);
    v15 = PtiCurrent(v14, v13);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v15, v22);
    v10 = v11;
    v18 = PtiCurrent(v17, v16);
    v19 = Win32HM_UnlockFromThread<1>((ULONG_PTR)v18, BugCheckParameter3);
    BugCheckParameter3[1] = 0LL;
    BugCheckParameter3[0] = -1LL;
  }
  while ( v19 );
  xxxMoveFocusAway(a1);
}
