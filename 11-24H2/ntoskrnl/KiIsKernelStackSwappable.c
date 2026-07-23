/*
 * XREFs of KiIsKernelStackSwappable @ 0x140406220
 * Callers:
 *     KeTryToFreezeThreadStack @ 0x1404A5F7C (KeTryToFreezeThreadStack.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiIsKernelStackSwappable(__int64 a1)
{
  return *(_BYTE *)(a1 + 391) && (*(_DWORD *)(a1 + 120) & 0x40) != 0 && *(char *)(a1 + 195) < 25;
}
