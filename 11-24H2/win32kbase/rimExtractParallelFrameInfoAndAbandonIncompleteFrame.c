/*
 * XREFs of rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1400F0610
 * Callers:
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1400F0548 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     RIMAbandonPointerDeviceFrame @ 0x140056208 (RIMAbandonPointerDeviceFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dddd @ 0x140197C74 (WPP_RECORDER_AND_TRACE_SF_Dddd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimExtractParallelFrameInfoAndAbandonIncompleteFrame(
        struct RawInputManagerObject *a1,
        __int64 a2,
        CHAR *a3,
        ULONG a4,
        PULONG a5,
        ULONG *a6,
        _DWORD *a7,
        int *a8,
        _DWORD *a9,
        _WORD *a10)
{
  __int64 v10; // rsi
  unsigned int v12; // r12d
  unsigned int *v13; // rbx
  char v14; // bp
  char v15; // di
  bool v16; // r14
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  unsigned int v20; // r13d
  int v21; // r14d
  char v22; // di
  char v23; // si
  __int64 v24; // rax
  PULONG v25; // rsi
  NTSTATUS v26; // eax
  ULONG v27; // edx
  unsigned int v28; // eax
  char v29; // di
  bool v30; // si
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  ULONG v34; // eax
  ULONG v35; // ecx
  char v36; // di
  char v37; // si
  __int64 v38; // rax
  ULONG v39; // ecx
  unsigned int v40; // eax
  char v41; // bl
  bool v42; // di
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  bool v46; // r14
  ULONG v47; // edi
  ULONG v48; // esi
  int v49; // ebx
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  int UsageValue; // [rsp+20h] [rbp-98h]
  int PreparsedData; // [rsp+28h] [rbp-90h]
  int Report; // [rsp+30h] [rbp-88h]
  int ReportLength; // [rsp+38h] [rbp-80h]
  struct _HIDP_PREPARSED_DATA *v58; // [rsp+68h] [rbp-50h]

  v10 = *(_QWORD *)(a2 + 456);
  v12 = 0;
  v13 = *(unsigned int **)(v10 + 768);
  v58 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 440) + 16LL);
  v14 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v15 = 0;
  }
  v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v18) = v16;
    LOBYTE(v19) = v15;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v18,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      52,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
  }
  if ( (*(_DWORD *)(v10 + 368) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2339LL);
  if ( !v13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2340LL);
  v20 = *(_DWORD *)(v10 + 776) - 1;
  if ( *(_DWORD *)(v10 + 24) != 7 )
    v20 = *(_DWORD *)(v10 + 776);
  if ( (*(_DWORD *)(a2 + 168) & 0x2000) == 0 )
  {
    v21 = *v13;
    if ( *v13 > v20 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
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
          3u,
          1u,
          0x35u,
          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
          v21,
          v20);
      }
    }
  }
  v25 = a5;
  *a8 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  *a10 = 0;
  *a9 = 0;
  v26 = HidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x54u, a5, v58, a3, a4);
  v27 = 0;
  if ( v26 >= 0 )
  {
    v28 = v13[9];
    if ( !*a5 )
    {
      if ( v28 )
      {
        v39 = *v13;
        if ( v28 <= *v13 )
        {
          *a8 = 1;
          v39 = v28;
          v40 = 0;
        }
        else
        {
          v40 = v28 - v39;
        }
        v13[9] = v40;
        *a6 = v39;
      }
      else
      {
        *a7 = 1;
        if ( *a6 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2436LL);
      }
      goto LABEL_59;
    }
    if ( v28 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v29 = 0;
      }
      v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v31 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v32) = v30;
        LOBYTE(v33) = v29;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v33,
          v32,
          *(_QWORD *)(v31 + 19392),
          4,
          1,
          54,
          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
      }
      RIMAbandonPointerDeviceFrame(a1, a2);
      v25 = a5;
      v27 = 0;
    }
    v34 = *v25;
    if ( *v25 <= v20 )
    {
      v35 = *v13;
      if ( v34 <= *v13 )
      {
        *a8 = 1;
        v35 = v34;
      }
      else
      {
        v27 = v34 - v35;
      }
      *a6 = v35;
      v13[9] = v27;
      *a7 = 1;
      goto LABEL_59;
    }
    if ( *a6 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2403LL);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v36 = 0;
    }
    v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v38 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v37,
        *(_QWORD *)(v38 + 19392),
        4u,
        1u,
        0x37u,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    }
    v25 = a5;
LABEL_67:
    v12 = -1073741668;
    goto LABEL_68;
  }
  if ( (v13[8] & 1) != 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v41 = 0;
    }
    v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v43 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v44) = v42;
      LOBYTE(v45) = v41;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v45,
        v44,
        *(_QWORD *)(v43 + 19392),
        4,
        1,
        56,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    }
    goto LABEL_67;
  }
  *a6 = *v13;
  *a9 = 1;
LABEL_59:
  *a10 = *((_WORD *)v13 + 3);
LABEL_68:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v14 = 0;
  }
  v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v47 = *a6;
    v48 = *v25;
    v49 = *a8;
    v50 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v51) = v46;
    LOBYTE(v52) = v14;
    WPP_RECORDER_AND_TRACE_SF_Dddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v52,
      v51,
      *(_QWORD *)(v50 + 19392),
      UsageValue,
      PreparsedData,
      Report,
      ReportLength,
      v12,
      v48,
      v47,
      v49);
  }
  return v12;
}
