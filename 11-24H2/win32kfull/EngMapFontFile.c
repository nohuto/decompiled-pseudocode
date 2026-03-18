/*
 * XREFs of EngMapFontFile @ 0x140304E50
 * Callers:
 *     <none>
 * Callees:
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x140303F08 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 */

BOOL __stdcall EngMapFontFile(ULONG_PTR iFile, PULONG *ppjBuf, ULONG *pcjBuf)
{
  return EngMapFontFileInternal(iFile, ppjBuf, pcjBuf);
}
