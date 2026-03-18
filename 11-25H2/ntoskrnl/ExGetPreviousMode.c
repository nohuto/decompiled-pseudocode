/*
 * XREFs of ExGetPreviousMode @ 0x140449890
 * Callers:
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140700570 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     AhcCacheQueryHwId @ 0x14081913C (AhcCacheQueryHwId.c)
 *     NtApphelpCacheControl @ 0x140822DC0 (NtApphelpCacheControl.c)
 *     VrpPostQueryKey @ 0x140948380 (VrpPostQueryKey.c)
 *     VrpPostEnumerateKey @ 0x140948938 (VrpPostEnumerateKey.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
