/*
 * XREFs of CmpWaitForShutdownRundownRelease @ 0x1407E0FF0
 * Callers:
 *     CmShutdownSystem2 @ 0x140667BF4 (CmShutdownSystem2.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 */

__int64 CmpWaitForShutdownRundownRelease()
{
  ExWaitForRundownProtectionRelease(&CmpShutdownRundown);
  return _InterlockedExchange64((volatile __int64 *)&CmpShutdownRundown, 1LL);
}
