/*
 * XREFs of ViIovInitialization @ 0x140BA6ED4
 * Callers:
 *     VfIovPluginEntry @ 0x1406A4D60 (VfIovPluginEntry.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x1404549D0 (ExInitializeNPagedLookasideListInternal.c)
 *     VfAvlInitializeTree @ 0x14060ECB4 (VfAvlInitializeTree.c)
 *     ExSetPoolFlags @ 0x140652F24 (ExSetPoolFlags.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     IoVerifierInit @ 0x140B84318 (IoVerifierInit.c)
 *     VfMajorRegisterHandlers @ 0x140B95030 (VfMajorRegisterHandlers.c)
 *     VfWdInit @ 0x140B9E8F8 (VfWdInit.c)
 */

void ViIovInitialization()
{
  _QWORD *Pool2; // rax
  __int64 v1; // rcx

  ExSetPoolFlags(0x10u);
  if ( !VfIrpDatabaseInitialized )
  {
    ViIrpDatabaseLock = 0;
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x2000uLL, 0x74546F49uLL);
    ViIrpDatabase = Pool2;
    if ( Pool2 )
    {
      v1 = 256LL;
      do
      {
        Pool2[1] = Pool2;
        *Pool2 = Pool2;
        Pool2 += 2;
        --v1;
      }
      while ( v1 );
      ViIrpDatabaseAddressRanges = (__int64)Pool2;
      _InterlockedExchange(&VfIrpDatabaseInitialized, 1);
    }
  }
  if ( (VfRuleClasses & 0x400000) == 0 )
    VfWdInit();
  if ( !ViSessionDataInitialized )
  {
    ExInitializeNPagedLookasideListInternal(
      (__int64)&ViSessionDataLookaside,
      0LL,
      (void (__stdcall *)(PVOID))VfUtilFreePoolDispatchLevel,
      512,
      2600,
      1936749129,
      16,
      VfInitializedWithoutReboot);
    _InterlockedExchange(&ViSessionDataInitialized, 1);
  }
  if ( !ViPacketLookasideInitialized )
  {
    ExInitializeNPagedLookasideListInternal(
      (__int64)&ViPacketLookaside,
      0LL,
      (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
      512,
      256,
      1953526345,
      16,
      VfInitializedWithoutReboot);
    ViPacketLookasideInitialized = 1;
  }
  if ( !ViIsIrpCallDriverDataInitialized )
  {
    ExInitializeNPagedLookasideListInternal(
      (__int64)&ViIrpCallDriverDataList,
      0LL,
      (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
      512,
      192,
      1131442761,
      16,
      VfInitializedWithoutReboot);
    ViIsIrpCallDriverDataInitialized = 1;
  }
  VfMajorRegisterHandlers(
    0x1Bu,
    (__int64)VfPnpDumpIrpStack,
    (__int64)VfPnpVerifyNewRequest,
    (__int64)VfPnpVerifyIrpStackDownward,
    (__int64)VfPnpVerifyIrpStackUpward,
    (__int64)VfPnpIsSystemRestrictedIrp,
    (__int64)VfPnpAdvanceIrpStatus,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)VfPnpTestStartedPdoStack,
    0LL);
  VfMajorRegisterHandlers(
    0x16u,
    (__int64)VfPowerDumpIrpStack,
    (__int64)VfPowerVerifyNewRequest,
    (__int64)VfPowerVerifyIrpStackDownward,
    (__int64)VfPowerVerifyIrpStackUpward,
    (__int64)VfPowerIsSystemRestrictedIrp,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)VfPowerTestStartedPdoStack,
    0LL);
  VfMajorRegisterHandlers(
    0x17u,
    (__int64)VfWmiDumpIrpStack,
    (__int64)VfWmiVerifyNewRequest,
    (__int64)VfWmiVerifyIrpStackDownward,
    (__int64)VfWmiVerifyIrpStackUpward,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)VfWmiTestStartedPdoStack,
    0LL);
  qword_1410006B0 = 0LL;
  qword_1410006A0 = (__int64)ViGenericVerifyIrpStackDownward;
  qword_141000698 = (__int64)ViSpIoAllocateIrp_Exit;
  qword_1410006A8 = (__int64)ViGenericVerifyIrpStackUpward;
  qword_141000690 = (__int64)ViGenericDumpIrpStack;
  qword_1410006C0 = (__int64)ViGenericIsValidIrpStatus;
  qword_1410006C8 = (__int64)ViGenericIsNewRequest;
  qword_1410006D0 = (__int64)ViGenericVerifyNewIrp;
  qword_1410006D8 = (__int64)ViSpIoAllocateIrp_Exit;
  qword_1410006E8 = (__int64)ViGenericBuildIrpLogEntry;
  qword_1410006B8 = 0LL;
  qword_1410006E0 = 0LL;
  if ( !ViRemLockInitialized )
  {
    if ( (int)VfAvlInitializeTree(&ViRemLockAvl) < 0 )
      _InterlockedExchange(&ViRemLockAllocationFailures, 1);
    else
      _InterlockedExchange(&ViRemLockInitialized, 1);
  }
  if ( !ViDevObjInitialized )
  {
    if ( (int)VfAvlInitializeTree(ViDevObjAvl) < 0 )
      _InterlockedExchange(&ViDevObjAllocationFailures, 1);
    else
      _InterlockedExchange(&ViDevObjInitialized, 1);
  }
  if ( !ViIoCallbacksInitialized )
  {
    ExInitializeNPagedLookasideListInternal(
      (__int64)&ViIoCallbackStateLookaside,
      0LL,
      (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
      512,
      8,
      1330202198,
      16,
      VfInitializedWithoutReboot);
    _InterlockedExchange(&ViIoCallbacksInitialized, 1);
  }
  IovUtilVerifierEnabled = 1;
  IoVerifierInit(MmVerifierData);
}
