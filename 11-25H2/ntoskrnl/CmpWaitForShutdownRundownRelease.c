/*
 * XREFs of CmpWaitForShutdownRundownRelease @ 0x1407D1718
 * Callers:
 *     CmShutdownSystem2 @ 0x14065C2F0 (CmShutdownSystem2.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 */

__int64 CmpWaitForShutdownRundownRelease()
{
  ExWaitForRundownProtectionRelease(&CmpShutdownRundown);
  return _InterlockedExchange64((volatile __int64 *)&CmpShutdownRundown, 1LL);
}
