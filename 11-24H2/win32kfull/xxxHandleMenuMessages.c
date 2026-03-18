/*
 * XREFs of xxxHandleMenuMessages @ 0x14006D0F0
 * Callers:
 *     xxxMNLoop @ 0x14009B5E0 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1402270AC (xxxCallHandleMenuMessages.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14004083C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _PostMessage @ 0x140066460 (_PostMessage.c)
 *     xxxTranslateMessage @ 0x14006742C (xxxTranslateMessage.c)
 *     xxxMNMouseMove @ 0x14006DA24 (xxxMNMouseMove.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x14006DE58 (IsMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x14006DE80 (xxxMNFindWindowFromPoint.c)
 *     PtInRect @ 0x14006E460 (PtInRect.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x14006E488 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14006EFFC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     xxxMNButtonDown @ 0x14009BCCC (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x14009D560 (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x14009D784 (xxxMNCancel.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1402195FC (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x140268B90 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     UnlockMFMWFPWindow @ 0x140269060 (UnlockMFMWFPWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140282D2C (safe_cast_fnid_to_PMENUWND.c)
 *     IsPointerPrimary @ 0x14028C824 (IsPointerPrimary.c)
 *     GetMenuStateWindow @ 0x1402BD7E8 (GetMenuStateWindow.c)
 *     LockMFMWFPWindow @ 0x1402BD81C (LockMFMWFPWindow.c)
 *     xxxMNChar @ 0x1402BD9E4 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1402BDEDC (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1402BE09C (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402BEC74 (xxxMNSwitchToAlternateMenu.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxHandleMenuMessages(__int64 a1, __int64 a2, struct tagWND ****a3)
{
  struct tagWND ***v3; // rax
  __int64 v5; // rdx
  __int64 v8; // r12
  unsigned int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  unsigned int v12; // eax
  int v13; // eax
  _DWORD *v14; // rdx
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  struct tagTHREADINFO *v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r12
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned __int16 v28; // bx
  struct tagTHREADINFO *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  int v36; // eax
  unsigned int v37; // edx
  int v38; // eax
  __int64 v39; // r8
  struct tagWND *v40; // rbx
  int v41; // r15d
  __int64 v42; // rdx
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rcx
  int v48; // ebx
  __int64 v49; // rdx
  int v50; // eax
  __int64 MenuStateWindow; // rax
  struct tagWND *v52; // rbx
  __int64 v53; // rdx
  int v54; // eax
  unsigned int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  struct tagWND *v59; // rcx
  unsigned int v60; // [rsp+20h] [rbp-50h] BYREF
  ULONG_PTR v61; // [rsp+28h] [rbp-48h] BYREF
  ULONG_PTR v62; // [rsp+30h] [rbp-40h]
  __int64 v63; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR v65[2]; // [rsp+50h] [rbp-20h] BYREF

  v3 = *a3;
  BugCheckParameter3[1] = 0LL;
  v5 = -1LL;
  v60 = 0;
  BugCheckParameter3[0] = -1LL;
  if ( !(*v3)[5] )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_DWORD *)(a1 + 8);
  v10 = *(_DWORD *)(a1 + 16);
  v63 = v8;
  if ( v9 > 0x105 )
  {
    v11 = 515LL;
    if ( v9 <= 0x203 )
    {
      if ( v9 == 515 )
        goto LABEL_102;
      v43 = v9 - 262;
      if ( v43 )
      {
        v44 = v43 - 18;
        if ( !v44 )
          goto LABEL_117;
        v45 = v44 - 232;
        if ( !v45 )
        {
LABEL_7:
          v13 = *(_DWORD *)(a2 + 8);
          if ( (v13 & 0x400) != 0 && (v13 & 8) != 0 && (v13 & 0x80u) == 0 && (v13 & 0x40) == 0 )
          {
            if ( *(_QWORD *)(a2 + 64) )
            {
              v61 = *(_QWORD *)(a2 + 56);
              v62 = v61;
              v47 = *(_QWORD *)(W32GetUserSessionState(v11, -1LL) + 19928);
              v48 = *(_DWORD *)(v47 + 2172);
              HIDWORD(v61) -= v48;
              HIDWORD(v62) += v48;
              v50 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v47, v49) + 19928) + 2168LL);
              LODWORD(v61) = v61 - v50;
              LODWORD(v62) = v50 + v62;
              LODWORD(v63) = (__int16)v8;
              HIDWORD(v63) = SWORD1(v8);
              if ( !(unsigned int)PtInRect(&v61) )
              {
                MenuStateWindow = GetMenuStateWindow(a2);
                if ( MenuStateWindow )
                {
                  *(_DWORD *)(a2 + 8) |= 0x80u;
                  PostMessage(MenuStateWindow, 500, 0, 0);
                }
              }
            }
          }
          xxxMNMouseMove(a3, a2, (unsigned int)v8);
          goto LABEL_9;
        }
        v46 = v45 - 1;
        if ( !v46 )
          goto LABEL_20;
        if ( v46 != 1 )
          return 0LL;
LABEL_52:
        v38 = *(_DWORD *)(a2 + 8);
        if ( (v38 & 8) == 0 )
        {
LABEL_117:
          Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v5);
          return 1LL;
        }
        if ( (v38 & 0x400) != 0 )
        {
          UnlockMFMWFPWindow(a2 + 64);
          v55 = *(_DWORD *)(a2 + 8) & 0xFFFFFF7F;
          *(_DWORD *)(a2 + 8) = v55;
          if ( (v55 & 0x2000) != 0 )
          {
            *(_DWORD *)(a2 + 8) = v55 & 0xFFFFDFF7;
            goto LABEL_117;
          }
        }
        AdjustMouseCoordinates((**a3)[2], &v63);
        v39 = v63;
        *(_DWORD *)(a2 + 12) = (__int16)v63;
        *(_DWORD *)(a2 + 16) = SWORD1(v39);
        v40 = (struct tagWND *)xxxMNFindWindowFromPoint(a3, &v60, v39);
        v41 = IsMFMWFPWindow(v40);
        if ( v41 )
          Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>(BugCheckParameter3, v40);
        v14 = **a3;
        if ( (*v14 & 2) != 0 )
        {
          v15 = v60;
          if ( !v40 && !v60 )
            goto LABEL_28;
          if ( v40 != (struct tagWND *)0xFFFFFFFFLL )
          {
LABEL_60:
            if ( v41 )
              xxxSendMessage(v40, 0x1EFu);
            else
              *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
            goto LABEL_9;
          }
          if ( (*(_DWORD *)**a3 & 4) != 0 && (*(_DWORD *)**a3 & 0x80u) != 0 )
            goto LABEL_28;
        }
        else
        {
          if ( !v40 && !v60 && (*(_DWORD *)**a3 & 0x200) == 0 )
          {
            Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(&v61, (__int64)(**a3)[2]);
            xxxSendMessage((**a3)[2], 0x1E6u);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)&v61, v56);
            goto LABEL_9;
          }
          *(_DWORD *)**a3 &= ~0x200u;
          if ( v40 != (struct tagWND *)0xFFFFFFFFLL )
          {
            v15 = v60;
            goto LABEL_60;
          }
        }
        xxxMNButtonUp(a3, a2, v60, 0LL);
        goto LABEL_9;
      }
      goto LABEL_100;
    }
    v24 = v9 - 516;
    if ( !v24 )
    {
LABEL_19:
      if ( (*(_DWORD *)**a3 & 0x40) != 0 )
      {
LABEL_20:
        *(_DWORD *)(a2 + 20) = -1;
        AdjustMouseCoordinates((**a3)[2], &v63);
        v22 = v63;
        *(_DWORD *)(a2 + 12) = (__int16)v63;
        *(_DWORD *)(a2 + 16) = SWORD1(v22);
        v23 = xxxMNFindWindowFromPoint(a3, &v60, v22);
        if ( (unsigned int)IsMFMWFPWindow(v23) )
          Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>(BugCheckParameter3, v23);
        if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
        {
          *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 12);
          *(_DWORD *)(a2 + 72) = v60;
          LockMFMWFPWindow(a2 + 64, v23);
        }
        if ( (*(_DWORD *)(a2 + 8) & 0x500) != 0 )
          *(_DWORD *)(a2 + 76) = ((v10 & 2) != 0) + 1;
        if ( !v23 && !v60 )
          goto LABEL_28;
        if ( (*(_DWORD *)**a3 & 2) != 0 && v23 == 4294967291LL )
        {
          xxxMNSwitchToAlternateMenu(a3, a2);
LABEL_138:
          xxxMNButtonDown(a3, a2, v60, 1LL);
          goto LABEL_139;
        }
        if ( v23 == 0xFFFFFFFFLL )
          goto LABEL_138;
        if ( (unsigned int)IsMFMWFPWindow(v23) )
        {
          xxxSendMessage(v59, 0x1EDu);
LABEL_139:
          if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
          {
            v37 = 516;
LABEL_51:
            xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), v37);
          }
LABEL_9:
          if ( BugCheckParameter3[0] != -1LL )
          {
            v16 = PtiCurrent(v15, (__int64)v14);
            Win32HM_UnlockFromThread<1>((ULONG_PTR)v16, BugCheckParameter3);
          }
          return 1LL;
        }
LABEL_28:
        xxxMNCancel(a2, 0LL, 0LL, 0LL);
        goto LABEL_9;
      }
      goto LABEL_48;
    }
    v25 = v24 - 1;
    if ( !v25 )
      goto LABEL_111;
    v26 = v25 - 1;
    if ( v26 )
    {
      v27 = v26 - 60;
      if ( v27 && v27 != 4 )
        return 0LL;
      v28 = *(_WORD *)(a1 + 16);
      v29 = PtiCurrent(515LL, -1LL);
      if ( (unsigned int)IsPointerPrimary(v29, v28) && !xxxMNFindWindowFromPoint(a3, &v60, (unsigned int)v8) )
        xxxMNCancel(a2, 0LL, 0LL, 0LL);
      goto LABEL_12;
    }
LABEL_48:
    *(_DWORD *)(a2 + 20) = -1;
    AdjustMouseCoordinates((**a3)[2], &v63);
    if ( xxxMNFindWindowFromPoint(a3, &v60, (unsigned int)v63) )
    {
      if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
        goto LABEL_9;
      v37 = 0;
      goto LABEL_51;
    }
    goto LABEL_73;
  }
  if ( v9 == 261 )
  {
    if ( v10 == 18 || v10 == 121 )
      goto LABEL_117;
    goto LABEL_84;
  }
  v11 = 165LL;
  if ( v9 > 0xA5 )
  {
    v32 = v9 - 166;
    if ( v32 )
    {
      v33 = v32 - 90;
      if ( !v33 )
        goto LABEL_43;
      v34 = v33 - 1;
      if ( !v34 )
        goto LABEL_84;
      v35 = v34 - 1;
      if ( v35 )
      {
        if ( v35 != 2 )
          return 0LL;
LABEL_43:
        v36 = *(_DWORD *)(a2 + 8);
        if ( (v36 & 8) != 0 && v10 != 112 )
        {
          if ( (v36 & 0x80u) != 0 && v10 == 27 )
            *(_DWORD *)(a2 + 8) = v36 | 0x2000;
          return 1LL;
        }
        *(_DWORD *)(a2 + 20) = 1;
        if ( v10 > 0x25 )
        {
          if ( v10 != 38 && v10 != 39 && v10 != 40 && v10 != 112 && v10 != 121 )
            goto LABEL_84;
        }
        else if ( v10 != 37 && v10 != 3 )
        {
          if ( v10 == 9 )
          {
            if ( (*(_DWORD *)**a3 & 1) != 0 && !(**a3)[7] )
              goto LABEL_73;
          }
          else if ( v10 == 13 || v10 == 18 || v10 == 27 )
          {
            goto LABEL_79;
          }
LABEL_84:
          if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
            xxxTranslateMessage(a1, 0LL);
          goto LABEL_117;
        }
LABEL_79:
        if ( !(**a3)[7] )
        {
          xxxMNKeyDown(a3, a2, v10);
          goto LABEL_117;
        }
LABEL_81:
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(&v61, (**a3)[7]);
        xxxSendMessage((**a3)[7], *(_DWORD *)(a1 + 8));
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)&v61, v42);
        goto LABEL_117;
      }
LABEL_100:
      if ( !(**a3)[7] )
      {
        xxxMNChar(a3, a2, v10);
        goto LABEL_117;
      }
      goto LABEL_81;
    }
    goto LABEL_48;
  }
  if ( v9 == 165 )
  {
LABEL_111:
    if ( (*(_DWORD *)**a3 & 0x40) != 0 )
      goto LABEL_52;
    v54 = *(_DWORD *)(a2 + 8);
    if ( (v54 & 8) != 0 )
    {
      if ( (v54 & 0x100) == 0 )
        xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 0);
      goto LABEL_117;
    }
    if ( *(_DWORD *)(a1 + 8) != 517 || (*(_DWORD *)**a3 & 0x800) != 0 )
      return 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(&v61);
    v57 = safe_cast_fnid_to_PMENUWND((**a3)[7]);
    if ( v57 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v61, *(_QWORD *)(v57 + 8));
      if ( *(_QWORD *)v61 )
      {
        if ( *(int *)(*(_QWORD *)v61 + 80LL) >= 0 && *(_QWORD *)(*(_QWORD *)v61 + 8LL) )
        {
          Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v65, *(_QWORD *)(*(_QWORD *)v61 + 8LL));
          xxxSendMessage(*(struct tagWND **)(*(_QWORD *)v61 + 8LL), 0x122u);
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v65, v58);
        }
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v61);
LABEL_12:
    if ( BugCheckParameter3[0] != -1LL )
    {
      v18 = PtiCurrent(v31, v30);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v18, BugCheckParameter3);
    }
    return 0LL;
  }
  v12 = v9 - 160;
  if ( !v12 )
    goto LABEL_7;
  v19 = v12 - 1;
  if ( !v19 )
    goto LABEL_20;
  v20 = v19 - 1;
  if ( !v20 )
    goto LABEL_52;
  v21 = v20 - 1;
  if ( !v21 )
  {
LABEL_102:
    *(_DWORD *)(a2 + 20) = -1;
    AdjustMouseCoordinates((**a3)[2], &v63);
    v52 = (struct tagWND *)xxxMNFindWindowFromPoint(a3, &v60, (unsigned int)v63);
    if ( v52 || v60 )
    {
      if ( (*(_DWORD *)**a3 & 2) != 0 && v52 == (struct tagWND *)4294967291LL )
      {
        xxxMNSwitchToAlternateMenu(a3, a2);
      }
      else if ( v52 != (struct tagWND *)0xFFFFFFFFLL )
      {
        if ( (unsigned int)IsMFMWFPWindow(v52) )
        {
          Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>(BugCheckParameter3, v52);
          xxxSendMessage(v52, 0x1F1u);
          Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v53);
          goto LABEL_117;
        }
        goto LABEL_73;
      }
      xxxMNDoubleClick(a2, a3, v60);
      goto LABEL_117;
    }
LABEL_73:
    xxxMNCancel(a2, 0LL, 0LL, 0LL);
    goto LABEL_117;
  }
  if ( v21 == 1 )
    goto LABEL_19;
  return 0LL;
}
