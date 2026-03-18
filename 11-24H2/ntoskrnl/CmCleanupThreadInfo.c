/*
 * XREFs of CmCleanupThreadInfo @ 0x14041EE40
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406F6C60 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 */

__int64 __fastcall CmCleanupThreadInfo(__int64 a1)
{
  return CmpCleanupThreadInfo(a1);
}
