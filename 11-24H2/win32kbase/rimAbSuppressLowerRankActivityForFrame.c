/*
 * XREFs of rimAbSuppressLowerRankActivityForFrame @ 0x140056BD0
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x140057B0C (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     RIMAbandonPointerDeviceFrame @ 0x140056208 (RIMAbandonPointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1400574B8 (RIMStartPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x140058A68 (RIMCompletePointerDeviceFrame.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x140059F50 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x140059FD4 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x14005A08C (RIMCmActiveContactsNext.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1400D0398 (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1400D9518 (rimAbShouldButtonContactBeSuppressed.c)
 *     RIMGetPointerInputType @ 0x1400D98AC (RIMGetPointerInputType.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1400F2C6C (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x140104458 (RIMCmGetButtonContact.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x14011657C (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x140180484 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x14019930C (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1401D96B0 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1401F1BA0 (RIMCmIsContactDeliveringAnyData.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityForFrame(struct RawInputManagerObject *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  unsigned int v6; // r12d
  LARGE_INTEGER PerformanceCounter; // r15
  __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // ebx
  __int64 active; // rax
  __int64 v13; // xmm1_8
  int *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  char v17; // al
  _UNKNOWN **v18; // rcx
  int v19; // ebx
  int v20; // edi
  int v21; // esi
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  __int64 ButtonContact; // rsi
  __int64 v26; // rcx
  char v27; // bl
  bool v28; // di
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  char v32; // bl
  bool v33; // di
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  bool v37; // bl
  bool v38; // di
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  __int64 v42; // rcx
  char v43; // bl
  bool v44; // di
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  int v49; // [rsp+28h] [rbp-81h]
  unsigned int v50; // [rsp+60h] [rbp-49h]
  int v51; // [rsp+64h] [rbp-45h]
  LARGE_INTEGER v52; // [rsp+68h] [rbp-41h]
  __int64 v53; // [rsp+70h] [rbp-39h]
  __int128 v54; // [rsp+78h] [rbp-31h] BYREF
  __int64 v55; // [rsp+88h] [rbp-21h]
  unsigned __int64 v56; // [rsp+90h] [rbp-19h]
  __int128 v57; // [rsp+98h] [rbp-11h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-1h]
  __int128 v59; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v60; // [rsp+C0h] [rbp+17h]
  char v61; // [rsp+118h] [rbp+6Fh]
  bool v63; // [rsp+128h] [rbp+7Fh]

  v51 = 0;
  v5 = 0;
  v6 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v52 = PerformanceCounter;
  v8 = ((unsigned __int64)(500 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  v53 = *(_QWORD *)(a2 + 872) + 1LL;
  v50 = *(_DWORD *)(a2 + 844) + 1;
  v9 = (v8 + ((unsigned __int64)(500 * gliQpcFreq.QuadPart - v8) >> 1)) >> 9;
  v56 = v9;
  if ( !*(_DWORD *)(W32GetUserSessionState(v10) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 556LL);
  v11 = RIMGetPointerInputType(a2);
  if ( v11 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(&v54, a2);
    v13 = *(_QWORD *)(active + 16);
    v59 = *(_OWORD *)active;
    v60 = v13;
    RIMCmActiveContactsEnd(&v57, a2);
    v54 = v57;
    v55 = v58;
    if ( (unsigned __int8)tagLIST_TABLE_ITERATOR::operator!=(&v59, &v54) )
    {
      while ( 1 )
      {
        v14 = (int *)(v60 - 16);
        if ( (*(_DWORD *)(v60 - 16 + 32) & 2) == 0 )
          __int2c();
        if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v60 - 16) )
        {
          if ( *(_DWORD *)(W32GetUserSessionState(v15) + 244) != 3
            || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
            || (v16 = *((_QWORD *)v14 + 7), v52.QuadPart <= v16 + v9)
            || !v16 )
          {
            if ( (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts(v14 + 668, a2, a3, 0LL) )
            {
              if ( !v5 )
              {
                RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
                if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                                      a1,
                                      *(_QWORD *)(a2 + 16),
                                      (LARGE_INTEGER)v52.QuadPart) )
                  return 0;
                v51 = 1;
              }
              RIMCmAddContactSuppressionReasons(a2, v14, 1LL);
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
              {
                v17 = 0;
              }
              v18 = &WPP_RECORDER_INITIALIZED;
              v61 = v17;
              v63 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v19 = v14[671];
                v20 = v14[2];
                v21 = *v14;
                LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                UserSessionState = W32GetUserSessionState(v18);
                LOBYTE(v23) = v63;
                LOBYTE(v24) = v61;
                WPP_RECORDER_AND_TRACE_SF_dDD(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v24,
                  v23,
                  *(_QWORD *)(UserSessionState + 19392),
                  4,
                  v49,
                  16,
                  (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                  v21,
                  v20,
                  v19);
                v9 = v56;
              }
              RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), (_DWORD)v14, v53, v50, 1);
              v5 = v51;
            }
          }
        }
        RIMCmActiveContactsNext(a2, &v59);
        RIMCmActiveContactsEnd(&v57, a2);
        v54 = v57;
        v55 = v58;
        if ( !(unsigned __int8)tagLIST_TABLE_ITERATOR::operator!=(&v59, &v54) )
        {
          PerformanceCounter = v52;
          break;
        }
      }
    }
    if ( (unsigned int)rimAbShouldButtonContactBeSuppressed(a1, a2, v5) )
    {
      ButtonContact = RIMCmGetButtonContact(a2);
      RIMCmAddContactSuppressionReasons(v26, ButtonContact, 1LL);
      if ( v5 )
      {
        v37 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v39 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v40) = v38;
          LOBYTE(v41) = v37;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v41,
            v40,
            *(_QWORD *)(v39 + 19392),
            4,
            1,
            19,
            (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
        }
      }
      else
      {
        RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
        if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                              a1,
                              *(_QWORD *)(a2 + 16),
                              (LARGE_INTEGER)PerformanceCounter.QuadPart) )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v27 = 0;
          }
          v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v29 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v30) = v28;
            LOBYTE(v31) = v27;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v31,
              v30,
              *(_QWORD *)(v29 + 19392),
              4,
              1,
              17,
              (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
          }
          return 0;
        }
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v32 = 0;
        }
        v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v34 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v35) = v33;
          LOBYTE(v36) = v32;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v36,
            v35,
            *(_QWORD *)(v34 + 19392),
            4,
            1,
            18,
            (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
        }
        RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), ButtonContact, v53, v50, 1);
      }
    }
    else if ( !v5 )
    {
      return v6;
    }
    RIMInsertSimulatedKeepAliveStateForActiveContacts(a1, *(_QWORD *)(a2 + 16), v53, v50);
    v6 = RIMCompletePointerDeviceFrame(a1);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v42 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v42 & 1) == 0)
      || (v43 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v43 = 0;
    }
    v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v45 = W32GetUserSessionState(v42);
      LOBYTE(v46) = v44;
      LOBYTE(v47) = v43;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v47,
        v46,
        *(_QWORD *)(v45 + 19392),
        4,
        1,
        20,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
        v6);
    }
  }
  return v6;
}
