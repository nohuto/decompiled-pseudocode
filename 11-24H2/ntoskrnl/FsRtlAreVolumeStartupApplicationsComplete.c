/*
 * XREFs of FsRtlAreVolumeStartupApplicationsComplete @ 0x140A5FDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN FsRtlAreVolumeStartupApplicationsComplete(void)
{
  return BYTE2(NlsMbCodePageTag);
}
