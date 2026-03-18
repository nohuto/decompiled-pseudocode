/*
 * XREFs of rimAbUpdateDeadzonesAndResurrectContacts @ 0x140057F58
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x140057B0C (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsEnd @ 0x140059FD4 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsBegin @ 0x14005A030 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsNext @ 0x14005A08C (RIMCmActiveContactsNext.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1400D0398 (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     RIMCmIsContactSuppressed @ 0x1400D975C (RIMCmIsContactSuppressed.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1400EFB70 (RIMCmRemoveContactSuppressionReasons.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1401057F8 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x14011657C (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x14017C20C (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x14018250C (RIMCmIsContactDeliveringPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbCreateGlobalPenDeadzone @ 0x1401D9264 (rimAbCreateGlobalPenDeadzone.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1401D9434 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x1401D9C70 (rimAbRemoveGlobalPenDeadzone.c)
 *     RIMCmIsSuppressedContactMarkedForDelivery @ 0x1401F1C1C (RIMCmIsSuppressedContactMarkedForDelivery.c)
 */

__int64 __fastcall rimAbUpdateDeadzonesAndResurrectContacts(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 active; // rax
  __int64 v6; // xmm1_8
  __int64 v7; // rax
  __int64 v8; // xmm1_8
  __int64 result; // rax
  int *v10; // r14
  __int64 v11; // rsi
  int v12; // ecx
  char v13; // bl
  bool v14; // di
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  char v18; // bl
  bool v19; // di
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  __int64 v23; // rcx
  int v24; // ecx
  int v25; // ebx
  bool v26; // di
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  char v30; // r15
  bool v31; // r12
  int v32; // ebx
  int v33; // edi
  int v34; // esi
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  __int64 v38; // rax
  __int64 v39; // xmm1_8
  int v40; // [rsp+28h] [rbp-91h]
  __int128 v41; // [rsp+80h] [rbp-39h] BYREF
  __int64 v42; // [rsp+90h] [rbp-29h]
  __int128 v43; // [rsp+98h] [rbp-21h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-11h]
  _BYTE v45[96]; // [rsp+B0h] [rbp-9h] BYREF

  v2 = *(_QWORD *)(a2 + 456);
  v3 = a2;
  v4 = a1;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 715LL);
  active = RIMCmActiveContactsBegin(v45, v2);
  v6 = *(_QWORD *)(active + 16);
  v43 = *(_OWORD *)active;
  v44 = v6;
  v7 = RIMCmActiveContactsEnd(v45, v2);
  v8 = *(_QWORD *)(v7 + 16);
  v41 = *(_OWORD *)v7;
  v42 = v8;
  result = tagLIST_TABLE_ITERATOR::operator!=(&v43, &v41);
  while ( (_BYTE)result )
  {
    v10 = (int *)(v44 - 16);
    v11 = v44 - 16 + 2432;
    if ( (*(_DWORD *)(v44 - 16 + 32) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 729LL);
    if ( (v10[591] & 1) == 0 )
      goto LABEL_71;
    v12 = *(_DWORD *)(v2 + 24);
    if ( (unsigned int)(v12 - 5) <= 1 )
    {
      if ( (v10[8] & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 740LL);
      if ( (*(_DWORD *)(v11 + 12) & 2) != 0 )
      {
        if ( *(_DWORD *)(v4 + 492) )
        {
          rimAbRemoveGlobalPenDeadzone(v4);
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v18 = 0;
          }
          v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v21) = v19;
            LOBYTE(v22) = v18;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v22,
              v21,
              *(_QWORD *)(UserSessionState + 19392),
              4,
              1,
              21,
              (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
          }
        }
      }
      else
      {
        rimAbCreateGlobalPenDeadzone(v4, v2 + 156, v11);
      }
    }
    else if ( (unsigned int)(v12 - 1) <= 3 )
    {
      if ( (v10[8] & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 761LL);
      if ( (unsigned int)rimAbIsPointInGlobalPenDeadzone(v4, *(_QWORD *)(v3 + 456) + 156LL, v11) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v13 = 0;
        }
        v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v16) = v14;
          LOBYTE(v17) = v13;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v17,
            v16,
            *(_QWORD *)(v15 + 19392),
            4,
            1,
            22,
            (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
        }
        if ( !*(_DWORD *)(v4 + 492) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 771LL);
        *(_DWORD *)(v4 + 704) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                              + 250;
      }
    }
    if ( (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v10) )
    {
      v24 = *(_DWORD *)(v11 + 12);
      v25 = 0;
      if ( (v24 & 2) == 0 )
      {
        if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v10) && (v10[8] & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 809LL);
LABEL_55:
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v30 = 0;
        }
        v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v32 = v10[671];
          v33 = v10[2];
          v34 = *v10;
          v35 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v36) = v31;
          LOBYTE(v37) = v30;
          WPP_RECORDER_AND_TRACE_SF_dDD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v37,
            v36,
            *(_QWORD *)(v35 + 19392),
            4,
            v40,
            24,
            (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
            v34,
            v33,
            v32);
        }
        if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v10) && (v10[8] & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 825LL);
        v4 = a1;
LABEL_70:
        v10[591] &= ~1u;
        goto LABEL_71;
      }
      if ( (unsigned int)(*(_DWORD *)(v2 + 24) - 5) <= 1 )
      {
        if ( (v24 & 4) != 0 )
          goto LABEL_47;
        if ( (v10[8] & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 795LL);
        if ( !(unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(v4, v2, v11) )
        {
          if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
          {
            LOBYTE(v25) = 1;
          }
          v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v27 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v28) = v26;
            LOBYTE(v29) = v25;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v29,
              v28,
              *(_QWORD *)(v27 + 19392),
              4,
              1,
              23,
              (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
          }
LABEL_47:
          v25 = 1;
        }
      }
      if ( !v25 )
        goto LABEL_55;
      RIMCmRemoveContactSuppressionReasons(v2, v10, 1LL);
      if ( (unsigned int)RIMCmIsContactSuppressed(v10) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 815LL);
      goto LABEL_71;
    }
    if ( (unsigned int)RIMCmIsContactSuppressed(v23)
      && !(unsigned int)RIMCmIsContactDeliveringPointerData(v10)
      && !(unsigned int)RIMCmIsSuppressedContactMarkedForDelivery(v10) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 839LL);
      goto LABEL_70;
    }
LABEL_71:
    RIMCmActiveContactsNext(v2, &v43);
    v38 = RIMCmActiveContactsEnd(v45, v2);
    v39 = *(_QWORD *)(v38 + 16);
    v41 = *(_OWORD *)v38;
    v42 = v39;
    result = tagLIST_TABLE_ITERATOR::operator!=(&v43, &v41);
    v3 = a2;
  }
  return result;
}
