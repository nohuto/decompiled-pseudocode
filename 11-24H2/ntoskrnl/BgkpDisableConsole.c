/*
 * XREFs of BgkpDisableConsole @ 0x14058D30C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058CDE0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140BB2170 (BgkDestroy.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 */

__int64 BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_140E0A9A0);
  return _InterlockedExchange64((volatile __int64 *)&stru_140E0A9A0, 1LL);
}
