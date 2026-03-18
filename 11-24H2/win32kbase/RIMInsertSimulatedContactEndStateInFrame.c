/*
 * XREFs of RIMInsertSimulatedContactEndStateInFrame @ 0x140180484
 * Callers:
 *     RIMSuppressAllActiveContacts @ 0x140055A50 (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x1400568CC (rimEndAllActiveContactsWorker.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x140056BD0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140058578 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimEndPointerDeviceStaleContacts @ 0x140059314 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x140059874 (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1400577FC (RIMStoreRawDataInPointerDeviceFrame.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1400ADA74 (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMSetContactEndState @ 0x140180688 (RIMSetContactEndState.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1401DE95C (RIMAddSimulatedPointerDeviceData.c)
 */

void __fastcall RIMInsertSimulatedContactEndStateInFrame(__int64 a1, _QWORD *a2, _DWORD *a3, int a4, int a5, int a6)
{
  __int64 v6; // rdi
  int v11; // eax
  int v12; // r9d
  unsigned int v13; // edx
  __int16 v14; // r8
  int v15; // ecx
  int v16; // eax
  char *v17; // rdi
  int v18; // ebp
  char v19; // bl
  char v20; // si
  __int64 UserSessionState; // rax
  PVOID Buffer[9]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+18h] BYREF

  v6 = a2[57];
  Buffer[0] = 0LL;
  v24 = 0;
  if ( !*(_QWORD *)(v6 + 792) )
  {
    LODWORD(v23) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2052LL);
  }
  if ( (a3[8] & 2) == 0 )
  {
    LODWORD(v23) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2054LL);
  }
  v11 = a6;
  v12 = a5;
  a3[591] |= 1u;
  RIMSetContactEndState(v6, (_DWORD)a3, a4, v12, v11);
  v13 = *(_DWORD *)(v6 + 24);
  v14 = *((_WORD *)a3 + 1212);
  v23 = 0LL;
  InputTraceLogging::RIM::PopulateContact(a2, v13, v14, (unsigned int *)&v23, a3 + 606, 2u);
  if ( (a3[8] & 4) == 0 )
  {
    v16 = RIMAddSimulatedPointerDeviceData(v15, v6, (_DWORD)a3, (int)a3 + 2424, (__int64)Buffer, (__int64)&v24);
    v17 = (char *)Buffer[0];
    v18 = v16;
    if ( v16 < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v19 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v19,
          v20,
          *(_QWORD *)(UserSessionState + 19392),
          4u,
          1u,
          0x30u,
          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
          v18);
      }
    }
    else
    {
      RIMStoreRawDataInPointerDeviceFrame(a1, (__int64)a2, (__int64)Buffer[0], v24, a3 + 604);
    }
    if ( v17 )
      GreDeleteFastMutex(v17);
  }
}
