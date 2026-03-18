/*
 * XREFs of xxxInternalActivateKeyboardLayout @ 0x140096CA0
 * Callers:
 *     xxxActivateKeyboardLayout @ 0x140096850 (xxxActivateKeyboardLayout.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011AEC8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x14020F940 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1400F3F20 (xxxChangeForegroundKeyboardTable.c)
 *     HMAssignmentLock @ 0x1400F47B0 (HMAssignmentLock.c)
 *     xxxWindowEvent @ 0x140140F70 (xxxWindowEvent.c)
 *     ??1?$Win32HMThreadLock@UtagKL@@@@QEAA@XZ @ 0x140152C00 (--1-$Win32HMThreadLock@UtagKL@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLock@UtagKL@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x14015649C (--0-$Win32HMThreadLock@UtagKL@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagKL@@@Z.c)
 *     ApiSetEditionImmActivateLayout @ 0x140191FCC (ApiSetEditionImmActivateLayout.c)
 *     ApiSetEditionImmActivateThreadsLayout @ 0x14019203C (ApiSetEditionImmActivateThreadsLayout.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x140192994 (ApiSetEditionNotifyShellLanguageHook.c)
 *     ApiSetEditionSendIMENotification @ 0x140193274 (ApiSetEditionSendIMENotification.c)
 *     IsKeyboardDelegationTarget @ 0x140212F60 (IsKeyboardDelegationTarget.c)
 */

__int64 __fastcall xxxInternalActivateKeyboardLayout(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // r12d
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  bool v16; // zf
  __int64 i; // rsi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v22; // [rsp+30h] [rbp-88h]
  _QWORD v23[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v24[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v25[2]; // [rsp+70h] [rbp-48h] BYREF
  _BYTE v26[16]; // [rsp+80h] [rbp-38h] BYREF

  v7 = a3 & 0x100;
  v9 = PtiCurrent();
  v10 = *((_QWORD *)v9 + 60);
  if ( v10 )
  {
    v8 = *(_QWORD *)(v10 + 40);
    v22 = v8;
  }
  else
  {
    v10 = 0LL;
    v22 = 0LL;
  }
  if ( (a3 & 0x40000000) != 0 )
    *(_DWORD *)(W32GetUserSessionState(v8) + 14184) = (a3 >> 15) & 2;
  if ( v7 || a2 != *((_QWORD *)v9 + 60) )
  {
    *(_WORD *)(a2 + 74) = 0;
    Win32HMThreadLock<tagKL>::Win32HMThreadLock<tagKL>(v26, v9, v10);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v9 + 132, 0, 0) & 8) != 0 )
    {
      v23[0] = (char *)v9 + 480;
      v23[1] = a2;
      HMAssignmentLock(v23, 0LL);
      v12 = *(unsigned __int16 *)(a2 + 72);
      *(_WORD *)(*((_QWORD *)v9 + 65) + 152LL) = v12;
    }
    else
    {
      UserSessionState = W32GetUserSessionState(v11);
      if ( v7 )
      {
        v15 = *((_QWORD *)v9 + 58);
        if ( (**(_DWORD **)(UserSessionState + 19928) & 4) != 0 )
        {
          v16 = (unsigned int)ApiSetEditionImmActivateThreadsLayout(*(_QWORD *)(v15 + 328), v14, a2) == 0;
        }
        else
        {
          v12 = 0LL;
          for ( i = *(_QWORD *)(v15 + 328); i; i = *(_QWORD *)(i + 704) )
          {
            if ( *(_QWORD *)(i + 480) != a2
              && (_InterlockedCompareExchange((volatile signed __int32 *)(i + 528), 0, 0) & 1) == 0 )
            {
              v24[0] = i + 480;
              v24[1] = a2;
              HMAssignmentLock(v24, 0LL);
              *(_WORD *)(*(_QWORD *)(i + 520) + 152LL) = *(_WORD *)(a2 + 72);
              *(_QWORD *)(*(_QWORD *)(i + 520) + 144LL) = *(_QWORD *)(a2 + 40);
              v12 = 1LL;
            }
          }
          v16 = (_DWORD)v12 == 0;
        }
        if ( v16 )
          goto LABEL_44;
      }
      else
      {
        if ( (**(_DWORD **)(UserSessionState + 19928) & 4) != 0 )
        {
          ApiSetEditionImmActivateLayout(v9, a2);
        }
        else
        {
          v25[0] = (char *)v9 + 480;
          v25[1] = a2;
          HMAssignmentLock(v25, 0LL);
        }
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)v9 + 132, 0, 0) & 1) == 0 )
        {
          *(_WORD *)(*((_QWORD *)v9 + 65) + 152LL) = *(_WORD *)(a2 + 72);
          v12 = *(_QWORD *)(a2 + 40);
          *(_QWORD *)(*((_QWORD *)v9 + 65) + 144LL) = v12;
        }
      }
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v12) + 18960)
      && *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v18) + 18960) + 464LL) == *((_QWORD *)v9 + 58)
      || (unsigned __int8)IsKeyboardDelegationTarget(v9) )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v10, (struct tagKL *)a2);
      xxxWindowEvent(-2147483647, 0, *(_DWORD *)(a2 + 40), 0, 0);
      ApiSetEditionNotifyShellLanguageHook(v9, *(_QWORD *)(a2 + 40), 1LL);
    }
    else if ( !a1 )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v10, (struct tagKL *)a2);
    }
    v19 = *((_QWORD *)v9 + 59);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 120);
      if ( v20 )
        goto LABEL_38;
      v20 = *(_QWORD *)(v19 + 128);
      if ( !v20 )
        v20 = a4;
      if ( v20 )
LABEL_38:
        ApiSetEditionSendIMENotification((_DWORD)v9, v20, 81, *(_DWORD *)(a2 + 68), *(_QWORD *)(a2 + 40));
    }
    if ( *((_QWORD *)v9 + 103)
      && (_InterlockedCompareExchange((volatile signed __int32 *)v9 + 132, 0, 0) & 8) == 0
      && ((*(_WORD *)(a2 + 42) & 0xF000) == 0xE000 || (**(_DWORD **)(W32GetUserSessionState(57344LL) + 19928) & 4) != 0) )
    {
      ApiSetEditionSendIMENotification((_DWORD)v9, *((_QWORD *)v9 + 103), 647, 31, v7);
    }
LABEL_44:
    Win32HMThreadLock<tagKL>::~Win32HMThreadLock<tagKL>(v26);
  }
  return v22;
}
