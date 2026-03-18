/*
 * XREFs of ExpInitSystemPhase1 @ 0x140C2F788
 * Callers:
 *     ExInitSystem @ 0x140C2F428 (ExInitSystem.c)
 * Callees:
 *     RtlGetProductInfo @ 0x1405E2350 (RtlGetProductInfo.c)
 *     ExInitializeProcessor @ 0x140647974 (ExInitializeProcessor.c)
 *     ExpHeapInitPhase1 @ 0x14064E480 (ExpHeapInitPhase1.c)
 *     ExpSaInitialize @ 0x14064E6CC (ExpSaInitialize.c)
 *     UcInitialize @ 0x1406890D8 (UcInitialize.c)
 *     ExpGetProductInfoSuiteTypeMap @ 0x1407A7B90 (ExpGetProductInfoSuiteTypeMap.c)
 *     ExRegisterHost @ 0x1407B0F4C (ExRegisterHost.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExpPrmInitialization @ 0x140C2FA44 (ExpPrmInitialization.c)
 *     ExpInitializeCallbacks @ 0x140C31518 (ExpInitializeCallbacks.c)
 *     ExpInitializePushLocks @ 0x140C3170C (ExpInitializePushLocks.c)
 *     ExpWin32Initialization @ 0x140C31750 (ExpWin32Initialization.c)
 *     ExpTimerInitialization @ 0x140C319BC (ExpTimerInitialization.c)
 *     ExpEventInitialization @ 0x140C31B74 (ExpEventInitialization.c)
 *     ExpWorkerInitialization @ 0x140C31C34 (ExpWorkerInitialization.c)
 *     ExpSemaphoreInitialization @ 0x140C31F78 (ExpSemaphoreInitialization.c)
 *     ExpInitializeSvm @ 0x140C32038 (ExpInitializeSvm.c)
 *     ExpProfileInitialization @ 0x140C3240C (ExpProfileInitialization.c)
 *     ExpWorkerFactoryInitialization @ 0x140C324E4 (ExpWorkerFactoryInitialization.c)
 *     ExpKeyedEventInitialization @ 0x140C326DC (ExpKeyedEventInitialization.c)
 *     ExpMutantInitialization @ 0x140C32A34 (ExpMutantInitialization.c)
 *     ExpInitializeCrossVmIntegration @ 0x140C32B20 (ExpInitializeCrossVmIntegration.c)
 *     ExpAeThresholdInitialization @ 0x140C32BC8 (ExpAeThresholdInitialization.c)
 */

bool __fastcall ExpInitSystemPhase1(__int64 a1)
{
  unsigned int v1; // ebx
  char v2; // bl
  char v3; // di
  char v4; // si
  char v5; // r14
  char v6; // r15
  char v7; // r12
  char v8; // r13
  char v9; // al
  int v10; // eax
  bool v11; // cl
  bool v12; // cf
  bool v13; // bl
  ULONG_PTR Pool2; // rax
  bool v15; // bl
  bool v16; // di
  int v17; // eax
  __int64 v18; // rdx
  char v20[8]; // [rsp+30h] [rbp-39h] BYREF
  int v21; // [rsp+38h] [rbp-31h]
  int v22; // [rsp+40h] [rbp-29h] BYREF
  __int64 v23; // [rsp+48h] [rbp-21h]
  _QWORD v24[14]; // [rsp+50h] [rbp-19h] BYREF
  __int64 ReturnedProductType; // [rsp+D0h] [rbp+67h] BYREF
  char inited; // [rsp+D8h] [rbp+6Fh]
  char v27; // [rsp+E0h] [rbp+77h]
  BOOL i; // [rsp+E8h] [rbp+7Fh]

  ReturnedProductType = a1;
  ExpInitializePushLocks();
  qword_140FD9050 = (__int64)&ExpHostList;
  ExpHostList = (__int64)&ExpHostList;
  ExpHostListLock = 0LL;
  ExpKeyManipLock = 0LL;
  ExpSysDbgLock = 0LL;
  ExpPlatformBinaryLock = 0LL;
  v1 = 0;
  for ( i = (int)ExpWorkerInitialization() >= 0; v1 < (unsigned int)KeNumberProcessors_0; ++v1 )
    ExInitializeProcessor(KiProcessorBlock[v1], 0);
  v2 = ExpEventInitialization();
  v3 = ExpMutantInitialization();
  v4 = ExpAeThresholdInitialization();
  v5 = ExpInitializeCallbacks();
  v6 = ExpSemaphoreInitialization();
  v7 = ExpTimerInitialization();
  v8 = ExpSaInitialize();
  inited = ExpHeapInitPhase1();
  v9 = ExpProfileInitialization();
  ExpUuidLock = 0LL;
  v27 = v9;
  ExpUuidLastTimeAllocated = MEMORY[0xFFFFF78000000014];
  v10 = ExpKeyedEventInitialization();
  v12 = inited != 0;
  inited = -inited;
  v11 = v12 && v8 != 0 && v7 != 0 && v6 != 0 && v5 != 0 && v4 != 0 && v3 != 0 && v2 != 0 && i;
  v12 = v27 != 0;
  v27 = -v27;
  v13 = 0;
  if ( v10 >= 0 )
    v13 = v12 && v11;
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
    v13 = 0;
  }
  v15 = (unsigned __int8)ExpWin32Initialization() != 0 && v13;
  v16 = 0;
  if ( (int)ExpWorkerFactoryInitialization() >= 0 )
    v16 = v15;
  v17 = ExpMicrocodeInitialization(1LL);
  if ( v17 < 0 && v17 != -1073741637 )
    v16 = 0;
  ExpPrmInitialization(*(_QWORD *)(ReturnedProductType + 240) + 2600LL);
  LODWORD(ReturnedProductType) = 0;
  v21 = 0;
  if ( RtlGetProductInfo(6u, 0, 0, 0, (PULONG)&ReturnedProductType)
    && (_DWORD)ReturnedProductType != -1412584499
    && ExpGetProductInfoSuiteTypeMap(ReturnedProductType, (__int64)v20)
    && MEMORY[0xFFFFF78000000264] != v21
    && (MEMORY[0xFFFFF78000000264] != 2 || v21 != 3) )
  {
    *(_DWORD *)(MmWriteableSharedUserData + 612) = v21;
  }
  v24[0] = 65537LL;
  v24[1] = &v22;
  v24[2] = 1LL;
  v24[3] = ExpPcwHostCallback;
  v22 = 1;
  v23 = 0LL;
  v24[4] = 0LL;
  if ( (int)ExRegisterHost(&ExpPcwExtensionHost, v18, (unsigned __int16 *)v24) < 0 )
    ExpPcwExtensionHost = 0LL;
  ExpInitializeCrossVmIntegration();
  ExpInitializeSvm();
  return v16;
}
