/*
 * XREFs of ACPIInternalEvaluateOST @ 0x140061980
 * Callers:
 *     ACPIRootEvent @ 0x14004B5F0 (ACPIRootEvent.c)
 *     ACPICheckModuleStarted @ 0x140055E44 (ACPICheckModuleStarted.c)
 *     ACPIProcessorStartDeviceWorker @ 0x140065D40 (ACPIProcessorStartDeviceWorker.c)
 *     ACPIInitShutdownInProgress @ 0x14006747C (ACPIInitShutdownInProgress.c)
 *     ACPINotifyOsShutdownWorker @ 0x1400675B0 (ACPINotifyOsShutdownWorker.c)
 *     AcpiShutdownNotificationTimerWorkItem @ 0x140067B50 (AcpiShutdownNotificationTimerWorkItem.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1400C0DF0 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Dqss @ 0x14002AD3C (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_qss @ 0x14003E0C4 (WPP_RECORDER_SF_qss.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall ACPIInternalEvaluateOST(__int64 a1, int a2, int a3)
{
  int v6; // esi
  __int64 *v7; // rbp
  int v8; // ebx
  __int64 v9; // rdx
  const char *v10; // rax
  const char *v11; // r8
  __int64 v12; // rdx
  const char *v13; // rax
  const char *v14; // r8
  _QWORD v16[16]; // [rsp+50h] [rbp-A8h] BYREF

  v6 = -1073741823;
  v7 = AMLIGetNamedChild(*(__int64 **)(a1 + 760), 1414745951);
  if ( v7 )
  {
    memset(v16, 0, 0x78uLL);
    v16[14] = 0LL;
    LODWORD(v16[2]) = a2;
    WORD1(v16[0]) = 1;
    WORD1(v16[5]) = 1;
    WORD1(v16[10]) = 2;
    LODWORD(v16[7]) = a3;
    v8 = AMLIAsyncEvalObject(v7, 0LL, 3, (__int64)v16, 0LL, 0LL);
    AMLIDereferenceHandleEx((__int64)v7);
    v6 = 0;
    if ( v8 != 259 )
      v6 = v8;
    if ( v6 < 0 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v10 = byte_1400753E8;
      v11 = byte_1400753E8;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a1 + 608);
        if ( (v9 & 0x400000000000LL) != 0 )
          v11 = *(const char **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0xFu,
          (__int64)&WPP_9e686de552473f0b161fad9208bd891d_Traceguids,
          v6,
          a1,
          v10,
          v11);
    }
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 8);
    v13 = byte_1400753E8;
    v14 = byte_1400753E8;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v13 = *(const char **)(a1 + 608);
      if ( (v12 & 0x400000000000LL) != 0 )
        v14 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        6u,
        0x10u,
        (__int64)&WPP_9e686de552473f0b161fad9208bd891d_Traceguids,
        a1,
        v13,
        v14);
  }
  return (unsigned int)v6;
}
