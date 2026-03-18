/*
 * XREFs of ZwSetSystemInformation @ 0x1406A9B90
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x14060DB20 (SmKmStoreTerminateWorker.c)
 *     DifZwSetSystemInformationWrapper @ 0x140648F60 (DifZwSetSystemInformationWrapper.c)
 *     SmStoreCreate @ 0x1407989C8 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x140798AD0 (SmStoreDelete.c)
 *     SmStoreResize @ 0x140798CBC (SmStoreResize.c)
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 *     IoShutdownSystem @ 0x140B5374C (IoShutdownSystem.c)
 *     KitpInitAitSampleRate @ 0x140C43450 (KitpInitAitSampleRate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
