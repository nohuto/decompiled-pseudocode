/*
 * XREFs of DebugPrint @ 0x1801225F0
 * Callers:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800EC7EC (vDbgPrintExWithPrefixInternalHelper.c)
 * Callees:
 *     <none>
 */

__int64 DebugPrint()
{
  __int64 result; // rax

  result = 1LL;
  __asm { int     2Dh; Windows NT - eax = 1: debug print }
  __debugbreak();
  return result;
}
