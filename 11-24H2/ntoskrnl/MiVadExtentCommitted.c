/*
 * XREFs of MiVadExtentCommitted @ 0x14043EDF0
 * Callers:
 *     MiCheckUserVirtualAddress @ 0x140309FA0 (MiCheckUserVirtualAddress.c)
 *     MiGetPageProtection @ 0x14030C130 (MiGetPageProtection.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadExtentCommitted(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // r9

  v2 = *(_QWORD **)(a1 + 120);
  return (__int64)v2 >= 0
      || (a2 >> 12) - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) <= (unsigned __int64)(*v2 - 1LL) >> 12;
}
