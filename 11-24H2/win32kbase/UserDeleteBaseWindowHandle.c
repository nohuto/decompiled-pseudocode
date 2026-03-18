/*
 * XREFs of UserDeleteBaseWindowHandle @ 0x1401BE850
 * Callers:
 *     NtMITMinuserWindowDestroyed @ 0x1401B8530 (NtMITMinuserWindowDestroyed.c)
 * Callees:
 *     _HMPheFromObject @ 0x140042A90 (_HMPheFromObject.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMDestroyUnlockedObject @ 0x1401B6480 (HMDestroyUnlockedObject.c)
 */

__int64 __fastcall UserDeleteBaseWindowHandle(__int64 a1)
{
  __int64 v2; // rdi
  struct tagTHREADINFO *v3; // rsi
  int *v4; // rax
  int *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *v9; // r14
  __int64 v10; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  int v13; // ecx

  v2 = 0LL;
  v3 = PtiCurrent(a1);
  if ( (*((_DWORD *)v3 + 340) & 0x1000000) == 0 )
    goto LABEL_11;
  v4 = (int *)HMValidateHandleNoSecure(a1, 23);
  v5 = v4;
  if ( !v4 )
  {
    v13 = 6;
    goto LABEL_12;
  }
  v6 = HMPheFromObject(v4);
  UserSessionState = W32GetUserSessionState(v7);
  v9 = *(struct tagTHREADINFO **)(*(_QWORD *)(UserSessionState + 19888)
                                + 40LL * (unsigned int)((v6 - *(_QWORD *)(UserSessionState + 19944)) >> 5)
                                + 8);
  v10 = *((_QWORD *)v9 + 58);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(5LL * (unsigned int)((v6
                                                                                   - *(_QWORD *)(UserSessionState + 19944)) >> 5));
  v12 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( v12 != v10 || v3 != v9 )
  {
    v13 = 5;
LABEL_12:
    UserSetLastError(v13);
    return v2;
  }
  if ( (*(_BYTE *)(v6 + 25) & 1) != 0 )
  {
LABEL_11:
    v13 = 4317;
    goto LABEL_12;
  }
  v2 = *((_QWORD *)v5 + 7);
  *((_QWORD *)v5 + 7) = 0LL;
  HMDestroyUnlockedObject((struct _HANDLEENTRY *)v6);
  return v2;
}
