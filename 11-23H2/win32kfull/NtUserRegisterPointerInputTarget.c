/*
 * XREFs of NtUserRegisterPointerInputTarget @ 0x1C01D8EC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     _RegisterPointerInputTarget @ 0x1C01C6748 (_RegisterPointerInputTarget.c)
 */

__int64 __fastcall NtUserRegisterPointerInputTarget(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax

  EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v12 = 0;
  v13 = v7;
  if ( v7 )
  {
    if ( (unsigned __int8)Enforced(v9) && *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) >= 0 )
    {
      UserSetLastError(5);
      EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 12LL);
    }
    else
    {
      if ( gptiCurrent == *(_QWORD *)(v13 + 16) )
      {
        if ( !a4 || (v16 = *(_QWORD *)(v13 + 40), *(char *)(v16 + 20) >= 0) && *(char *)(v16 + 19) >= 0 )
        {
          if ( (unsigned int)(a3 - 2) <= 1 )
          {
            v12 = RegisterPointerInputTarget(v13, v14, a3, a4);
            goto LABEL_14;
          }
        }
        v15 = 87;
      }
      else
      {
        v15 = 5;
      }
      UserSetLastError(v15);
    }
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v12;
}
