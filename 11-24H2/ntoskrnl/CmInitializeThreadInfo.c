/*
 * XREFs of CmInitializeThreadInfo @ 0x140667F38
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406F6C60 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 */

_KAFFINITY_EX *__fastcall CmInitializeThreadInfo(_KAFFINITY_EX *a1)
{
  return CmpInitializeThreadInfo(a1);
}
