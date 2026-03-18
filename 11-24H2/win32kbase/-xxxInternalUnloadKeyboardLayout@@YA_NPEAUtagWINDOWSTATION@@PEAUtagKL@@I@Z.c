/*
 * XREFs of ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x14020F940
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011AEC8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxFreeKeyboardLayouts @ 0x140147D8C (xxxFreeKeyboardLayouts.c)
 *     NtUserUnloadKeyboardLayout @ 0x1401BE090 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     HMMarkObjectDestroy @ 0x140041E50 (HMMarkObjectDestroy.c)
 *     HMAssignmentUnlock @ 0x14005F130 (HMAssignmentUnlock.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ @ 0x1400960F0 (--1-$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagKL@@$0A@$00@@QEAAPEAUtagKL@@XZ @ 0x140096354 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagKL@@$0A@$00@@QEAAPEAUtagKL@@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x1400963B8 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     HKLtoPKL @ 0x140096C10 (HKLtoPKL.c)
 *     xxxInternalActivateKeyboardLayout @ 0x140096CA0 (xxxInternalActivateKeyboardLayout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1400F3EC8 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ?GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z @ 0x140110414 (-GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxWindowEvent @ 0x140140F70 (xxxWindowEvent.c)
 *     ?UnloadKeyboardLayout@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z @ 0x140159388 (-UnloadKeyboardLayout@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x140192994 (ApiSetEditionNotifyShellLanguageHook.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline @ 0x14020FBE8 (Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall xxxInternalUnloadKeyboardLayout(struct tagWINDOWSTATION *a1, struct tagKL *a2, signed int a3)
{
  struct tagTHREADINFO *v6; // rdi
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  struct tagKL *v16; // rdx
  _QWORD v17[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-28h] BYREF

  v6 = PtiCurrent((__int64)a1);
  if ( a2 == *(struct tagKL **)(W32GetUserSessionState(v7) + 14272) && a3 >= 0 )
    return 0;
  v17[0] = *((_QWORD *)v6 + 57);
  *((_QWORD *)v6 + 57) = v17;
  v17[1] = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  InputTraceLogging::Keyboard::UnloadKeyboardLayout(a2);
  if ( a2 == *(struct tagKL **)(W32GetUserSessionState(v9) + 14240) )
  {
    UserSessionState = W32GetUserSessionState(v10);
    HMAssignmentUnlock((__int64 *)(UserSessionState + 14240));
  }
  if ( (unsigned int)Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline()
    && a2 == *(struct tagKL **)(W32GetUserSessionState(v12) + 14248) )
  {
    v14 = W32GetUserSessionState(v13);
    HMAssignmentUnlock((__int64 *)(v14 + 14248));
  }
  HMMarkObjectDestroy(a2);
  *((_DWORD *)a2 + 8) |= 0x20000000u;
  if ( a3 >= 0 && *((struct tagKL **)v6 + 60) == a2 )
  {
    v15 = HKLtoPKL((__int64)v6, 1LL);
    if ( v15 )
    {
      v18[0] = *((_QWORD *)v6 + 57);
      *((_QWORD *)v6 + 57) = v18;
      v18[1] = v15;
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      xxxInternalActivateKeyboardLayout((__int64)a1, v15, a3, 0LL);
      Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>((ULONG_PTR)v18);
    }
  }
  if ( GetKbdLayoutListHead(a1) == a2 )
  {
    v16 = (struct tagKL *)*((_QWORD *)a2 + 2);
    if ( a2 != v16 && !LockKbdLayoutListHead(a1, v16) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3164);
  }
  Win32HMThreadLockBase<tagKL,0,1>::ManualUnlock<void>(v17);
  xxxWindowEvent(0x80000000LL, 0LL, 0, 0, 0);
  ApiSetEditionNotifyShellLanguageHook((__int64)v6, 0LL, 0);
  Win32HMThreadLockBase<tagMONITOR,0,1>::~Win32HMThreadLockBase<tagMONITOR,0,1>(v17);
  return 1;
}
