/*
 * XREFs of PopRecorderInit @ 0x140C344A8
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x1404606D0 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN PopRecorderInit()
{
  unsigned __int64 i; // rbx
  BOOLEAN result; // al

  PopBlackBoxLock = 0LL;
  PopBootStatLock = 0LL;
  for ( i = 0LL; i < 325; i += 13LL )
  {
    byte_140E07824[i * 8] = 0;
    result = KeRegisterBugCheckReasonCallback(
               (PKBUGCHECK_REASON_CALLBACK_RECORD)((char *)&unk_140E077F8 + i * 8),
               (PKBUGCHECK_REASON_CALLBACK_ROUTINE)PopBlackBoxBugcheckCallback,
               KbCallbackSecondaryDumpData,
               (PUCHAR)(&off_140E077E8)[i]);
  }
  return result;
}
