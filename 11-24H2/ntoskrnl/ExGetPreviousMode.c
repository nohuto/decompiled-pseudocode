/*
 * XREFs of ExGetPreviousMode @ 0x140445830
 * Callers:
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x14070C450 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     AhcCacheQueryHwId @ 0x140828F30 (AhcCacheQueryHwId.c)
 *     VrpPostQueryKey @ 0x140927F20 (VrpPostQueryKey.c)
 *     VrpPostEnumerateKey @ 0x1409284D8 (VrpPostEnumerateKey.c)
 *     NtApphelpCacheControl @ 0x140967860 (NtApphelpCacheControl.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
