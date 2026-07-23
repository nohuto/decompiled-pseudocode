/*
 * XREFs of CmInitializeThreadInfo @ 0x140666824
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406F4C60 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 */

_KAFFINITY_EX *__fastcall CmInitializeThreadInfo(_KAFFINITY_EX *a1)
{
  return CmpInitializeThreadInfo(a1);
}
