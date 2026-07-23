/*
 * XREFs of ZwSetSystemTime @ 0x1406AAB70
 * Callers:
 *     DifZwSetSystemTimeWrapper @ 0x1406476A0 (DifZwSetSystemTimeWrapper.c)
 *     ExpTimeZoneInitSiloState @ 0x1407B6E80 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1407B6F40 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER PreviousTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
