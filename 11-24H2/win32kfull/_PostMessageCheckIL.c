/*
 * XREFs of _PostMessageCheckIL @ 0x140085AB8
 * Callers:
 *     ForwardTouchMessage @ 0x1400858E8 (ForwardTouchMessage.c)
 *     NtUserInjectGesture @ 0x140298D20 (NtUserInjectGesture.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     _PostMessage @ 0x140066460 (_PostMessage.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x140171C64 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14017CF18 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ValidateDDEConvPair @ 0x1401D3900 (ValidateDDEConvPair.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x1402B17A4 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall PostMessageCheckIL(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  BOOL v4; // ebx
  struct tagWND *v8; // rbp
  int v9; // eax
  _DWORD *v10; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  const struct tagUIPI_INFO *v14; // r8
  const struct tagUIPI_INFO *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r14
  int v20; // [rsp+30h] [rbp-58h] BYREF
  int v21; // [rsp+34h] [rbp-54h]
  int v22; // [rsp+38h] [rbp-50h]

  v4 = 0;
  v8 = (struct tagWND *)a1;
  if ( a2 - 992 <= 8 )
  {
    v9 = ValidateDDEConvPair(a3, a1);
    a1 = 1LL;
    v4 = v9 != 0;
  }
  if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && !v4 )
  {
    v10 = *(_DWORD **)(*((_QWORD *)v8 + 2) + 464LL);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    v12 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v10 != (_DWORD *)v12 )
    {
      if ( a2 == 717 )
        return 0LL;
      if ( !IsMessageAllowedAcrossILByReceiver((struct tagPROCESSINFO *)v10, v8, a2)
        && !(unsigned int)IsMessageAlwaysAllowedAcrossIL(a2)
        && (a2 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792) )
      {
        if ( (unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline() )
        {
          v15 = (const struct tagUIPI_INFO *)(v10 + 218);
        }
        else
        {
          if ( *(_QWORD *)v10 == *(_QWORD *)(W32GetUserGdiSessionState(v13) + 40) )
          {
            v21 = 0;
            v22 = 0;
            v20 = 0x2000;
          }
          else
          {
            v20 = v10[218];
            v21 = v10[219];
            v22 = v10[220];
          }
          v15 = (const struct tagUIPI_INFO *)&v20;
        }
        if ( !UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v12 + 872), v15, v14) )
        {
          if ( a2 != 793
            || (v18 = *((_QWORD *)v8 + 2), *(struct tagWND **)(v18 + 1584) != v8)
            || *(_QWORD *)(v18 + 472) != *((_QWORD *)PtiCurrent(v17, v16) + 59) )
          {
            EtwTraceUIPIMsgError(v12, v10, a2, a3, a4);
            UserSetLastError(5);
            return 0LL;
          }
        }
      }
    }
  }
  return PostMessage((int)v8, a2, a3, a4);
}
