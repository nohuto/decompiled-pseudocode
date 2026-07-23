/*
 * XREFs of HalpErrataInitDiscard @ 0x140C112E8
 * Callers:
 *     HalpErrataInitSystem @ 0x140B4F0D0 (HalpErrataInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *HalpErrataInitDiscard())(int a1)
{
  __int64 (__fastcall *result)(int); // rax

  result = HalpStopLegacyUsbInterrupts;
  off_140E00900[0] = (__int64 (__fastcall *)())HalpStopLegacyUsbInterrupts;
  return result;
}
