/*
 * XREFs of rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C01AA83C
 * Callers:
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01A6F5C (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01AB358 (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C0185F90 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C01A030C (RIMStoreRawDataInPointerDeviceFrame.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1C01A5F20 (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     rimSetContactKeepAliveState @ 0x1C01AC344 (rimSetContactKeepAliveState.c)
 */

void __fastcall rimInsertSimulatedContactKeepAliveStateInFrame(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rbp
  __int64 v10; // r9
  int v11; // edx
  __int16 v12; // r8
  __int64 v13; // rcx
  int v14; // eax
  int v15; // edx
  int v16; // r8d
  char *v17; // rbx
  void *v18; // [rsp+50h] [rbp-38h] BYREF
  __int64 v19; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+A0h] [rbp+18h] BYREF

  v5 = *(_QWORD *)(a2 + 472);
  v18 = 0LL;
  v20 = 0;
  if ( !*(_QWORD *)(v5 + 784) )
  {
    LODWORD(v19) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1838);
  }
  if ( (*(_DWORD *)(a3 + 32) & 2) == 0 )
  {
    LODWORD(v19) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1839);
  }
  if ( (*(_DWORD *)(a3 + 32) & 4) != 0 )
  {
    LODWORD(v19) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1840);
  }
  v10 = a5;
  *(_DWORD *)(a3 + 2364) |= 1u;
  rimSetContactKeepAliveState(v5, a3, a4, v10);
  v11 = *(_DWORD *)(v5 + 24);
  v12 = *(_WORD *)(a3 + 2424);
  v19 = 0LL;
  InputTraceLogging::RIM::PopulateContact(a2, v11, v12, (__int64)&v19, a3 + 2424, 1);
  v14 = RIMAddSimulatedPointerDeviceData(v13, v5, a3, (int)a3 + 2424, (__int64 *)&v18, (int *)&v20);
  v17 = (char *)v18;
  if ( v14 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v16,
        (_DWORD)gRimLog,
        4,
        1,
        47,
        (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
        v14);
    }
  }
  else
  {
    RIMStoreRawDataInPointerDeviceFrame(a1, a2, (__int64)v18, v20, (_DWORD *)(a3 + 2416));
  }
  if ( v17 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v17);
}
