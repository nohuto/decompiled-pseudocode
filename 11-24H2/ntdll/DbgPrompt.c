/*
 * XREFs of DbgPrompt @ 0x180134B40
 * Callers:
 *     RtlAssert @ 0x1800ED1D0 (RtlAssert.c)
 *     LdrpGenericExceptionFilter @ 0x180113530 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     DebugPrompt @ 0x18011ED60 (DebugPrompt.c)
 */

ULONG __cdecl DbgPrompt(PCCH Prompt, PCH Response, ULONG Length)
{
  __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Prompt[v3] );
  return DebugPrompt();
}
