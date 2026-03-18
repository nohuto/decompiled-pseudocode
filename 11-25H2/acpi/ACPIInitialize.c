/*
 * XREFs of ACPIInitialize @ 0x1400C4008
 * Callers:
 *     ACPIInitStartACPI @ 0x1400C715C (ACPIInitStartACPI.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIEnableInitializeACPI @ 0x140022A10 (ACPIEnableInitializeACPI.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     ACPIGetTableVersion @ 0x140030250 (ACPIGetTableVersion.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     ACPIInitializeKernelTableHandler @ 0x1400548F0 (ACPIInitializeKernelTableHandler.c)
 *     ACPIKsrSupportInitialize @ 0x140054DE0 (ACPIKsrSupportInitialize.c)
 *     ACPIInterruptInitialize @ 0x140097230 (ACPIInterruptInitialize.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1400ADA38 (ACPIQueryPhysicalDeviceLocation.c)
 *     AcpiIrqLibInitializeGlobalState @ 0x1400C43B4 (AcpiIrqLibInitializeGlobalState.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1400C44E4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     ACPIInitializeAMLI @ 0x1400C4A38 (ACPIInitializeAMLI.c)
 *     ACPIInitializeDDBs @ 0x1400C4B28 (ACPIInitializeDDBs.c)
 *     AcpiIrqLibConfigureLibrary @ 0x1400C4BEC (AcpiIrqLibConfigureLibrary.c)
 *     ACPILoadProcessRSDT @ 0x1400C9308 (ACPILoadProcessRSDT.c)
 */

char __fastcall ACPIInitialize(ULONG_PTR BugCheckParameter3)
{
  int v2; // eax
  int v3; // eax
  _QWORD *v4; // rax
  int v5; // eax
  bool v6; // al
  int v7; // eax
  ULONG_PTR BugCheckParameter4; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edx
  ULONG_PTR v13; // rbx
  __int64 DeviceExtension; // rax
  __int64 v16; // [rsp+28h] [rbp-20h]
  unsigned int v17; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = 0;
  off_140086458 = (__int64 (__fastcall *)(int, int, int, int, __int64, int))ACPINsObjMatchCallback;
  off_140086470 = (__int64 (__fastcall *)())ACPIDeviceMatchCallback;
  off_140086488 = (__int64 (__fastcall *)(int, int, int, int, __int64, int))ACPIDeviceIdMutiStringMatchCallback;
  v2 = EmProviderRegister(AcpiDriverObject, &EntryReg, 3LL, &CallbackReg, 3, &AcpiEmProviderHandle);
  if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v16) = v2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x1Fu,
      (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
      v16);
  }
  v3 = ACPIInitializeAMLI();
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = v3;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x20u,
        (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
        v16);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 0LL, 0LL, 0LL);
  }
  AcpiIrqLibInitializeGlobalState(BugCheckParameter3);
  KeInitializeSpinLock(&GpeTableLock);
  KeInitializeSpinLock(&NotifyHandlerLock);
  qword_140088CA8 = (__int64)&AcpiDynamicDataBlockTableList;
  AcpiDynamicDataBlockTableList = (__int64)&AcpiDynamicDataBlockTableList;
  KeInitializeSpinLock((PKSPIN_LOCK)AcpiInformation + 8);
  v4 = (_QWORD *)((char *)AcpiInformation + 48);
  *((_QWORD *)AcpiInformation + 7) = (char *)AcpiInformation + 48;
  *v4 = v4;
  *((_QWORD *)AcpiInformation + 9) = 0LL;
  *((_DWORD *)AcpiInformation + 20) = 0;
  v5 = ACPILoadProcessRSDT();
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = v5;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x21u,
        (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
        v16);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 3uLL, 0LL, 0LL);
  }
  v17 = 0;
  v6 = (AcpiOverrideAttributes & 0x20000) == 0
    && ((AcpiOverrideAttributes & 0x40000) != 0 || (int)ACPIGetTableVersion(1346584902, &v17) >= 0 && v17 >= 5);
  gAcpiHonorBiosPolarities = v6;
  if ( *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u )
    AcpiRetainDebugDeviceInD0 = 1;
  ACPIKsrSupportInitialize();
  ACPIEnableInitializeACPI(0);
  v7 = ACPIInitializeDDBs();
  BugCheckParameter4 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = v7;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x22u,
        (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
        v16);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 4uLL, 0LL, BugCheckParameter4);
  }
  v9 = NotifyHalWithMachineStatesAndRetrieveInterruptModel(&v18);
  if ( v9 < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 0xEuLL, 0LL, v9);
  v10 = AcpiIrqLibConfigureLibrary(v18, *((_QWORD *)AcpiInformation + 4));
  if ( v10 < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 0xFuLL, 0LL, v10);
  v11 = ACPIInterruptInitialize(BugCheckParameter3);
  v13 = v11;
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        22,
        35,
        (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 5uLL, 0LL, v13);
  }
  ACPIInitializeKernelTableHandler(1, *(_QWORD *)(BugCheckParameter3 + 8));
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( DeviceExtension )
    ACPIQueryPhysicalDeviceLocation(DeviceExtension);
  return 1;
}
