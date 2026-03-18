/*
 * XREFs of CmpWaitForHiveLoadUnloadRundownRelease @ 0x1407E0FC8
 * Callers:
 *     CmShutdownSystem1 @ 0x1406679A8 (CmShutdownSystem1.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 */

__int64 CmpWaitForHiveLoadUnloadRundownRelease()
{
  ExWaitForRundownProtectionRelease(&CmpHiveLoadUnloadRundown);
  return _InterlockedExchange64((volatile __int64 *)&CmpHiveLoadUnloadRundown, 1LL);
}
