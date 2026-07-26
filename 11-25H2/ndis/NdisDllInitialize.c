/*
 * XREFs of NdisDllInitialize @ 0x14009F5C0
 * Callers:
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 * Callees:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1400CBA04 (ndisAllocatePerProcessorPageDescriptor.c)
 *     ?NdispRegisterShim@@YAXXZ @ 0x140149E00 (-NdispRegisterShim@@YAXXZ.c)
 */

__int64 NdisDllInitialize()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  _LIST_ENTRY *PerProcessorPageDescriptor; // rax
  _LIST_ENTRY *Flink; // rcx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  signed __int32 v7; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  DestinationString = 0LL;
  v7 = 0;
  if ( !ndisDllInitialized )
  {
    ndisDllInitialized = 1;
    ndisNumberOfActiveProcessorsAtBoot = KeQueryActiveProcessorCountEx(0xFFFFu);
    KeQueryActiveProcessorCountEx(0);
    ndisMaxNumberOfProcessors = KeQueryMaximumProcessorCountEx(0xFFFFu);
    ndisMaxCacheLineSize = KeGetRecommendedSharedDataAlignment();
    if ( ndisMaxCacheLineSize < 0x40 )
      ndisMaxCacheLineSize = 64;
    KeInitializeSpinLock(&ndisPerProcessorDescriptorLock);
    qword_1401266D0 = (__int64)&ndisPerProcessorDescriptorList;
    ndisPerProcessorDescriptorList.Flink = &ndisPerProcessorDescriptorList;
    PerProcessorPageDescriptor = (_LIST_ENTRY *)ndisAllocatePerProcessorPageDescriptor(v2, v1);
    if ( PerProcessorPageDescriptor )
    {
      Flink = ndisPerProcessorDescriptorList.Flink;
      if ( ndisPerProcessorDescriptorList.Flink->Blink != &ndisPerProcessorDescriptorList )
        __fastfail(3u);
      PerProcessorPageDescriptor->Flink = ndisPerProcessorDescriptorList.Flink;
      PerProcessorPageDescriptor->Blink = &ndisPerProcessorDescriptorList;
      Flink->Blink = PerProcessorPageDescriptor;
      ndisPerProcessorDescriptorList.Flink = PerProcessorPageDescriptor;
    }
    if ( _InterlockedIncrement(&v7) == 1 )
      NdispRegisterShim();
    if ( ndisMaxNumberOfProcessors > 0x100 )
    {
      qword_140126978 = ExAllocatePool2(64LL, 520LL * ndisMaxNumberOfProcessors, 538985550);
      if ( !qword_140126978 )
        v0 = -1073741801;
    }
    RtlInitUnicodeString(&DestinationString, L"MmGetSystemRoutineAddressEx");
    ndisGetSystemRoutineAddressEx = (void *(*)(struct _UNICODE_STRING *, char *))MmGetSystemRoutineAddress(&DestinationString);
  }
  return v0;
}
