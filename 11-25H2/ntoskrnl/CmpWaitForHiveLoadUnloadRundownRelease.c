/*
 * XREFs of CmpWaitForHiveLoadUnloadRundownRelease @ 0x1407D16F0
 * Callers:
 *     CmShutdownSystem1 @ 0x14065C0A4 (CmShutdownSystem1.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 */

__int64 CmpWaitForHiveLoadUnloadRundownRelease()
{
  ExWaitForRundownProtectionRelease(&CmpHiveLoadUnloadRundown);
  return _InterlockedExchange64((volatile __int64 *)&CmpHiveLoadUnloadRundown, 1LL);
}
