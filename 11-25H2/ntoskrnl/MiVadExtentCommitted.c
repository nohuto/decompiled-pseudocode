/*
 * XREFs of MiVadExtentCommitted @ 0x14044CA84
 * Callers:
 *     MiGetPageProtection @ 0x140245740 (MiGetPageProtection.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiVadExtentCommitted(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // r9

  v2 = *(_QWORD **)(a1 + 120);
  return (__int64)v2 >= 0
      || (a2 >> 12) - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) <= (unsigned __int64)(*v2 - 1LL) >> 12;
}
