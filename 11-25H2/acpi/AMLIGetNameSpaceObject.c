/*
 * XREFs of AMLIGetNameSpaceObject @ 0x140028510
 * Callers:
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x140010C04 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIBuildDevicePowerNodes @ 0x140020F04 (ACPIBuildDevicePowerNodes.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x140027364 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIDockIsDockDevice @ 0x1400284D4 (ACPIDockIsDockDevice.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x140028978 (ACPIIsPowerNodeMissingDependencies.c)
 *     LinkNodeCrackPrt @ 0x14002B0F8 (LinkNodeCrackPrt.c)
 *     ACPIBuildMissingEjectionRelations @ 0x14003D6B8 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIGpeBuildEventMasks @ 0x140040B24 (ACPIGpeBuildEventMasks.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x140045528 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x140048F9C (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x140053814 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x140054EE4 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x14005817C (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x14005A504 (ACPIBuildWakeEventDeviceContext.c)
 *     AreDependenciesSatisfied @ 0x14005AA38 (AreDependenciesSatisfied.c)
 *     ACPIEcInitOpRegionHandler @ 0x14005F83C (ACPIEcInitOpRegionHandler.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x140061F70 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIThermalActivateConstraint @ 0x140068654 (ACPIThermalActivateConstraint.c)
 *     ACPIThermalGetSensorDevice @ 0x1400688AC (ACPIThermalGetSensorDevice.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x14009D610 (ExternalRequestBiosNameDeviceAssociation.c)
 *     UnRegisterOperationRegionHandler @ 0x1400A2424 (UnRegisterOperationRegionHandler.c)
 *     ACPIRootInitialize @ 0x1400A67CC (ACPIRootInitialize.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1400BC510 (AcpiGetFullyQualifiedBiosName.c)
 *     RegisterOperationRegionHandler @ 0x1400BFA6C (RegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1400C44E4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     GetNameSpaceObjectNoLock @ 0x14000AA30 (GetNameSpaceObjectNoLock.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     AMLIDebugger @ 0x1400564EC (AMLIDebugger.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall AMLIGetNameSpaceObject(_BYTE *Src, __int64 *a2, _QWORD *a3, int a4)
{
  size_t v8; // rbx
  _BYTE *Pool2; // rsi
  KIRQL v10; // di
  __int64 v11; // rdx
  int NameSpaceObjectNoLock; // ebx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v16; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE P[128]; // [rsp+30h] [rbp-C8h] BYREF

  v8 = -1LL;
  do
    ++v8;
  while ( Src[v8] );
  if ( v8 + 1 >= 0x80 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, v8 + 1, 1768973121LL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = P;
  }
  memmove(Pool2, Src, v8);
  Pool2[v8] = 0;
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v16 = 0LL;
  dword_140089138 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  if ( *Pool2 )
  {
    if ( !a2 )
    {
      v11 = 0LL;
      goto LABEL_10;
    }
    v11 = *a2;
    if ( (*(_BYTE *)(*a2 + 64) & 4) == 0 )
    {
LABEL_10:
      NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Pool2, v11, &v16, a4);
      if ( NameSpaceObjectNoLock >= 0 )
      {
        v13 = v16;
        if ( v16 )
        {
          v14 = v16 + 120;
          dword_140089138 = 0;
          pszDest = 0;
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 128));
            v13 = v16;
          }
          *a3 = v14;
          DereferenceObjectEx(v13);
        }
      }
      if ( NameSpaceObjectNoLock == 32772 )
        NameSpaceObjectNoLock = 259;
      goto LABEL_17;
    }
    NameSpaceObjectNoLock = -1073741738;
  }
  else
  {
    NameSpaceObjectNoLock = -1073741810;
  }
LABEL_17:
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( P != Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)NameSpaceObjectNoLock;
}
