/*
 * XREFs of ZwSetSystemInformation @ 0x1406AAB30
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x14060C0E0 (SmKmStoreTerminateWorker.c)
 *     DifZwSetSystemInformationWrapper @ 0x140647520 (DifZwSetSystemInformationWrapper.c)
 *     SmStoreCreate @ 0x140798AD8 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x140798BE0 (SmStoreDelete.c)
 *     SmStoreResize @ 0x140798DCC (SmStoreResize.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 *     IoShutdownSystem @ 0x140B5579C (IoShutdownSystem.c)
 *     KitpInitAitSampleRate @ 0x140C455A0 (KitpInitAitSampleRate.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass);
}
