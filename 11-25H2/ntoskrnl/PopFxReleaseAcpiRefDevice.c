/*
 * XREFs of PopFxReleaseAcpiRefDevice @ 0x1405CD474
 * Callers:
 *     PopFxRegisterDeviceWorker @ 0x140742B20 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x140306440 (IoReleaseRemoveLockEx.c)
 */

void __fastcall PopFxReleaseAcpiRefDevice(__int64 a1, void *a2)
{
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 312), a2, 0x20u);
}
