/*
 * XREFs of PsIsThreadTerminating @ 0x14030A670
 * Callers:
 *     EtwpApcPoolThunk @ 0x14030A360 (EtwpApcPoolThunk.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsThreadTerminating(PETHREAD Thread)
{
  return *(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1;
}
