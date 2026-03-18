/*
 * XREFs of NtUserBeginLayoutUpdate @ 0x1C0097C90
 * Callers:
 *     <none>
 * Callees:
 *     GreWindowBeginLayoutUpdate @ 0x1C0016928 (GreWindowBeginLayoutUpdate.c)
 *     _GetTopLevelWindow @ 0x1C00AE7B0 (_GetTopLevelWindow.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 */

__int64 __fastcall NtUserBeginLayoutUpdate(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 TopLevelWindow; // rax
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v2;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 40);
    v3 = (*(_WORD *)(v4 + 42) & 0x2FFFu) - 669;
    if ( (v3 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v14;
      *((_QWORD *)&v14 + 1) = v2;
      HMLockObject(v2);
      if ( !(unsigned int)IsTopLevelWindow(v8) && *(char *)(*(_QWORD *)(v8 + 40) + 25LL) < 0 )
      {
        TopLevelWindow = GetTopLevelWindow(v10);
        if ( TopLevelWindow )
        {
          v9 = *(_QWORD *)(TopLevelWindow + 40);
          v10 = *(_WORD *)(v9 + 42) & 0x2FFF;
          if ( (_DWORD)v10 != 669 && *(char *)(v9 + 25) < 0 )
            GreWindowBeginLayoutUpdate(*(Gre::Base **)TopLevelWindow, v9);
        }
      }
      ThreadUnlock1(v10, v9, v11);
      v7 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
