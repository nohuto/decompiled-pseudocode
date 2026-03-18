/*
 * XREFs of ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1402716B8
 * Callers:
 *     NtUserSetSystemCursor @ 0x140214240 (NtUserSetSystemCursor.c)
 * Callees:
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x140093660 (CheckWinstaAttributeAccess.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140133ED4 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall zzzSetSystemCursor(struct tagCURSOR *a1, __int64 a2)
{
  __int16 v2; // bp
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rdx
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  v3 = 0;
  v4 = 0LL;
  do
  {
    if ( *(_WORD *)(W32GetUserSessionState(a1, a2) + v4 + 21928) == v2 )
      goto LABEL_5;
    ++v3;
    v4 += 552LL;
  }
  while ( v3 < 0x13 );
  if ( v3 == 19 )
    return 0;
LABEL_5:
  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL) )
    return 0;
  if ( (*((_DWORD *)a1 + 20) & 0x40) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1793);
    return 0;
  }
  v9 = *((_QWORD *)a1 + 6);
  v10 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 552LL * v3 + 21936);
  v13 = PtiCurrent(v12, v11);
  Win32HM_LockIntoThread<1>((__int64)v13, v10, (__int64 *)BugCheckParameter3);
  zzzInternalSetSystemCursor(v9, v3, 0LL, 3u);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v14);
  return 1;
}
