/*
 * XREFs of xxxCsDdeInitialize @ 0x14015F1B4
 * Callers:
 *     NtUserDdeInitialize @ 0x14015F0B0 (NtUserDdeInitialize.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1400733C8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14009D218 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x14015F628 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     xxxChangeMonitorFlags @ 0x14015FB8C (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall xxxCsDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // r13
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v10; // rcx
  char v11; // r15
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 UserSessionState; // rax
  struct tagWND *Window; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbx
  struct tagWND **v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct tagTHREADINFO *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct tagTHREADINFO *v41; // rax
  struct tagTHREADINFO *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+98h] [rbp-41h] BYREF
  _QWORD v48[2]; // [rsp+A8h] [rbp-31h] BYREF
  ULONG_PTR v49[2]; // [rsp+B8h] [rbp-21h] BYREF
  _BYTE v50[16]; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v51[10]; // [rsp+D8h] [rbp-1h] BYREF

  v6 = 0LL;
  v8 = PtiCurrent((__int64)a1, (__int64)a2);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v8 + 132, 0, 0) & 1) != 0 )
    return 16399LL;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v7);
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    goto LABEL_4;
  v44 = PsGetCurrentProcessWin32Process(v10);
  if ( v44 )
    v44 &= -(__int64)(*(_QWORD *)v44 != 0LL);
  v11 = 1;
  if ( !(unsigned int)IsImmersiveAppRestricted(v44) )
LABEL_4:
    v11 = 0;
  v12 = SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v51, 0LL);
  v15 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19928);
  v16 = *(unsigned __int16 *)(v15 + 884);
  UserSessionState = W32GetUserSessionState(v15, v17);
  Window = (struct tagWND *)xxxCreateWindowEx(
                              0,
                              (wchar_t *)*(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19928) + 884LL),
                              v16,
                              0LL,
                              -1073741824,
                              0,
                              0,
                              0,
                              0,
                              0LL,
                              (__int64)v12,
                              hModuleWin,
                              0LL,
                              0,
                              0x30Au,
                              v11,
                              0LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v51, v20);
  if ( !Window )
    return 16399LL;
  v23 = PtiCurrent(v22, v21);
  LOBYTE(v24) = 9;
  v25 = HMAllocObject(v23, 0LL, v24, 64LL);
  v27 = v25;
  if ( !v25 )
  {
    xxxDestroyWindow(Window, v26);
    return 16399LL;
  }
  v28 = (struct tagWND **)(v25 + 48);
  v48[1] = Window;
  v48[0] = v25 + 48;
  HMAssignmentLock(v48, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v50);
  xxxSetWindowLongPtr(*v28, 0, *(_QWORD *)v27, 0, 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v50);
  *(_QWORD *)(v27 + 56) = a5;
  *(_DWORD *)(v27 + 40) = 0;
  v31 = *(_QWORD *)(W32GetUserSessionState(v30, v29) + 66936);
  *(_QWORD *)(v27 + 24) = v31;
  *(_QWORD *)(W32GetUserSessionState(v31, v32) + 66936) = v27;
  *(_QWORD *)(v27 + 32) = *((_QWORD *)v8 + 83);
  *((_QWORD *)v8 + 83) = v27;
  Win32HM_LockIntoThread<0>((__int64)v8, v27, v49);
  Win32HM_LockIntoThread<0>((__int64)v8, (__int64)Window, BugCheckParameter3);
  xxxChangeMonitorFlags(v27, a4);
  if ( (*(_BYTE *)(_HMPheFromObject(v27) + 25) & 1) != 0 )
  {
    HMAssignmentUnlock(v28);
    v37 = PtiCurrent(v36, v35);
    v38 = Win32HM_UnlockFromThread<0>((ULONG_PTR)v37, BugCheckParameter3);
    BugCheckParameter3[0] = -1LL;
    BugCheckParameter3[1] = 0LL;
    if ( v38 )
    {
      xxxDestroyWindow(Window, v39);
      if ( BugCheckParameter3[0] != -1LL )
      {
        v43 = PtiCurrent(v40, v39);
        Win32HM_UnlockFromThread<0>((ULONG_PTR)v43, BugCheckParameter3);
      }
    }
    v41 = PtiCurrent(v40, v39);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v41, v49);
    return 16399LL;
  }
  *a1 = *(_QWORD *)v27;
  if ( *v28 )
    v6 = *(_QWORD *)*v28;
  *a2 = v6;
  *a3 = *(_DWORD *)(W32GetUserSessionState(v34, v33) + 66944);
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v45);
  Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(v49, v46);
  return 0LL;
}
