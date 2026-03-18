/*
 * XREFs of BgkpDisableConsole @ 0x14058CB0C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058C5E0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140BA0170 (BgkDestroy.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 */

__int64 BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_140E0A7E0);
  return _InterlockedExchange64((volatile __int64 *)&stru_140E0A7E0, 1LL);
}
