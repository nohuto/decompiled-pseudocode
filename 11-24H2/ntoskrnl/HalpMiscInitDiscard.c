/*
 * XREFs of HalpMiscInitDiscard @ 0x140C0FA24
 * Callers:
 *     HalpMiscInitSystem @ 0x140B4D290 (HalpMiscInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x140467D20 (KeRegisterBugCheckReasonCallback.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 HalpMiscInitDiscard()
{
  unsigned int MajorVersion; // ecx

  MajorVersion = KeGetCurrentPrcb()->MajorVersion;
  if ( (_WORD)MajorVersion != 1 )
    KeBugCheckEx(0x79u, 1uLL, MajorVersion, 1uLL, 0LL);
  HalpMiscCallbackRecord.State = 0;
  off_140E00638[0] = (__int64 (__fastcall *)())HaliQuerySystemInformation;
  off_140E00640[0] = (__int64 (__fastcall *)())HalpSetSystemInformation;
  KeRegisterBugCheckReasonCallback(
    &HalpMiscCallbackRecord,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HalpMiscBugCheckCallback,
    (KBUGCHECK_CALLBACK_REASON)9,
    (PUCHAR)"HAL");
  if ( HalpMiscDebugBreakRequested )
    __debugbreak();
  return 0LL;
}
