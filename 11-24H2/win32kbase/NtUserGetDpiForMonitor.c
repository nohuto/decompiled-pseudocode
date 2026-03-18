/*
 * XREFs of NtUserGetDpiForMonitor @ 0x140010FF0
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x140010CF0 (DrvGetCurrentDpiInfoFromHDev.c)
 *     UserSetLastStatus @ 0x140011300 (UserSetLastStatus.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMValidateSharedHandle @ 0x140042DB0 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140045170 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EngMulDiv @ 0x140053870 (EngMulDiv.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall NtUserGetDpiForMonitor(__int64 a1, int a2, INT *a3, INT *a4)
{
  INT v7; // esi
  INT v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r15
  int v12; // r15d
  _DWORD *v13; // rdx
  _DWORD *v14; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  INT v18; // edi
  NTSTATUS CurrentDpiInfoFromHDev; // eax
  INT v20; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rdx
  INT v23; // edx
  INT v24; // ebx
  __int64 v25; // rax
  INT v26; // edx
  INT v27; // ebx
  INT v28[24]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v29; // [rsp+90h] [rbp-38h] BYREF

  v7 = 0;
  v8 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v29, 1LL);
  v9 = HMValidateSharedHandle(a1);
  v10 = v9;
  if ( !v9 || (v11 = *(_QWORD *)(v9 + 80)) == 0 )
  {
    v12 = 0;
    UserSetLastError(6LL);
    goto LABEL_12;
  }
  if ( a2 )
  {
    v18 = 96;
    memset(v28, 0, sizeof(v28));
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v11, (__int64)v28);
    if ( CurrentDpiInfoFromHDev < 0 )
    {
      v12 = 0;
      UserSetLastStatus(CurrentDpiInfoFromHDev);
      goto LABEL_12;
    }
    v12 = 1;
    if ( a2 == 2 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
      {
        v7 = v28[10];
        v8 = v28[11];
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
          v22 = CurrentProcessWin32Process;
          if ( CurrentProcessWin32Process )
            v22 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
          v23 = *(unsigned __int16 *)(v22 + 272);
          v18 = v23;
        }
        else
        {
          v23 = 96;
        }
        v24 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 40) + 60LL);
        v7 = EngMulDiv(v28[10], v23, v24);
        v8 = EngMulDiv(v28[11], v18, v24);
      }
      if ( (v28[23] & 1) != 0 || (v28[23] & 2) != 0 || !v7 )
      {
        v8 = 0;
        v7 = 0;
        UserSetLastError(50LL);
        v12 = 0;
      }
      goto LABEL_26;
    }
    if ( a2 == 1 )
    {
      if ( !v28[14] || (v28[23] & 2) != 0 )
      {
        v8 = 96;
        v7 = 96;
      }
      else
      {
        v7 = EngMulDiv(v28[14], 96, 100);
        v8 = EngMulDiv(v28[15], 96, 100);
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
      {
        v25 = PsGetCurrentProcessWin32Process();
        if ( v25 )
          v25 &= -(__int64)(*(_QWORD *)v25 != 0LL);
        v26 = *(unsigned __int16 *)(v25 + 272);
        v18 = v26;
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
          goto LABEL_26;
        v26 = 96;
      }
      v27 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 40) + 60LL);
      v7 = EngMulDiv(v7, v26, v27);
      v8 = EngMulDiv(v8, v18, v27);
    }
LABEL_26:
    if ( SLOBYTE(v28[23]) < 0 )
    {
      v20 = v8;
      v8 = v7;
      v7 = v20;
    }
    goto LABEL_7;
  }
  v12 = 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    v7 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 40) + 60LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
  {
    v16 = PsGetCurrentProcessWin32Process();
    v17 = v16;
    if ( v16 )
      v17 = -(__int64)(*(_QWORD *)v16 != 0LL) & v16;
    v7 = *(unsigned __int16 *)(v17 + 272);
  }
  else
  {
    v7 = 96;
  }
  v8 = v7;
LABEL_7:
  v13 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v13 = (_DWORD *)MmUserProbeAddress;
  *v13 = *v13;
  v14 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v14 = (_DWORD *)MmUserProbeAddress;
  *v14 = *v14;
  *a3 = v7;
  *a4 = v8;
LABEL_12:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v12;
}
