/*
 * XREFs of AddKnobNameToBuffer @ 0x140153A44
 * Callers:
 *     ?EnumerateKnobs@KnobNamespace@@AEAAXP6AXPEAXPEB_W@Z0@Z @ 0x140153C60 (-EnumerateKnobs@KnobNamespace@@AEAAXP6AXPEAXPEB_W@Z0@Z.c)
 * Callees:
 *     AddStringToBufferContext @ 0x1400D6434 (AddStringToBufferContext.c)
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
