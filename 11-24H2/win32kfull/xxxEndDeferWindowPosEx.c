/*
 * XREFs of xxxEndDeferWindowPosEx @ 0x140076014
 * Callers:
 *     NtUserEndDeferWindowPosEx @ 0x140076E80 (NtUserEndDeferWindowPosEx.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1400F4310 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1400F48B0 (xxxProcessSetWindowPosEvent.c)
 *     xxxSetWindowRgn @ 0x1400F4A4C (xxxSetWindowRgn.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x14022F1B8 (xxxSetWindowPosAndBand.c)
 *     ?xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x1402A8C4C (-xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402D8B48 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 *     xxxArrangeIconicWindows @ 0x1402E9D44 (xxxArrangeIconicWindows.c)
 * Callees:
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     PostShellHookMessagesEx @ 0x140067280 (PostShellHookMessagesEx.c)
 *     ?xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z @ 0x1400690E0 (-xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     DestroySMWP @ 0x140083140 (DestroySMWP.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1400849C0 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140087614 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ??0CDwmSwpNotifyBatch@@QEAA@PEAUtagSMWP@@@Z @ 0x1400886D8 (--0CDwmSwpNotifyBatch@@QEAA@PEAUtagSMWP@@@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x14008BB84 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x14008BE10 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     SetWindowGroupBand @ 0x1401571C4 (SetWindowGroupBand.c)
 *     GreClientRgnUpdatedStable @ 0x14016E4E4 (GreClientRgnUpdatedStable.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z @ 0x140183E08 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x14018D1C4 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401A51F8 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     xxxDoSyncPaint @ 0x1401A7398 (xxxDoSyncPaint.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1401B8838 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x14022AC48 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14022B0AC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x14022C22C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@W4SwpActivateOptions@@@Z @ 0x14022C590 (-xxxSwpActivate@@YAHPEAUtagWND@@W4SwpActivateOptions@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxInterceptSetWindowPos@WindowActions@@YAXPEAUtagSMWP@@@Z @ 0x1402D0620 (-xxxInterceptSetWindowPos@WindowActions@@YAXPEAUtagSMWP@@@Z.c)
 */

__int64 __fastcall xxxEndDeferWindowPosEx(struct tagSMWP *a1, __int64 a2)
{
  int v2; // r15d
  struct tagSMWP *v3; // rdi
  int v4; // r12d
  struct tagTHREADINFO *v5; // r14
  struct tagWINDOWPOS *ValidWindowPos; // rax
  struct tagWND *v7; // r13
  struct tagSMWP *v8; // rdx
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  struct tagWND *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagSMWP *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagCVR *v22; // rbx
  int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v27; // rax
  void (__fastcall *v28)(struct tagSMWP *); // rax
  struct tagTHREADINFO *v29; // rax
  struct tagTHREADINFO *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rsi
  int v33; // r15d
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r12
  int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // rcx
  char valid; // al
  __int64 v41; // rdx
  int v42; // r15d
  __int64 v43; // rsi
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  struct tagDESKTOP **v48; // r15
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  int v53; // eax
  unsigned int v54; // ecx
  int v55; // ebx
  __int64 v56; // rdx
  struct tagWND *v57; // rdx
  struct tagWND *v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 UserSessionState; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  struct tagTHREADINFO *v65; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v67; // [rsp+40h] [rbp-59h]
  __int64 v68; // [rsp+48h] [rbp-51h]
  ULONG_PTR v69[2]; // [rsp+50h] [rbp-49h] BYREF
  struct tagTHREADINFO *v70; // [rsp+60h] [rbp-39h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+68h] [rbp-31h] BYREF
  ULONG_PTR v72[2]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v73[96]; // [rsp+90h] [rbp-9h] BYREF
  int v74; // [rsp+100h] [rbp+67h]
  int v75; // [rsp+110h] [rbp+77h] BYREF
  int v76; // [rsp+118h] [rbp+7Fh]

  v75 = 0;
  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = PtiCurrent((__int64)a1, a2);
  v74 = 0;
  if ( !*((_DWORD *)v3 + 7) )
    goto LABEL_94;
  if ( !(unsigned int)ValidateSmwp(v3, &v75) )
    goto LABEL_94;
  BugCheckParameter3[2] = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v67 = -1LL;
  ValidWindowPos = FindValidWindowPos(v3);
  if ( !ValidWindowPos )
    goto LABEL_94;
  v7 = *(struct tagWND **)(_HMObjectFromHandle(*(_QWORD *)ValidWindowPos) + 104);
  if ( !v7 || !*((_QWORD *)v7 + 3) )
    goto LABEL_94;
  v69[1] = 0LL;
  v69[0] = -1LL;
  Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(v69, v7);
  v9 = 0;
  if ( *((int *)v3 + 7) > 0 )
  {
    v10 = 0LL;
    do
    {
      v11 = *((_QWORD *)v3 + 5);
      v12 = *(_QWORD *)(v10 + v11);
      if ( v12 && *(_DWORD *)(v10 + v11 + 152) )
      {
        v13 = _HMObjectFromHandle(v12);
        v14 = *((_QWORD *)v3 + 5);
        if ( *(_DWORD *)(*(_QWORD *)(v13 + 40) + 236LL) != *(_DWORD *)(v10 + v14 + 152) )
        {
          v15 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(v10 + v14));
          SetWindowGroupBand(v15);
        }
        *(_DWORD *)(v10 + *((_QWORD *)v3 + 5) + 152) = 0;
      }
      ++v9;
      v10 += 168LL;
    }
    while ( v9 < *((_DWORD *)v3 + 7) );
    v4 = 0;
  }
  if ( v2 )
    AsyncWindowPos(v3);
  WindowActions::xxxInterceptSetWindowPos(v3, v8);
  if ( v7 != (struct tagWND *)GetDesktopWindow((__int64)v7) )
  {
LABEL_30:
    if ( (*((_DWORD *)v3 + 6) & 2) != 0 )
    {
      HMLockObject(v3);
      if ( v67 != -1 )
      {
        BugCheckParameter4 = PtiCurrent(v25, v24);
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v3, (ULONG_PTR)BugCheckParameter4);
      }
      v27 = PtiCurrent(v25, v24);
      v4 = 1;
      v74 = 1;
      BugCheckParameter2[0] = *((_QWORD *)v27 + 48);
      *((_QWORD *)v27 + 48) = BugCheckParameter2;
      v28 = UnrefAndDestroySMWP;
    }
    else
    {
      if ( v67 != -1 )
      {
        v29 = PtiCurrent(v17, v16);
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v3, (ULONG_PTR)v29);
      }
      v30 = PtiCurrent(v17, v16);
      BugCheckParameter2[0] = *((_QWORD *)v30 + 48);
      *((_QWORD *)v30 + 48) = BugCheckParameter2;
      v28 = (void (__fastcall *)(struct tagSMWP *))DestroySMWP;
    }
    ++*((_DWORD *)v5 + 334);
    v67 = (__int64)v28;
    BugCheckParameter2[1] = (ULONG_PTR)v3;
    *((_DWORD *)v3 + 6) |= 4u;
    CDwmSwpNotifyBatch::CDwmSwpNotifyBatch((CDwmSwpNotifyBatch *)v73, v3);
    v32 = 0LL;
    v33 = 0;
    v68 = 0LL;
    if ( *((int *)v3 + 7) > 0 )
    {
      while ( 1 )
      {
        LOBYTE(v31) = 1;
        v34 = v32 + *((_QWORD *)v3 + 5);
        if ( HMValidateHandleNoSecure(*(_QWORD *)v34, v31) )
        {
          if ( (*(_DWORD *)(v34 + 32) & 0x10) == 0 )
            break;
        }
        ++v33;
        v32 += 168LL;
        if ( v33 >= *((_DWORD *)v3 + 7) )
        {
          v32 = v68;
          goto LABEL_42;
        }
      }
      v32 = v34;
      v68 = v34;
    }
LABEL_42:
    if ( (unsigned int)xxxCalcValidRects(v3) )
    {
      v36 = 0LL;
      if ( v32 )
      {
        LOBYTE(v35) = 1;
        v36 = HMValidateHandleNoSecure(*(_QWORD *)v32, v35);
      }
      Win32HM_LockIntoThread<1>((__int64)v5, v36, (__int64 *)BugCheckParameter3);
      v37 = *((_DWORD *)v5 + 237);
      v76 = v37;
      v70 = *(struct tagTHREADINFO **)(W32GetUserSessionState(v39, v38) + 18960);
      valid = zzzBltValidBits(v3);
      v42 = (valid & 1) != 0 ? v75 : 0;
      v75 = v42;
      if ( (valid & 2) != 0 )
        GenerateMouseMove(0LL);
      if ( (*((_DWORD *)v3 + 6) & 1) != 0 )
      {
        v43 = *((int *)v3 + 7);
        if ( *((_DWORD *)v3 + 7) )
        {
          v44 = 168 * v43;
          do
          {
            v45 = *((_QWORD *)v3 + 5);
            v44 -= 168LL;
            --v43;
            v46 = *(_QWORD *)(v44 + v45);
            if ( v46 )
            {
              if ( (*(_DWORD *)(v44 + v45 + 32) & 0x70000000) != 0 )
              {
                LOBYTE(v41) = 1;
                v47 = HMValidateHandleNoSecure(v46, v41);
                v48 = (struct tagDESKTOP **)v47;
                if ( v47 )
                {
                  Win32HM_LockIntoThread<0>(v5, v47, v72);
                  v49 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v44 + v49 + 32) & 0x10000000) != 0 )
                  {
                    v50 = *(_QWORD *)(v44 + v49);
                    if ( (*(_DWORD *)(v44 + v49 + 156) & 8) != 0 )
                    {
                      PostIAMShellHookMessage(0x15u, v50);
                    }
                    else
                    {
                      PostShellHookMessagesEx((LastWokenThread *)1, v50);
                      xxxCallHook(1, *(_QWORD *)(v44 + *((_QWORD *)v3 + 5)), 0LL, 10);
                    }
                  }
                  v51 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v44 + v51 + 32) & 0x20000000) != 0 )
                  {
                    PostShellHookMessagesEx((LastWokenThread *)2, *(_QWORD *)(v44 + v51));
                    xxxCallHook(2, *(_QWORD *)(v44 + *((_QWORD *)v3 + 5)), 0LL, 10);
                  }
                  v52 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v44 + v52 + 32) & 0x40000000) != 0 )
                  {
                    v53 = *(_DWORD *)(v44 + v52 + 156);
                    if ( (v53 & 8) != 0 )
                    {
                      v54 = 23;
                    }
                    else
                    {
                      if ( (v53 & 0x10) == 0 )
                        xxxSetTrayWindow(v48[3], (struct tagWND *)v48);
                      v52 = *((_QWORD *)v3 + 5);
                      v54 = 19;
                    }
                    PostIAMShellHookMessage(v54, *(_QWORD *)(v44 + v52));
                  }
                  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v72, v52);
                }
              }
            }
          }
          while ( v43 );
          v42 = v75;
          v37 = v76;
        }
        v32 = v68;
      }
      if ( v5 == v70 && v37 && !*((_DWORD *)v5 + 237) && !(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)v5 + 58)) )
        tagTHREADINFO::SetForegroundActivate(v5, 16LL);
      v55 = 0;
      if ( v36 )
      {
        v56 = *(_BYTE *)(v32 + 35) & 1 | 2u;
        if ( (*(_DWORD *)(v32 + 156) & 0x400) == 0 )
          v56 = *(_BYTE *)(v32 + 35) & 1;
        v55 = xxxSwpActivate(v36, v56);
      }
      if ( v42 )
        xxxDoSyncPaint(v7, 4u);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v41);
      if ( v55 )
      {
        v57 = *(struct tagWND **)(*((_QWORD *)v5 + 59) + 128LL);
        if ( v57 )
          SetOrClrWF(0, v57, 0x101u, 1);
        v58 = *(struct tagWND **)(*((_QWORD *)v5 + 59) + 136LL);
        if ( v58 )
          SetOrClrWF(0, v58, 0x101u, 1);
      }
      xxxSendChangedMsgs(v3);
      v4 = v74;
    }
    CDwmNotifyBatch::~CDwmNotifyBatch((CDwmNotifyBatch *)v73);
    if ( (*((_DWORD *)v5 + 334))-- == 1 )
    {
      UserSessionState = W32GetUserSessionState(v60, v59);
      GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
      GreClientRgnUpdatedStable();
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
    }
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(v69, v59);
    if ( v67 != -1 )
    {
      v65 = PtiCurrent(v64, v63);
      *((_QWORD *)v65 + 48) = BugCheckParameter2[0];
      v67 = -1LL;
    }
    if ( v4 )
    {
      UnrefAndDestroySMWP(v3);
      return 1LL;
    }
LABEL_94:
    DestroySMWP(v3);
    return 1LL;
  }
  v18 = ZOrderByOwner(v3);
  v3 = v18;
  if ( v18 )
  {
    if ( v2 )
    {
      v22 = (struct tagCVR *)*((_QWORD *)v18 + 5);
      v23 = *((_DWORD *)v18 + 7);
      while ( --v23 >= 0 )
      {
        if ( *(_QWORD *)v22 && !(unsigned int)ValidateWindowPos(v22, 0LL) )
          *(_QWORD *)v22 = 0LL;
        v22 = (struct tagCVR *)((char *)v22 + 168);
      }
      AsyncWindowPos(v3);
    }
    goto LABEL_30;
  }
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(v69, v16);
  if ( v67 != -1 )
    *((_QWORD *)PtiCurrent(v20, v19) + 48) = BugCheckParameter2[0];
  return 0LL;
}
