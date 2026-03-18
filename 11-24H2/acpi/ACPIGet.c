/*
 * XREFs of ACPIGet @ 0x1400157F0
 * Callers:
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x140014800 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     GetPciAddressWorker @ 0x1400150D0 (GetPciAddressWorker.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1400161D0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDetectFilterDevices @ 0x140016708 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x140016B58 (ACPIDetectPdoDevices.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1400175C0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     IsPciBusAsyncWorker @ 0x14001EA60 (IsPciBusAsyncWorker.c)
 *     ACPICMLidWorker @ 0x1400241F0 (ACPICMLidWorker.c)
 *     CmosGetOpRegionType @ 0x140028FBC (CmosGetOpRegionType.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1400294B0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIThermalLoopEx @ 0x140037A14 (ACPIThermalLoopEx.c)
 *     ACPIDetectDockDevices @ 0x14003D250 (ACPIDetectDockDevices.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x140049610 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x14004A0D0 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x14004A1E0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x14004A900 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPICMLidSetPower @ 0x14004AA70 (ACPICMLidSetPower.c)
 *     IsPciDeviceWorker @ 0x14004C840 (IsPciDeviceWorker.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x14004CD90 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x14004FA90 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIDockIrpRemoveDevice @ 0x140057860 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x140059470 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneHrv @ 0x140059C20 (ACPIBuildProcessThermalZoneHrv.c)
 *     ACPIBuildProcessThermalZoneSub @ 0x140059E90 (ACPIBuildProcessThermalZoneSub.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x140059F80 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPICMButtonStartWorker @ 0x14005BB60 (ACPICMButtonStartWorker.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x14005CE50 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x14005CFE0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     LinkNodepRunSrsWorker @ 0x140070260 (LinkNodepRunSrsWorker.c)
 *     ACPIBusAndFilterIrpEject @ 0x140096CA0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIDockIntfUpdateDeparture @ 0x140098FF0 (ACPIDockIntfUpdateDeparture.c)
 *     ACPIDockIrpEject @ 0x1400990B0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryID @ 0x140099A00 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x14009A030 (ACPIDockIrpStartDevice.c)
 *     ACPIProcessorGetInitialApicId @ 0x1400A2BB0 (ACPIProcessorGetInitialApicId.c)
 *     AcpiEjectBusNumberTranslator @ 0x1400A7D88 (AcpiEjectBusNumberTranslator.c)
 *     TranslateEjectInterface @ 0x1400A84F8 (TranslateEjectInterface.c)
 *     LinkNodeGetPossibleResources @ 0x1400A8ED0 (LinkNodeGetPossibleResources.c)
 *     ACPIBusIrpQueryResources @ 0x1400AC540 (ACPIBusIrpQueryResources.c)
 *     PnpBiosGetDeviceResourceList @ 0x1400AD6F8 (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetProximityDomain @ 0x1400AD988 (ACPIInternalSetProximityDomain.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400ADF10 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1400AE930 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1400AFB28 (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPIInitStopDevice @ 0x1400B439C (ACPIInitStopDevice.c)
 *     ACPIThermalWorker @ 0x1400B5660 (ACPIThermalWorker.c)
 *     ACPIThermalGetParameter @ 0x1400B668C (ACPIThermalGetParameter.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1400B78F0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1400B7D04 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1400B7EE4 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1400B85CC (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1400B8F9C (ACPIBusIrpQueryDeviceId.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1400B9788 (ACPISystemPowerGetDeviceWake.c)
 *     ACPISystemPowerGetSxD @ 0x1400BA420 (ACPISystemPowerGetSxD.c)
 * Callees:
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     GetObjectPath @ 0x140011F58 (GetObjectPath.c)
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     _ACPIInternalError @ 0x14004C514 (_ACPIInternalError.c)
 *     Simulator_AllocAndInitTestData @ 0x140052074 (Simulator_AllocAndInitTestData.c)
 *     AMLIDebugger @ 0x1400564EC (AMLIDebugger.c)
 *     Simulator_Copy_Arguments @ 0x14006B0E4 (Simulator_Copy_Arguments.c)
 *     Simulator_Free_Arguments @ 0x14006B1AC (Simulator_Free_Arguments.c)
 *     Simulator_TestNotify @ 0x14006B5BC (Simulator_TestNotify.c)
 *     Simulator_TestNotifyRet @ 0x14006B5F4 (Simulator_TestNotifyRet.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ACPIGet(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // r15d
  __int64 v12; // rsi
  int v13; // ebp
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // r12
  __int64 Pool2; // rax
  __int64 v18; // r13
  KIRQL v19; // al
  _QWORD *v20; // rcx
  KIRQL v21; // dl
  _QWORD *v22; // rax
  KIRQL v23; // dl
  __int64 *v24; // rax
  __int64 *i; // rbx
  int v26; // ebx
  unsigned int v27; // ebx
  KIRQL v28; // al
  __int64 v29; // r9
  _QWORD *v30; // r8
  _OWORD *v32; // rdi
  __int64 v33; // r14
  void *v34; // r15
  __int64 inited; // r12
  __int64 v36; // rbp
  __int64 v37; // rcx
  void *ObjectPath; // rax
  struct _KTHREAD *CurrentThread; // rdx
  void *v40; // rbx
  void (__fastcall *v41)(__int64, _QWORD, __int64, __int64); // [rsp+40h] [rbp-68h]
  __int128 *v42; // [rsp+48h] [rbp-60h]
  __int64 v43; // [rsp+50h] [rbp-58h] BYREF
  __int128 v44; // [rsp+58h] [rbp-50h] BYREF
  __int128 v45; // [rsp+68h] [rbp-40h]
  __int64 v46; // [rsp+78h] [rbp-30h]
  unsigned int v47; // [rsp+C0h] [rbp+18h]

  v46 = 0LL;
  v9 = a3 & 0x20000000;
  v42 = 0LL;
  v47 = 0;
  v12 = a1;
  v44 = 0LL;
  v45 = 0LL;
  v13 = a3 & 0x4000000;
  if ( (a3 & 0x4000000) == 0 )
    v12 = *(_QWORD *)(a1 + 760);
  v14 = 0LL;
  if ( !v13 )
    v14 = a1;
  v15 = a3 & 0x1F0000;
  if ( (a3 & 0x1F0000) == 0x10000 )
  {
    v41 = (void (__fastcall *)(__int64, _QWORD, __int64, __int64))&ACPIGetWorkerForBuffer;
  }
  else
  {
    switch ( v15 )
    {
      case 0x40000:
        v16 = v14;
        v41 = (void (__fastcall *)(__int64, _QWORD, __int64, __int64))&ACPIGetWorkerForInteger;
        if ( (a3 & 0x4000800) == 0x800 && _bittest64((const signed __int64 *)(v14 + 8), 0x39u) )
        {
          v16 = *(_QWORD *)(v14 + 184);
          v12 = *(_QWORD *)(v16 + 760);
        }
        goto LABEL_8;
      case 0x20000:
        v41 = (void (__fastcall *)(__int64, _QWORD, __int64, __int64))&ACPIGetWorkerForData;
        break;
      case 0x80000:
        v41 = (void (__fastcall *)(__int64, _QWORD, __int64, __int64))&ACPIGetWorkerForString;
        break;
      case 0x100000:
        v41 = (void (__fastcall *)(__int64, _QWORD, __int64, __int64))&ACPIGetWorkerForNothing;
        break;
      default:
        return 3221225713LL;
    }
  }
  v16 = v14;
LABEL_8:
  if ( (a3 & 0x3800000) != 0 )
  {
    if ( (a3 & 0x800000) != 0 )
    {
      WORD1(v44) = 1;
      *(_QWORD *)&v45 = a4;
    }
    else
    {
      if ( (a3 & 0x1000000) != 0 )
      {
        WORD1(v44) = 2;
      }
      else
      {
        if ( (a3 & 0x2000000) == 0 )
          ACPIInternalError(0x600BFuLL);
        WORD1(v44) = 3;
      }
      DWORD2(v45) = a5;
      v46 = a4;
    }
    v47 = 1;
    v42 = &v44;
  }
  Pool2 = ExAllocatePool2(64LL, 120LL, 1299211073LL);
  v18 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = a3;
  *(_DWORD *)(Pool2 + 4) = a2;
  *(_QWORD *)(Pool2 + 24) = v14;
  *(_QWORD *)(Pool2 + 32) = v12;
  *(_QWORD *)(Pool2 + 40) = a6;
  *(_QWORD *)(Pool2 + 48) = a7;
  *(_QWORD *)(Pool2 + 56) = a8;
  *(_QWORD *)(Pool2 + 64) = a9;
  v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.ActiveThreadCount);
  v20 = (_QWORD *)qword_14008B5D8;
  v21 = v19;
  v22 = (_QWORD *)(v18 + 8);
  if ( *(__int64 **)qword_14008B5D8 != &AcpiGetListEntry )
    goto LABEL_30;
  *(_QWORD *)(v18 + 16) = qword_14008B5D8;
  *v22 = &AcpiGetListEntry;
  *v20 = v22;
  qword_14008B5D8 = v18 + 8;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.ActiveThreadCount, v21);
  if ( !v13 && (*(_QWORD *)(v14 + 8) & 0x208000000000000LL) == 0x8000000000000LL )
  {
LABEL_18:
    v26 = -1073741772;
    goto LABEL_19;
  }
  v23 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v24 = (__int64 *)(*(_QWORD *)v12 + 24LL);
  for ( i = (__int64 *)*v24; ; i = (__int64 *)*i )
  {
    if ( v24 == i )
    {
      ExReleaseSpinLockShared(&ACPINamespaceLock, v23);
LABEL_17:
      v12 = 0LL;
      goto LABEL_18;
    }
    if ( a2 == *((_DWORD *)i + 10) )
      break;
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v23);
  if ( !i )
    goto LABEL_17;
  v12 = (__int64)(i + 15);
  dword_1400890B8 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)i + 32);
  if ( i == (__int64 *)-120LL )
    goto LABEL_18;
  if ( *(_WORD *)(*(_QWORD *)v12 + 66LL) == 8
    && v16
    && a3 >= 0
    && *(_QWORD *)(v16 + 648)
    && (*(_BYTE *)(v16 + 1120) & 0x40) == 0 )
  {
    v26 = -1073741661;
LABEL_19:
    *(_DWORD *)v18 |= 0x10000000u;
    v41(v12, (unsigned int)v26, v18 + 80, v18);
    if ( v12 )
      AMLIDereferenceHandleEx(v12);
    v27 = *(_DWORD *)(v18 + 72);
    v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.ActiveThreadCount);
    v29 = *(_QWORD *)(v18 + 8);
    if ( *(_QWORD *)(v29 + 8) == v18 + 8 )
    {
      v30 = *(_QWORD **)(v18 + 16);
      if ( *v30 == v18 + 8 )
      {
        *v30 = v29;
        *(_QWORD *)(v29 + 8) = v30;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.ActiveThreadCount, v28);
        ExFreePoolWithTag((PVOID)v18, 0);
        return v27;
      }
    }
LABEL_30:
    __fastfail(3u);
  }
  v32 = (_OWORD *)(v18 + 80);
  if ( !v9 )
  {
    v26 = AMLIEvalNameSpaceObject(i + 15, v18 + 80, v47, (__int64)v42);
    goto LABEL_19;
  }
  v33 = v18;
  v34 = v41;
  inited = 0LL;
  dword_1400890B8 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v36 = *(_QWORD *)v12;
  if ( g_SimulatorCallbackObject )
  {
    if ( v18 != -80 )
    {
      *v32 = 0LL;
      *(_OWORD *)(v18 + 96) = 0LL;
      *(_QWORD *)(v18 + 112) = 0LL;
    }
    v43 = 0LL;
    inited = Simulator_AllocAndInitTestData();
    if ( inited )
    {
      v26 = Simulator_Copy_Arguments(v47, v42, &v43);
      if ( v26 >= 0 )
      {
        *(_DWORD *)inited = 1;
        *(_DWORD *)(inited + 4) = 2;
        *(_DWORD *)(inited + 8) = 1;
        *(_QWORD *)(inited + 16) = v36;
        *(_QWORD *)(inited + 24) = v32;
        *(_QWORD *)(inited + 32) = v47;
        *(_QWORD *)(inited + 40) = v43;
        *(_QWORD *)(inited + 48) = v41;
        v34 = &Simulator_AsyncEvalObjectCallBack;
        *(_QWORD *)(inited + 56) = v18;
        *(_QWORD *)(inited + 64) = 0LL;
        v26 = Simulator_TestNotify((PVOID)inited);
        v33 = inited;
        if ( v26 >= 0 && *(_QWORD *)(inited + 64) == 1LL )
          v42 = *(__int128 **)(inited + 40);
      }
      if ( !v26 )
        goto LABEL_40;
    }
    else
    {
      v26 = -1073741670;
    }
LABEL_50:
    if ( v26 != 259 )
      goto LABEL_19;
  }
  else
  {
LABEL_40:
    if ( (*(_BYTE *)(v36 + 64) & 4) != 0 )
    {
      v26 = -1073741738;
    }
    else
    {
      if ( v18 != -80 )
      {
        *v32 = 0LL;
        *(_OWORD *)(v18 + 96) = 0LL;
        *(_QWORD *)(v18 + 112) = 0LL;
      }
      for ( ; *(_WORD *)(v36 + 66) == 128; v36 = *(_QWORD *)(v36 + 80) )
        ;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v36 + 112));
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = (void *)GetObjectPath(v36);
        CurrentThread = KeGetCurrentThread();
        v40 = ObjectPath;
        if ( ObjectPath )
        {
          PrintDebugMessage(0xBu, CurrentThread, ObjectPath, 0LL, 0LL);
          ExFreePoolWithTag(v40, 0);
        }
        else
        {
          PrintDebugMessage(0xBu, CurrentThread, byte_1400753E8, 0LL, 0LL);
        }
      }
      v26 = AsyncEvalObject(v36, v18 + 80, v47, (__int64)v42, (__int64)v34, v33, 1);
      DereferenceObjectEx(v36);
      if ( v26 == 32772 )
        v26 = 259;
    }
    if ( !g_SimulatorCallbackObject )
      goto LABEL_50;
    if ( v26 != 259 )
    {
      if ( inited )
      {
        v26 = Simulator_TestNotifyRet((PVOID)inited);
        if ( (unsigned int)(*(_DWORD *)(inited + 4) - 1) <= 2 )
          Simulator_Free_Arguments(*(unsigned int *)(inited + 32), *(_QWORD *)(inited + 40));
        ExFreePoolWithTag((PVOID)inited, 0);
      }
      else
      {
        v26 = -1073741823;
      }
      goto LABEL_50;
    }
  }
  dword_1400890B8 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 0xFFFFFFFF) == 1 )
  {
    v37 = *(_QWORD *)v12;
    if ( v12 == *(_QWORD *)v12 + 120LL )
    {
      DereferenceObjectEx(v37);
    }
    else
    {
      DereferenceObjectEx(v37);
      HeapFree((_QWORD *)v12);
    }
  }
  return 259LL;
}
