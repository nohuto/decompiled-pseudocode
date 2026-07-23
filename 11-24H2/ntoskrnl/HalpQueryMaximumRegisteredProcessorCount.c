/*
 * XREFs of HalpQueryMaximumRegisteredProcessorCount @ 0x14053F86C
 * Callers:
 *     HalpTimerSelectRoles @ 0x140539128 (HalpTimerSelectRoles.c)
 *     HalEnumerateProcessors @ 0x14053EF20 (HalEnumerateProcessors.c)
 *     HalStartDynamicProcessor @ 0x14053EFE0 (HalStartDynamicProcessor.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x14053F1CC (HalpInterruptGetNextProcessorLocalId.c)
 *     HalStartNextProcessor @ 0x140543B40 (HalStartNextProcessor.c)
 *     HalpTscReserveResources @ 0x140546FB0 (HalpTscReserveResources.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x140548300 (HalpHvInitMcaStatusMsrCache.c)
 *     EmonAllocateResources @ 0x1405589BC (EmonAllocateResources.c)
 *     EmonInitializeProfilingBSP @ 0x140559688 (EmonInitializeProfilingBSP.c)
 *     HalpTscReportSyncStatus @ 0x1406FC30C (HalpTscReportSyncStatus.c)
 *     HalpMcaInitializePcrContext @ 0x140B4DDF0 (HalpMcaInitializePcrContext.c)
 *     HalpInitializeProfiling @ 0x140B50B08 (HalpInitializeProfiling.c)
 *     EmonCompleteInitializeProfiling @ 0x140B50CD0 (EmonCompleteInitializeProfiling.c)
 *     EmonInitializeProfilingOriginal @ 0x140B51230 (EmonInitializeProfilingOriginal.c)
 *     HalpDpStartProcessor @ 0x140B51F84 (HalpDpStartProcessor.c)
 *     Amd64InitializeProfilingEnhanced @ 0x140B52F18 (Amd64InitializeProfilingEnhanced.c)
 *     Amd64InitializeProfilingOriginal @ 0x140B534D8 (Amd64InitializeProfilingOriginal.c)
 *     HalpPreAllocateKInterrupts @ 0x140C150AC (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x140375540 (HalQueryMaximumProcessorCount.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x1406A9FB0 (ZwQueryLicenseValue.c)
 */

__int64 HalpQueryMaximumRegisteredProcessorCount()
{
  __int64 result; // rax
  int v1; // ett
  unsigned __int32 MaximumProcessorCount; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int32 Data; // [rsp+60h] [rbp+20h] BYREF
  ULONG ResultDataSize; // [rsp+68h] [rbp+28h] BYREF
  ULONG Type; // [rsp+70h] [rbp+30h] BYREF

  ResultDataSize = 0;
  Type = 0;
  Data = 0;
  DestinationString = 0LL;
  _m_prefetchw(&dword_140E101D4);
  LODWORD(result) = dword_140E101D4;
  do
  {
    v1 = result;
    result = (unsigned int)_InterlockedCompareExchange(&dword_140E101D4, result, result);
  }
  while ( v1 != (_DWORD)result );
  if ( !(_DWORD)result )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    if ( MaximumProcessorCount > 0x800 )
      MaximumProcessorCount = 2048;
    RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
    if ( ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) >= 0
      && ResultDataSize == 4
      && Type == 4 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      Data *= CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
      if ( MaximumProcessorCount > Data )
        MaximumProcessorCount = Data;
    }
    result = MaximumProcessorCount;
    _InterlockedExchange(&dword_140E101D4, MaximumProcessorCount);
  }
  return result;
}
