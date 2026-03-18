/*
 * XREFs of ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1401C7F4C
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401A9A08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?IsUninterceptable@@YAPEAUtagHOTKEY@@E@Z @ 0x1401C7EFC (-IsUninterceptable@@YAPEAUtagHOTKEY@@E@Z.c)
 *     EditionIsHotKey @ 0x140289750 (EditionIsHotKey.c)
 * Callees:
 *     GetDesktopView @ 0x140194220 (GetDesktopView.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDqq @ 0x140289818 (WPP_RECORDER_AND_TRACE_SF_DDqq.c)
 */

struct tagHOTKEY *__fastcall IsHotKey(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v3; // r15d
  __int64 v4; // rdx
  _BYTE *i; // rdi
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  const struct tagUIPI_INFO *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  char v24; // bp
  bool v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  int v31; // [rsp+20h] [rbp-78h]
  __int64 v32; // [rsp+60h] [rbp-38h] BYREF
  int v33; // [rsp+68h] [rbp-30h]
  __int64 v34; // [rsp+B0h] [rbp+18h]

  v2 = a2;
  v3 = a1;
  for ( i = *(_BYTE **)(W32GetUserSessionState(a1, a2) + 8 * (a2 & 0x7F) + 12952); ; i = (_BYTE *)*((_QWORD *)i + 6) )
  {
    if ( !i )
      return (struct tagHOTKEY *)i;
    if ( *((unsigned __int16 *)i + 16) == v3
      && *((_DWORD *)i + 9) == v2
      && !_bittest16((const signed __int16 *)i + 17, 8u) )
    {
      break;
    }
  }
  v7 = *(_QWORD *)i;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)i + 528LL), 0, 0) & 0xC) != 0 )
    return (struct tagHOTKEY *)i;
  UserSessionState = W32GetUserSessionState(v7, v4);
  if ( GetDesktopView(*(_QWORD *)(*(_QWORD *)i + 464LL), *(_QWORD *)(UserSessionState + 19200)) )
  {
    if ( (i[32] & 0xB) == 0 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18944) )
      {
        if ( (unsigned int)(v2 - 173) > 6 && v2 != 7 )
        {
          v13 = W32GetUserSessionState(v12, v11);
          if ( !UIPrivilegeIsolation::CheckAccess(
                  (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)i + 464LL) + 872LL),
                  (const struct tagUIPI_INFO *)(*(_QWORD *)(v13 + 18944) + 472LL),
                  v14) )
          {
            v17 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 18944);
            v18 = *(_DWORD *)(v17 + 480);
            v34 = *(_QWORD *)(v17 + 472);
            v20 = W32GetUserSessionState(v17, v19);
            v21 = *(_QWORD *)i;
            v32 = v34;
            v22 = *(_QWORD *)(v20 + 18944);
            v33 = v18;
            EtwTraceUIPIInputError(v21, 0LL, v22, &v32, 7);
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20) == 0
              || (v24 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
            {
              v24 = 0;
            }
            v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
              v28 = W32GetUserSessionState(v27, v26);
              LOBYTE(v29) = v25;
              LOBYTE(v30) = v24;
              WPP_RECORDER_AND_TRACE_SF_DDqq(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v30,
                v29,
                *(_QWORD *)(v28 + 69416),
                v31);
            }
            return 0LL;
          }
        }
      }
    }
    return (struct tagHOTKEY *)i;
  }
  return 0LL;
}
