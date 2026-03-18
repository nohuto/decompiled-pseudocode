/*
 * XREFs of ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1401C4F1C
 * Callers:
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14002F994 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     GreSaveDC @ 0x140036E78 (GreSaveDC.c)
 *     GreGetLayout @ 0x140037748 (GreGetLayout.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140068C50 (-IsInsideUserApiHook@@YAHXZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     GreSetWindowOrg @ 0x1401C555C (GreSetWindowOrg.c)
 *     _IsWindowVisible @ 0x1401CE4CC (_IsWindowVisible.c)
 *     xxxDrawWindowFrame @ 0x140255644 (xxxDrawWindowFrame.c)
 */

__int64 __fastcall xxxDWPPrint(struct tagWND *a1, HDC a2, __int64 a3)
{
  char v3; // si
  struct tagWND *v5; // rbx
  BOOL v6; // r13d
  int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r12d
  __int64 v11; // rcx
  struct tagBWL *v13; // rax
  __int64 v14; // rdx
  struct tagBWL *v15; // r15
  __int64 *i; // r12
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rdx
  unsigned int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // rax
  struct tagBWL *v24; // rcx
  __int64 DesktopWindow; // rax
  struct tagBWL *v26; // rax
  __int64 v27; // rdx
  struct tagBWL *v28; // rbx
  struct tagWND *v29; // r12
  __int64 *j; // r14
  __int64 v31; // rax
  struct tagWND *v32; // rsi
  unsigned int v33; // r15d
  __int64 v34; // rdx
  int v35; // r14d
  unsigned int v36; // r12d
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // r14d
  unsigned int v40; // r13d
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-10h] BYREF
  struct _POINTL v42; // [rsp+80h] [rbp+40h] BYREF
  struct tagWND *v43; // [rsp+90h] [rbp+50h]
  __int64 v44; // [rsp+98h] [rbp+58h]

  v42 = 0LL;
  v3 = a3;
  v43 = a1;
  v44 = a3;
  v5 = a1;
  if ( (a3 & 1) != 0 && !(unsigned int)IsWindowVisible(a1) )
    return 0LL;
  v6 = (*(_BYTE *)(*((_QWORD *)v5 + 5) + 26LL) & 0x40) != 0 && (GreGetLayout(a2) & 1) == 0;
  if ( (v3 & 2) != 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 0x10) != 0 )
    {
      v7 = 0;
    }
    else
    {
      v7 = 1;
      SetVisible((__int64)v5, 5u);
    }
    SetOrClrWF(1, v5, 0x180u, 1);
    if ( v6 )
    {
      v35 = *(_DWORD *)(*((_QWORD *)v5 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 88LL);
      v36 = GreSetLayout(a2, (unsigned int)(v35 - 1), 1LL);
      if ( IsInsideUserApiHook(v38, v37) )
        xxxSendMessage(v5, 0xAFu);
      else
        xxxDrawWindowFrame(v5, a2);
      GreSetLayout(a2, (unsigned int)(v35 - 1), v36);
    }
    else if ( IsInsideUserApiHook(v9, v8) )
    {
      xxxSendMessage(v5, 0xAFu);
    }
    else
    {
      xxxDrawWindowFrame(v5, a2);
    }
    SetOrClrWF(0, v5, 0x180u, 1);
    if ( v7 )
      SetVisible((__int64)v5, 0);
  }
  if ( (v3 & 4) == 0 )
    return 1LL;
  v10 = GreSaveDC(a2);
  if ( !v10 )
    return 0LL;
  GreGetDCPoint(a2, 8u, &v42);
  if ( (v3 & 2) != 0 )
    GreSetWindowOrg(a2);
  GreIntersectClipRect(
    a2,
    0LL,
    0LL,
    (unsigned int)(*(_DWORD *)(*((_QWORD *)v5 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 104LL)),
    *(_DWORD *)(*((_QWORD *)v5 + 5) + 116LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 108LL));
  if ( v6 )
  {
    v39 = *(_DWORD *)(*((_QWORD *)v5 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 104LL);
    v40 = GreSetLayout(a2, (unsigned int)(v39 - 1), 1LL);
    if ( (v3 & 8) != 0 )
      xxxSendMessage(v5, 0x14u);
    xxxSendMessage(v5, 0x318u);
    GreSetLayout(a2, (unsigned int)(v39 - 1), v40);
  }
  else
  {
    if ( (v3 & 8) != 0 )
      xxxSendMessage(v5, 0x14u);
    xxxSendMessage(v5, 0x318u);
  }
  GreRestoreDC(a2, v10);
  v11 = *((_QWORD *)v5 + 5);
  v42.x += *(_DWORD *)(v11 + 88);
  v42.y += *(_DWORD *)(v11 + 92);
  if ( (v3 & 0x10) != 0 )
  {
    v3 = v3 & 0xF4 | 0xA;
    v13 = BuildHwndList(*((struct tagWND **)v5 + 14), 2LL, 0LL, 1);
    v15 = v13;
    if ( v13 )
    {
      for ( i = (__int64 *)((char *)v13 + 32); *i != 1; ++i )
      {
        LOBYTE(v14) = 1;
        v17 = HMValidateHandleNoSecure(*i, v14);
        v5 = (struct tagWND *)v17;
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 40);
          if ( (*(_BYTE *)(v18 + 31) & 0x10) != 0 )
          {
            v20 = GreSaveDC(a2);
            if ( !v20 )
            {
              v24 = v15;
              goto LABEL_35;
            }
            GreSetWindowOrg(a2);
            if ( *(char *)(*(_QWORD *)(*((_QWORD *)v5 + 17) + 8LL) + 8LL) >= 0 )
              GreIntersectClipRect(
                a2,
                0LL,
                0LL,
                (unsigned int)(*(_DWORD *)(v18 + 96) - *(_DWORD *)(v18 + 88)),
                *(_DWORD *)(v18 + 100) - *(_DWORD *)(v18 + 92));
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v5);
            xxxSendMessage(v5, 0x317u);
            v23 = PtiCurrent(v22, v21);
            Win32HM_UnlockFromThread<0>((ULONG_PTR)v23, BugCheckParameter3);
            GreRestoreDC(a2, v20);
          }
        }
      }
      FreeHwndList(v15, v14);
    }
  }
  if ( (v3 & 0x20) == 0 )
    return 1LL;
  DesktopWindow = GetDesktopWindow((__int64)v5);
  v26 = BuildHwndList(*(struct tagWND **)(DesktopWindow + 112), 2LL, 0LL, 1);
  v28 = v26;
  if ( !v26 )
    return 1LL;
  v29 = v43;
  for ( j = (__int64 *)((char *)v26 + 32); ; ++j )
  {
    if ( *j == 1 )
    {
      FreeHwndList(v28, v27);
      return 1LL;
    }
    LOBYTE(v27) = 1;
    v31 = HMValidateHandleNoSecure(*j, v27);
    v32 = (struct tagWND *)v31;
    if ( v31 )
    {
      if ( *(struct tagWND **)(v31 + 120) == v29 && (*(_BYTE *)(*(_QWORD *)(v31 + 40) + 31LL) & 0x10) != 0 )
        break;
    }
LABEL_41:
    ;
  }
  v33 = GreSaveDC(a2);
  if ( v33 )
  {
    GreSetWindowOrg(a2);
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v32);
    xxxSendMessage(v32, 0x317u);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v34);
    GreRestoreDC(a2, v33);
    goto LABEL_41;
  }
  v24 = v28;
LABEL_35:
  FreeHwndList(v24, v19);
  return 0LL;
}
