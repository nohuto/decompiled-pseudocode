/*
 * XREFs of xxxMNKeyDown @ 0x1402BE09C
 * Callers:
 *     xxxHandleMenuMessages @ 0x14006D0F0 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxMNChar @ 0x1402BD9E4 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1402BE09C (xxxMNKeyDown.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x140046AF8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140046B4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14006EFFC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _GetSubMenu @ 0x14006F7B4 (_GetSubMenu.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     HMValidateHandleNoRip @ 0x14008ED8C (HMValidateHandleNoRip.c)
 *     LockPopupMenu @ 0x14009AD54 (LockPopupMenu.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x14009D684 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNCancel @ 0x14009D784 (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x14009DA30 (xxxMNSelectItem.c)
 *     xxxMNCloseHierarchy @ 0x14009E0A0 (xxxMNCloseHierarchy.c)
 *     xxxSendHelpMessage @ 0x14021E310 (xxxSendHelpMessage.c)
 *     xxxMNSetCapture @ 0x14026533C (xxxMNSetCapture.c)
 *     UnlockPopupMenu @ 0x14026C05C (UnlockPopupMenu.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1402BD29C (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNGetpItem @ 0x1402BD8D4 (MNGetpItem.c)
 *     xxxMNKeyDown @ 0x1402BE09C (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402BEC74 (xxxMNSwitchToAlternateMenu.c)
 *     MNFindItemInColumn @ 0x1402EAD88 (MNFindItemInColumn.c)
 *     MNFindNextValidItem @ 0x1402EAE90 (MNFindNextValidItem.c)
 */

_QWORD *__fastcall xxxMNKeyDown(__int64 **a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int MenuInheritedContextHelpId; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  int ValidItem; // r8d
  unsigned int v14; // esi
  int v15; // r12d
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r8
  int v20; // eax
  int v21; // r15d
  __int64 v22; // rdx
  __int64 *v23; // rax
  __int64 v24; // rdx
  ULONG_PTR *v25; // rcx
  __int64 v26; // rcx
  struct tagTHREADINFO *v27; // rax
  __int64 *v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  _QWORD *v33; // r15
  __int64 v34; // rax
  __int64 v35; // r13
  int v36; // r14d
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 *v39; // rax
  __int64 *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  _DWORD *v45; // rdx
  __int64 v46; // rdx
  int v47; // eax
  _QWORD *v48; // r8
  int v49; // ecx
  _QWORD v51[2]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v52[2]; // [rsp+40h] [rbp-59h] BYREF
  int v53; // [rsp+50h] [rbp-49h]
  ULONG_PTR v54[3]; // [rsp+58h] [rbp-41h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-29h] BYREF
  ULONG_PTR v56[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v57; // [rsp+90h] [rbp-9h]
  __int128 v58; // [rsp+98h] [rbp-1h]
  ULONG_PTR v59[9]; // [rsp+A8h] [rbp+Fh] BYREF
  BOOL v60; // [rsp+110h] [rbp+77h]
  int v61; // [rsp+118h] [rbp+7Fh]
  struct tagTHREADINFO *v62; // [rsp+118h] [rbp+7Fh]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v52, 0LL);
  v7 = *(_DWORD *)(a2 + 8);
  if ( (v7 & 8) != 0 )
  {
    if ( a3 != 112 )
    {
      if ( (v7 & 0x80u) != 0 && a3 == 27 )
        *(_DWORD *)(a2 + 8) = v7 | 0x2000;
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v52, v6);
    }
    goto LABEL_18;
  }
  switch ( a3 )
  {
    case 0xDu:
      if ( *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      {
        v48 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96LL * *(unsigned int *)(**a1 + 80));
        v49 = *(_DWORD *)(*v48 + 4LL) & 3;
        if ( v48[2] )
        {
          if ( !v49 )
            goto LABEL_22;
        }
        else if ( !v49 )
        {
          xxxMNDismissWithNotify(a2, (__int64)a1, (__int64)v48, *(_DWORD *)(**a1 + 80), 0LL);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v52, v6);
        }
      }
      goto LABEL_109;
    case 0x12u:
LABEL_15:
      if ( (v7 & 0x100) == 0 )
      {
        xxxMNCancel(a2, 0, 0, 0LL);
        if ( a3 == 18 )
          *(_DWORD *)(a2 + 8) &= ~0x20u;
      }
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v52, v6);
    case 0x1Bu:
      if ( (*(_DWORD *)**a1 & 1) == 0
        && **a1 != *(_QWORD *)(**a1 + 64)
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 64) + 8LL) + 40LL) + 31LL) & 0x20) == 0 )
      {
        if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v51, *(_QWORD *)(**a1 + 64));
          **(_DWORD **)v51[0] &= ~0x400u;
          if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
            xxxMNCancel(a2, 0, 0, 0LL);
          else
            xxxMNCloseHierarchy(*(_QWORD *)v51[0], a2);
LABEL_104:
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v51, v22);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v52, v6);
        }
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v56, *(_QWORD *)(**a1 + 32));
        xxxSendMessage(*(struct tagWND **)(**a1 + 32), 0x1E4u);
        v25 = v56;
        goto LABEL_61;
      }
LABEL_109:
      xxxMNCancel(a2, 0, 0, 0LL);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v52, v6);
  }
  if ( a3 != 37 )
  {
    if ( a3 == 38 )
    {
LABEL_21:
      if ( (*(_DWORD *)**a1 & 1) != 0 )
      {
LABEL_22:
        xxxMNOpenHierarchy(a1, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v52, v6);
      }
      v12 = -1LL;
      if ( a3 != 38 )
        v12 = 1LL;
      ValidItem = MNFindNextValidItem(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v12, 0LL);
LABEL_59:
      xxxMNSelectItem(a1, a2, ValidItem);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v52, v6);
    }
    if ( a3 != 39 )
    {
      if ( a3 != 40 )
      {
        if ( a3 == 112 )
        {
LABEL_18:
          v8 = MNGetpItem((__int64)a1, *(_DWORD *)(**a1 + 80));
          v9 = v8;
          v6 = **a1;
          if ( *(_QWORD *)(v6 + 8) && v8 )
          {
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
              BugCheckParameter3,
              *(_QWORD *)(**a1 + 8));
            MenuInheritedContextHelpId = GetMenuInheritedContextHelpId(a1);
            xxxSendHelpMessage(
              *(struct tagTHREADINFO ***)(**a1 + 8),
              2LL,
              *(_DWORD *)(*(_QWORD *)v9 + 8LL),
              **(_QWORD **)(**a1 + 40),
              MenuInheritedContextHelpId);
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v11);
          }
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v52, v6);
        }
        if ( a3 != 121 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v52, v6);
        goto LABEL_15;
      }
      goto LABEL_21;
    }
  }
  v14 = 1;
  v15 = 39;
  v16 = **a1;
  v53 = (*(_DWORD *)v16 >> 22) & 1;
  v61 = (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 40LL) + 26LL) >> 6) & 1;
  if ( v61 != v53 )
  {
    v17 = 39;
    if ( a3 != 37 )
      v17 = 37;
    a3 = v17;
  }
  if ( (*(_DWORD *)**a1 & 1) != 0
    || a3 != 39
    || *(_QWORD *)(**a1 + 24)
    || xxxMNOpenHierarchy(a1, a2) != -1 && (*(_DWORD *)**a1 & 0x20) == 0 )
  {
    if ( *(_QWORD *)(**a1 + 24) )
    {
      v60 = 1;
      if ( a3 == 37 && (*(_DWORD *)**a1 & 1) == 0 )
      {
        xxxMNCloseHierarchy(**a1, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v52, v6);
      }
    }
    else
    {
      v60 = (*(_DWORD *)**a1 & 0x400) != 0;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v52, **a1);
    if ( (*(_DWORD *)**a1 & 2) == 0 || (v18 = 1LL, **a1 != *(_QWORD *)(**a1 + 64)) )
      v18 = 0LL;
    v19 = 0xFFFFFFFFLL;
    if ( a3 != 37 )
      v19 = 1LL;
    v20 = MNFindItemInColumn(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v19, v18);
    v6 = 0xFFFFFFFFLL;
    v21 = v20;
    if ( v20 != -1 )
    {
LABEL_56:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        if ( v21 == -1 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v52, v6);
        ValidItem = v21;
        goto LABEL_59;
      }
      if ( v21 == -1 )
      {
        if ( *(_QWORD *)(**a1 + 8) )
        {
          v26 = *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL);
          if ( (*(_BYTE *)(v26 + 30) & 8) != 0 )
          {
            v27 = PtiCurrent(v26, 0xFFFFFFFFLL);
            v28 = *a1;
            v58 = 0LL;
            v62 = v27;
            v29 = (*(_DWORD *)*v28 & 4) != 0
                ? (_QWORD *)GetSubMenu(*(_QWORD *)(**a1 + 40), *v28)
                : *(_QWORD **)(**a1 + 40);
            v57 = v29 ? *v29 : 0LL;
            Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v54, *(_QWORD *)(**a1 + 8));
            xxxSendMessage(*(struct tagWND **)(**a1 + 8), 0x213u);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v54, v30);
            LOBYTE(v31) = 1;
            v33 = (_QWORD *)HMValidateHandleNoSecure(*((__int64 *)&v58 + 1), v31);
            if ( v33 )
            {
              if ( (struct tagTHREADINFO *)v33[2] == v62 )
              {
                LOBYTE(v32) = 2;
                v34 = HMValidateHandleNoRip(v58, v32);
                v35 = v34;
                if ( v34 )
                {
                  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v56, v34);
                  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v59, (__int64)v33);
                  v36 = v60;
                  if ( (*(_BYTE *)(v33[5] + 31LL) & 0x20) != 0 )
                    v36 = 1;
                  xxxMNSelectItem(a1, a2, -1);
                  *(_DWORD *)(a2 + 8) |= 2u;
                  UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 48));
                  *(_DWORD *)**a1 &= ~0x80u;
                  v38 = v33[20];
                  if ( v38 && GetSubMenu(v38, v37) == v35 )
                    v35 = v33[20];
                  UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 40));
                  v39 = *a1;
                  v51[1] = v33;
                  v51[0] = *v39 + 8;
                  HMAssignmentLock(v51, 0LL);
                  v40 = *a1;
                  BugCheckParameter3[1] = (ULONG_PTR)v33;
                  BugCheckParameter3[0] = *v40 + 16;
                  HMAssignmentLock(BugCheckParameter3, 0LL);
                  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v54, v35);
                  LockPopupMenu((__int64)a1, (__int64 *)(**a1 + 40), (__int64)v54);
                  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v54, v41);
                  if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
                  {
                    *(_DWORD *)(*((_QWORD *)v62 + 59) + 436LL) &= ~0x100000u;
                    xxxMNSetCapture((__int64)a1, a2);
                  }
                  if ( (*(_BYTE *)(v33[5] + 31LL) & 0x40) == 0 && *(_QWORD *)(**a1 + 40) )
                  {
                    v42 = v33[21];
                    if ( v42 == *(_QWORD *)(**a1 + 40) )
                    {
                      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v54, v33[20]);
                      LockPopupMenu((__int64)a1, (__int64 *)(**a1 + 48), (__int64)v54);
                      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v54, v43);
                      *(_DWORD *)(a2 + 8) &= ~2u;
                    }
                    else
                    {
                      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v54, v42);
                      LockPopupMenu((__int64)a1, (__int64 *)(**a1 + 48), (__int64)v54);
                      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v54, v44);
                    }
                  }
                  v21 = 0;
                  v45 = (_DWORD *)**a1;
                  *v45 ^= ((unsigned __int8)*v45 ^ (unsigned __int8)(2 * *(_DWORD *)(a2 + 8))) & 4;
                  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v59, (__int64)v45);
                  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v56, v46);
LABEL_92:
                  if ( *(_QWORD *)(*(_QWORD *)v52[0] + 24LL) )
                    xxxMNCloseHierarchy(*(_QWORD *)v52[0], a2);
                  xxxMNSelectItem(a1, a2, v21);
                  if ( v36 )
                    goto LABEL_22;
                  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v52, v6);
                }
              }
            }
          }
        }
        if ( !(unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v52, v6);
        if ( a3 != 39 )
          v14 = -1;
        v47 = MNFindNextValidItem(*(_QWORD *)(**a1 + 40), 0xFFFFFFFFLL, v14, 0LL);
        v6 = 0xFFFFFFFFLL;
        v21 = v47;
        if ( v47 == -1 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v52, v6);
      }
      v36 = v60;
      goto LABEL_92;
    }
    if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
    {
      if ( v61 != v53 )
      {
        if ( a3 != 37 )
          v15 = 37;
        a3 = v15;
      }
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v51, *(_QWORD *)(**a1 + 64));
      xxxMNKeyDown(v51, a2, a3);
      goto LABEL_104;
    }
    v6 = **a1;
    v23 = *a1;
    if ( v6 == *(_QWORD *)(v6 + 64) )
    {
      if ( (*(_DWORD *)*v23 & 1) == 0 )
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v52, v6);
      v6 = 0xFFFFFFFFLL;
      goto LABEL_56;
    }
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, *(_QWORD *)(*v23 + 32));
    xxxSendMessage(*(struct tagWND **)(**a1 + 32), 0x100u);
    v25 = BugCheckParameter3;
LABEL_61:
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v25, v24);
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v52, v6);
}
