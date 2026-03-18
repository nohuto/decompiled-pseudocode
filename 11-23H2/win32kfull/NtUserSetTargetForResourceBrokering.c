/*
 * XREFs of NtUserSetTargetForResourceBrokering @ 0x1C01DC500
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?_SetTargetForCursorApiBrokering@@YAXPEAUtagTHREADINFO@@0@Z @ 0x1C01A8268 (-_SetTargetForCursorApiBrokering@@YAXPEAUtagTHREADINFO@@0@Z.c)
 */

__int64 __fastcall NtUserSetTargetForResourceBrokering(int a1, unsigned int a2)
{
  __int64 v4; // rdi
  struct tagTHREADINFO *v5; // rsi
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx

  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  v5 = 0LL;
  if ( a1 )
    goto LABEL_2;
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 824LL) & 0x30) != 0x10 )
  {
LABEL_5:
    v6 = 5;
    goto LABEL_3;
  }
  if ( !a2 )
  {
LABEL_13:
    _SetTargetForCursorApiBrokering(gptiCurrent, v5);
    v4 = 1LL;
    goto LABEL_14;
  }
  v11 = PtiFromThreadId(a2);
  v5 = (struct tagTHREADINFO *)v11;
  if ( v11 )
  {
    if ( v11 == gptiCurrent )
    {
      v5 = 0LL;
    }
    else
    {
      v12 = *(_QWORD *)(v11 + 424);
      if ( (*(_DWORD *)(v12 + 824) & 0x30) != 0x10
        || !(unsigned __int8)PsIsWin32KFilterEnabledForProcess(*(_QWORD *)v12)
        && !(unsigned __int8)PsIsWin32KFilterAuditEnabledForProcess(**((_QWORD **)v5 + 53)) )
      {
        goto LABEL_5;
      }
    }
    goto LABEL_13;
  }
LABEL_2:
  v6 = 87;
LABEL_3:
  UserSetLastError(v6);
LABEL_14:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v4;
}
