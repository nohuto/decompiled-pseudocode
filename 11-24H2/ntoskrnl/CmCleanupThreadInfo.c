/*
 * XREFs of CmCleanupThreadInfo @ 0x140414B80
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406F4C60 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 */

__int64 __fastcall CmCleanupThreadInfo(__int64 a1)
{
  return CmpCleanupThreadInfo(a1);
}
