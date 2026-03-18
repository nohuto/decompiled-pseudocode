/*
 * XREFs of rimDoProcessAnyPointerDeviceInput @ 0x1400D6DC8
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1400D69F0 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     rimProcessPointerDeviceButtonContact @ 0x1400571D4 (rimProcessPointerDeviceButtonContact.c)
 *     RIMStartPointerDeviceFrame @ 0x1400574B8 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1400577FC (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x140057884 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x140057B0C (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x140058A68 (RIMCompletePointerDeviceFrame.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x140059874 (rimProcessMissingPointerDeviceContacts.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1400E68B0 (rimUpdatePointerDeviceFrameScanTime.c)
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1400F0548 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x1400F0D84 (WPP_RECORDER_AND_TRACE_SF_i.c)
 *     rimProcessPointerDeviceContact @ 0x140181B78 (rimProcessPointerDeviceContact.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimDoProcessAnyPointerDeviceInput(struct RawInputManagerObject *a1, __int64 a2)
{
  unsigned int v3; // r12d
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r13
  char v7; // di
  char v8; // bl
  bool v9; // si
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  LARGE_INTEGER PerformanceCounter; // rbx
  unsigned int v14; // eax
  int v15; // r12d
  char v16; // si
  bool v17; // bl
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  struct RawInputManagerObject *v21; // rsi
  char v22; // si
  bool v23; // r14
  __int64 v24; // rax
  int v25; // edx
  int v26; // r8d
  bool v27; // zf
  unsigned int v28; // esi
  unsigned int v29; // r14d
  unsigned __int16 v30; // r12
  int v31; // eax
  int v32; // eax
  char v33; // si
  char v34; // r14
  __int64 v35; // rax
  int v36; // [rsp+28h] [rbp-61h]
  __int16 v37; // [rsp+30h] [rbp-59h]
  __int64 v38; // [rsp+50h] [rbp-39h] BYREF
  int v39; // [rsp+5Ch] [rbp-2Dh] BYREF
  _DWORD v40[3]; // [rsp+60h] [rbp-29h] BYREF
  int v41; // [rsp+6Ch] [rbp-1Dh] BYREF
  __int64 v42; // [rsp+70h] [rbp-19h]
  __int64 v43; // [rsp+78h] [rbp-11h]
  __int64 v44; // [rsp+80h] [rbp-9h]
  __int64 *v45; // [rsp+88h] [rbp-1h] BYREF
  __int64 *v46[10]; // [rsp+90h] [rbp+7h] BYREF
  __int64 v48; // [rsp+F8h] [rbp+6Fh] BYREF
  int v49; // [rsp+100h] [rbp+77h]
  ULONG v50; // [rsp+108h] [rbp+7Fh] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v45, "ProcessPointerInput", 0LL);
  v3 = *(_DWORD *)(a2 + 248);
  v42 = *(_QWORD *)(a2 + 456);
  v4 = *(_QWORD *)(a2 + 440);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = *(unsigned __int16 *)(v4 + 44);
  v43 = v5;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
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
      4,
      1,
      14,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
  }
  if ( !*(_QWORD *)(v42 + 792) )
  {
    LODWORD(v48) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 117LL);
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v14 = v3 / (unsigned int)v6;
  if ( !(v3 % (unsigned int)v6) )
  {
    v15 = 0;
    if ( !v14 )
      goto LABEL_12;
    goto LABEL_22;
  }
  if ( v3 <= (unsigned int)v6 )
  {
    v14 = 1;
    v15 = 0;
LABEL_22:
    v21 = a1;
    v44 = v14;
    while ( 1 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        v46,
        "ProcessPointerInputReport",
        (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v45);
      v39 = 0;
      LOWORD(v48) = 0;
      v50 = 0;
      v38 = 0LL;
      v41 = 0;
      v40[0] = 0;
      v49 = 0;
      if ( (int)rimExtractFrameInfoAndAbandonIncompleteFrame(
                  (_DWORD)v21,
                  a2,
                  v5,
                  v6,
                  &v50,
                  (__int64)&v38,
                  (__int64)&v38 + 4,
                  (__int64)&v41,
                  (__int64)v40,
                  (__int64)&v48) < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v15 = 0;
          v22 = 0;
        }
        else
        {
          v22 = 1;
          v15 = 0;
        }
        v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v24 = W32GetUserSessionState(WPP_GLOBAL_Control);
        v37 = 16;
        goto LABEL_32;
      }
      if ( !HIDWORD(v38) )
        goto LABEL_60;
      rimUpdatePointerDeviceFrameScanTime(a2, v5, (unsigned int)v6);
      if ( v50 )
      {
        if ( (unsigned int)RIMStartPointerDeviceFrame((__int64)v21, a2, PerformanceCounter.QuadPart) )
        {
          if ( *(_DWORD *)(v42 + 24) == 7 )
            rimProcessPointerDeviceButtonContact(v21, a2, v5, v6, 0);
LABEL_60:
          RIMStoreRawDataInPointerDeviceFrame((__int64)v21, a2, v5, v6, &v39);
          v28 = v38;
          v29 = 0;
          if ( (_DWORD)v38 )
          {
            v30 = v48;
            do
            {
              LODWORD(v48) = 0;
              LODWORD(v38) = 0;
              rimProcessPointerDeviceContact(a1, v30, v39, (__int64)&v48, (__int64)&v38);
              if ( v40[0] && (_DWORD)v48 )
              {
                v15 = v49;
                v32 = 1;
                goto LABEL_77;
              }
              v31 = v49;
              if ( (_DWORD)v38 )
                v31 = 1;
              v49 = v31;
              if ( (*(_DWORD *)(v42 + 368) & 2) != 0 )
              {
                v30 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v42 + 768) + 24LL) + 8LL * v30 + 4);
              }
              else
              {
                if ( v50 != 1 )
                {
                  v40[1] = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 251LL);
                }
                if ( v28 != 1 )
                {
                  v40[2] = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 252LL);
                }
              }
              ++v29;
            }
            while ( v29 < v28 );
            v15 = v49;
          }
          v32 = v41;
LABEL_77:
          v21 = a1;
          if ( v32 )
          {
            rimProcessMissingPointerDeviceContacts((int)a1, a2, v15);
            RIMAbArbitratePointerDeviceFrame(a1, a2);
            RIMCompletePointerDeviceFrame(a1, a2, 0);
          }
LABEL_40:
          v15 = 0;
          goto LABEL_34;
        }
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v15 = 0;
          v22 = 0;
        }
        else
        {
          v22 = 1;
          v15 = 0;
        }
        v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v24 = W32GetUserSessionState(WPP_GLOBAL_Control);
          v37 = 18;
          goto LABEL_32;
        }
      }
      else
      {
        if ( *(_DWORD *)(v42 + 24) == 7 )
        {
          rimCreateAndProcessPointerDeviceButtonOnlyFrame(v21, a2, v5, v6, PerformanceCounter.QuadPart);
          goto LABEL_40;
        }
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v15 = 0;
          v22 = 0;
        }
        else
        {
          v22 = 1;
          v15 = 0;
        }
        v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v24 = W32GetUserSessionState(WPP_GLOBAL_Control);
          v37 = 17;
LABEL_32:
          LOBYTE(v26) = v23;
          LOBYTE(v25) = v22;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v25,
            v26,
            *(_QWORD *)(v24 + 19392),
            4,
            1,
            v37,
            (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
        }
      }
LABEL_33:
      v21 = a1;
LABEL_34:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v46);
      v43 += v6;
      v27 = v44-- == 1;
      v5 = v43;
      if ( v27 )
        goto LABEL_12;
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v33 = 0;
  }
  v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v35 = W32GetUserSessionState(WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v33,
      v34,
      *(_QWORD *)(v35 + 19392),
      4u,
      1u,
      0xFu,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
  }
LABEL_12:
  v16 = (unsigned __int64)(1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart))
      / gliQpcFreq.QuadPart;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v7 = 0;
  }
  v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v19) = v17;
    LOBYTE(v20) = v7;
    WPP_RECORDER_AND_TRACE_SF_i(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      v19,
      *(_QWORD *)(v18 + 19392),
      4,
      v36,
      19,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
      v16);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v45);
}
