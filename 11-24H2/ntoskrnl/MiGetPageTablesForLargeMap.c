/*
 * XREFs of MiGetPageTablesForLargeMap @ 0x1403A6BE4
 * Callers:
 *     MiMapContiguousMemoryLarge @ 0x1403A6D44 (MiMapContiguousMemoryLarge.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1402429F4 (MiReturnSystemVa.c)
 *     MiObtainSystemVa @ 0x1403A5804 (MiObtainSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x1403A62E0 (MiMakeZeroedPageTablesEx.c)
 */

unsigned __int64 __fastcall MiGetPageTablesForLargeMap(unsigned __int64 a1, int a2, int a3, unsigned int a4)
{
  int v7; // r12d
  unsigned int v8; // r14d
  unsigned __int64 v9; // r13
  __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  int v13; // ecx
  int v14; // r12d

  v7 = 2;
  if ( a2 == 8 )
  {
    v8 = 12;
  }
  else if ( a2 == 6 )
  {
    v8 = 10;
  }
  else
  {
    v8 = a2;
    v7 = 3;
  }
  v9 = a1 & 0xFFFFFFFFFFFFFE00uLL;
  v10 = (a1 >> 9) + 1;
  if ( (a1 & 0x1FF) == 0 )
    v10 = a1 >> 9;
  v11 = MiObtainSystemVa((unsigned int)v10, v8);
  if ( !v11 )
    return 0LL;
  v13 = v7 | 4;
  if ( a3 )
    v13 = v7;
  v14 = v13 | 0x1000;
  if ( KeGetCurrentIrql() != 2 )
    v14 = v13;
  if ( !(unsigned int)MiMakeZeroedPageTablesEx(
                        ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                        ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 8 * (v9 - 1),
                        v14,
                        a2,
                        a4)
    || a1 != v9
    && !(unsigned int)MiMakeZeroedPageTablesEx(
                        ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 8 * v9,
                        ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL + 8 * a1,
                        v14 & 0x1001,
                        a2,
                        a4) )
  {
    MiReturnSystemVa(v11, (v10 << 21) + v11, v8);
    return 0LL;
  }
  return v11;
}
