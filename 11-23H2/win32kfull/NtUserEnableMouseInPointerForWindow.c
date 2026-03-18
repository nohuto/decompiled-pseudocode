/*
 * XREFs of NtUserEnableMouseInPointerForWindow @ 0x1C008D710
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserEnableMouseInPointerForWindow(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int128 v20; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+30h] [rbp-18h]

  v20 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v20;
    *((_QWORD *)&v20 + 1) = v4;
    HMLockObject(v4);
    if ( (a2 != 0) != a2 )
      goto LABEL_12;
    if ( a2 )
      goto LABEL_6;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
    if ( CurrentProcessWin32Process )
    {
      v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      CurrentProcessWin32Process &= v11;
    }
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 824) & 0x30) != 0x10 )
    {
LABEL_6:
      if ( *(_QWORD *)(v10 + 16) == gptiCurrent )
      {
        v14 = *(_DWORD *)(v10 + 320);
        if ( a2 == ((v14 >> 3) & 1) || (v14 & 0x10) == 0 )
        {
          v9 = 1LL;
          v15 = v14 | 8;
          if ( !a2 )
            v15 = *(_DWORD *)(v10 + 320) & 0xFFFFFFF7;
          v16 = v15 | 0x10;
          *(_DWORD *)(v10 + 320) = v16;
          *(_DWORD *)(gptiCurrent + 1272LL) |= 0x4000000u;
          goto LABEL_10;
        }
      }
      v18 = 5LL;
    }
    else
    {
LABEL_12:
      v18 = 87LL;
    }
    UserSetLastError(v18);
LABEL_10:
    ThreadUnlock1(v16, v11, v13);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
