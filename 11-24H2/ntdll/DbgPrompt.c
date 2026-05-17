/*
 * XREFs of DbgPrompt @ 0x180136910
 * Callers:
 *     RtlAssert @ 0x1800F28E0 (RtlAssert.c)
 *     LdrpGenericExceptionFilter @ 0x1801185C0 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     DebugPrompt @ 0x180120B30 (DebugPrompt.c)
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
