/*
 * XREFs of AMLIAsyncEvalObject @ 0x140010934
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1400101A0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x14001C1D0 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x14001C360 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x14001C620 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x14001CE80 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x14001D100 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x14001DA70 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x14001DC20 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x14001E030 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIEcRunQueryMethod @ 0x14001F4A0 (ACPIEcRunQueryMethod.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x14001F8C0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x14001FC20 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1400213A0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x140021FA0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x140023F10 (LinkNodepRestoreIrqRoutingWorker.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x140027DFC (ACPIDevicePowerProcessPhase3.c)
 *     ACPIFanLoop @ 0x14002C64C (ACPIFanLoop.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x140031560 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIWakeDisableAsync @ 0x140031C68 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x140032750 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x140032D20 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x140034590 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIThermalLoopEx @ 0x140037A14 (ACPIThermalLoopEx.c)
 *     EnableDisableCMOSRegions @ 0x140040CC0 (EnableDisableCMOSRegions.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x140042CD0 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x140046670 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x14004B7B0 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x140058F90 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1400591B0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1400598C0 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIInternalEvaluateOST @ 0x140061980 (ACPIInternalEvaluateOST.c)
 *     LinkNodepRunSrsWorker @ 0x140070260 (LinkNodepRunSrsWorker.c)
 *     AcpiFunctionLevelDeviceReset @ 0x140097058 (AcpiFunctionLevelDeviceReset.c)
 *     EnableDisableIPMIRegions @ 0x14009EEB0 (EnableDisableIPMIRegions.c)
 *     ACPIRootInitialize @ 0x1400A67CC (ACPIRootInitialize.c)
 *     RegisterOperationRegionHandler @ 0x1400BFA6C (RegisterOperationRegionHandler.c)
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     GetObjectPath @ 0x140011F58 (GetObjectPath.c)
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 *     Simulator_AllocAndInitTestData @ 0x140052074 (Simulator_AllocAndInitTestData.c)
 *     AMLIDebugger @ 0x1400564EC (AMLIDebugger.c)
 *     Simulator_Copy_Arguments @ 0x14006B0E4 (Simulator_Copy_Arguments.c)
 *     Simulator_Free_Arguments @ 0x14006B1AC (Simulator_Free_Arguments.c)
 *     Simulator_TestNotify @ 0x14006B5BC (Simulator_TestNotify.c)
 *     Simulator_TestNotifyRet @ 0x14006B5F4 (Simulator_TestNotifyRet.c)
 */

__int64 __fastcall AMLIAsyncEvalObject(__int64 *a1, __int64 a2, int a3, __int64 a4, void *a5, __int64 a6)
{
  __int64 inited; // rbx
  __int64 v7; // r13
  __int64 v11; // rsi
  __int64 v12; // rbp
  void *v13; // r15
  unsigned int v14; // edi
  __int64 result; // rax
  __int64 v16; // rax
  bool v17; // zf
  __int64 ObjectPath; // rax
  struct _KTHREAD *CurrentThread; // rdx
  const char *v20; // r8
  void *v21; // r14
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  inited = 0LL;
  v7 = a3;
  dword_1400890B8 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v11 = *a1;
  if ( g_SimulatorCallbackObject )
  {
    if ( a2 )
    {
      *(_OWORD *)a2 = 0LL;
      *(_OWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
    }
    v22 = 0LL;
    inited = Simulator_AllocAndInitTestData();
    if ( !inited )
      return 3221225626LL;
    result = Simulator_Copy_Arguments((unsigned int)v7, a4, &v22);
    if ( (int)result < 0 )
    {
      v12 = a6;
      v13 = a5;
    }
    else
    {
      v16 = v22;
      v13 = &Simulator_AsyncEvalObjectCallBack;
      *(_DWORD *)inited = 1;
      *(_DWORD *)(inited + 4) = 2;
      *(_DWORD *)(inited + 8) = 1;
      *(_QWORD *)(inited + 16) = v11;
      *(_QWORD *)(inited + 24) = a2;
      *(_QWORD *)(inited + 32) = v7;
      *(_QWORD *)(inited + 40) = v16;
      *(_QWORD *)(inited + 48) = a5;
      *(_QWORD *)(inited + 56) = a6;
      *(_QWORD *)(inited + 64) = 0LL;
      result = Simulator_TestNotify((PVOID)inited);
      v12 = inited;
      v17 = (_DWORD)result == 0;
      if ( (int)result < 0 )
        goto LABEL_23;
      if ( *(_QWORD *)(inited + 64) == 1LL )
        a4 = *(_QWORD *)(inited + 40);
    }
    v17 = (_DWORD)result == 0;
LABEL_23:
    if ( !v17 )
      return result;
    goto LABEL_5;
  }
  v12 = a6;
  v13 = a5;
LABEL_5:
  if ( (*(_BYTE *)(v11 + 64) & 4) != 0 )
  {
    v14 = -1073741738;
  }
  else
  {
    if ( a2 )
    {
      *(_OWORD *)a2 = 0LL;
      *(_OWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
    }
    while ( *(_WORD *)(v11 + 66) == 128 )
      v11 = *(_QWORD *)(v11 + 80);
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 112));
    if ( (gDebugger & 8) != 0 )
    {
      ObjectPath = GetObjectPath(v11);
      CurrentThread = KeGetCurrentThread();
      v20 = byte_1400753E8;
      v21 = (void *)ObjectPath;
      if ( ObjectPath )
        v20 = (const char *)ObjectPath;
      PrintDebugMessage(0xBu, CurrentThread, v20, 0LL, 0LL);
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
    }
    v14 = AsyncEvalObject(v11, a2, v7, a4, (__int64)v13, v12, 1);
    DereferenceObjectEx(v11);
    if ( v14 == 32772 )
      v14 = 259;
  }
  if ( g_SimulatorCallbackObject && v14 != 259 )
  {
    if ( inited )
    {
      v14 = Simulator_TestNotifyRet((PVOID)inited);
      if ( (unsigned int)(*(_DWORD *)(inited + 4) - 1) <= 2 )
        Simulator_Free_Arguments(*(unsigned int *)(inited + 32), *(_QWORD *)(inited + 40));
      ExFreePoolWithTag((PVOID)inited, 0);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return v14;
}
