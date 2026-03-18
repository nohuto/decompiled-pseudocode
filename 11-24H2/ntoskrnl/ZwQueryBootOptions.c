/*
 * XREFs of ZwQueryBootOptions @ 0x1406A8D70
 * Callers:
 *     DifZwQueryBootOptionsWrapper @ 0x140643F60 (DifZwQueryBootOptionsWrapper.c)
 *     SiGetEspFromFirmware @ 0x1408167A0 (SiGetEspFromFirmware.c)
 *     BiQueryBootOptions @ 0x1409C0924 (BiQueryBootOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryBootOptions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
