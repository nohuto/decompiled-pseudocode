/*
 * XREFs of BgkpDisableConsole @ 0x1405902EC
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058FDC0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140BB0170 (BgkDestroy.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 */

__int64 BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_140E0A920);
  return _InterlockedExchange64((volatile __int64 *)&stru_140E0A920, 1LL);
}
