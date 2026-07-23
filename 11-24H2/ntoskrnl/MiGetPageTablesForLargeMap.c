/*
 * XREFs of MiGetPageTablesForLargeMap @ 0x14026C224
 * Callers:
 *     MiMapContiguousMemoryLarge @ 0x14026BE10 (MiMapContiguousMemoryLarge.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14020AB44 (MiReturnSystemVa.c)
 *     MiObtainSystemVa @ 0x14026CAF4 (MiObtainSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x14026D5D0 (MiMakeZeroedPageTablesEx.c)
 */

unsigned __int64 __fastcall MiGetPageTablesForLargeMap(unsigned __int64 a1, int a2, int a3, int a4)
{
  int v7; // r12d
  unsigned __int64 v8; // r13
  __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  __int64 v12; // r10
  int v13; // ecx
  int v14; // r12d
  int v15; // [rsp+70h] [rbp+8h]

  v7 = 2;
  if ( a2 != 8 && a2 != 6 )
    v7 = 3;
  v8 = a1 & 0xFFFFFFFFFFFFFE00uLL;
  v9 = (a1 >> 9) + 1;
  if ( (a1 & 0x1FF) == 0 )
    v9 = a1 >> 9;
  v10 = MiObtainSystemVa((unsigned int)v9);
  if ( !v10 )
    return 0LL;
  v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = v7 | 4;
  v15 = v12;
  if ( a3 )
    v13 = v7;
  v14 = v13 | 0x1000;
  if ( KeGetCurrentIrql() != 2 )
    v14 = v13;
  if ( !(unsigned int)MiMakeZeroedPageTablesEx(
                        (unsigned int)(v10 >> 9) & 0xFFFFFFF8,
                        (int)v12 + 8 * ((int)v8 - 1),
                        v14,
                        a2,
                        a4)
    || a1 != v8
    && !(unsigned int)MiMakeZeroedPageTablesEx(v15 + 8 * (int)v8, v15 - 8 + 8 * (int)a1, v14 & 0x1001, a2, a4) )
  {
    MiReturnSystemVa(v10, (v9 << 21) + v10);
    return 0LL;
  }
  return v10;
}
