/*
 * XREFs of xxxMNCloseHierarchy @ 0x14009E0A0
 * Callers:
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     xxxMNCancel @ 0x14009D784 (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x14009DA30 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxMNKeyDown @ 0x1402BE09C (xxxMNKeyDown.c)
 *     xxxEndMenu @ 0x1402E8608 (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1402EB098 (xxxMNKeyFilter.c)
 * Callees:
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x140046AF8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140046B4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     FindTimer @ 0x14005FED0 (FindTimer.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNAnimate @ 0x14006F328 (MNAnimate.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMenuSelect @ 0x14009E36C (xxxSendMenuSelect.c)
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140183234 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401AF538 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140282D2C (safe_cast_fnid_to_PMENUWND.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1402BD444 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 */

_QWORD *__fastcall xxxMNCloseHierarchy(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  struct tagWND *v4; // rbx
  struct tagTHREADINFO *v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  struct tagMENUWND *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  _QWORD v19[2]; // [rsp+38h] [rbp-29h] BYREF
  ULONG_PTR v20[2]; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v21[2]; // [rsp+58h] [rbp-9h] BYREF
  ULONG_PTR v22[3]; // [rsp+68h] [rbp+7h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+80h] [rbp+1Fh] BYREF
  ULONG_PTR v24[2]; // [rsp+90h] [rbp+2Fh] BYREF
  ULONG_PTR v25[3]; // [rsp+A0h] [rbp+3Fh] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, a1);
  MNAnimate((__int64 *)a2, 0LL);
  if ( (**(_DWORD **)v19[0] & 0x20) != 0 )
  {
    if ( (**(_DWORD **)v19[0] & 0x4000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v19[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v19[0] &= ~0x4000u;
    }
    v4 = *(struct tagWND **)(*(_QWORD *)v19[0] + 24LL);
    if ( v4 )
    {
      v5 = PtiCurrent(*(_QWORD *)v19[0], v3);
      Win32HM_LockIntoThread<0>((__int64)v5, (__int64)v4, v20);
      xxxSendMessage(v4, 0x1E4u);
      v6 = *(_DWORD *)(a2 + 8);
      if ( (v6 & 0x100) != 0 && (v6 & 4) != 0 && (**(_DWORD **)v19[0] & 1) == 0 )
      {
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v22, *(_QWORD *)(*(_QWORD *)v19[0] + 16LL));
        xxxActivateWindowWithOptions(*(_QWORD *)(*(_QWORD *)v19[0] + 16LL), 0LL, 0LL, 1LL, 0);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v22, v7);
      }
      xxxWindowEvent(7u, v4, -4, 0, 0);
      if ( Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>((ULONG_PTR)v20) )
      {
        if ( !(unsigned int)xxxDestroyWindow(v4) )
        {
          v8 = (struct tagMENUWND *)safe_cast_fnid_to_PMENUWND(v4);
          if ( v8 )
            xxxMNDestroyHandler(v8);
        }
      }
      HMAssignmentUnlock(*(_QWORD *)v19[0] + 24LL);
      **(_DWORD **)v19[0] &= ~0x20u;
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(v20, v9);
    }
    v10 = *(_QWORD *)v19[0];
    if ( (**(_DWORD **)v19[0] & 1) != 0 )
    {
      HMAssignmentUnlock(v10 + 56);
    }
    else
    {
      v21[1] = *(_QWORD *)(v10 + 16);
      v21[0] = *(_QWORD *)(*(_QWORD *)v19[0] + 64LL) + 56LL;
      HMAssignmentLock(v21, 0LL);
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 && *(_DWORD *)(*(_QWORD *)v19[0] + 80LL) != -1 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)v19[0] + 64LL);
      v12 = *(_QWORD *)(v11 + 8);
      if ( v12 )
      {
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v25, *(_QWORD *)(v11 + 8));
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v24, *(_QWORD *)(*(_QWORD *)v19[0] + 16LL));
        Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(
          BugCheckParameter3,
          *(_QWORD *)(*(_QWORD *)v19[0] + 40LL));
        v13 = *(_DWORD *)(*(_QWORD *)v19[0] + 80LL);
        SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v22, *(_QWORD *)(*(_QWORD *)v19[0] + 40LL));
        xxxSendMenuSelect(v12, *(_QWORD *)(*(_QWORD *)v19[0] + 16LL), (unsigned int)v22, v13, a2);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v22, v14);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v15);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v24, v16);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v25, v17);
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v19, v3);
}
