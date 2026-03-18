/*
 * XREFs of NtUserCloseDesktop @ 0x140115DC0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionCloseDesktopEntryPoint @ 0x140115DD8 (ApiSetEditionCloseDesktopEntryPoint.c)
 */

__int64 NtUserCloseDesktop()
{
  return (int)ApiSetEditionCloseDesktopEntryPoint();
}
