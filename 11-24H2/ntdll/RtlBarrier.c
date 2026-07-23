/*
 * XREFs of RtlBarrier @ 0x18013C0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __cdecl RtlBarrier(PRTL_BARRIER Barrier, ULONG Flags)
{
  return RtlPosixBarrier(Barrier, Flags);
}
