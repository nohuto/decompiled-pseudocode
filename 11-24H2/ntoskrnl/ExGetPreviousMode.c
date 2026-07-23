/*
 * XREFs of ExGetPreviousMode @ 0x14043D9E0
 * Callers:
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140709FE4 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     AhcCacheQueryHwId @ 0x14082976C (AhcCacheQueryHwId.c)
 *     VrpPostQueryKey @ 0x14092A060 (VrpPostQueryKey.c)
 *     VrpPostEnumerateKey @ 0x14092A618 (VrpPostEnumerateKey.c)
 *     NtApphelpCacheControl @ 0x1409502F0 (NtApphelpCacheControl.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
