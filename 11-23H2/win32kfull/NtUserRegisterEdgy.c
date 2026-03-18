/*
 * XREFs of NtUserRegisterEdgy @ 0x1C01D8830
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     IsShellProcess @ 0x1C00A688C (IsShellProcess.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z @ 0x1C01E713C (-_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z.c)
 *     EdgyUnregisterListener @ 0x1C01E81D4 (EdgyUnregisterListener.c)
 */

__int64 __fastcall NtUserRegisterEdgy(unsigned int a1, __int64 a2, int a3)
{
  int v6; // ebx
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int i; // edi
  __int128 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // r8
  int updated; // eax
  __int128 v22; // [rsp+30h] [rbp-78h] BYREF
  __int128 v23; // [rsp+40h] [rbp-68h]
  __int64 v24; // [rsp+58h] [rbp-50h]
  __int128 v25; // [rsp+68h] [rbp-40h]
  __int128 v26; // [rsp+78h] [rbp-30h]

  v6 = 0;
  EnterCrit(0LL, 0LL);
  if ( !a1 )
  {
    v7 = 87;
LABEL_3:
    UserSetLastError(v7);
    goto LABEL_30;
  }
  if ( !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL)) )
  {
    v7 = 5;
    goto LABEL_3;
  }
  for ( i = 0; i < a1; ++i )
  {
    v13 = (__int128 *)(a2 + 32LL * i);
    if ( v13 + 2 < v13 || (unsigned __int64)(v13 + 2) > MmUserProbeAddress )
      v13 = (__int128 *)MmUserProbeAddress;
    v25 = *v13;
    v26 = v13[1];
    v22 = v25;
    v23 = (unsigned __int64)v26;
    if ( a3 )
    {
      if ( !HMValidateHandle(v22, 0x13u) )
        goto LABEL_13;
      if ( *((_QWORD *)&v22 + 1) )
      {
        v14 = ValidateHwnd(*((_QWORD *)&v22 + 1));
        v16 = v14;
        if ( !v14 )
          goto LABEL_13;
        v17 = *(_QWORD *)(v14 + 40);
        if ( *(char *)(v17 + 19) < 0 || *(char *)(v17 + 20) < 0 )
          goto LABEL_13;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
        v19 = CurrentProcessWin32Process;
        v24 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          v19 = CurrentProcessWin32Process & -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          v24 = v19;
        }
        if ( *(_QWORD *)(*(_QWORD *)(v16 + 16) + 424LL) != v19 || *(_DWORD *)(v16 + 260) )
        {
LABEL_13:
          UserSetLastError(87);
          goto LABEL_30;
        }
      }
      updated = Edgy::_AddOrUpdateListener(
                  *(_QWORD *)(gptiCurrent + 456LL),
                  v22,
                  (unsigned int)v23,
                  *((_QWORD *)&v22 + 1));
    }
    else
    {
      updated = EdgyUnregisterListener(&v22);
    }
    if ( a3 && !updated )
    {
      UserSetLastError(8);
      goto LABEL_30;
    }
  }
  v6 = 1;
LABEL_30:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v6;
}
