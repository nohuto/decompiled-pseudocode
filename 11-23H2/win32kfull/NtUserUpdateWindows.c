/*
 * XREFs of NtUserUpdateWindows @ 0x1C01DF540
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdateWindows @ 0x1C0214920 (xxxUpdateWindows.c)
 */

__int64 __fastcall NtUserUpdateWindows(__int64 a1, HRGN a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int updated; // ebx
  struct tagWND *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  updated = 0;
  v10 = (struct tagWND *)v4;
  if ( v4 )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v4;
    HMLockObject(v4);
    updated = xxxUpdateWindows(v10, a2);
    ThreadUnlock1(v12, v11, v13);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return updated;
}
