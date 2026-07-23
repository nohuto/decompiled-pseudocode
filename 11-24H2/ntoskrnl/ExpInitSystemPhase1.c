/*
 * XREFs of ExpInitSystemPhase1 @ 0x140C42BB4
 * Callers:
 *     ExInitSystem @ 0x140C42854 (ExInitSystem.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x14031D920 (KeQueryMaximumProcessorCountEx.c)
 *     RtlGetProductInfo @ 0x1405EBC70 (RtlGetProductInfo.c)
 *     ExInitializeProcessor @ 0x140651FD4 (ExInitializeProcessor.c)
 *     Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledDeviceUsageNoInline @ 0x140654828 (Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledDeviceUsageNoInline.c)
 *     ExpHeapInitPhase1 @ 0x1406589E0 (ExpHeapInitPhase1.c)
 *     ExpSaInitialize @ 0x140658D24 (ExpSaInitialize.c)
 *     UcInitialize @ 0x140695608 (UcInitialize.c)
 *     ExpGetProductInfoSuiteTypeMap @ 0x1407B7480 (ExpGetProductInfoSuiteTypeMap.c)
 *     ExRegisterHost @ 0x1407C0B6C (ExRegisterHost.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExpPrmInitialization @ 0x140C42EA4 (ExpPrmInitialization.c)
 *     ExpInitializeCallbacks @ 0x140C44978 (ExpInitializeCallbacks.c)
 *     ExpWin32Initialization @ 0x140C44B6C (ExpWin32Initialization.c)
 *     ExpTimerInitialization @ 0x140C44DD8 (ExpTimerInitialization.c)
 *     ExpEventInitialization @ 0x140C44F90 (ExpEventInitialization.c)
 *     ExpWorkerInitialization @ 0x140C45050 (ExpWorkerInitialization.c)
 *     ExpSemaphoreInitialization @ 0x140C45394 (ExpSemaphoreInitialization.c)
 *     ExpInitializeSvm @ 0x140C45454 (ExpInitializeSvm.c)
 *     ExpProfileInitialization @ 0x140C45828 (ExpProfileInitialization.c)
 *     ExpMutantInitialization @ 0x140C45900 (ExpMutantInitialization.c)
 *     ExpKeyedEventInitialization @ 0x140C459EC (ExpKeyedEventInitialization.c)
 *     ExpWorkerFactoryInitialization @ 0x140C45D44 (ExpWorkerFactoryInitialization.c)
 *     ExpInitializeCrossVmIntegration @ 0x140C45F3C (ExpInitializeCrossVmIntegration.c)
 *     ExpAeThresholdInitialization @ 0x140C45FE4 (ExpAeThresholdInitialization.c)
 */

char __fastcall ExpInitSystemPhase1(__int64 a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v2; // ebx
  bool i; // di
  bool v4; // r13
  char v5; // bl
  char v6; // di
  char v7; // si
  char v8; // r14
  char v9; // r15
  char v10; // r12
  char v11; // al
  int v12; // eax
  bool v13; // dl
  bool v14; // cf
  bool v15; // bl
  __int64 Pool2; // rax
  char v17; // bl
  char v18; // di
  int v19; // eax
  __int64 v20; // rdx
  char v22[8]; // [rsp+30h] [rbp-50h] BYREF
  int v23; // [rsp+38h] [rbp-48h]
  int v24; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+48h] [rbp-38h]
  _QWORD v26[6]; // [rsp+50h] [rbp-30h] BYREF
  __int64 ReturnedProductType; // [rsp+C0h] [rbp+40h] BYREF
  char inited; // [rsp+C8h] [rbp+48h]
  char v29; // [rsp+D0h] [rbp+50h]

  ReturnedProductType = a1;
  ExpSpinCycleCount = 0;
  if ( KeQueryMaximumProcessorCountEx(0xFFFFu) > 1 )
    ExpSpinCycleCount = 10240;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledDeviceUsageNoInline();
  ExpHostListLock = 0LL;
  ExpKeyManipLock = 0LL;
  ExpSysDbgLock = 0LL;
  qword_140FDA030 = (__int64)&ExpHostList;
  ExpPushLockAllowImplicitUpgrade = IsEnabledDeviceUsageNoInline == 0;
  ExpHostList = (__int64)&ExpHostList;
  ExpPlatformBinaryLock = 0LL;
  v2 = 0;
  for ( i = (int)ExpWorkerInitialization() >= 0; v2 < (unsigned int)KeNumberProcessors_0; ++v2 )
    ExInitializeProcessor(KiProcessorBlock[v2], 0);
  v4 = (unsigned __int8)ExpEventInitialization() != 0 && i;
  v5 = ExpMutantInitialization();
  v6 = ExpAeThresholdInitialization();
  v7 = ExpInitializeCallbacks();
  v8 = ExpSemaphoreInitialization();
  v9 = ExpTimerInitialization();
  v10 = ExpSaInitialize();
  inited = ExpHeapInitPhase1();
  v11 = ExpProfileInitialization();
  ExpUuidLock = 0LL;
  v29 = v11;
  ExpUuidLastTimeAllocated = MEMORY[0xFFFFF78000000014];
  v12 = ExpKeyedEventInitialization();
  v14 = inited != 0;
  inited = -inited;
  v13 = v14 && v10 != 0 && v9 != 0 && v8 != 0 && v7 != 0 && v6 != 0 && v5 != 0 && v4;
  v14 = v29 != 0;
  v29 = -v29;
  v15 = 0;
  if ( v12 >= 0 )
    v15 = v14 && v13;
  Pool2 = ExAllocatePool2(0x40uLL, 0x30uLL, 0x20666E57uLL);
  ExpWnfDispatcher = Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    *(_OWORD *)(Pool2 + 32) = 0LL;
    *(_DWORD *)Pool2 = 3148040;
    *(_QWORD *)(Pool2 + 24) = ExpWnfWorkItemRoutine;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 8) = 0LL;
    UcInitialize(2);
  }
  else
  {
    v15 = 0;
  }
  v17 = (unsigned __int8)ExpWin32Initialization() != 0 && v15;
  v18 = 0;
  if ( (int)ExpWorkerFactoryInitialization() >= 0 )
    v18 = v17;
  v19 = ExpMicrocodeInitialization(1LL);
  if ( v19 < 0 && v19 != -1073741637 )
    v18 = 0;
  ExpPrmInitialization(*(_QWORD *)(ReturnedProductType + 240) + 2600LL);
  LODWORD(ReturnedProductType) = 0;
  v23 = 0;
  if ( RtlGetProductInfo(6u, 0, 0, 0, (PULONG)&ReturnedProductType)
    && (_DWORD)ReturnedProductType != -1412584499
    && ExpGetProductInfoSuiteTypeMap(ReturnedProductType, (__int64)v22)
    && MEMORY[0xFFFFF78000000264] != v23
    && (MEMORY[0xFFFFF78000000264] != 2 || v23 != 3) )
  {
    *(_DWORD *)(MmWriteableSharedUserData + 612) = v23;
  }
  v26[0] = 65537LL;
  v26[1] = &v24;
  v26[2] = 1LL;
  v26[3] = ExpPcwHostCallback;
  v24 = 1;
  v25 = 0LL;
  v26[4] = 0LL;
  if ( (int)ExRegisterHost(&ExpPcwExtensionHost, v20, (unsigned __int16 *)v26) < 0 )
    ExpPcwExtensionHost = 0LL;
  ExpInitializeCrossVmIntegration();
  ExpInitializeSvm();
  return v18;
}
