/*
 * XREFs of PsIsThreadTerminating @ 0x1403EDB90
 * Callers:
 *     EtwpApcPoolThunk @ 0x1403ED870 (EtwpApcPoolThunk.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsThreadTerminating(PETHREAD Thread)
{
  return *(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1;
}
