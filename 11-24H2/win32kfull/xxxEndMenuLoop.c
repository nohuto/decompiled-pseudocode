/*
 * XREFs of xxxEndMenuLoop @ 0x1402517D0
 * Callers:
 *     xxxMNLoop @ 0x14009B5E0 (xxxMNLoop.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxCallHandleMenuMessages @ 0x1402270AC (xxxCallHandleMenuMessages.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxDWP_DoNCActivate @ 0x14006CB5C (xxxDWP_DoNCActivate.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     xxxMNCancel @ 0x14009D784 (xxxMNCancel.c)
 *     xxxDrawMenuBarUnderlines @ 0x1401FF370 (xxxDrawMenuBarUnderlines.c)
 *     xxxEndMenu @ 0x1402E8608 (xxxEndMenu.c)
 */

_QWORD *__fastcall xxxEndMenuLoop(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  _DWORD *v4; // rbx
  __int64 v5; // rdx
  int v6; // edi
  struct tagWND *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // bl
  __int64 v12; // rdx
  _QWORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR v16[2]; // [rsp+40h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v14, a2);
  v3 = *(_QWORD *)v14[0];
  if ( (**(_DWORD **)v14[0] & 8) != 0 )
  {
    v3 = *(_QWORD *)v14[0];
    if ( (**(_DWORD **)v14[0] & 0x80000) == 0 )
      xxxMNCancel(a1, 0, 0, 0LL);
    v4 = (_DWORD *)(a1 + 8);
  }
  else
  {
    v4 = (_DWORD *)(a1 + 8);
    if ( (*(_DWORD *)(a1 + 8) & 0x20) != 0 )
    {
      Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(
        BugCheckParameter3,
        *(_QWORD *)(*(_QWORD *)v14[0] + 8LL));
      xxxDrawMenuBarUnderlines(*(_QWORD *)(*(_QWORD *)v14[0] + 8LL), 0LL);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v5);
    }
    if ( (*v4 & 0x10) == 0 )
      xxxEndMenu(a1);
  }
  if ( (*v4 & 0x100) != 0 )
  {
    v6 = 0;
    if ( *(_QWORD *)(*(_QWORD *)v14[0] + 8LL) )
    {
      v7 = *(struct tagWND **)(*(_QWORD *)v14[0] + 8LL);
      v8 = *((_QWORD *)v7 + 2);
      v9 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)v14[0], v3) + 18944);
      v10 = *(_QWORD *)(v8 + 472);
      if ( v10 == v9 && *(struct tagWND **)(v10 + 128) == v7 )
      {
        v6 = 1;
        v11 = 1;
      }
      else
      {
        v11 = 2;
      }
      if ( ((*(unsigned __int8 *)(*((_QWORD *)v7 + 5) + 16LL) >> 6) & 1) != v6 )
      {
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v16, (__int64)v7);
        xxxDWP_DoNCActivate(v7, v11, 1LL);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v16, v12);
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v14, v3);
}
