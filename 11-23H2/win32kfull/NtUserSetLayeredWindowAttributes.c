/*
 * XREFs of NtUserSetLayeredWindowAttributes @ 0x1C0081350
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0013298 (UserSetLastStatus.c)
 *     WindowHasShadow @ 0x1C0081490 (WindowHasShadow.c)
 *     _SetLayeredWindowAttributes @ 0x1C00B4BD0 (_SetLayeredWindowAttributes.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     zzzUpdateShadowAlpha @ 0x1C022130C (zzzUpdateShadowAlpha.c)
 */

__int64 __fastcall NtUserSetLayeredWindowAttributes(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  struct tagWND *v12; // rsi
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int128 v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-18h]

  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v11 = 0LL;
  v12 = (struct tagWND *)v6;
  if ( v6 )
  {
    *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v19;
    *((_QWORD *)&v19 + 1) = v6;
    HMLockObject(v6);
    if ( (a4 & 0xFFFFFFFC) != 0
      || (unsigned int)IsWindowDesktopComposed(v12) && (*(_DWORD *)(*((_QWORD *)v12 + 5) + 232LL) & 2) != 0 )
    {
      UserSetLastError(87LL);
    }
    else
    {
      v13 = SetLayeredWindowAttributes(v12);
      if ( v13 >= 0 )
      {
        v17 = 1LL;
        if ( (a4 & 2) != 0 && (unsigned int)WindowHasShadow(v12) )
          zzzUpdateShadowAlpha(v12);
        goto LABEL_9;
      }
      UserSetLastStatus(v13, 1);
    }
    v17 = 0LL;
LABEL_9:
    ThreadUnlock1(v15, v14, v16);
    v11 = v17;
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
