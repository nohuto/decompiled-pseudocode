/*
 * XREFs of MiQueryPfn @ 0x14043F858
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 */

char __fastcall MiQueryPfn(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r11
  unsigned int PfnPriority; // eax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r11
  char result; // al

  v3 = 48 * a1 - 0x220000000000LL;
  if ( (*(_DWORD *)(v3 + 32) & 0x40000000) != 0
    || (HIWORD(*(_DWORD *)(v3 + 32)) & 7) == 5 && (*(_QWORD *)(v3 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
  {
    *(_QWORD *)(a2 + 8) |= 0x80000000uLL;
  }
  PfnPriority = MiGetPfnPriority(v3);
  v5 = 0LL;
  v6 = ((unsigned __int64)PfnPriority << 24) ^ (*(_QWORD *)(a2 + 8) ^ ((unsigned __int64)PfnPriority << 24)) & 0xFFFFFFFFF8FFFFFFuLL;
  *(_QWORD *)(a2 + 8) = v6;
  result = *(_BYTE *)(v7 + 34) & 7;
  if ( result == 3 )
    v5 = 0x8000000LL;
  *(_QWORD *)(a2 + 8) = v6 & 0xFFFFFFFFF77FFFFFuLL | v5 & 0xFFFFFFFFFF7FFFFFuLL | 0x400000;
  return result;
}
