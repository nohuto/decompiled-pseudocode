/*
 * XREFs of RtlGetFrame @ 0x180110180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_TEB_ACTIVE_FRAME *RtlGetFrame()
{
  return NtCurrentTeb()->ActiveFrame;
}
