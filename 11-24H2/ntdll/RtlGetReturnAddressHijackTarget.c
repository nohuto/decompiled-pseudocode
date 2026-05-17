/*
 * XREFs of RtlGetReturnAddressHijackTarget @ 0x18011EEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall *RtlGetReturnAddressHijackTarget())()
{
  return RtlRaiseExceptionForReturnAddressHijack;
}
