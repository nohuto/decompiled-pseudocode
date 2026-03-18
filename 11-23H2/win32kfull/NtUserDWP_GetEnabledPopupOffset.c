/*
 * XREFs of NtUserDWP_GetEnabledPopupOffset @ 0x1C01CDAA0
 * Callers:
 *     <none>
 * Callees:
 *     DWP_GetEnabledPopup @ 0x1C0156ABC (DWP_GetEnabledPopup.c)
 */

__int64 __fastcall NtUserDWP_GetEnabledPopupOffset(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  const struct tagWND *v8; // rdi
  struct tagWND *EnabledPopup; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = (const struct tagWND *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v14;
    *((_QWORD *)&v14 + 1) = v2;
    HMLockObject(v2);
    EnabledPopup = DWP_GetEnabledPopup(v8);
    if ( EnabledPopup )
      v7 = *((_QWORD *)EnabledPopup + 6);
    ThreadUnlock1(v11, v10, v12);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
