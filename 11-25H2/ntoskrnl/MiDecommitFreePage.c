/*
 * XREFs of MiDecommitFreePage @ 0x140341580
 * Callers:
 *     MiDecommitPrivatePageTail @ 0x1404EE270 (MiDecommitPrivatePageTail.c)
 * Callees:
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiBadShareCount @ 0x140340DD8 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x140342440 (MiPfnShareCountIsZero.c)
 */

__int64 __fastcall MiDecommitFreePage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v7; // rax
  unsigned int IsZero; // r9d
  unsigned __int64 v9; // rsi
  BOOL v10; // eax

  v4 = *(_QWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a3 + 34) & 7) != 6 )
    MiBadShareCount(a3);
  v7 = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(a3 + 24) = ((v7 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (((v7 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v7) & 0xC000000000000000uLL;
  if ( (v7 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    IsZero = MiPfnShareCountIsZero(a3, v4);
  else
    IsZero = 2;
  if ( (*(_DWORD *)(a1 + 156) & 0x20) == 0 )
    return IsZero;
  v9 = a2 << 25 >> 16;
  v10 = v9 >= 0xFFFFF68000000000uLL && v9 <= 0xFFFFF6FFFFFFFFFFuLL;
  if ( IsZero != 2 )
  {
    if ( IsZero == 3 )
    {
      if ( !*(_DWORD *)(a1 + 128) && v10 && !*(_DWORD *)(a1 + 40) && MiGetLeafVa(v9) <= 0x7FFFFFFEFFFFLL )
        *(_DWORD *)(a1 + 128) = 1;
      if ( *(__int64 *)(a3 + 40) < 0 )
        return 4;
    }
    return IsZero;
  }
  if ( !v10 )
    return IsZero;
  *(_QWORD *)a3 &= ~1uLL;
  return 2LL;
}
