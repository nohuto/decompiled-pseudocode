/*
 * XREFs of NtUserSetImeOwnerWindow @ 0x1C00A6B90
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C00A6958 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     ?ImeCheckTopmost@@YAXPEAUtagWND@@@Z @ 0x1C00A6CD8 (-ImeCheckTopmost@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00A6F64 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00B7028 (zzzEndDeferWinEventNotify.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetImeOwnerWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  struct tagWND *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    if ( (*gpsi & 4) == 0 )
    {
      UserSetLastError(120LL);
      goto LABEL_19;
    }
    v6 = *(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x2FFF;
    if ( (_DWORD)v6 != 681 )
      goto LABEL_19;
    if ( a2 )
    {
      v5 = (struct tagWND *)ValidateHwnd(a2);
      if ( !v5 )
        goto LABEL_19;
    }
    else
    {
      v5 = 0LL;
    }
    ++gdwDeferWinEvent;
    if ( v5 )
      goto LABEL_15;
    v11 = *(_QWORD *)(v10 + 16);
    v5 = *(struct tagWND **)(*(_QWORD *)(v11 + 432) + 128LL);
    if ( !v5 )
      goto LABEL_16;
    if ( v5 == *(struct tagWND **)(v10 + 120) )
    {
LABEL_18:
      zzzEndDeferWinEventNotify(v6);
      v9 = 1LL;
      goto LABEL_19;
    }
    v12 = *(_QWORD *)(*((_QWORD *)v5 + 17) + 8LL);
    if ( *(_WORD *)v12 != *(_WORD *)(gpsi + 898LL) && (*(_BYTE *)(v12 + 10) & 1) == 0 && v11 == *((_QWORD *)v5 + 2) )
LABEL_15:
      zzzImeSetOwnerWindow((struct tagWND *)v10, v5);
    else
LABEL_16:
      zzzImeSetFutureOwner((struct tagWND *)v10, *(struct tagWND **)(v10 + 120));
    ImeCheckTopmost((struct tagWND *)v10);
    goto LABEL_18;
  }
LABEL_19:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
