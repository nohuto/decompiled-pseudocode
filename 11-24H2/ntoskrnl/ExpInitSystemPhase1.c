/*
 * XREFs of ExpInitSystemPhase1 @ 0x140C40A64
 * Callers:
 *     ExInitSystem @ 0x140C40704 (ExInitSystem.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x14033E440 (KeQueryMaximumProcessorCountEx.c)
 *     RtlGetProductInfo @ 0x1405EE690 (RtlGetProductInfo.c)
 *     ExInitializeProcessor @ 0x140653874 (ExInitializeProcessor.c)
 *     Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledDeviceUsageNoInline @ 0x140656128 (Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledDeviceUsageNoInline.c)
 *     ExpHeapInitPhase1 @ 0x14065A310 (ExpHeapInitPhase1.c)
 *     ExpSaInitialize @ 0x14065A654 (ExpSaInitialize.c)
 *     UcInitialize @ 0x140694538 (UcInitialize.c)
 *     ExpGetProductInfoSuiteTypeMap @ 0x1407B7030 (ExpGetProductInfoSuiteTypeMap.c)
 *     ExRegisterHost @ 0x1407C071C (ExRegisterHost.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExpPrmInitialization @ 0x140C40D54 (ExpPrmInitialization.c)
 *     ExpInitializeCallbacks @ 0x140C42828 (ExpInitializeCallbacks.c)
 *     ExpWin32Initialization @ 0x140C42A1C (ExpWin32Initialization.c)
 *     ExpTimerInitialization @ 0x140C42C88 (ExpTimerInitialization.c)
 *     ExpEventInitialization @ 0x140C42E40 (ExpEventInitialization.c)
 *     ExpWorkerInitialization @ 0x140C42F00 (ExpWorkerInitialization.c)
 *     ExpSemaphoreInitialization @ 0x140C43244 (ExpSemaphoreInitialization.c)
 *     ExpInitializeSvm @ 0x140C43304 (ExpInitializeSvm.c)
 *     ExpWorkerFactoryInitialization @ 0x140C436D8 (ExpWorkerFactoryInitialization.c)
 *     ExpMutantInitialization @ 0x140C438D0 (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x140C439BC (ExpProfileInitialization.c)
 *     ExpKeyedEventInitialization @ 0x140C43A94 (ExpKeyedEventInitialization.c)
 *     ExpInitializeCrossVmIntegration @ 0x140C43DEC (ExpInitializeCrossVmIntegration.c)
 *     ExpAeThresholdInitialization @ 0x140C43E94 (ExpAeThresholdInitialization.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  int v16; // eax
  bool v17; // dl
  bool v18; // cf
  bool v19; // bl
  ULONG_PTR Pool2; // rax
  char v21; // bl
  char v22; // di
  int v23; // eax
  __int64 v24; // rdx
  char v26[8]; // [rsp+30h] [rbp-50h] BYREF
  int v27; // [rsp+38h] [rbp-48h]
  int v28; // [rsp+40h] [rbp-40h] BYREF
  __int64 v29; // [rsp+48h] [rbp-38h]
  _QWORD v30[6]; // [rsp+50h] [rbp-30h] BYREF
  __int64 ReturnedProductType; // [rsp+C0h] [rbp+40h] BYREF
  char inited; // [rsp+C8h] [rbp+48h]
  char v33; // [rsp+D0h] [rbp+50h]

  ReturnedProductType = a1;
  ExpSpinCycleCount = 0;
  if ( KeQueryMaximumProcessorCountEx(0xFFFFu) > 1 )
    ExpSpinCycleCount = 10240;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledDeviceUsageNoInline();
  ExpHostListLock = 0LL;
  ExpKeyManipLock = 0LL;
  ExpSysDbgLock = 0LL;
  qword_140FD9020 = (__int64)&ExpHostList;
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
  inited = ExpHeapInitPhase1(v12, v11, v13, v14);
  v15 = ExpProfileInitialization();
  ExpUuidLock = 0LL;
  v33 = v15;
  ExpUuidLastTimeAllocated = MEMORY[0xFFFFF78000000014];
  v16 = ExpKeyedEventInitialization();
  v18 = inited != 0;
  inited = -inited;
  v17 = v18 && v10 != 0 && v9 != 0 && v8 != 0 && v7 != 0 && v6 != 0 && v5 != 0 && v4;
  v18 = v33 != 0;
  v33 = -v33;
  v19 = 0;
  if ( v16 >= 0 )
    v19 = v18 && v17;
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
    v19 = 0;
  }
  v21 = (unsigned __int8)ExpWin32Initialization() != 0 && v19;
  v22 = 0;
  if ( (int)ExpWorkerFactoryInitialization() >= 0 )
    v22 = v21;
  v23 = ExpMicrocodeInitialization(1LL);
  if ( v23 < 0 && v23 != -1073741637 )
    v22 = 0;
  ExpPrmInitialization(*(_QWORD *)(ReturnedProductType + 240) + 2600LL);
  LODWORD(ReturnedProductType) = 0;
  v27 = 0;
  if ( RtlGetProductInfo(6u, 0, 0, 0, (PULONG)&ReturnedProductType)
    && (_DWORD)ReturnedProductType != -1412584499
    && ExpGetProductInfoSuiteTypeMap(ReturnedProductType, (__int64)v26)
    && MEMORY[0xFFFFF78000000264] != v27
    && (MEMORY[0xFFFFF78000000264] != 2 || v27 != 3) )
  {
    *(_DWORD *)(MmWriteableSharedUserData + 612) = v27;
  }
  v30[0] = 65537LL;
  v30[1] = &v28;
  v30[2] = 1LL;
  v30[3] = ExpPcwHostCallback;
  v28 = 1;
  v29 = 0LL;
  v30[4] = 0LL;
  if ( (int)ExRegisterHost(&ExpPcwExtensionHost, v24, (unsigned __int16 *)v30) < 0 )
    ExpPcwExtensionHost = 0LL;
  ExpInitializeCrossVmIntegration();
  ExpInitializeSvm();
  return v22;
}
