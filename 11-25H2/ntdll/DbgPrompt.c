/*
 * XREFs of DbgPrompt @ 0x180138080
 * Callers:
 *     RtlAssert @ 0x1800F4450 (RtlAssert.c)
 *     LdrpGenericExceptionFilter @ 0x18011B640 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     DebugPrompt @ 0x180122610 (DebugPrompt.c)
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
