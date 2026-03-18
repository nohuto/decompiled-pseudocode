/*
 * XREFs of NtUserInheritWindowMonitor @ 0x1C01D4770
 * Callers:
 *     <none>
 * Callees:
 *     xxxInheritWindowMonitor @ 0x1C00B04C0 (xxxInheritWindowMonitor.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserInheritWindowMonitor(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagWND *v11; // rbx
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-18h]

  v19 = 0LL;
  v4 = 0;
  v20 = 0LL;
  v5 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v11 = (struct tagWND *)v6;
  if ( v6 )
  {
    v8 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v19;
      *((_QWORD *)&v19 + 1) = v6;
      HMLockObject(v6);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
      v14 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v14 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v14 == *(_QWORD *)(*((_QWORD *)v11 + 2) + 424LL) )
      {
        if ( !a2 || (v5 = (__int64 *)ValidateHwnd(a2)) != 0LL )
          v4 = xxxInheritWindowMonitor(v11, v5, 1);
      }
      else
      {
        UserSetLastError(5);
      }
      ThreadUnlock1(v16, v15, v17);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v4;
}
