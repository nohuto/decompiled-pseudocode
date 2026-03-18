/*
 * XREFs of AMLIEvalNameSpaceObject @ 0x140014164
 * Callers:
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     LinkNodeCrackPrt @ 0x14002B0F8 (LinkNodeCrackPrt.c)
 *     ACPIBuildMissingEjectionRelations @ 0x14003D6B8 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIInitStartDevice @ 0x140044BF4 (ACPIInitStartDevice.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x140048F9C (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIInitDosDeviceName @ 0x14004DA9C (ACPIInitDosDeviceName.c)
 *     ACPIIoctlEvalControlMethod @ 0x1400509E4 (ACPIIoctlEvalControlMethod.c)
 *     EnableDisableDeviceRegionSpace @ 0x140065944 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x140066190 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     ACPIThermalGetSensorDevice @ 0x1400688AC (ACPIThermalGetSensorDevice.c)
 *     Simulator_CallbackWorker @ 0x14006AF10 (Simulator_CallbackWorker.c)
 *     ACPIAmliEvaluatePcch @ 0x14009A9E0 (ACPIAmliEvaluatePcch.c)
 *     ACPIEcGetGpeVector @ 0x14009C9D8 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x14009CA7C (ACPIEcGetUid.c)
 *     ACPIEvaluateSpareDsm @ 0x14009F4B4 (ACPIEvaluateSpareDsm.c)
 *     ACPIGetUniqueId @ 0x14009F5D0 (ACPIGetUniqueId.c)
 *     UnRegisterOperationRegionHandler @ 0x1400A2424 (UnRegisterOperationRegionHandler.c)
 *     ACPIThermalBuildConstraints @ 0x1400A7698 (ACPIThermalBuildConstraints.c)
 *     LinkNodeWriteStateToHardware @ 0x1400B2D74 (LinkNodeWriteStateToHardware.c)
 *     ACPIInitStopDevice @ 0x1400B439C (ACPIInitStopDevice.c)
 *     EnableDisableRegions @ 0x1400B46CC (EnableDisableRegions.c)
 *     ACPIProcessorDeviceControl @ 0x1400B48A0 (ACPIProcessorDeviceControl.c)
 *     AcpiGetIdleWakeInfo @ 0x1400B9C10 (AcpiGetIdleWakeInfo.c)
 *     ACPIAmliEvaluateDsm @ 0x1400B9FBC (ACPIAmliEvaluateDsm.c)
 *     ACPIAmliEvaluateOsc @ 0x1400BA520 (ACPIAmliEvaluateOsc.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1400C0600 (LinkNodepAddLinkNodeWorker.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1400C077C (ACPIQueryCacheCoherencyAttribute.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1400C44E4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     GetObjectPath @ 0x140011F58 (GetObjectPath.c)
 *     SyncEvalObject @ 0x1400143C8 (SyncEvalObject.c)
 *     Simulator_AllocAndInitTestData @ 0x140052074 (Simulator_AllocAndInitTestData.c)
 *     AMLIDebugger @ 0x1400564EC (AMLIDebugger.c)
 *     Simulator_Copy_Arguments @ 0x14006B0E4 (Simulator_Copy_Arguments.c)
 *     Simulator_Free_Arguments @ 0x14006B1AC (Simulator_Free_Arguments.c)
 *     Simulator_TestNotify @ 0x14006B5BC (Simulator_TestNotify.c)
 *     Simulator_TestNotifyRet @ 0x14006B5F4 (Simulator_TestNotifyRet.c)
 */

__int64 __fastcall AMLIEvalNameSpaceObject(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 inited; // rbx
  __int64 v5; // r15
  __int64 v9; // rsi
  unsigned int v10; // edi
  __int64 result; // rax
  bool v12; // zf
  __int64 v13; // rax
  __int64 ObjectPath; // rax
  struct _KTHREAD *CurrentThread; // rdx
  const char *v16; // r8
  void *v17; // rbp
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  inited = 0LL;
  v5 = a3;
  dword_140089138 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v9 = *a1;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_4;
  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  v18 = 0LL;
  inited = Simulator_AllocAndInitTestData();
  if ( !inited )
    return 3221225626LL;
  result = Simulator_Copy_Arguments((unsigned int)v5, a4, &v18);
  v12 = (_DWORD)result == 0;
  if ( (int)result >= 0 )
  {
    v13 = v18;
    *(_DWORD *)inited = 1;
    *(_DWORD *)(inited + 4) = 1;
    *(_DWORD *)(inited + 8) = 1;
    *(_QWORD *)(inited + 16) = v9;
    *(_QWORD *)(inited + 24) = a2;
    *(_QWORD *)(inited + 32) = v5;
    *(_QWORD *)(inited + 40) = v13;
    *(_QWORD *)(inited + 64) = 0LL;
    result = Simulator_TestNotify((PVOID)inited);
    v12 = (_DWORD)result == 0;
    if ( (int)result >= 0 )
    {
      if ( *(_QWORD *)(inited + 64) == 1LL )
        a4 = *(_QWORD *)(inited + 40);
      v12 = (_DWORD)result == 0;
    }
  }
  if ( v12 )
  {
LABEL_4:
    if ( (*(_BYTE *)(v9 + 64) & 4) != 0 )
    {
      v10 = -1073741738;
    }
    else
    {
      if ( a2 )
      {
        *(_OWORD *)a2 = 0LL;
        *(_OWORD *)(a2 + 16) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
      }
      while ( *(_WORD *)(v9 + 66) == 128 )
        v9 = *(_QWORD *)(v9 + 80);
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 112));
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(v9);
        CurrentThread = KeGetCurrentThread();
        v16 = byte_140075488;
        v17 = (void *)ObjectPath;
        if ( ObjectPath )
          v16 = (const char *)ObjectPath;
        PrintDebugMessage(0x2Cu, CurrentThread, v16, 0LL, 0LL);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
      }
      v10 = SyncEvalObject(v9, a2, (unsigned int)v5, a4);
      DereferenceObjectEx(v9);
      if ( v10 == 32772 )
        v10 = 259;
    }
    if ( g_SimulatorCallbackObject )
    {
      if ( inited )
      {
        v10 = Simulator_TestNotifyRet((PVOID)inited);
        if ( (unsigned int)(*(_DWORD *)(inited + 4) - 1) <= 2 )
          Simulator_Free_Arguments(*(unsigned int *)(inited + 32), *(_QWORD *)(inited + 40));
        ExFreePoolWithTag((PVOID)inited, 0);
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
    return v10;
  }
  return result;
}
