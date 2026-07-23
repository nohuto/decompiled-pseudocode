/*
 * XREFs of DebugPrompt @ 0x18011ED60
 * Callers:
 *     DbgPrompt @ 0x180134B40 (DbgPrompt.c)
 * Callees:
 *     <none>
 */

__int64 DebugPrompt()
{
  __int64 result; // rax

  result = 2LL;
  __asm { int     2Dh; Windows NT - eax = 2: debug prompt }
  __debugbreak();
  return result;
}
