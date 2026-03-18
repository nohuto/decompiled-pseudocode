/*
 * XREFs of rimFindOrCreateActiveContact @ 0x140181830
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x140181B78 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmActivateContact @ 0x1401F1828 (RIMCmActivateContact.c)
 */

__int64 __fastcall rimFindOrCreateActiveContact(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        CHAR *a3,
        ULONG ReportLength,
        USHORT a5,
        _DWORD *a6)
{
  _DWORD *v6; // r14
  char v8; // bl
  bool v9; // di
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  unsigned int v13; // r8d
  _QWORD **v14; // rcx
  _QWORD *i; // rdx
  __int64 v16; // rbx
  int v17; // edx
  unsigned int v18; // r9d
  int v19; // ecx
  unsigned int v20; // ebp
  unsigned int v21; // r14d
  char v22; // si
  char v23; // r15
  __int64 v24; // rax
  __int64 v25; // rcx
  char v26; // si
  bool v27; // bp
  __int64 v28; // rax
  void *v29; // rdx
  int v30; // r8d

  v6 = a6;
  LODWORD(a6) = 0;
  if ( HidP_GetUsageValue(HidP_Input, 0xDu, a5, 0x51u, (PULONG)&a6, a2, a3, ReportLength) < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v8 = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 19392),
        3,
        1,
        37,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    }
  }
  v13 = (unsigned int)a6;
  v14 = (_QWORD **)(*(_QWORD *)(a1 + 1000) + 16LL * ((unsigned int)a6 % *(_DWORD *)(a1 + 1008)));
  for ( i = *v14; ; i = (_QWORD *)*i )
  {
    if ( i == v14 )
    {
      v16 = 0LL;
      goto LABEL_15;
    }
    v16 = (__int64)(i - 2);
    if ( *((_DWORD *)i - 4) == (_DWORD)a6 && (*(_DWORD *)(v16 + 32) & 4) == 0 )
      break;
  }
  if ( i != (_QWORD *)16 )
  {
    *v6 = 0;
    return v16;
  }
LABEL_15:
  v17 = *(_DWORD *)(a1 + 24);
  v18 = *(_DWORD *)(a1 + 1016);
  *v6 = 1;
  if ( v17 == 7 )
    v19 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(a1 + 976) + 32LL), 2);
  else
    v19 = 0;
  v20 = v18 - 1;
  if ( !v19 )
    v20 = v18;
  v21 = *(_DWORD *)(a1 + 776) - 1;
  if ( v17 != 7 )
    v21 = *(_DWORD *)(a1 + 776);
  if ( v20 > v21 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 926LL);
LABEL_35:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 935LL);
    v13 = (unsigned int)a6;
LABEL_36:
    v16 = RIMCmActivateContact(a1, v13);
    if ( !v16 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v25 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v25 & 1) == 0)
        || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v26 = 0;
      }
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = W32GetUserSessionState(v25);
        v29 = &WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids;
        LOBYTE(v30) = v27;
        LOBYTE(v29) = v26;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          (_DWORD)v29,
          v30,
          *(_QWORD *)(v28 + 19392),
          2,
          1,
          39,
          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
      }
    }
    return v16;
  }
  if ( v20 != v21 )
  {
    if ( v20 < v21 )
      goto LABEL_36;
    goto LABEL_35;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v22 = 0;
  }
  v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = W32GetUserSessionState(WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v23,
      *(_QWORD *)(v24 + 19392),
      2u,
      1u,
      0x26u,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
      v20 + 1,
      v21);
  }
  return v16;
}
