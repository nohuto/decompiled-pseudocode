/*
 * XREFs of NtUserPostMessage @ 0x140140F70
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140066508 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ForwardTouchMessage @ 0x1400858E8 (ForwardTouchMessage.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     IsPointerInputClientMessage @ 0x140148320 (IsPointerInputClientMessage.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x140171C64 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14017CF18 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ValidateDDEConvPair @ 0x1401D3900 (ValidateDDEConvPair.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x1402B17A4 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserPostMessage(__int64 a1, unsigned int a2, unsigned __int64 a3, volatile void *a4)
{
  __int64 v4; // rdi
  __int64 v8; // rdx
  __int16 *v9; // rcx
  int v10; // ebx
  int v11; // ecx
  __int64 v12; // rsi
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  BOOL v16; // ebp
  struct tagTHREADINFO *v17; // rax
  int v18; // eax
  __int64 v19; // r14
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v21; // rbp
  __int64 v22; // rcx
  const struct tagUIPI_INFO *v23; // r8
  const struct tagUIPI_INFO *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r15
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v30; // rax
  struct tagQMSG *v31; // rax
  __int64 v33; // [rsp+50h] [rbp-68h] BYREF
  int v34; // [rsp+58h] [rbp-60h]

  v4 = a2;
  EnterCrit(0LL, 1LL);
  if ( (v4 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    v10 = 0;
    goto LABEL_56;
  }
  if ( (unsigned int)v4 < 0x400 )
  {
    v9 = MessageTable;
    if ( (MessageTable[v4] & 0x2000) != 0 )
    {
      v10 = 0;
      v11 = 5;
      goto LABEL_55;
    }
  }
  v10 = 0;
  if ( a1 )
  {
    if ( ((a1 + 1) & 0xFFFFFFFFFFFEFFFFuLL) != 0 )
    {
      v12 = ValidateHwnd(a1);
      if ( !v12 )
      {
        LOBYTE(v10) = (_DWORD)v4 == 993;
        goto LABEL_56;
      }
    }
    else
    {
      v12 = -1LL;
    }
  }
  else
  {
    v12 = 0LL;
  }
  if ( (_DWORD)v4 == 576 )
  {
    if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v13 = PtiCurrent((__int64)v9, v8);
      v10 = ForwardTouchMessage(v13, (struct tagWND *)v12, 576LL, a3, a4, 1, 0LL, 0, 0LL);
      goto LABEL_56;
    }
    v11 = 1400;
LABEL_55:
    UserSetLastError(v11);
    goto LABEL_56;
  }
  if ( (((_DWORD)v4 - 281) & 0xFFFFFFFD) == 0
    || (unsigned int)(v4 - 577) <= 3
    || (unsigned int)IsPointerInputClientMessage((unsigned int)v4) )
  {
    v11 = 1002;
    goto LABEL_55;
  }
  v16 = 0;
  if ( (unsigned int)(v4 - 992) <= 8 )
    v16 = ValidateDDEConvPair(a3, v12) != 0;
  if ( (_DWORD)v4 == 274 && a3 == 61488 )
  {
    v17 = PtiCurrent(v15, v14);
    LOBYTE(v18) = IAMThreadAccessGranted(v17);
    if ( v18 )
      v16 = 1;
  }
  if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !v16 )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 464LL);
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v15);
    v21 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
      v21 = 0LL;
    if ( (_QWORD *)v19 != v21 )
    {
      if ( (_DWORD)v4 == 717 )
        goto LABEL_56;
      if ( !IsMessageAllowedAcrossILByReceiver((struct tagPROCESSINFO *)v19, (struct tagWND *)v12, v4)
        && !(unsigned int)IsMessageAlwaysAllowedAcrossIL(v4)
        && ((_DWORD)v4 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792) )
      {
        if ( (unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline() )
        {
          v24 = (const struct tagUIPI_INFO *)(v19 + 872);
        }
        else
        {
          if ( *(_QWORD *)v19 == *(_QWORD *)(W32GetUserGdiSessionState(v22) + 40) )
          {
            v33 = 0x2000LL;
            v34 = 0;
          }
          else
          {
            v33 = *(_QWORD *)(v19 + 872);
            v34 = *(_DWORD *)(v19 + 880);
          }
          v24 = (const struct tagUIPI_INFO *)&v33;
        }
        if ( !UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v21 + 109), v24, v23) )
        {
          if ( (_DWORD)v4 != 793
            || (v28 = *(_QWORD *)(v12 + 16), *(_QWORD *)(v28 + 1584) != v12)
            || ((CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v26, v25, v27)) == 0LL
              ? (v30 = 0LL)
              : (v30 = *CurrentThreadWin32Thread),
                *(_QWORD *)(v28 + 472) != *(_QWORD *)(v30 + 472)) )
          {
            EtwTraceUIPIMsgError(v21, v19, (unsigned int)v4, a3, a4);
            v11 = 5;
            goto LABEL_55;
          }
        }
      }
    }
  }
  v31 = _PostTransformableMessageExtended((struct tagWND *)v12, v4, a3, (__int64)a4, 0LL, 1);
  v9 = (__int16 *)MmSystemRangeStart;
  if ( v31 >= MmSystemRangeStart )
  {
    LOBYTE(v10) = v31 != 0LL;
    LODWORD(v31) = v10;
  }
  v10 = (int)v31;
LABEL_56:
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
