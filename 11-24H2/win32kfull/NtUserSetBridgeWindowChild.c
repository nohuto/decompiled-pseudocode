/*
 * XREFs of NtUserSetBridgeWindowChild @ 0x14029C7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ValidateHwndIAM @ 0x1400F5AA4 (ValidateHwndIAM.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     xxxSetBridgeWindowChild @ 0x1402AB1C0 (xxxSetBridgeWindowChild.c)
 */

__int64 __fastcall NtUserSetBridgeWindowChild(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // r14
  int v7; // eax
  __int64 v8; // rdx
  int v9; // ebx
  int v10; // ecx
  __int64 v11; // rdx
  struct tagWND *v12; // rsi
  __int64 v13; // rax
  struct tagWND *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR v21[3]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  v6 = PtiCurrent(v5, v4);
  LOBYTE(v7) = IAMThreadAccessGranted(v6);
  v9 = 0;
  if ( !v7 )
  {
    v10 = 5;
LABEL_12:
    UserSetLastError(v10);
    goto LABEL_13;
  }
  v12 = (struct tagWND *)ValidateHwndIAM(a1, v8);
  if ( !v12
    || (v13 = ValidateHwndIAM(a2, v11), (v14 = (struct tagWND *)v13) == 0LL)
    || (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 232LL) & 0x40) == 0
    || !IsTopLevelWindow(v13)
    || !IsTopLevelWindow((__int64)v12)
    || (v15 = *((_QWORD *)v12 + 5), (*(_BYTE *)(v15 + 232) & 0x40) != 0)
    || (*(_BYTE *)(v15 + 31) & 8) != 0 )
  {
    v10 = 87;
    goto LABEL_12;
  }
  Win32HM_LockIntoThread<0>((__int64)v6, (__int64)v12, v21);
  Win32HM_LockIntoThread<0>((__int64)v6, (__int64)v14, BugCheckParameter3);
  v9 = xxxSetBridgeWindowChild(v12, v14);
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v16);
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v21, v17);
LABEL_13:
  UserSessionSwitchLeaveCrit(v18);
  return v9;
}
