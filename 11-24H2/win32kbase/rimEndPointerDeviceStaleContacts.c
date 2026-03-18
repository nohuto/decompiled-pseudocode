/*
 * XREFs of rimEndPointerDeviceStaleContacts @ 0x140059314
 * Callers:
 *     RIMEndAllStaleContacts @ 0x1400592A8 (RIMEndAllStaleContacts.c)
 * Callees:
 *     RIMAbandonPointerDeviceFrame @ 0x140056208 (RIMAbandonPointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1400574B8 (RIMStartPointerDeviceFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x140057B0C (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x140058A68 (RIMCompletePointerDeviceFrame.c)
 *     RIMCmActiveContactsEnd @ 0x140059FD4 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsBegin @ 0x14005A030 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsNext @ 0x14005A08C (RIMCmActiveContactsNext.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x14011657C (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14014EF88 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x140180484 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1401807E4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMCmDeactivateContact @ 0x1401822F4 (RIMCmDeactivateContact.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x14019930C (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     ?ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14019EF70 (-ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1401F1BA0 (RIMCmIsContactDeliveringAnyData.c)
 *     ?Invalidate@PalmTelemetry@@QEAAXW4tagTEL_INVALIDATION_REASON@@@Z @ 0x1401F2240 (-Invalidate@PalmTelemetry@@QEAAXW4tagTEL_INVALIDATION_REASON@@@Z.c)
 */

__int64 __fastcall rimEndPointerDeviceStaleContacts(
        struct RawInputManagerObject *a1,
        struct RIMDEV *a2,
        unsigned __int64 a3)
{
  __int64 v3; // rdi
  int v6; // esi
  unsigned int v7; // r9d
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  __int64 result; // rax
  int *v17; // r14
  int v18; // r9d
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  int v21; // ecx
  bool v22; // al
  _UNKNOWN **v23; // rcx
  int v24; // ebx
  int v25; // edi
  int v26; // esi
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  unsigned int v30; // eax
  __int64 v31; // rcx
  bool v32; // al
  _UNKNOWN **v33; // rcx
  int v34; // ebx
  int v35; // edi
  int v36; // esi
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  bool v40; // bl
  bool v41; // di
  __int64 UserSessionState; // rax
  int v43; // r8d
  int v44; // edx
  _WORD *v45; // rcx
  int v46; // [rsp+28h] [rbp-A1h]
  __int16 v47; // [rsp+60h] [rbp-69h] BYREF
  __int16 v48; // [rsp+62h] [rbp-67h] BYREF
  int v49; // [rsp+64h] [rbp-65h]
  unsigned int v50; // [rsp+68h] [rbp-61h]
  int v51; // [rsp+6Ch] [rbp-5Dh]
  int v52; // [rsp+70h] [rbp-59h] BYREF
  int v53; // [rsp+74h] [rbp-55h] BYREF
  __int64 v54; // [rsp+78h] [rbp-51h]
  __int64 v55; // [rsp+80h] [rbp-49h]
  unsigned __int64 v56; // [rsp+88h] [rbp-41h]
  __int64 v57; // [rsp+90h] [rbp-39h] BYREF
  __int128 v58; // [rsp+98h] [rbp-31h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-21h]
  __int128 v60; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-9h]
  char v62[88]; // [rsp+C8h] [rbp-1h] BYREF
  char v63; // [rsp+130h] [rbp+67h] BYREF
  bool v64; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned __int64 v65; // [rsp+140h] [rbp+77h]
  __int16 v66; // [rsp+148h] [rbp+7Fh] BYREF

  v65 = a3;
  v3 = *((_QWORD *)a2 + 57);
  v54 = v3;
  v51 = 0;
  v6 = 0;
  v7 = *(_DWORD *)(v3 + 800);
  v8 = 0;
  v49 = 0;
  v50 = v7 + *(_DWORD *)(v3 + 844);
  v9 = *(_QWORD *)(v3 + 808) + *(_QWORD *)(v3 + 872);
  v56 = gliQpcFreq.QuadPart * (unsigned __int64)v7 / 0x3E8;
  v55 = v9;
  active = RIMCmActiveContactsBegin(&v60, v3);
  v11 = *(_QWORD *)(active + 16);
  v58 = *(_OWORD *)active;
  v59 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd(v62, v3);
    v13 = *(_OWORD *)v12;
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *(_QWORD *)v12;
    v61 = v14;
    v60 = v13;
    if ( (_QWORD)v58 == v15 )
    {
      result = DWORD2(v60);
      if ( DWORD2(v58) == DWORD2(v60) && v59 == v61 )
        break;
    }
    v17 = (int *)(v59 - 16);
    if ( (*(_DWORD *)(v59 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v3, &v58);
    v19 = *((_QWORD *)v17 + 6);
    v20 = v65;
    if ( v65 > v19 + v56 )
    {
      v21 = *(_DWORD *)(v3 + 24);
      if ( (unsigned int)(v21 - 5) <= 1 )
      {
        v8 = 2;
      }
      else if ( (unsigned int)(v21 - 1) <= 3 )
      {
        v8 = 1;
      }
      if ( (unsigned int)dword_14029AE68 > 5
        && (qword_14029AE78 & 0x400000000000LL) != 0
        && (qword_14029AE80 & 0x400000000000LL) == qword_14029AE80 )
      {
        v45 = (_WORD *)*((_QWORD *)a2 + 55);
        v57 = 0x1000000LL;
        v63 = 1;
        v64 = 0;
        v52 = 1000 * (v65 - v19) / gliQpcFreq.QuadPart;
        v53 = v17[584];
        v66 = v45[57];
        v47 = v45[56];
        v48 = v45[55];
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          (_DWORD)v45,
          (unsigned int)&unk_140279C3C,
          0,
          v18,
          (__int64)&v48,
          (__int64)&v47,
          (__int64)&v66,
          (__int64)&v53,
          (__int64)&v52,
          (__int64)&v64,
          (__int64)&v63,
          (__int64)&v57);
      }
      if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v17) )
      {
        if ( !v6 )
        {
          RIMAbandonPointerDeviceFrame(a1, (__int64)a2);
          if ( !(unsigned int)RIMStartPointerDeviceFrame((__int64)a1, (__int64)a2, v20) )
          {
            v40 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            result = (__int64)&WPP_RECORDER_INITIALIZED;
            v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
              LOBYTE(v43) = v41;
              LOBYTE(v44) = v40;
              result = WPP_RECORDER_AND_TRACE_SF_(
                         *((_QWORD *)WPP_GLOBAL_Control + 3),
                         v44,
                         v43,
                         *(_QWORD *)(UserSessionState + 19392),
                         4,
                         1,
                         50,
                         (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
            }
            goto LABEL_20;
          }
          v49 = 1;
        }
        v22 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v23 = &WPP_RECORDER_INITIALIZED;
        v63 = v22;
        v64 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v24 = v17[671];
          v25 = v17[2];
          v26 = *v17;
          LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          v27 = W32GetUserSessionState(v23);
          LOBYTE(v28) = v64;
          LOBYTE(v29) = v63;
          WPP_RECORDER_AND_TRACE_SF_dDD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v29,
            v28,
            *(_QWORD *)(v27 + 19392),
            4,
            v46,
            51,
            (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
            v26,
            v25,
            v24);
          v3 = v54;
        }
        v30 = v50;
        v17[591] |= 4u;
        RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, (_DWORD)a2, (_DWORD)v17, v55, v30, 0);
        v6 = v49;
      }
      else
      {
        v32 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v33 = &WPP_RECORDER_INITIALIZED;
        v63 = v32;
        v64 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v34 = v17[671];
          v35 = v17[2];
          v36 = *v17;
          LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          v37 = W32GetUserSessionState(v33);
          LOBYTE(v38) = v64;
          LOBYTE(v39) = v63;
          WPP_RECORDER_AND_TRACE_SF_dDD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v39,
            v38,
            *(_QWORD *)(v37 + 19392),
            4,
            v46,
            49,
            (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
            v36,
            v35,
            v34);
          v3 = v54;
          v6 = v49;
        }
        RIMCmDeactivateContact(v3, v17);
        v51 = 1;
      }
    }
  }
  if ( v6 )
  {
    InputTraceLogging::RIM::ContactAssessmentTimer(a2);
    RIMInsertSimulatedKeepAliveStateForActiveContacts(a1, a2, v55, v50);
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)a2);
    result = RIMCompletePointerDeviceFrame(a1, (__int64)a2, 2u);
    goto LABEL_22;
  }
LABEL_20:
  if ( v51 )
    result = RIMUpdatePointerDeviceStateAfterFrameCompleted(a1);
LABEL_22:
  v31 = *((_QWORD *)a1 + 131);
  if ( v31 && v8 )
    return PalmTelemetry::Invalidate(v31, v8);
  return result;
}
