/*
 * XREFs of rimExtractScantime @ 0x1400E69B0
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1400E68B0 (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z @ 0x1400E6F64 (-UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z.c)
 *     RIMDivideToCeilingOrNearestInt @ 0x1401803D8 (RIMDivideToCeilingOrNearestInt.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimExtractScantime(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        CHAR *a3,
        ULONG a4,
        _QWORD *a5,
        _DWORD *a6)
{
  __int64 v6; // rdi
  NTSTATUS v8; // eax
  _DWORD *v9; // r15
  _QWORD *v10; // r12
  int v11; // r8d
  ULONG v12; // eax
  ULONG v13; // r9d
  ULONG v14; // ecx
  __int64 v15; // rcx
  int v16; // r14d
  int v17; // r14d
  char v18; // bl
  bool v19; // si
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  char v23; // bl
  bool v24; // si
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  char v28; // bl
  bool v29; // si
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  char v33; // si
  bool v34; // r14
  __int64 UserSessionState; // rax
  int v36; // r8d
  int v37; // edx
  __int64 v38; // rcx
  char v39; // si
  unsigned int v40; // ebx
  bool v41; // r14
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  unsigned __int64 v45; // r8
  ULONG v46; // r8d
  ULONG UsageValue; // [rsp+80h] [rbp+30h] BYREF

  v6 = a1 + 840;
  ++*(_DWORD *)(a1 + 864);
  UsageValue = 0;
  v8 = HidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x56u, &UsageValue, a2, a3, a4);
  v9 = a6;
  v10 = a5;
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v33 = 0;
    }
    v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v36) = v34;
      LOBYTE(v37) = v33;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v37,
        v36,
        *(_QWORD *)(UserSessionState + 19392),
        2,
        1,
        70,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    }
    goto LABEL_59;
  }
  v11 = *(_DWORD *)(v6 + 24);
  if ( v11 == 1 )
  {
    if ( *(_DWORD *)v6 )
    {
      LODWORD(a6) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3378LL);
    }
    if ( *(_DWORD *)(v6 + 24) != 1 )
    {
      LODWORD(a6) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3379LL);
    }
    if ( *(_DWORD *)(v6 + 8) )
    {
      LODWORD(a6) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3380LL);
    }
    if ( *(_DWORD *)(v6 + 4) )
    {
      LODWORD(a6) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3381LL);
    }
    if ( *(_DWORD *)(v6 + 12) )
    {
      LODWORD(a6) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3382LL);
    }
    if ( *(_DWORD *)(v6 + 20) )
    {
      LODWORD(a6) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3383LL);
    }
    if ( (*(_DWORD *)(v6 + 48) & 1) != 0 )
    {
      LODWORD(a6) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3384LL);
    }
    *(_DWORD *)v6 = *v9;
    *(_QWORD *)(v6 + 40) = *v10;
    v12 = UsageValue;
    *(_DWORD *)(v6 + 12) = UsageValue;
    *(_DWORD *)(v6 + 16) = v12;
    goto LABEL_60;
  }
  if ( (*(_DWORD *)(v6 + 48) & 1) == 0 )
  {
    v13 = *(_DWORD *)(v6 + 12);
    if ( UsageValue < v13 % *(_DWORD *)(a1 + 896) )
      ++*(_DWORD *)(v6 + 28);
    v14 = UsageValue + *(_DWORD *)(a1 + 896) * *(_DWORD *)(v6 + 28);
    if ( v14 <= v13 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v23 = 0;
      }
      v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v26) = v24;
        LOBYTE(v27) = v23;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v27,
          v26,
          *(_QWORD *)(v25 + 19392),
          4,
          1,
          67,
          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
      }
      *(_DWORD *)(v6 + 48) |= 1u;
    }
    else
    {
      *(_DWORD *)(v6 + 12) = v14;
      v15 = v14 - *(_DWORD *)(v6 + 16);
      LODWORD(a6) = 0;
      if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v15, (unsigned int)(v11 - 1), 1LL, &a6) )
      {
        v16 = (int)a6;
        if ( !(_DWORD)a6 )
        {
          LODWORD(a6) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3413LL);
        }
        *(_DWORD *)(v6 + 20) = v16;
      }
    }
  }
  if ( (*(_DWORD *)(v6 + 48) & 1) != 0 )
  {
    v17 = *(_DWORD *)(v6 + 20);
    if ( v17 && *(_DWORD *)(v6 + 24) >= 5u )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v18 = 0;
      }
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v21) = v19;
        LOBYTE(v22) = v18;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v22,
          v21,
          *(_QWORD *)(v20 + 19392),
          4,
          1,
          68,
          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
          v17);
      }
      *(_DWORD *)(v6 + 12) += *(_DWORD *)(v6 + 20);
      goto LABEL_60;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v28 = 0;
    }
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v31) = v29;
      LOBYTE(v32) = v28;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v32,
        v31,
        *(_QWORD *)(v30 + 19392),
        4,
        1,
        69,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
        80);
    }
LABEL_59:
    *(_DWORD *)(v6 + 12) += 80;
  }
LABEL_60:
  if ( *(_DWORD *)(v6 + 24) > 1u )
  {
    v38 = (unsigned int)(*(_DWORD *)(v6 + 12) - *(_DWORD *)(v6 + 16));
    LODWORD(a6) = 0;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v38, 10LL, 0LL, &a6) )
    {
      v40 = (unsigned int)a6;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v39 = 0;
      }
      v40 = 8;
      v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v42 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v43) = v41;
        LOBYTE(v44) = v39;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v44,
          v43,
          *(_QWORD *)(v42 + 19392),
          4,
          1,
          71,
          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
          8);
      }
    }
    v45 = gliQpcFreq.QuadPart * v40;
    *v9 = v40 + *(_DWORD *)v6;
    *v10 = *(_QWORD *)(v6 + 40) + v45 / 0x3E8;
  }
  v46 = UsageValue;
  *(_DWORD *)(v6 + 8) = *(_DWORD *)(v6 + 4);
  *(_DWORD *)(v6 + 4) = *v9;
  *(_QWORD *)(v6 + 32) = *v10;
  InputTraceLogging::RIM::UpdateScantime((const struct tagHPD_FRAME_SCAN_TIME *)v6, 1, v46);
}
