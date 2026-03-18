/*
 * XREFs of rimProcessMissingPointerDeviceContacts @ 0x140059874
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x140057884 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6DC8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     RIMCmActiveContactsEnd @ 0x140059FD4 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsBegin @ 0x14005A030 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsNext @ 0x14005A08C (RIMCmActiveContactsNext.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400AACA4 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14014EF88 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x140180484 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmDeactivateContact @ 0x1401822F4 (RIMCmDeactivateContact.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1401EE1CC (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1401F1BA0 (RIMCmIsContactDeliveringAnyData.c)
 */

_UNKNOWN **__fastcall rimProcessMissingPointerDeviceContacts(int a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  int v4; // r12d
  __int64 v5; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r13
  bool v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __m128i *active; // rax
  __m128i v15; // xmm1
  LARGE_INTEGER v16; // rbx
  int *v17; // rsi
  int v18; // r8d
  int v19; // r8d
  int v20; // r9d
  _WORD *v21; // rcx
  unsigned __int64 v22; // rax
  bool v23; // bl
  _UNKNOWN **result; // rax
  bool v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  __int64 v29; // rax
  bool v30; // r15
  bool v31; // r12
  int v32; // ebx
  int v33; // edi
  __int64 v34; // rax
  int v35; // edx
  int v36; // r8d
  int v37; // ebx
  int v38; // edi
  bool v39; // r15
  bool v40; // r12
  int v41; // ebx
  int v42; // edi
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  int v46; // r8d
  int v47; // r9d
  _WORD *v48; // rcx
  unsigned __int64 v49; // rax
  __int16 v50; // [rsp+38h] [rbp-A9h]
  char v51; // [rsp+48h] [rbp-99h]
  char v52; // [rsp+50h] [rbp-91h]
  _BYTE v53[2]; // [rsp+68h] [rbp-79h] BYREF
  __int16 v54; // [rsp+6Ah] [rbp-77h] BYREF
  __int16 v55; // [rsp+6Ch] [rbp-75h] BYREF
  __int16 v56; // [rsp+6Eh] [rbp-73h] BYREF
  __int16 v57; // [rsp+70h] [rbp-71h] BYREF
  __int16 v58; // [rsp+72h] [rbp-6Fh] BYREF
  __int16 v59; // [rsp+74h] [rbp-6Dh] BYREF
  int v60; // [rsp+78h] [rbp-69h] BYREF
  int v61; // [rsp+7Ch] [rbp-65h] BYREF
  LARGE_INTEGER v62; // [rsp+80h] [rbp-61h]
  __m128i v63; // [rsp+88h] [rbp-59h] BYREF
  __int64 v64; // [rsp+98h] [rbp-49h] BYREF
  int v65; // [rsp+A0h] [rbp-41h]
  __int64 v66; // [rsp+A8h] [rbp-39h]
  __m128i v67; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v68; // [rsp+C0h] [rbp-21h]
  __m128i v69; // [rsp+C8h] [rbp-19h] BYREF
  __int64 v70; // [rsp+D8h] [rbp-9h]
  char v71[88]; // [rsp+E0h] [rbp-1h] BYREF
  char v75; // [rsp+160h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)(a2 + 456);
  v4 = a1;
  v5 = a2;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = gliQpcFreq.QuadPart * *(unsigned int *)(v3 + 800);
  v62 = PerformanceCounter;
  v8 = v7 / 0x3E8;
  v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      27,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
  }
  active = (__m128i *)RIMCmActiveContactsBegin(v71, v3);
  v63 = *active;
  v67 = v63;
  v68 = active[1].m128i_i64[0];
  RIMCmActiveContactsEnd(&v64, v3);
  v15 = v63;
  if ( (v63.m128i_i64[0] != v64 || _mm_cvtsi128_si32(_mm_srli_si128(v63, 8)) != v65 || v68 != v66)
    && (*(_DWORD *)(v68 + 16) & 4) != 0 )
  {
    RIMCmActiveContactsNext(v3, &v67);
    v15 = v67;
  }
  v16 = v62;
  v70 = v68;
  v69 = v15;
  while ( 1 )
  {
    RIMCmActiveContactsEnd(&v64, v3);
    if ( v69.m128i_i64[0] == v64 && v69.m128i_i32[2] == v65 && v70 == v66 )
      break;
    v17 = (int *)(v70 - 16);
    if ( (*(_DWORD *)(v70 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v3, &v69);
    v18 = v17[584];
    if ( (v17[591] & 2) != 0 )
    {
      if ( v18 )
      {
        if ( (unsigned int)dword_14029AE68 > 5 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_14029AE68, 0x400000000000LL) )
          {
            v21 = *(_WORD **)(v5 + 440);
            v63.m128i_i64[0] = 0x1000000LL;
            v22 = 1000 * (v16.QuadPart - *((_QWORD *)v17 + 293));
            v75 = 0;
            v53[0] = 1;
            v61 = v22 / gliQpcFreq.QuadPart;
            v60 = v19;
            v57 = v21[57];
            v58 = v21[56];
            v59 = v21[55];
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
              (_DWORD)v21,
              (unsigned int)&unk_140279C3C,
              v19,
              v20,
              (__int64)&v59,
              (__int64)&v58,
              (__int64)&v57,
              (__int64)&v60,
              (__int64)&v61,
              (__int64)v53,
              (__int64)&v75,
              (__int64)&v63);
          }
        }
        v17[584] = 0;
        *((_QWORD *)v17 + 293) = 0LL;
      }
    }
    else
    {
      v17[584] = v18 + 1;
      v29 = *((_QWORD *)v17 + 6);
      *((_QWORD *)v17 + 293) = v29;
      if ( v16.QuadPart > v8 + v29 )
      {
        v30 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v32 = v17[671];
          v33 = *v17;
          v34 = W32GetUserSessionState(WPP_GLOBAL_Control);
          v52 = v32;
          v51 = v33;
          v50 = 28;
LABEL_54:
          LOBYTE(v36) = v31;
          LOBYTE(v35) = v30;
          WPP_RECORDER_AND_TRACE_SF_dD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v35,
            v36,
            *(_QWORD *)(v34 + 19392),
            4,
            1,
            v50,
            (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
            v51,
            v52);
          goto LABEL_55;
        }
        goto LABEL_55;
      }
      if ( a3 )
      {
        v30 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v37 = v17[671];
          v38 = *v17;
          v34 = W32GetUserSessionState(WPP_GLOBAL_Control);
          v52 = v37;
          v51 = v38;
          v50 = 29;
          goto LABEL_54;
        }
LABEL_55:
        if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v17) )
        {
          v5 = a2;
          v4 = a1;
          RIMInsertSimulatedContactEndStateInFrame(a1, a2, (_DWORD)v17, *(_QWORD *)(v3 + 872), *(_DWORD *)(v3 + 844), 1);
          v17[591] |= 4u;
        }
        else
        {
          v39 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v41 = v17[671];
            v42 = *v17;
            v43 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v44) = v40;
            LOBYTE(v45) = v39;
            WPP_RECORDER_AND_TRACE_SF_dD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v45,
              v44,
              *(_QWORD *)(v43 + 19392),
              4,
              1,
              30,
              (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
              v42,
              v41);
          }
          RIMCmDeactivateContact(v3, v17);
          v5 = a2;
          v4 = a1;
        }
        v16 = v62;
        if ( (unsigned int)dword_14029AE68 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14029AE68, 0x400000000000LL) )
        {
          v48 = *(_WORD **)(v5 + 440);
          v63.m128i_i64[0] = 0x1000000LL;
          v49 = 1000 * (v16.QuadPart - *((_QWORD *)v17 + 293));
          v75 = 0;
          v53[0] = 0;
          v60 = v49 / gliQpcFreq.QuadPart;
          v61 = v17[584];
          v54 = v48[57];
          v55 = v48[56];
          v56 = v48[55];
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
            (_DWORD)v48,
            (unsigned int)&unk_140279C3C,
            v46,
            v47,
            (__int64)&v56,
            (__int64)&v55,
            (__int64)&v54,
            (__int64)&v61,
            (__int64)&v60,
            (__int64)v53,
            (__int64)&v75,
            (__int64)&v63);
        }
      }
      else if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v17) )
      {
        rimInsertSimulatedContactKeepAliveStateInFrame(
          v4,
          v5,
          (_DWORD)v17,
          *(_QWORD *)(v3 + 872),
          *(_DWORD *)(v3 + 844));
      }
    }
  }
  v23 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v27) = v25;
    LOBYTE(v28) = v23;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v28,
                          v27,
                          *(_QWORD *)(v26 + 19392),
                          4,
                          1,
                          31,
                          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
  }
  return result;
}
