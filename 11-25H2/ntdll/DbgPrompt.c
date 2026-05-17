/*
 * XREFs of DbgPrompt @ 0x180138080
 * Callers:
 *     RtlAssert @ 0x1800F4450 (RtlAssert.c)
 *     LdrpGenericExceptionFilter @ 0x18011B640 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     DebugPrompt @ 0x180122610 (DebugPrompt.c)
 */

__int64 __fastcall DbgPrompt(__int64 a1)
{
  __int64 v1; // rax

  v1 = -1LL;
  do
    ++v1;
  while ( *(_BYTE *)(a1 + v1) );
  return DebugPrompt();
}
