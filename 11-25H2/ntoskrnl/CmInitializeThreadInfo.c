/*
 * XREFs of CmInitializeThreadInfo @ 0x14065C5E4
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406EB400 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 */

_KAFFINITY_EX *__fastcall CmInitializeThreadInfo(_KAFFINITY_EX *a1)
{
  return CmpInitializeThreadInfo(a1);
}
