/*
 * XREFs of FsRtlAreVolumeStartupApplicationsComplete @ 0x140A64880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN FsRtlAreVolumeStartupApplicationsComplete(void)
{
  return BYTE3(NlsMbCodePageTag);
}
