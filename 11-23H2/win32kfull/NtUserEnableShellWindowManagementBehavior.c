/*
 * XREFs of NtUserEnableShellWindowManagementBehavior @ 0x1C009C5D0
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0030E2C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserEnableShellWindowManagementBehavior(int a1, int a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r10d
  __int64 v10; // rbx
  int v11; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9

  EnterCrit(0LL, 0LL);
  LOBYTE(v4) = IAMThreadAccessGranted(gptiCurrent);
  v10 = 0LL;
  if ( !v4 )
  {
    v13 = 5LL;
LABEL_9:
    UserSetLastError(v13);
    UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
    return 0LL;
  }
  if ( (a2 & 0xFFFFE00) != 0 )
  {
    v13 = 87LL;
    goto LABEL_9;
  }
  v11 = a2 & a1 | v9 & ~a1;
  if ( v11 && !*(_QWORD *)(v8 + 328) )
  {
    *(_DWORD *)(v8 + 336) = 0;
    UserSetLastError(5023LL);
  }
  else
  {
    *(_DWORD *)(v8 + 336) = v11;
    v10 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v10;
}
