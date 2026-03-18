/*
 * XREFs of _PostTransformableMessageIL @ 0x140118950
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1401177BC (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x140118208 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140066508 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x140171C64 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14017CF18 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ValidateDDEConvPair @ 0x1401D3900 (ValidateDDEConvPair.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x1402B17A4 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

struct tagQMSG *__fastcall PostTransformableMessageIL(
        struct tagWND *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned int v7; // esi
  int v9; // ebx
  struct tagTHREADINFO *v10; // rax
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rbp
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  const struct tagUIPI_INFO *v17; // r8
  const struct tagUIPI_INFO *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r12
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v24; // rax
  struct tagQMSG *result; // rax
  __int64 v26; // [rsp+30h] [rbp-68h] BYREF
  int v27; // [rsp+38h] [rbp-60h]

  v7 = a2;
  if ( (unsigned int)(a2 - 992) > 8 )
  {
    v9 = a5;
  }
  else
  {
    v9 = a5;
    if ( (unsigned int)ValidateDDEConvPair(a3, a1) )
      v9 = 1;
  }
  if ( v7 == 274 && a3 == 61488 )
  {
    v10 = PtiCurrent((__int64)a1, a2);
    LOBYTE(v11) = IAMThreadAccessGranted(v10);
    if ( v11 )
      v9 = 1;
  }
  v12 = 0;
  if ( (unsigned __int64)a1 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && !v9 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL);
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
    v15 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
      v15 = 0LL;
    if ( (_QWORD *)v13 != v15 )
    {
      if ( v7 == 717 )
        return 0LL;
      if ( !IsMessageAllowedAcrossILByReceiver((struct tagPROCESSINFO *)v13, a1, v7)
        && !(unsigned int)IsMessageAlwaysAllowedAcrossIL(v7)
        && (v7 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792) )
      {
        if ( (unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline() )
        {
          v18 = (const struct tagUIPI_INFO *)(v13 + 872);
        }
        else
        {
          if ( *(_QWORD *)v13 == *(_QWORD *)(W32GetUserGdiSessionState(v16) + 40) )
          {
            v26 = 0x2000LL;
            v27 = 0;
          }
          else
          {
            v26 = *(_QWORD *)(v13 + 872);
            v27 = *(_DWORD *)(v13 + 880);
          }
          v18 = (const struct tagUIPI_INFO *)&v26;
        }
        if ( !UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v15 + 109), v18, v17) )
        {
          if ( v7 != 793
            || (v22 = *((_QWORD *)a1 + 2), *(struct tagWND **)(v22 + 1584) != a1)
            || ((CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v20, v19, v21)) == 0LL
              ? (v24 = 0LL)
              : (v24 = *CurrentThreadWin32Thread),
                *(_QWORD *)(v22 + 472) != *(_QWORD *)(v24 + 472)) )
          {
            EtwTraceUIPIMsgError(v15, v13, v7, a3, a4);
            UserSetLastError(5);
            return 0LL;
          }
        }
      }
    }
  }
  result = _PostTransformableMessageExtended(a1, v7, a3, a4, 0LL, 1);
  if ( result >= MmSystemRangeStart )
  {
    LOBYTE(v12) = result != 0LL;
    return (struct tagQMSG *)v12;
  }
  return result;
}
