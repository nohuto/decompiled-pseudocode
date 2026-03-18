/*
 * XREFs of MiShouldLockPteDirectly @ 0x1402FBE90
 * Callers:
 *     MiUnlockNestedPageTableWritePte @ 0x1402FBBD4 (MiUnlockNestedPageTableWritePte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiShouldLockPteDirectly(__int64 a1, unsigned __int64 a2)
{
  return (*(_DWORD *)(a1 + 184) & 0xF) == 0 || a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL;
}
