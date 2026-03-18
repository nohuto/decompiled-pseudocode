/*
 * XREFs of rimAbSuppressLowerRankActivityInFrame @ 0x140058578
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x140057B0C (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsBeginNoButton @ 0x140059F50 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x140059FD4 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x14005A08C (RIMCmActiveContactsNext.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1400D0398 (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     RIMUpdatePrimaryDevice @ 0x1400D94BC (RIMUpdatePrimaryDevice.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1400D9518 (rimAbShouldButtonContactBeSuppressed.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1400F2C6C (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x140104458 (RIMCmGetButtonContact.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x14011657C (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x14017C014 (rimAbIsContactSuppressedByDeviceDeadzones.c)
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x14017C0BC (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x14017C20C (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x140180484 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMSetContactEndState @ 0x140180688 (RIMSetContactEndState.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1401EDE48 (RIMResetPointerDevicePrimaryContact.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1401F1BA0 (RIMCmIsContactDeliveringAnyData.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityInFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rsi
  int v4; // r13d
  unsigned int v5; // r12d
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 active; // rax
  __int64 v10; // xmm1_8
  int *v11; // r15
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rcx
  char v15; // r12
  bool v16; // r13
  int v17; // ebx
  int v18; // edi
  int v19; // esi
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  char v23; // r12
  bool v24; // r13
  int v25; // ebx
  int v26; // edi
  int v27; // esi
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  __int64 result; // rax
  __int64 ButtonContact; // rax
  int v33; // esi
  __int64 v34; // rcx
  __int64 v35; // rcx
  char v36; // bl
  bool v37; // di
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  int v41; // [rsp+28h] [rbp-81h]
  unsigned __int64 v42; // [rsp+60h] [rbp-49h]
  int v43; // [rsp+68h] [rbp-41h]
  __int128 v44; // [rsp+70h] [rbp-39h] BYREF
  __int64 v45; // [rsp+80h] [rbp-29h]
  LARGE_INTEGER PerformanceCounter; // [rsp+88h] [rbp-21h]
  __int128 v47; // [rsp+90h] [rbp-19h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-9h]
  __int128 v49; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v50; // [rsp+B8h] [rbp+Fh]
  int v52; // [rsp+118h] [rbp+6Fh]

  v2 = *(_QWORD *)(a2 + 872);
  v3 = a1;
  v4 = *(_DWORD *)(a2 + 844);
  v43 = v2;
  v5 = 0;
  v52 = v4;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = 500 * gliQpcFreq.QuadPart / 0x3E8uLL;
  v42 = v7;
  if ( !*(_DWORD *)(W32GetUserSessionState(v8) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 858LL);
  active = RIMCmActiveContactsBeginNoButton(&v44, a2);
  v10 = *(_QWORD *)(active + 16);
  v49 = *(_OWORD *)active;
  v50 = v10;
  RIMCmActiveContactsEnd(&v47, a2);
  v44 = v47;
  v45 = v48;
  if ( (unsigned __int8)tagLIST_TABLE_ITERATOR::operator!=(&v49, &v44) )
  {
    do
    {
      v11 = (int *)(v50 - 16);
      v12 = *(_DWORD *)(v50 - 16 + 32);
      v13 = v50 - 16 + 2432;
      if ( (v12 & 2) == 0 )
        __int2c();
      if ( (v12 & 4) != 0 )
        __int2c();
      if ( (v11[591] & 1) != 0 && (*(_DWORD *)(v50 - 16 + 2444) & 2) != 0 )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(2LL) + 244) != 3
          || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
          || (v14 = *((_QWORD *)v11 + 7), PerformanceCounter.QuadPart <= v14 + v7)
          || !v14 )
        {
          if ( (unsigned int)rimAbIsPointerSuppressedByGlobalPenDeadzone(v3, a2, v13)
            || (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(v3, a2, v13)
            || (unsigned int)rimAbIsContactSuppressedByDeviceDeadzones(a2, v11) )
          {
            RIMCmAddContactSuppressionReasons(a2, v11, 1LL);
            if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v11) )
            {
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
              {
                v15 = 0;
              }
              v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v17 = v11[671];
                v18 = v11[2];
                v19 = *v11;
                UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
                LOBYTE(v21) = v16;
                LOBYTE(v22) = v15;
                WPP_RECORDER_AND_TRACE_SF_dDD(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v22,
                  v21,
                  *(_QWORD *)(UserSessionState + 19392),
                  4,
                  v41,
                  25,
                  (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                  v19,
                  v18,
                  v17);
                v7 = v42;
                v3 = a1;
              }
              v4 = v52;
              RIMSetContactEndState(a2, (_DWORD)v11, v43, v52, 1);
            }
            else
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
                v25 = v11[671];
                v26 = v11[2];
                v27 = *v11;
                v28 = W32GetUserSessionState(WPP_GLOBAL_Control);
                LOBYTE(v29) = v24;
                LOBYTE(v30) = v23;
                WPP_RECORDER_AND_TRACE_SF_dDD(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v30,
                  v29,
                  *(_QWORD *)(v28 + 19392),
                  4,
                  v41,
                  26,
                  (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                  v27,
                  v26,
                  v25);
                v7 = v42;
                v3 = a1;
              }
              v11[591] &= ~1u;
              if ( (v11[8] & 8) != 0 )
              {
                if ( *(int **)(a2 + 1024) != v11 )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 941LL);
                RIMResetPointerDevicePrimaryContact(a2);
                if ( (*(_DWORD *)(a2 + 368) & 1) != 0 )
                {
                  if ( *(_QWORD *)(v3 + 480) != a2 )
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 946LL);
                  RIMUpdatePrimaryDevice(v3, 0LL);
                }
              }
              v4 = v52;
            }
            v5 = 1;
          }
        }
      }
      RIMCmActiveContactsNext(a2, &v49);
      RIMCmActiveContactsEnd(&v47, a2);
      v44 = v47;
      v45 = v48;
    }
    while ( (unsigned __int8)tagLIST_TABLE_ITERATOR::operator!=(&v49, &v44) );
    LODWORD(v2) = v43;
  }
  result = rimAbShouldButtonContactBeSuppressed(v3, a2, v5);
  if ( (_DWORD)result )
  {
    ButtonContact = RIMCmGetButtonContact(a2);
    v33 = ButtonContact;
    RIMCmAddContactSuppressionReasons(v34, ButtonContact, 1LL);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v35 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v35 & 1) == 0)
      || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v36 = 0;
    }
    v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v38 = W32GetUserSessionState(v35);
      LOBYTE(v39) = v37;
      LOBYTE(v40) = v36;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v40,
        v39,
        *(_QWORD *)(v38 + 19392),
        4,
        1,
        27,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    }
    return RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), v33, v2, v4, 1);
  }
  return result;
}
