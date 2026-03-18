/*
 * XREFs of NtUserPostThreadMessage @ 0x140244040
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x140171C64 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14017CF18 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     GetDesktopView @ 0x140194220 (GetDesktopView.c)
 *     _PostThreadMessage @ 0x1401A0460 (_PostThreadMessage.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x140274ECC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_LDD @ 0x1402A2FC0 (WPP_RECORDER_AND_TRACE_SF_LDD.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x1402B17A4 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserPostThreadMessage(unsigned int a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  tagTHREADINFO *v12; // r15
  int v13; // ecx
  struct tagTHREADINFO *v14; // r14
  __int64 v15; // rcx
  UIPrivilegeIsolation *v16; // rcx
  const struct tagUIPI_INFO *v17; // r8
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 UserSessionState; // rax
  int v22; // r8d
  int v23; // edx
  const struct tagUIPI_INFO *v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  const struct tagUIPI_INFO *v29; // r8
  const struct tagUIPI_INFO *v30; // rdx
  char v32; // [rsp+60h] [rbp-29h]
  bool v33; // [rsp+61h] [rbp-28h]
  __int64 v34; // [rsp+68h] [rbp-21h] BYREF
  __int64 v35; // [rsp+70h] [rbp-19h] BYREF
  __int64 v36; // [rsp+78h] [rbp-11h]
  __int64 v37; // [rsp+80h] [rbp-9h] BYREF
  int v38; // [rsp+88h] [rbp-1h]

  v36 = a4;
  v6 = a4;
  EnterCrit(0LL, 0LL);
  if ( (a2 & 0xFFFE0000) == 0 )
  {
    v9 = 0;
    v12 = (tagTHREADINFO *)PtiFromThreadId(a1);
    if ( !v12 )
    {
LABEL_4:
      v13 = 1444;
LABEL_5:
      UserSetLastError(v13);
      goto LABEL_42;
    }
    v14 = PtiCurrent(v11, v10);
    if ( *((_QWORD *)v14 + 62) != *((_QWORD *)v12 + 62)
      && (_InterlockedCompareExchange((volatile signed __int32 *)v14 + 132, 0, 0) & 8) == 0
      && !GetDesktopView(*((_QWORD *)v14 + 58), *((_QWORD *)v12 + 62)) )
    {
      v35 = 0LL;
      v34 = 0LL;
      if ( !(unsigned __int8)HasTcbPrivilege() )
        goto LABEL_4;
      if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline(v15) )
      {
        if ( !UIPrivilegeIsolation::CheckAccess(
                (UIPrivilegeIsolation *)(*((_QWORD *)v14 + 58) + 872LL),
                (const struct tagUIPI_INFO *)(*((_QWORD *)v12 + 58) + 872LL),
                v17) )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x8000) == 0
            || (v18 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
          {
            v18 = 0;
          }
          v32 = v18;
          v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v18 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            tagTHREADINFO::GetTID(v12);
            tagTHREADINFO::GetTID(v14);
            UserSessionState = W32GetUserSessionState(v20, v19);
            LOBYTE(v22) = v33;
            LOBYTE(v23) = v32;
            WPP_RECORDER_AND_TRACE_SF_LDD(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v23,
              v22,
              *(_QWORD *)(UserSessionState + 69416));
            v6 = v36;
          }
          EtwTraceUIPIMsgError(*((_QWORD *)v14 + 58), *((_QWORD *)v12 + 58), a2, a3, v6);
          goto LABEL_4;
        }
      }
      else if ( UIPrivilegeIsolation::Enforced(v16) )
      {
        if ( !UIPrivilegeIsolation::CheckAccess(
                (UIPrivilegeIsolation *)(*((_QWORD *)v14 + 58) + 872LL),
                (const struct tagUIPI_INFO *)(*((_QWORD *)v12 + 58) + 872LL),
                v24) )
        {
          UserSetLastError(1444);
          EtwTraceUIPIMsgError(*((_QWORD *)v14 + 58), *((_QWORD *)v12 + 58), a2, a3, v6);
          goto LABEL_42;
        }
      }
      else if ( (int)GetProcessLuid(*(_QWORD *)v14, &v35) < 0
             || (int)GetProcessLuid(*(_QWORD *)v12, &v34) < 0
             || v35 != v34 )
      {
        goto LABEL_4;
      }
    }
    v25 = *((_QWORD *)v12 + 58);
    v26 = *((_QWORD *)v14 + 58);
    if ( v25 == v26 )
      goto LABEL_41;
    if ( a2 == 717 )
      goto LABEL_42;
    if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(*((struct tagPROCESSINFO **)v12 + 58), 0LL, a2)
      || (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2, v27)
      || a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792
      || (!(unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline()
        ? (*(_QWORD *)v25 != *(_QWORD *)(W32GetUserGdiSessionState(v28) + 40)
         ? (v37 = *(_QWORD *)(v25 + 872), v38 = *(_DWORD *)(v25 + 880))
         : (v37 = 0x2000LL, v38 = 0),
           v30 = (const struct tagUIPI_INFO *)&v37)
        : (v30 = (const struct tagUIPI_INFO *)(v25 + 872)),
          UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v26 + 872), v30, v29)) )
    {
LABEL_41:
      v9 = PostThreadMessage(v12, a2, a3, v36);
      goto LABEL_42;
    }
    EtwTraceUIPIMsgError(v26, v25, a2, a3, v36);
    v13 = 5;
    goto LABEL_5;
  }
  UserSetLastError(87);
  v9 = 0;
LABEL_42:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
