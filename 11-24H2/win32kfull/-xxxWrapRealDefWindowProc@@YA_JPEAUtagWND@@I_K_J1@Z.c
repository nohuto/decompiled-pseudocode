/*
 * XREFs of ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140165890
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x140171C64 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14017CF18 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x1402B17A4 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxWrapRealDefWindowProc(struct tagWND *a1, unsigned int a2, HWND a3, struct tagDRAWITEMSTRUCT *a4)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  const struct tagUIPI_INFO *v14; // r8
  const struct tagUIPI_INFO *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbp
  int v20; // [rsp+30h] [rbp-58h] BYREF
  int v21; // [rsp+34h] [rbp-54h]
  int v22; // [rsp+38h] [rbp-50h]

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
      return xxxRealDefWindowProc(a1, a2, a3, a4);
    if ( a2 != 717 )
    {
      if ( IsMessageAllowedAcrossILByReceiver(*(struct tagPROCESSINFO **)(v11 + 464), a1, a2)
        || (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2)
        || a2 == 274 && ((unsigned __int64)(a3 - 15368) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != (HWND)61792 )
      {
        return xxxRealDefWindowProc(a1, a2, a3, a4);
      }
      if ( (unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline() )
      {
        v15 = (const struct tagUIPI_INFO *)(v12 + 872);
      }
      else
      {
        if ( *(_QWORD *)v12 == *(_QWORD *)(W32GetUserGdiSessionState(v13) + 40) )
        {
          v21 = 0;
          v22 = 0;
          v20 = 0x2000;
        }
        else
        {
          v20 = *(_DWORD *)(v12 + 872);
          v21 = *(_DWORD *)(v12 + 876);
          v22 = *(_DWORD *)(v12 + 880);
        }
        v15 = (const struct tagUIPI_INFO *)&v20;
      }
      if ( UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v10 + 109), v15, v14) )
        return xxxRealDefWindowProc(a1, a2, a3, a4);
      if ( a2 == 793 )
      {
        v18 = *((_QWORD *)a1 + 2);
        if ( *(struct tagWND **)(v18 + 1584) == a1 && *(_QWORD *)(v18 + 472) == *((_QWORD *)PtiCurrent(v17, v16) + 59) )
          return xxxRealDefWindowProc(a1, a2, a3, a4);
      }
      EtwTraceUIPIMsgError(v10, v12, a2, a3, a4);
      UserSetLastError(5);
    }
    if ( *v10 == *(_QWORD *)(W32GetUserGdiSessionState(v9) + 40) )
      return xxxRealDefWindowProc(a1, a2, a3, a4);
  }
  UserSetLastError(5);
  return 0LL;
}
