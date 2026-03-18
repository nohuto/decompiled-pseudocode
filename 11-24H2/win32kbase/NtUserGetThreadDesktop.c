/*
 * XREFs of NtUserGetThreadDesktop @ 0x14010BB20
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionGetThreadDesktopEntryPoint @ 0x14010BB38 (ApiSetEditionGetThreadDesktopEntryPoint.c)
 */

__int64 NtUserGetThreadDesktop()
{
  return ApiSetEditionGetThreadDesktopEntryPoint();
}
