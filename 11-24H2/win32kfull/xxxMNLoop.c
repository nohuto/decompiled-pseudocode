/*
 * XREFs of xxxMNLoop @ 0x14009B5E0
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxSysCommand @ 0x1402B5464 (xxxSysCommand.c)
 *     xxxMNKeyFilter @ 0x1402EB098 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxCallMsgFilter @ 0x1400655D0 (xxxCallMsgFilter.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140066508 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxTranslateMessage @ 0x14006742C (xxxTranslateMessage.c)
 *     FindNCHit @ 0x14006C5C4 (FindNCHit.c)
 *     xxxHandleMenuMessages @ 0x14006D0F0 (xxxHandleMenuMessages.c)
 *     xxxGetSysMenuPtr @ 0x140070C28 (xxxGetSysMenuPtr.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxMNStartMenu @ 0x14009A980 (xxxMNStartMenu.c)
 *     ClientGetMessageMPH @ 0x140107C90 (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1401095B8 (xxxDispatchMessage.c)
 *     xxxSendNotifyMessage @ 0x140119930 (xxxSendNotifyMessage.c)
 *     ?IsInsideMPH@@YAHXZ @ 0x140153DA0 (-IsInsideMPH@@YAHXZ.c)
 *     _IsChild @ 0x140155C40 (_IsChild.c)
 *     SlowAppThreadInShellFrame @ 0x140155EA4 (SlowAppThreadInShellFrame.c)
 *     IsShellFrameHangResilient @ 0x140156564 (IsShellFrameHangResilient.c)
 *     xxxWaitMessageEx @ 0x14016DD60 (xxxWaitMessageEx.c)
 *     _GetMenuState @ 0x1401B02A8 (_GetMenuState.c)
 *     MNFlushDestroyedPopups @ 0x14021A820 (MNFlushDestroyedPopups.c)
 *     TryDetachShellFrame @ 0x140237D24 (TryDetachShellFrame.c)
 *     xxxEndMenuLoop @ 0x1402517D0 (xxxEndMenuLoop.c)
 *     xxxMNReleaseCapture @ 0x1402688C4 (xxxMNReleaseCapture.c)
 */

__int64 __fastcall xxxMNLoop(unsigned int ***a1, __int64 a2, __int64 a3, int a4)
{
  int v8; // r12d
  struct tagTHREADINFO *v9; // r15
  __int16 KeyState; // ax
  unsigned int *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  unsigned int **v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 UserSessionState; // rax
  int MessageMPH; // eax
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  int v27; // ebx
  __int64 v28; // rdx
  int v29; // ebx
  int Message; // eax
  int v31; // ebx
  int v32; // ebx
  unsigned int *v33; // rcx
  struct tagDRAWITEMSTRUCT *v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rbx
  struct tagTHREADINFO *v37; // rax
  struct tagTHREADINFO *v38; // r14
  __int64 v39; // rax
  struct tagWND *v40; // rbx
  __int64 SysMenuPtr; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  struct tagINPUT_MESSAGE_SOURCE *v44; // [rsp+28h] [rbp-69h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+58h] [rbp-39h] BYREF
  ULONG_PTR v46[2]; // [rsp+68h] [rbp-29h] BYREF
  __int64 v47[2]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v48; // [rsp+88h] [rbp-9h]
  __int64 v49[2]; // [rsp+90h] [rbp-1h] BYREF
  __int128 v50; // [rsp+A0h] [rbp+Fh]
  __int128 v51; // [rsp+B0h] [rbp+1Fh]
  int v52; // [rsp+100h] [rbp+6Fh] BYREF

  *(_DWORD *)(a2 + 8) |= 4u;
  *(_OWORD *)v49 = 0LL;
  *(_DWORD *)(a2 + 24) = 0;
  v50 = 0LL;
  v51 = 0LL;
  v8 = 1;
  v9 = PtiCurrent((__int64)a1, a2);
  *(_DWORD *)(a2 + 12) = *((_DWORD *)v9 + 199);
  *(_DWORD *)(a2 + 16) = *((_DWORD *)v9 + 200);
  *(_DWORD *)(*((_QWORD *)v9 + 59) + 436LL) &= ~0x40u;
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 )
  {
    KeyState = _GetKeyState((unsigned int)((***a1 & 0x40) != 0) + 1);
    v11 = **a1;
    if ( KeyState >= 0 )
    {
      if ( (*v11 & 0x800) == 0 && *((_QWORD *)**a1 + 1) )
      {
        Win32HM_LockIntoThread<0>((__int64)v9, *((_QWORD *)**a1 + 1), BugCheckParameter3);
        if ( (***a1 & 8) == 0 || (v12 = 1LL, (***a1 & 4) != 0) )
          v12 = 0LL;
        xxxSendNotifyMessage(*((_QWORD *)**a1 + 1), 530LL, v12, 0LL, 1);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v13);
      }
      goto LABEL_95;
    }
    if ( (*v11 & 8) == 0 && !xxxMNStartMenu(a1, a2, -1) )
    {
LABEL_95:
      *(_DWORD *)(a2 + 8) &= 0xFFFFFEFB;
      xxxEndMenuLoop(a2, **a1);
      xxxMNReleaseCapture(a2);
      LODWORD(v44) = 2;
      if ( (unsigned int)IsInsideMPH() )
        ClientGetMessageMPH((unsigned int)v49, 0, 512, 512, 2, 0);
      else
        xxxRealInternalGetMessage((__int64)v49, (unsigned __int64)v44, 0);
      return *(unsigned int *)(a2 + 24);
    }
    if ( (***a1 & 0x40) != 0 )
    {
      *(_QWORD *)&v50 = 2LL;
      v14 = a4 != 0 ? 518 : 516;
    }
    else
    {
      *(_QWORD *)&v50 = 1LL;
      v14 = a4 != 0 ? 515 : 513;
    }
    LODWORD(v49[1]) = v14;
    v15 = *a1;
    *((_QWORD *)&v50 + 1) = a3;
    if ( *((_QWORD *)*v15 + 2) )
      v49[0] = **((_QWORD **)**a1 + 2);
    else
      v49[0] = 0LL;
    xxxHandleMenuMessages((__int64)v49, a2, (struct tagWND ****)a1);
  }
  v16 = *(_DWORD *)(a2 + 8);
  if ( (v16 & 0x100) == 0 )
  {
    while ( 1 )
    {
      if ( (v16 & 4) == 0 )
        goto LABEL_95;
      LODWORD(v44) = 2;
      if ( (unsigned int)IsInsideMPH() )
        MessageMPH = ClientGetMessageMPH((unsigned int)v49, 0, 0, 0, 2, 0);
      else
        MessageMPH = xxxRealInternalGetMessage((__int64)v49, (unsigned __int64)v44, 0);
      if ( !MessageMPH )
        goto LABEL_71;
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
        goto LABEL_95;
      if ( (***a1 & 0x8000) != 0 )
        goto LABEL_95;
      if ( (***a1 & 8) == 0 )
      {
        v24 = *(_QWORD *)(*((_QWORD *)v9 + 59) + 128LL);
        if ( v24 != *((_QWORD *)**a1 + 1)
          && (!v24 || !(unsigned int)IsChild(*(_QWORD *)(*((_QWORD *)v9 + 59) + 128LL), *((_QWORD *)**a1 + 1))) )
        {
          goto LABEL_95;
        }
      }
      if ( (***a1 & 1) == 0 )
        goto LABEL_43;
      v25 = v49[1];
      if ( LODWORD(v49[1]) == 515 )
        break;
LABEL_44:
      if ( v25 == 513 || v25 == 516 || v25 == 161 || v25 == 164 )
      {
        v31 = 1;
        goto LABEL_56;
      }
LABEL_48:
      _InterlockedOr((volatile signed __int32 *)v9 + 132, 0x200000u);
      v29 = v49[1];
      LODWORD(v44) = 1;
      if ( (unsigned int)IsInsideMPH() )
        Message = ClientGetMessageMPH((unsigned int)v49, 0, v29, v29, 1, 0);
      else
        Message = xxxRealInternalGetMessage((__int64)v49, (unsigned __int64)v44, 0);
      if ( !Message && (_InterlockedCompareExchange((volatile signed __int32 *)v9 + 132, 0, 0) & 0x200000) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)v9 + 132, 0xFFDFFFFF);
LABEL_71:
        if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (***a1 & 0x8000) != 0 )
          goto LABEL_95;
        v33 = **a1;
        if ( (*v33 & 0x20000) != 0 )
        {
          MNFlushDestroyedPopups(**a1);
          v33 = **a1;
          *v33 &= ~0x20000u;
        }
        if ( v8 )
        {
          if ( *((_QWORD *)**a1 + 1) )
          {
            Win32HM_LockIntoThread<0>((__int64)v9, *((_QWORD *)**a1 + 1), v46);
            if ( *((_QWORD *)**a1 + 7) )
              v34 = (struct tagDRAWITEMSTRUCT *)**((_QWORD **)**a1 + 7);
            else
              v34 = 0LL;
            xxxSendTransformableMessageTimeout(*((struct tagTHREADINFO ***)**a1 + 1), 289LL, 2uLL, v34, 0, 0, 0LL, 1, 1);
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v46, v35);
          }
          v8 = 0;
        }
        else
        {
          v36 = *(_QWORD *)(a2 + 96);
          v37 = PtiCurrent((__int64)v33, v23);
          v52 = 0;
          v38 = v37;
          xxxWaitMessageEx(15615LL, v36 != 0, &v52);
          if ( (unsigned int)IsShellFrameHangResilient(v38) )
          {
            if ( v52 )
            {
              v39 = SlowAppThreadInShellFrame(v38, 0LL, 0LL, 1LL);
              if ( v39 )
                TryDetachShellFrame(v38, v39, v52 == 2, 0LL);
            }
          }
        }
        goto LABEL_86;
      }
      _InterlockedAnd((volatile signed __int32 *)v9 + 132, 0xFFDFFFFF);
      v31 = 0;
LABEL_56:
      if ( (unsigned int)xxxCallMsgFilter((__int64)v49, 2LL) )
      {
        if ( v31 )
        {
          v32 = v49[1];
          LODWORD(v44) = 1;
          if ( (unsigned int)IsInsideMPH() )
            ClientGetMessageMPH((unsigned int)v49, 0, v32, v32, 1, 0);
          else
            xxxRealInternalGetMessage((__int64)v49, (unsigned __int64)v44, 0);
        }
LABEL_70:
        v8 = 1;
        goto LABEL_86;
      }
      if ( !(unsigned int)xxxHandleMenuMessages((__int64)v49, a2, (struct tagWND ****)a1) )
      {
        xxxTranslateMessage((__int64)v49, 0LL);
        xxxDispatchMessage((struct tagMSG *)v49);
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0
        || (***a1 & 0x8000) != 0
        || (*(_DWORD *)(*((_QWORD *)v9 + 59) + 436LL) & 0x40) != 0 )
      {
        goto LABEL_95;
      }
      if ( LODWORD(v49[1]) == 280 )
        goto LABEL_71;
      if ( LODWORD(v49[1]) != 275 && LODWORD(v49[1]) != 15 )
        goto LABEL_70;
LABEL_86:
      v16 = *(_DWORD *)(a2 + 8);
    }
    if ( !*((_QWORD *)**a1 + 1) )
      goto LABEL_48;
    if ( (unsigned int)FindNCHit(*((_QWORD *)**a1 + 1), SDWORD2(v50)) == 2 )
    {
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v47, v26);
      v27 = v49[1];
      LODWORD(v44) = 1;
      if ( (unsigned int)IsInsideMPH() )
        ClientGetMessageMPH((unsigned int)v49, 0, v27, v27, 1, 0);
      else
        xxxRealInternalGetMessage((__int64)v49, (unsigned __int64)v44, 0);
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (***a1 & 0x8000) != 0 )
        goto LABEL_94;
      if ( *((_QWORD *)**a1 + 1) )
      {
        v40 = (struct tagWND *)*((_QWORD *)**a1 + 1);
        Win32HM_LockIntoThread<0>((__int64)v9, (__int64)v40, BugCheckParameter3);
        SysMenuPtr = xxxGetSysMenuPtr(v40);
        v48 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v47, SysMenuPtr);
        v42 = v48;
        if ( !v48 )
          v42 = *(_QWORD *)v47[0];
        if ( (GetMenuState(v42, 61728LL) & 3) == 0 )
          _PostTransformableMessageExtended(v40, 0x112u, 0xF120uLL, 0LL, 0LL, 1);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v43);
LABEL_94:
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v47, v28);
        goto LABEL_95;
      }
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v47, v28);
    }
LABEL_43:
    v25 = v49[1];
    goto LABEL_44;
  }
  xxxMNReleaseCapture(a2);
  v19 = *(_DWORD *)(a2 + 8);
  if ( (v19 & 0x2000000) != 0 )
  {
    *(_DWORD *)(a2 + 8) = v19 & 0xFDFFFFFF;
    UserSessionState = W32GetUserSessionState(v18, v17);
    --*(_DWORD *)(UserSessionState + 18904);
  }
  return 0LL;
}
