/*
 * XREFs of ViDmaInit @ 0x140B9E028
 * Callers:
 *     VfDmaPluginEntry @ 0x140612B40 (VfDmaPluginEntry.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x1404549D0 (ExInitializeNPagedLookasideListInternal.c)
 */

void ViDmaInit()
{
  if ( !ViAdapterListInitialized )
  {
    qword_140F03D70 = 0LL;
    ViAdapterList.Blink = &ViAdapterList;
    ViAdapterList.Flink = &ViAdapterList;
    ViAdapterListInitialized = 1;
  }
  if ( !ViDomainCommonBufferListInitialized )
  {
    qword_140F03DB0 = 0LL;
    qword_140F03DA8 = (__int64)&ViDomainCommonBufferList;
    ViDomainCommonBufferList = (__int64)&ViDomainCommonBufferList;
    ViDomainCommonBufferListInitialized = 1;
  }
  if ( !ViHalWaitBlockLookasideInitialized )
  {
    ExInitializeNPagedLookasideListInternal(
      (__int64)&ViHalWaitBlockLookaside,
      0LL,
      (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
      512,
      152,
      1449943368,
      16,
      VfInitializedWithoutReboot);
    ViHalWaitBlockLookasideInitialized = 1;
  }
  ViVerifyDma = 1;
  if ( (unsigned int)HalPrivateDispatchTable >= 0x3D )
  {
    VfRealHalAllocateMapRegisters = (__int64)off_140E00830[0];
    off_140E00830[0] = (__int64 (__fastcall *)())VfHalAllocateMapRegisters;
  }
  ViDoubleBufferDma = 1;
}
