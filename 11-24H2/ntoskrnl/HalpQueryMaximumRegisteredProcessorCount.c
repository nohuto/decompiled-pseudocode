/*
 * XREFs of HalpQueryMaximumRegisteredProcessorCount @ 0x140541F70
 * Callers:
 *     HalpTimerSelectRoles @ 0x14053B848 (HalpTimerSelectRoles.c)
 *     HalEnumerateProcessors @ 0x140541620 (HalEnumerateProcessors.c)
 *     HalStartDynamicProcessor @ 0x1405416E0 (HalStartDynamicProcessor.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x1405418CC (HalpInterruptGetNextProcessorLocalId.c)
 *     HalStartNextProcessor @ 0x140546280 (HalStartNextProcessor.c)
 *     HalpTscReserveResources @ 0x1405496F0 (HalpTscReserveResources.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x14054AA40 (HalpHvInitMcaStatusMsrCache.c)
 *     EmonAllocateResources @ 0x14055AD8C (EmonAllocateResources.c)
 *     EmonInitializeProfilingBSP @ 0x14055BA58 (EmonInitializeProfilingBSP.c)
 *     HalpTscReportSyncStatus @ 0x1406FE6CC (HalpTscReportSyncStatus.c)
 *     HalpMcaInitializePcrContext @ 0x140B4BDB0 (HalpMcaInitializePcrContext.c)
 *     HalpInitializeProfiling @ 0x140B4EAB8 (HalpInitializeProfiling.c)
 *     EmonCompleteInitializeProfiling @ 0x140B4EC80 (EmonCompleteInitializeProfiling.c)
 *     EmonInitializeProfilingOriginal @ 0x140B4F1E0 (EmonInitializeProfilingOriginal.c)
 *     HalpDpStartProcessor @ 0x140B4FF34 (HalpDpStartProcessor.c)
 *     Amd64InitializeProfilingEnhanced @ 0x140B50EC8 (Amd64InitializeProfilingEnhanced.c)
 *     Amd64InitializeProfilingOriginal @ 0x140B51488 (Amd64InitializeProfilingOriginal.c)
 *     HalpPreAllocateKInterrupts @ 0x140C130AC (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x1403BC0C0 (HalQueryMaximumProcessorCount.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x1406A9010 (ZwQueryLicenseValue.c)
 */

__int64 HalpQueryMaximumRegisteredProcessorCount()
{
  __int64 result; // rax
  int v1; // ett
  unsigned __int32 MaximumProcessorCount; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int32 v5; // [rsp+60h] [rbp+20h] BYREF
  int v6; // [rsp+68h] [rbp+28h] BYREF
  int v7; // [rsp+70h] [rbp+30h] BYREF

  v6 = 0;
  v7 = 0;
  v5 = 0;
  DestinationString = 0LL;
  _m_prefetchw(&dword_140E10054);
  LODWORD(result) = dword_140E10054;
  do
  {
    v1 = result;
    result = (unsigned int)_InterlockedCompareExchange(&dword_140E10054, result, result);
  }
  while ( v1 != (_DWORD)result );
  if ( !(_DWORD)result )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    if ( MaximumProcessorCount > 0x800 )
      MaximumProcessorCount = 2048;
    RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
    if ( (int)ZwQueryLicenseValue(&DestinationString, &v7, &v5, 4LL, &v6) >= 0 && v6 == 4 && v7 == 4 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v5 *= CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
      if ( MaximumProcessorCount > v5 )
        MaximumProcessorCount = v5;
    }
    result = MaximumProcessorCount;
    _InterlockedExchange(&dword_140E10054, MaximumProcessorCount);
  }
  return result;
}
