/*
 * XREFs of ZwRaiseException @ 0x1406A9290
 * Callers:
 *     RtlUnwindEx @ 0x14027CD20 (RtlUnwindEx.c)
 *     RtlRaiseNoncontinuableException @ 0x1404FD070 (RtlRaiseNoncontinuableException.c)
 *     RtlRaiseException @ 0x1405E88F0 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRaiseException(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
