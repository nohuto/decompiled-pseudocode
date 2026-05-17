/*
 * XREFs of RtlBarrier @ 0x18013DEB0
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
