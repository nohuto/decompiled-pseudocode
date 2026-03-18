/*
 * XREFs of HalpQueryMaximumRegisteredProcessorCount @ 0x14053F740
 * Callers:
 *     HalpTimerSelectRoles @ 0x140539098 (HalpTimerSelectRoles.c)
 *     HalEnumerateProcessors @ 0x14053EDF0 (HalEnumerateProcessors.c)
 *     HalStartDynamicProcessor @ 0x14053EEB0 (HalStartDynamicProcessor.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x14053F09C (HalpInterruptGetNextProcessorLocalId.c)
 *     HalStartNextProcessor @ 0x140543990 (HalStartNextProcessor.c)
 *     HalpTscReserveResources @ 0x140546E00 (HalpTscReserveResources.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x140548150 (HalpHvInitMcaStatusMsrCache.c)
 *     EmonAllocateResources @ 0x14055848C (EmonAllocateResources.c)
 *     EmonInitializeProfilingBSP @ 0x140559158 (EmonInitializeProfilingBSP.c)
 *     HalpTscReportSyncStatus @ 0x1406F28DC (HalpTscReportSyncStatus.c)
 *     HalpMcaInitializePcrContext @ 0x140B3BDB0 (HalpMcaInitializePcrContext.c)
 *     HalpInitializeProfiling @ 0x140B3EAB8 (HalpInitializeProfiling.c)
 *     EmonCompleteInitializeProfiling @ 0x140B3EC80 (EmonCompleteInitializeProfiling.c)
 *     EmonInitializeProfilingOriginal @ 0x140B3F1E0 (EmonInitializeProfilingOriginal.c)
 *     HalpDpStartProcessor @ 0x140B3FF34 (HalpDpStartProcessor.c)
 *     Amd64InitializeProfilingEnhanced @ 0x140B40EC8 (Amd64InitializeProfilingEnhanced.c)
 *     Amd64InitializeProfilingOriginal @ 0x140B41488 (Amd64InitializeProfilingOriginal.c)
 *     HalpPreAllocateKInterrupts @ 0x140C0201C (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     HalQueryMaximumProcessorCount @ 0x1404477E0 (HalQueryMaximumProcessorCount.c)
 *     ZwQueryLicenseValue @ 0x14069DD40 (ZwQueryLicenseValue.c)
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
  _m_prefetchw(&dword_140E0FDD4);
  LODWORD(result) = dword_140E0FDD4;
  do
  {
    v1 = result;
    result = (unsigned int)_InterlockedCompareExchange(&dword_140E0FDD4, result, result);
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
    _InterlockedExchange(&dword_140E0FDD4, MaximumProcessorCount);
  }
  return result;
}
