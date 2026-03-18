/*
 * XREFs of IsImmersiveAppRestricted @ 0x1C008F860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsImmersiveAppRestricted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 824) & 0x30) == 16;
}
