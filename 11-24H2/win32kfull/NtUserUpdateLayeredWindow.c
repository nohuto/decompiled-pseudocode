/*
 * XREFs of NtUserUpdateLayeredWindow @ 0x140034540
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x140035DCC (zzzUpdateLayeredWindow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x140046DB4 (IsTopLevelOrLayeredChildWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x14008BA78 (UpdateMonitorForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x14008CEB0 (xxxNotifyMonitorChanged.c)
 *     GetNewMonitor @ 0x14008D07C (GetNewMonitor.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     UserSetLastStatus @ 0x14015E5E8 (UserSetLastStatus.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x140238CF0 (xxxAppAdjustDpiCandidateRect.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserUpdateLayeredWindow(
        __int64 a1,
        ULONG_PTR a2,
        ULONG64 a3,
        __int64 *a4,
        __int64 a5,
        struct tagBWL *a6,
        int a7,
        __int64 a8,
        int a9,
        unsigned __int64 a10)
{
  __int128 *v12; // r13
  __int64 *v13; // r15
  int *v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rax
  struct tagWND *v17; // rsi
  struct tagBWL **v18; // rdx
  __int128 **v19; // rcx
  __int64 *v20; // rdx
  __int128 *v21; // rdx
  __int64 *v22; // r12
  int v23; // edi
  NTSTATUS updated; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 NewMonitor; // r14
  __int64 v28; // rax
  __int64 v29; // r15
  __int16 v30; // bx
  struct tagTHREADINFO *v31; // rax
  __int64 v32; // rax
  __int64 v35; // [rsp+58h] [rbp-100h] BYREF
  struct tagBWL **v36; // [rsp+60h] [rbp-F8h]
  int v37; // [rsp+70h] [rbp-E8h]
  __int64 v38; // [rsp+78h] [rbp-E0h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+80h] [rbp-D8h] BYREF
  ULONG_PTR v40[2]; // [rsp+90h] [rbp-C8h] BYREF
  struct tagBWL *v41; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 *v43; // [rsp+B0h] [rbp-A8h]
  __int64 v44; // [rsp+B8h] [rbp-A0h]
  __int64 *v45; // [rsp+C0h] [rbp-98h]
  __int64 v46[2]; // [rsp+C8h] [rbp-90h] BYREF
  __int64 *v47; // [rsp+E0h] [rbp-78h]
  __int128 *v48; // [rsp+E8h] [rbp-70h]
  __int128 v49; // [rsp+F8h] [rbp-60h]
  __int128 v50; // [rsp+108h] [rbp-50h] BYREF

  BugCheckParameter3[0] = a2;
  v46[0] = a5;
  v36 = (struct tagBWL **)a6;
  *(_QWORD *)&v49 = a8;
  v12 = (__int128 *)a10;
  v41 = 0LL;
  v44 = 0LL;
  v38 = 0LL;
  v45 = 0LL;
  v42 = 0LL;
  v13 = 0LL;
  v47 = 0LL;
  LODWORD(v35) = 0;
  v43 = 0LL;
  v50 = 0LL;
  v14 = 0LL;
  v48 = 0LL;
  v15 = EnterCrit(0LL, 0LL);
  v16 = ValidateReceivingHwnd(a1, 1LL);
  v17 = (struct tagWND *)v16;
  if ( v16 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(v40, v15, v16);
    v18 = v36;
    if ( v36 )
    {
      if ( (unsigned __int64)v36 >= MmUserProbeAddress )
        v18 = (struct tagBWL **)MmUserProbeAddress;
      v36 = (struct tagBWL **)*v18;
      v41 = (struct tagBWL *)v36;
      v44 = (__int64)&v41;
    }
    v19 = (__int128 **)MmUserProbeAddress;
    if ( !a4 )
      goto LABEL_11;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__int64 *)MmUserProbeAddress;
    v38 = *a4;
    v45 = &v38;
    if ( (int)v38 < 0 || v38 < 0 )
    {
      v23 = 0;
      v37 = 0;
      UserSetLastError(87LL);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v40);
    }
    else
    {
LABEL_11:
      v20 = (__int64 *)a3;
      if ( a3 )
      {
        if ( a3 >= MmUserProbeAddress )
          v20 = (__int64 *)MmUserProbeAddress;
        v42 = *v20;
        v13 = &v42;
        v47 = &v42;
        v19 = (__int128 **)MmUserProbeAddress;
      }
      v21 = (__int128 *)v49;
      if ( (_QWORD)v49 )
      {
        if ( (unsigned __int64)v49 >= (unsigned __int64)*v19 )
          v21 = *v19;
        LODWORD(v35) = *(_DWORD *)v21;
        v22 = &v35;
        v43 = &v35;
      }
      else
      {
        v22 = v43;
      }
      if ( a10 )
      {
        if ( a10 >= (unsigned __int64)*v19 )
          v12 = *v19;
        v50 = *v12;
        v14 = (int *)&v50;
        v48 = &v50;
      }
      if ( (a9 & 0xFFFFFFD0) != 0 )
      {
        UserSetLastError(87LL);
        v23 = 0;
      }
      else if ( v14 && (*v14 < 0 || v14[1] < 0) )
      {
        UserSetLastError(87LL);
        v23 = 0;
        UserSetLastError(87LL);
      }
      else
      {
        if ( v13 && *((_QWORD *)v17 + 13) && (unsigned int)IsTopLevelOrLayeredChildWindow(v17) )
          IsTopLevelWindow(v17);
        v49 = *(_OWORD *)(*((_QWORD *)v17 + 5) + 88LL);
        updated = zzzUpdateLayeredWindow(v17, v46[0], v44, a7, (__int64)v22, a9, (__int64)v14);
        if ( updated < 0 )
        {
          v23 = 0;
          UserSetLastStatus(updated);
        }
        else
        {
          v23 = 1;
          v25 = *((_QWORD *)v17 + 5);
          v26 = v49 - *(_QWORD *)(v25 + 88);
          if ( (_QWORD)v49 == *(_QWORD *)(v25 + 88) )
            v26 = *((_QWORD *)&v49 + 1) - *(_QWORD *)(v25 + 96);
          if ( v26 )
          {
            *(_OWORD *)v46 = 0LL;
            NewMonitor = GetNewMonitor(v17);
            v28 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v17 + 5) + 256LL));
            v29 = v28;
            if ( NewMonitor )
            {
              if ( NewMonitor != v28 )
              {
                Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v15, NewMonitor);
                v36 = 0LL;
                if ( v29 )
                  v30 = *(_WORD *)(*(_QWORD *)(v29 + 40) + 60LL);
                else
                  v30 = 0;
                if ( *(_WORD *)(*(_QWORD *)(NewMonitor + 40) + 60LL) != v30 )
                  xxxAppAdjustDpiCandidateRect(v17);
                v31 = PtiCurrent();
                v32 = Win32HM_UnlockFromThread<0>((ULONG_PTR)v31, (ULONG_PTR)BugCheckParameter3);
                BugCheckParameter3[1] = 0LL;
                BugCheckParameter3[0] = -1LL;
                if ( v32 && (unsigned int)UpdateMonitorForWindowAndChildren(v17, (struct tagMONITOR *)NewMonitor) )
                  xxxNotifyMonitorChanged(v17, (struct tagRECT *)v46, (struct tagBWL *)v36);
                Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>((ULONG_PTR)BugCheckParameter3);
              }
            }
          }
        }
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v40);
    }
  }
  else
  {
    v23 = 0;
  }
  UserSessionSwitchLeaveCrit();
  return v23;
}
