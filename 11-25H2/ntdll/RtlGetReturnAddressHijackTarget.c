/*
 * XREFs of RtlGetReturnAddressHijackTarget @ 0x180120770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall *RtlGetReturnAddressHijackTarget())()
{
  return RtlRaiseExceptionForReturnAddressHijack;
}
