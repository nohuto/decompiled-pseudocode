/*
 * XREFs of RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EC448
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401972C4 (RIMOnAsyncWorkItemNotification.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55555@Z @ 0x140005F18 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@-$_t.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RimDeviceTypeToRimInputType @ 0x140069204 (RimDeviceTypeToRimInputType.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1400F0FD0 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     RIMDoOnPnpNotification @ 0x1401127D0 (RIMDoOnPnpNotification.c)
 *     ?RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x14011DD50 (-RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     RIMFindInputDeviceForConfig @ 0x140127684 (RIMFindInputDeviceForConfig.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x14012EC64 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1401D1DE0 (RIMFreeDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sdq @ 0x1401ED164 (WPP_RECORDER_AND_TRACE_SF_Sdq.c)
 */

__int64 __fastcall RIMDeviceClassNotifyAsyncWorkItem(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  char v5; // r12
  __int64 v6; // r15
  _QWORD *v8; // rcx
  int v9; // r13d
  char v10; // di
  char v11; // si
  const wchar_t *v12; // rbx
  __int64 UserSessionState; // rax
  const UNICODE_STRING *v14; // rdi
  __int64 v15; // r10
  const UNICODE_STRING *v16; // rdx
  __int64 v17; // rax
  int v18; // ecx
  BOOLEAN v19; // al
  __int64 v20; // rbx
  int v21; // r14d
  __int64 v22; // rbx
  int v23; // edi
  __int64 v24; // rsi
  __int64 v25; // rax
  int v26; // edx
  int v27; // r8d
  bool v28; // cf
  __int64 v29; // r10
  __int64 v30; // rcx
  __int64 v31; // r9
  char v32; // di
  char v33; // si
  const wchar_t *v34; // rbx
  __int64 v35; // rax
  char v36; // di
  char v37; // si
  const wchar_t *v38; // rbx
  __int64 v39; // rax
  char v40; // di
  bool v41; // si
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  __int64 v45; // r8
  __int64 v46; // r9
  char v47; // bl
  bool v48; // di
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  int v53; // [rsp+20h] [rbp-49h]
  int v54; // [rsp+28h] [rbp-41h]
  int v55; // [rsp+30h] [rbp-39h]
  int v56; // [rsp+38h] [rbp-31h]
  int v57; // [rsp+60h] [rbp-9h] BYREF
  int v58; // [rsp+64h] [rbp-5h] BYREF
  __int64 v59; // [rsp+68h] [rbp-1h] BYREF
  __int64 v60; // [rsp+70h] [rbp+7h] BYREF
  const WCHAR *v61; // [rsp+78h] [rbp+Fh] BYREF
  int v62; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v63; // [rsp+D8h] [rbp+6Fh] BYREF
  const UNICODE_STRING *v64; // [rsp+E0h] [rbp+77h] BYREF
  int v65; // [rsp+E8h] [rbp+7Fh] BYREF

  v4 = *(unsigned int *)(a1 + 32);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 24);
  v63 = v4;
  if ( (unsigned int)v4 > 2 )
  {
    v62 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 323);
  }
  v8 = *(_QWORD **)(32 * (v4 + 4) + v6);
  if ( *(_QWORD *)(a1 + 64) != *v8 || *(_QWORD *)(a1 + 72) != v8[1] )
  {
    v62 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 325);
  }
  v9 = -1073741823;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v10 = 0;
  }
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = *(const wchar_t **)(a1 + 48);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v11,
      *(_QWORD *)(UserSessionState + 19392),
      4u,
      1u,
      0x10u,
      (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
      v12);
  }
  v14 = (const UNICODE_STRING *)(a1 + 40);
  v64 = (const UNICODE_STRING *)(a1 + 40);
  InputTraceLogging::RIM::RimDeviceClassNotification(
    (const struct _GUID *)(a1 + 80),
    (const struct _UNICODE_STRING *)(a1 + 40),
    a3,
    a4);
  if ( *(_QWORD *)(a1 + 80) == *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1
    && *(_QWORD *)(a1 + 88) == *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 )
  {
    v15 = *(_QWORD *)(v6 + 424);
    v59 = v15;
    if ( v15 )
    {
      v16 = (const UNICODE_STRING *)v15;
      v17 = v15;
      while ( 1 )
      {
        v18 = *(_DWORD *)(v17 + 168);
        if ( (v18 & 0x20) == 0 && (v18 & 0x2000) == 0 )
        {
          v19 = RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), v16 + 12, 0);
          v15 = v59;
          if ( v19 )
            break;
        }
        v15 = *(_QWORD *)(v15 + 40);
        v59 = v15;
        v17 = v15;
        v16 = (const UNICODE_STRING *)v15;
        if ( !v15 )
          goto LABEL_21;
      }
      if ( (*(_DWORD *)(v59 + 184) & 0x20) == 0 )
      {
LABEL_21:
        if ( v15 )
        {
          RIMLockExclusive(v6 + 760);
          v20 = v59;
          if ( (*(_DWORD *)(v59 + 168) & 0x400) == 0 )
          {
            v62 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 448);
            v20 = v59;
          }
          v21 = 0;
          if ( (*(_DWORD *)(v20 + 184) & 1) != 0 )
          {
            if ( *(_QWORD *)(v20 + 208) )
            {
              v62 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 464);
              v20 = v59;
            }
            if ( *(_QWORD *)(v20 + 216) )
            {
              v62 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 465);
              v20 = v59;
            }
            if ( (*(_DWORD *)(v20 + 168) & 0x80u) != 0 )
            {
              v62 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 466);
              LOBYTE(v20) = v59;
            }
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v40 = 0;
            }
            v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v42 = W32GetUserSessionState(WPP_GLOBAL_Control);
              LOBYTE(v43) = v41;
              LOBYTE(v44) = v40;
              WPP_RECORDER_AND_TRACE_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v44,
                v43,
                *(_QWORD *)(v42 + 19392),
                4,
                1,
                20,
                (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
                v20);
            }
            v14 = v64;
          }
          else
          {
            if ( *(_QWORD *)(v20 + 176) )
            {
              v62 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 458);
            }
            v21 = 1;
          }
          RIMUnlockExclusive(v6 + 760);
          if ( v21 )
          {
            rimQueueRimDevChangeAsyncWorkItem((struct RawInputManagerObject *)v6, v59, 3);
            RIMFreeDev((struct RawInputManagerObject *)v6, (struct RIMDEV *)v59);
          }
          v59 = 0LL;
        }
        goto LABEL_74;
      }
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      {
        v5 = 1;
      }
      LOBYTE(v62) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = *(_QWORD *)(v59 + 232);
        v23 = *(_DWORD *)(v59 + 48);
        v24 = *(_QWORD *)(a1 + 48);
        v25 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v26) = v5;
        LOBYTE(v27) = v62;
        WPP_RECORDER_AND_TRACE_SF_Sdq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v27,
          *(_QWORD *)(v25 + 19392),
          v53,
          v54,
          v55,
          v56,
          v24,
          v23,
          v22);
        v15 = v59;
      }
      if ( !*(_QWORD *)(v15 + 232)
        && (unsigned int)dword_14029AF48 > 5
        && tlgKeywordOn((__int64)&dword_14029AF48, 0x400000000000LL) )
      {
        v62 = -__CFSHR__(*(_DWORD *)(v15 + 168), 26);
        v63 = -__CFSHR__(*(_DWORD *)(v15 + 168), 24);
        LODWORD(v64) = -__CFSHR__(*(_DWORD *)(v15 + 168), 21);
        v65 = -__CFSHR__(*(_DWORD *)(v15 + 168), 11);
        v28 = __CFSHR__(*(_DWORD *)(v15 + 168), 8);
        v58 = 0;
        v57 = -v28;
        v60 = (unsigned int)RimDeviceTypeToRimInputType(v15, *(_DWORD *)(v15 + 48));
        v61 = *(const WCHAR **)(v29 + 200);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v30,
          (__int64)&unk_140278C7C,
          v60,
          v31,
          &v61,
          (__int64)&v60,
          (__int64)&v58,
          (__int64)&v57,
          (__int64)&v65,
          (__int64)&v64,
          (__int64)&v63,
          (__int64)&v62);
        v15 = v59;
      }
      if ( *(_DWORD *)(v15 + 48) == 3 )
      {
        v62 = 0;
        v63 = 0;
        v64 = 0LL;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v32 = 0;
        }
        v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v34 = *(const wchar_t **)(a1 + 48);
          v35 = W32GetUserSessionState(WPP_GLOBAL_Control);
          WPP_RECORDER_AND_TRACE_SF_S(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v32,
            v33,
            *(_QWORD *)(v35 + 19392),
            4u,
            1u,
            0x12u,
            (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
            v34);
          v15 = v59;
        }
        if ( (unsigned int)RIMFindInputDeviceForConfig(*(_QWORD *)(v15 + 440), v6, v15, &v62, &v63, &v64) && v62 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v36 = 0;
          }
          v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v38 = *(const wchar_t **)(a1 + 48);
            v39 = W32GetUserSessionState(WPP_GLOBAL_Control);
            WPP_RECORDER_AND_TRACE_SF_S(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v36,
              v37,
              *(_QWORD *)(v39 + 19392),
              4u,
              1u,
              0x13u,
              (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
              v38);
          }
        }
      }
    }
    else
    {
LABEL_74:
      v9 = RIMCreateDev((struct RawInputManagerObject *)v6, v63, v14, 0, 0, 0LL, &v59);
      if ( v9 >= 0 )
      {
        *(_DWORD *)(v59 + 168) |= 1u;
        v9 = RIMDoOnPnpNotification((struct RawInputManagerObject *)v6, v59, v45, v46);
      }
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v47 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v47 = 0;
  }
  v48 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v49 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v50) = v48;
    LOBYTE(v51) = v47;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v51,
      v50,
      *(_QWORD *)(v49 + 19392),
      4,
      1,
      21,
      (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
      v9);
  }
  return (unsigned int)v9;
}
