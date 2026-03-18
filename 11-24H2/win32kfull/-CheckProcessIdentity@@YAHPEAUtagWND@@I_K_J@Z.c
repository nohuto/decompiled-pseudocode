/*
 * XREFs of ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x14017E558
 * Callers:
 *     ?xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x14017E4A0 (-xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x14017E500 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140280A70 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x140171C64 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14017CF18 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x1402B17A4 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall CheckProcessIdentity(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  const struct tagUIPI_INFO *v15; // r8
  const struct tagUIPI_INFO *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbp
  int v21; // [rsp+30h] [rbp-58h] BYREF
  int v22; // [rsp+34h] [rbp-54h]
  int v23; // [rsp+38h] [rbp-50h]

  if ( a1 != (struct tagWND *)-1LL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    v10 = (_QWORD *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v9 = -*(_QWORD *)CurrentProcessWin32Process;
      v10 = (_QWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
    }
    v11 = *((_QWORD *)a1 + 2);
    v12 = *(_QWORD *)(v11 + 464);
    if ( (_QWORD *)v12 == v10 )
      return 1LL;
    if ( a2 != 717 )
    {
      if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(*(struct tagPROCESSINFO **)(v11 + 464), a1, a2)
        || (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2, v13)
        || a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
      {
        return 1LL;
      }
      if ( (unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline() )
      {
        v16 = (const struct tagUIPI_INFO *)(v12 + 872);
      }
      else
      {
        if ( *(_QWORD *)v12 == *(_QWORD *)(W32GetUserGdiSessionState(v14) + 40) )
        {
          v22 = 0;
          v23 = 0;
          v21 = 0x2000;
        }
        else
        {
          v21 = *(_DWORD *)(v12 + 872);
          v22 = *(_DWORD *)(v12 + 876);
          v23 = *(_DWORD *)(v12 + 880);
        }
        v16 = (const struct tagUIPI_INFO *)&v21;
      }
      if ( UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v10 + 109), v16, v15) )
        return 1LL;
      if ( a2 == 793 )
      {
        v19 = *((_QWORD *)a1 + 2);
        if ( *(struct tagWND **)(v19 + 1584) == a1 && *(_QWORD *)(v19 + 472) == *((_QWORD *)PtiCurrent(v18, v17) + 59) )
          return 1LL;
      }
      EtwTraceUIPIMsgError(v10, v12, a2, a3, a4);
      UserSetLastError(5);
    }
    if ( *v10 == *(_QWORD *)(W32GetUserGdiSessionState(v9) + 40) )
      return 1LL;
  }
  UserSetLastError(5);
  return 0LL;
}
