/*
 * XREFs of IopInitializeBugCheckDriverData @ 0x140704E18
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x140469560 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN IopInitializeBugCheckDriverData()
{
  IopBugCheckDriverDataCallbackRecord.State = 0;
  return KeRegisterBugCheckReasonCallback(
           &IopBugCheckDriverDataCallbackRecord,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)IoBugCheckDriverDataCallback,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"IoBugCheckDriverData");
}
