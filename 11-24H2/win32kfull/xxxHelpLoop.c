/*
 * XREFs of xxxHelpLoop @ 0x1402E98E4
 * Callers:
 *     xxxSysCommand @ 0x1402B5464 (xxxSysCommand.c)
 * Callees:
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14003C7B8 (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxTranslateMessage @ 0x14006742C (xxxTranslateMessage.c)
 *     xxxRedrawTitle @ 0x1400677A8 (xxxRedrawTitle.c)
 *     PtInRect @ 0x14006E460 (PtInRect.c)
 *     GetWindowBorders @ 0x14006E4E8 (GetWindowBorders.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400759F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxReleaseCapture @ 0x140089E6C (xxxReleaseCapture.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x140089FBC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxInternalEnumWindow @ 0x14008AD6C (xxxInternalEnumWindow.c)
 *     xxxInternalGetMessage @ 0x140107C10 (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1401095B8 (xxxDispatchMessage.c)
 *     xxxWaitMessageEx @ 0x14016DD60 (xxxWaitMessageEx.c)
 *     _GetParent @ 0x1401789D8 (_GetParent.c)
 *     xxxSendHelpMessage @ 0x14021E310 (xxxSendHelpMessage.c)
 *     GetContextHelpId @ 0x14021F008 (GetContextHelpId.c)
 *     ?IsHelpParent@@YAHPEAUtagWND@@@Z @ 0x1402F274C (-IsHelpParent@@YAHPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxHelpLoop(struct tagWND *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int WindowBorders; // eax
  _DWORD *v11; // r8
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  struct tagCURSOR *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  struct tagWND *v22; // rsi
  __int64 v23; // rdx
  struct tagWND *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  char v32; // cl
  int v33; // edi
  __int64 v34; // rdx
  struct tagTHREADINFO **Parent; // rsi
  __int64 v36; // rdx
  unsigned int ContextHelpId; // eax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // [rsp+28h] [rbp-49h]
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-39h] BYREF
  int v45; // [rsp+40h] [rbp-31h]
  int v46; // [rsp+44h] [rbp-2Dh]
  __int128 v47; // [rsp+48h] [rbp-29h] BYREF
  __int128 v48; // [rsp+58h] [rbp-19h]
  __int128 v49; // [rsp+68h] [rbp-9h]
  __int128 v50; // [rsp+78h] [rbp+7h] BYREF
  __int64 v51; // [rsp+88h] [rbp+17h]
  ULONG_PTR v52[2]; // [rsp+90h] [rbp+1Fh] BYREF
  ULONG_PTR v53[2]; // [rsp+A0h] [rbp+2Fh] BYREF

  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v3 = PtiCurrent((__int64)a1, a2);
  v51 = 0LL;
  v50 = 0LL;
  xxxWindowEvent(0xCu, a1, 0, 0, 0);
  UserSessionState = W32GetUserSessionState(v5, v4);
  zzzSetCursor(*(struct tagCURSOR **)(UserSessionState + 28560), v7);
  xxxCapture(v3, a1, 4);
  WindowBorders = GetWindowBorders(
                    *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL),
                    *(unsigned int *)(*((_QWORD *)a1 + 5) + 24LL),
                    v8,
                    v9);
  v11 = (_DWORD *)*((_QWORD *)a1 + 5);
  v12 = v11[24] - WindowBorders;
  LODWORD(BugCheckParameter3) = WindowBorders + v11[22];
  v13 = v11[23];
  v45 = v12;
  v14 = (unsigned int)(WindowBorders + v13);
  v15 = (unsigned int)(v11[25] - WindowBorders);
  HIDWORD(BugCheckParameter3) = v14;
  v46 = v15;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(struct tagWND **)(*((_QWORD *)v3 + 59) + 112LL) != a1 )
        goto LABEL_35;
      LODWORD(v43) = 2;
      if ( (unsigned int)xxxInternalGetMessage((__int64)&v47, 0LL, 0, 0, v43, 0) )
        break;
      xxxWaitMessageEx(15615LL, 0LL, 0LL);
    }
    if ( DWORD2(v47) == 161 )
      goto LABEL_35;
    if ( DWORD2(v47) == 513 )
    {
      if ( !PtInRect(&BugCheckParameter3, *(unsigned __int64 *)((char *)&v49 + 4)) )
        goto LABEL_35;
      v21 = xxxWindowHitTest((__int64)a1, *(__int64 *)((char *)&v49 + 4), 0LL, 0);
      v22 = (struct tagWND *)ValidateHwnd(v21);
      Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(&BugCheckParameter3, (__int64)v22);
      if ( (unsigned int)IsHelpParent(v22) )
      {
        v51 = *(_QWORD *)((char *)&v49 + 4);
        v50 = (unsigned __int64)v22;
        xxxInternalEnumWindow(v22, (__int64 (__fastcall *)(__int64, __int64))EnumPwndDlgChildProc, (__int64)&v50, 1u);
        v22 = (struct tagWND *)*((_QWORD *)&v50 + 1);
      }
      v24 = 0LL;
      if ( v22 != a1 )
        v24 = v22;
      if ( !v24 && (!*(_DWORD *)(*((_QWORD *)a1 + 5) + 280LL) || (v24 = a1) == 0LL) )
      {
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)&BugCheckParameter3, v23);
        goto LABEL_35;
      }
      Win32HM_LockIntoThread<0>((__int64)v3, (__int64)v24, v52);
      v27 = W32GetUserSessionState(v26, v25);
      zzzSetCursor(*(struct tagCURSOR **)(v27 + 21936), v28);
      xxxReleaseCapture(v30, v29);
      xxxRedrawTitle(a1, 4096LL);
      SetOrClrWF(0, a1, 0x580u, 1);
      LODWORD(v43) = 1;
      xxxInternalGetMessage((__int64)&v47, 0LL, 0, 0, v43, 1);
      xxxWindowEvent(0x800Au, a1, -2, 4u, 0);
      xxxWindowEvent(0xDu, a1, 0, 0, 0);
      v31 = *((_QWORD *)v24 + 5);
      v32 = *(_BYTE *)(v31 + 31);
      if ( (v32 & 0xC0) != 0x40 || (v33 = *(_DWORD *)(v31 + 320), v33 == 0xFFFF) )
        v33 = -1;
      if ( (v32 & 8) != 0 )
      {
        Parent = (struct tagTHREADINFO **)GetParent(v24);
        if ( !Parent )
        {
LABEL_31:
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v52, v34);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)&BugCheckParameter3, v36);
          return;
        }
      }
      else
      {
        Parent = (struct tagTHREADINFO **)v24;
      }
      Win32HM_LockIntoThread<0>((__int64)v3, (__int64)Parent, v53);
      ContextHelpId = GetContextHelpId(v24);
      xxxSendHelpMessage(Parent, 1LL, v33, *(_QWORD *)v24, ContextHelpId);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v53, v38);
      goto LABEL_31;
    }
    v15 = (unsigned int)(DWORD2(v47) - 516);
    if ( (unsigned int)v15 <= 7 )
    {
      v14 = 137LL;
      if ( _bittest((const int *)&v14, v15) )
        goto LABEL_35;
    }
    if ( DWORD2(v47) != 512 )
      break;
    if ( PtInRect(&BugCheckParameter3, *(unsigned __int64 *)((char *)&v49 + 4)) )
      v19 = *(struct tagCURSOR **)(W32GetUserSessionState(v17, v16) + 28560);
    else
      v19 = *(struct tagCURSOR **)(W32GetUserSessionState(v17, v16) + 21936);
    zzzSetCursor(v19, v18);
LABEL_16:
    LODWORD(v43) = 1;
    xxxInternalGetMessage((__int64)&v47, 0LL, 0, 0, v43, 1);
    xxxTranslateMessage((__int64)&v47, 0LL);
    xxxDispatchMessage((struct tagMSG *)&v47, v20);
  }
  if ( DWORD2(v47) != 256 || (_QWORD)v48 != 27LL )
    goto LABEL_16;
  LODWORD(v43) = 1;
  xxxInternalGetMessage((__int64)&v47, 0LL, 0, 0, v43, 1);
LABEL_35:
  xxxReleaseCapture(v15, v14);
  v41 = W32GetUserSessionState(v40, v39);
  zzzSetCursor(*(struct tagCURSOR **)(v41 + 21936), v42);
  xxxRedrawTitle(a1, 4096LL);
  SetOrClrWF(0, a1, 0x580u, 1);
  xxxWindowEvent(0x800Au, a1, -2, 4u, 0);
  xxxWindowEvent(0xDu, a1, 0, 0, 0);
}
