/*
 * XREFs of AddKnobNameToBuffer @ 0x140148D74
 * Callers:
 *     ?EnumerateKnobs@KnobNamespace@@AEAAXP6AXPEAXPEB_W@Z0@Z @ 0x140148F90 (-EnumerateKnobs@KnobNamespace@@AEAAXP6AXPEAXPEB_W@Z0@Z.c)
 * Callees:
 *     AddStringToBufferContext @ 0x1400CEDF4 (AddStringToBufferContext.c)
 */

void *__fastcall AddKnobNameToBuffer(_DWORD *a1, _WORD *a2)
{
  __int64 v2; // r8

  ++*a1;
  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  return AddStringToBufferContext((__int64)a1, a2, (int)v2 + 1);
}
