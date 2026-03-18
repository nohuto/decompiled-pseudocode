/*
 * XREFs of rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1401EE1CC
 * Callers:
 *     rimProcessMissingPointerDeviceContacts @ 0x140059874 (rimProcessMissingPointerDeviceContacts.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x14019930C (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1400577FC (RIMStoreRawDataInPointerDeviceFrame.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1400ADA74 (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1401DE95C (RIMAddSimulatedPointerDeviceData.c)
 *     rimSetContactKeepAliveState @ 0x1401EE648 (rimSetContactKeepAliveState.c)
 */

void __fastcall rimInsertSimulatedContactKeepAliveStateInFrame(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rsi
  __int64 v10; // r9
  unsigned int v11; // edx
  __int16 v12; // r8
  __int64 v13; // rcx
  int v14; // eax
  char *v15; // rsi
  int v16; // r15d
  char v17; // bl
  char v18; // di
  __int64 UserSessionState; // rax
  PVOID Buffer; // [rsp+50h] [rbp-38h] BYREF
  __int64 v21; // [rsp+98h] [rbp+10h] BYREF
  ULONG v22; // [rsp+A0h] [rbp+18h] BYREF

  v5 = a2[57];
  Buffer = 0LL;
  v22 = 0;
  if ( !*(_QWORD *)(v5 + 792) )
  {
    LODWORD(v21) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1913);
  }
  if ( (a3[8] & 2) == 0 )
  {
    LODWORD(v21) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1914);
  }
  if ( (a3[8] & 4) != 0 )
  {
    LODWORD(v21) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1915);
  }
  v10 = a5;
  a3[591] |= 1u;
  rimSetContactKeepAliveState(v5, a3, a4, v10);
  v11 = *(_DWORD *)(v5 + 24);
  v12 = *((_WORD *)a3 + 1212);
  v21 = 0LL;
  InputTraceLogging::RIM::PopulateContact(a2, v11, v12, (unsigned int *)&v21, a3 + 606, 1u);
  v14 = RIMAddSimulatedPointerDeviceData(v13, v5, (__int64)a3, (__int64)(a3 + 606), (CHAR **)&Buffer, &v22);
  v15 = (char *)Buffer;
  v16 = v14;
  if ( v14 < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v17 = 0;
    }
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v18,
        *(_QWORD *)(UserSessionState + 19392),
        4u,
        1u,
        0x2Fu,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
        v16);
    }
  }
  else
  {
    RIMStoreRawDataInPointerDeviceFrame(a1, (__int64)a2, (__int64)Buffer, v22, a3 + 604);
  }
  if ( v15 )
    GreDeleteFastMutex(v15);
}
