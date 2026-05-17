/*
 * XREFs of RtlBarrier @ 0x18013F5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 RtlBarrier()
{
  return RtlPosixBarrier();
}
