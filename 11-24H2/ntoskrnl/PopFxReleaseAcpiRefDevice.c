/*
 * XREFs of PopFxReleaseAcpiRefDevice @ 0x1405D1CF4
 * Callers:
 *     PopFxRegisterDeviceWorker @ 0x14074EBF0 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x140270610 (IoReleaseRemoveLockEx.c)
 */

void __fastcall PopFxReleaseAcpiRefDevice(__int64 a1, void *a2)
{
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 312), a2, 0x20u);
}
