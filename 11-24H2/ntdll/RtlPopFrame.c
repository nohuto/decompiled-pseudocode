/*
 * XREFs of RtlPopFrame @ 0x1800E1D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlPopFrame(PTEB_ACTIVE_FRAME Frame)
{
  NtCurrentTeb()->ActiveFrame = Frame->Previous;
}
