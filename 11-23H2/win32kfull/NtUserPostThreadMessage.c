/*
 * XREFs of NtUserPostThreadMessage @ 0x1C0116180
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0034EAC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     GetDesktopView @ 0x1C0035CC0 (GetDesktopView.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C003732C (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 *     IsPrivileged @ 0x1C0084A60 (IsPrivileged.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     _PostThreadMessageEx @ 0x1C01162B8 (_PostThreadMessageEx.c)
 */

__int64 __fastcall NtUserPostThreadMessage(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  _QWORD *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdi
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+38h] [rbp-8h] BYREF

  EnterCrit(0LL, 0LL);
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    v12 = 0;
    goto LABEL_6;
  }
  v8 = PtiFromThreadId(a1);
  v12 = 0;
  v13 = (_QWORD *)v8;
  if ( !v8 )
    goto LABEL_7;
  v14 = *(_QWORD *)(v8 + 456);
  if ( *(_QWORD *)(gptiCurrent + 456LL) == v14
    || (*(_DWORD *)(gptiCurrent + 488LL) & 8) != 0
    || GetDesktopView(*(_QWORD *)(gptiCurrent + 424LL), v14) )
  {
    goto LABEL_4;
  }
  v21 = 0LL;
  v20 = 0LL;
  if ( !(unsigned int)IsPrivileged(psTcb) )
    goto LABEL_7;
  if ( !(unsigned __int8)Enforced(v19) )
  {
    if ( (int)GetProcessLuid(*gptiCurrent, &v21) >= 0 && (int)GetProcessLuid(*v13, &v20) >= 0 && v21 == v20 )
      goto LABEL_4;
LABEL_7:
    v18 = 1444;
LABEL_8:
    UserSetLastError(v18);
    goto LABEL_6;
  }
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 896LL, v13[53] + 896LL) )
  {
    UserSetLastError(1444);
    EtwTraceUIPIMsgError(*(_QWORD *)(gptiCurrent + 424LL), v13[53], a2, a3, a4);
    goto LABEL_6;
  }
LABEL_4:
  v15 = v13[53];
  v16 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( v15 != v16 )
  {
    if ( a2 == 717 )
      goto LABEL_6;
    if ( !(unsigned int)IsMessageAllowedByFilterEx(*(void *const **)(v15 + 872), a2, 0LL, 0LL)
      && !(unsigned int)IsMessageAlwaysAllowedAcrossIL(a2)
      && (a2 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792) )
    {
      v20 = *(_QWORD *)v15 == gpepCSRSS ? 0x2000LL : *(_QWORD *)(v15 + 896);
      if ( !(unsigned __int8)CheckAccess(v16 + 896, &v20) )
      {
        EtwTraceUIPIMsgError(v16, v15, a2, a3, a4);
        v18 = 5;
        goto LABEL_8;
      }
    }
  }
  v21 = 0LL;
  SetUnavailableInputSource(&v21);
  v12 = PostThreadMessageEx(v13, a2, a3, a4, &v21);
LABEL_6:
  UserSessionSwitchLeaveCrit(v9, v14, v10, v11);
  return v12;
}
