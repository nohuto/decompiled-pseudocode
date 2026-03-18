/*
 * XREFs of xxxMNLoop @ 0x1C0213DFC
 * Callers:
 *     xxxSysCommand @ 0x1C00857C4 (xxxSysCommand.c)
 *     xxxTrackPopupMenuEx @ 0x1C0231EEC (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1C023E908 (xxxMNKeyFilter.c)
 * Callees:
 *     IsShellFrameHangResilient @ 0x1C0006E08 (IsShellFrameHangResilient.c)
 *     _IsChild @ 0x1C0016C3C (_IsChild.c)
 *     xxxInternalGetMessage @ 0x1C002B4E0 (xxxInternalGetMessage.c)
 *     xxxSendNotifyMessage @ 0x1C0033170 (xxxSendNotifyMessage.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxTranslateMessage @ 0x1C008B26C (xxxTranslateMessage.c)
 *     FindNCHit @ 0x1C008C04C (FindNCHit.c)
 *     _PostMessage @ 0x1C00983E0 (_PostMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     xxxGetSysMenuPtr @ 0x1C00E4960 (xxxGetSysMenuPtr.c)
 *     xxxDispatchMessage @ 0x1C01185F4 (xxxDispatchMessage.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 *     xxxCallMsgFilter @ 0x1C01517DE (xxxCallMsgFilter.c)
 *     SlowAppThreadInShellFrame @ 0x1C01B629C (SlowAppThreadInShellFrame.c)
 *     TryDetachShellFrame @ 0x1C01B655C (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01B6B50 (xxxWaitMessageEx.c)
 *     MNFlushDestroyedPopups @ 0x1C01FEAD0 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenu @ 0x1C01FF3DC (xxxMNStartMenu.c)
 *     xxxEndMenuLoop @ 0x1C02133A0 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0213518 (xxxHandleMenuMessages.c)
 *     xxxMNReleaseCapture @ 0x1C0219170 (xxxMNReleaseCapture.c)
 *     _GetMenuState @ 0x1C024B2A4 (_GetMenuState.c)
 */

__int64 __fastcall xxxMNLoop(__int64 **a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // r12d
  __int16 KeyState; // ax
  _DWORD *v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  __int64 *v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  int v23; // eax
  int v24; // eax
  int v25; // esi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  bool v32; // zf
  struct tagTHREADINFO *v33; // rax
  struct tagWND *v34; // rsi
  __int64 SysMenuPtr; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD v40[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v41; // [rsp+48h] [rbp-19h]
  __int128 v42; // [rsp+50h] [rbp-11h] BYREF
  __int64 v43; // [rsp+60h] [rbp-1h]
  __int64 v44[2]; // [rsp+68h] [rbp+7h] BYREF
  __int128 v45; // [rsp+78h] [rbp+17h]
  __int128 v46; // [rsp+88h] [rbp+27h]
  int v47; // [rsp+D0h] [rbp+6Fh] BYREF

  *(_DWORD *)(a2 + 8) |= 4u;
  v43 = 0LL;
  *(_OWORD *)v44 = 0LL;
  v5 = 1;
  *(_DWORD *)(a2 + 24) = 0;
  v45 = 0LL;
  v46 = 0LL;
  v42 = 0LL;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(gptiCurrent + 764LL);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(gptiCurrent + 768LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x40u;
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 )
  {
    KeyState = _GetKeyState((unsigned int)((*(_DWORD *)**a1 & 0x40) != 0) + 1);
    v10 = (_DWORD *)**a1;
    if ( KeyState >= 0 )
    {
      if ( (*v10 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
      {
        ThreadLockAlways(*(_QWORD *)(**a1 + 8), &v42);
        if ( (*(_DWORD *)**a1 & 8) == 0 || (v11 = 1LL, (*(_DWORD *)**a1 & 4) != 0) )
          v11 = 0LL;
        xxxSendNotifyMessage(*(struct tagWND **)(**a1 + 8), 0x212u, v11, 0LL, 1);
        ThreadUnlock1(v13, v12, v14);
      }
      goto LABEL_80;
    }
    if ( (*v10 & 8) == 0 && !xxxMNStartMenu((__int64 *)a1, a2, -1) )
    {
LABEL_80:
      *(_DWORD *)(a2 + 8) &= 0xFFFFFEFB;
      xxxEndMenuLoop(a2, **a1);
      xxxMNReleaseCapture(a2);
      xxxInternalGetMessage(v44, 0LL, 512, 512, 2, 0);
      return *(unsigned int *)(a2 + 24);
    }
    if ( (*(_DWORD *)**a1 & 0x40) != 0 )
    {
      *(_QWORD *)&v45 = 2LL;
      v15 = a4 != 0 ? 518 : 516;
    }
    else
    {
      *(_QWORD *)&v45 = 1LL;
      v15 = a4 != 0 ? 515 : 513;
    }
    LODWORD(v44[1]) = v15;
    v16 = *a1;
    *((_QWORD *)&v45 + 1) = a3;
    if ( *(_QWORD *)(*v16 + 16) )
      v44[0] = **(_QWORD **)(**a1 + 16);
    else
      v44[0] = 0LL;
    xxxHandleMenuMessages((__int64)v44, a2, a1);
  }
  v17 = *(_DWORD *)(a2 + 8);
  if ( (v17 & 0x100) == 0 )
  {
    while ( 1 )
    {
      if ( (v17 & 4) == 0 )
        goto LABEL_80;
      if ( !(unsigned int)xxxInternalGetMessage(v44, 0LL, 0, 0, 2, 0) )
        goto LABEL_61;
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
        goto LABEL_80;
      if ( (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_80;
      if ( (*(_DWORD *)**a1 & 8) == 0 )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
        if ( v22 != *(_QWORD *)(**a1 + 8)
          && (!v22
           || !(unsigned int)IsChild(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL), *(_QWORD *)(**a1 + 8))) )
        {
          goto LABEL_80;
        }
      }
      if ( (*(_DWORD *)**a1 & 1) == 0 )
        goto LABEL_38;
      v23 = v44[1];
      if ( LODWORD(v44[1]) == 515 )
        break;
LABEL_39:
      if ( v23 == 513 || v23 == 516 || v23 == 161 || v23 == 164 )
      {
        v25 = 1;
        goto LABEL_48;
      }
LABEL_43:
      *(_DWORD *)(gptiCurrent + 488LL) |= 0x200000u;
      if ( !(unsigned int)xxxInternalGetMessage(v44, 0LL, v44[1], v44[1], 1, 0) )
      {
        v24 = *(_DWORD *)(gptiCurrent + 488LL);
        if ( (v24 & 0x200000) != 0 )
        {
          *(_DWORD *)(gptiCurrent + 488LL) = v24 & 0xFFDFFFFF;
LABEL_61:
          if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
            goto LABEL_80;
          if ( (*(_DWORD *)**a1 & 0x20000) != 0 )
          {
            MNFlushDestroyedPopups((_DWORD *)**a1);
            *(_DWORD *)**a1 &= ~0x20000u;
          }
          if ( v5 )
          {
            if ( *(_QWORD *)(**a1 + 8) )
            {
              ThreadLockAlways(*(_QWORD *)(**a1 + 8), &v42);
              xxxSendMessage(*(_QWORD *)(**a1 + 8));
              ThreadUnlock1(v30, v29, v31);
            }
            v5 = 0;
          }
          else
          {
            v32 = *(_QWORD *)(a2 + 96) == 0LL;
            v47 = 0;
            xxxWaitMessageEx(0x3CFFu, !v32, (enum SLEEP_STATUS *)&v47);
            if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent) )
            {
              if ( v47 )
              {
                v33 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                if ( v33 )
                  TryDetachShellFrame(gptiCurrent, (__int64)v33, v47 == 2, 0);
              }
            }
          }
          goto LABEL_73;
        }
      }
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x200000u;
      v25 = 0;
LABEL_48:
      if ( (unsigned int)xxxCallMsgFilter((__int64)v44, 2LL, v20, v21) )
      {
        if ( v25 )
          xxxInternalGetMessage(v44, 0LL, v44[1], v44[1], 1, 0);
LABEL_60:
        v5 = 1;
        goto LABEL_73;
      }
      if ( !(unsigned int)xxxHandleMenuMessages((__int64)v44, a2, a1) )
      {
        xxxTranslateMessage((__int64)v44, 0);
        xxxDispatchMessage(v44, v26, v27, v28);
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0
        || (*(_DWORD *)**a1 & 0x8000) != 0
        || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) & 0x40) != 0 )
      {
        goto LABEL_80;
      }
      if ( LODWORD(v44[1]) == 280 )
        goto LABEL_61;
      if ( LODWORD(v44[1]) != 275 && LODWORD(v44[1]) != 15 )
        goto LABEL_60;
LABEL_73:
      v17 = *(_DWORD *)(a2 + 8);
    }
    if ( !*(_QWORD *)(**a1 + 8) )
      goto LABEL_43;
    if ( (unsigned int)FindNCHit(*(_QWORD *)(**a1 + 8), SDWORD2(v45)) == 2 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v40, 0LL);
      v41 = 0LL;
      xxxInternalGetMessage(v44, 0LL, v44[1], v44[1], 1, 0);
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_79;
      if ( *(_QWORD *)(**a1 + 8) )
      {
        v34 = *(struct tagWND **)(**a1 + 8);
        ThreadLockAlways(v34, &v42);
        SysMenuPtr = xxxGetSysMenuPtr(v34);
        v41 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v40, SysMenuPtr);
        v36 = v41;
        if ( !v41 )
          v36 = *(_QWORD *)v40[0];
        if ( (GetMenuState(v36, 61728LL) & 3) == 0 )
          PostMessage(v34, 0x112u, 0xF120uLL, 0LL);
        ThreadUnlock1(v38, v37, v39);
LABEL_79:
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v40);
        goto LABEL_80;
      }
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v40);
    }
LABEL_38:
    v23 = v44[1];
    goto LABEL_39;
  }
  xxxMNReleaseCapture(a2);
  v18 = *(_DWORD *)(a2 + 8);
  if ( (v18 & 0x2000000) != 0 )
  {
    --guSFWLockCount;
    *(_DWORD *)(a2 + 8) = v18 & 0xFDFFFFFF;
  }
  return 0LL;
}
