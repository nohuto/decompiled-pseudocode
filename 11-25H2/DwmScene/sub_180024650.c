/*
 * XREFs of sub_180024650 @ 0x180024650
 * Callers:
 *     sub_180024714 @ 0x180024714 (sub_180024714.c)
 *     sub_180029C10 @ 0x180029C10 (sub_180029C10.c)
 *     sub_18003001C @ 0x18003001C (sub_18003001C.c)
 *     sub_18003D924 @ 0x18003D924 (sub_18003D924.c)
 *     sub_1800D6146 @ 0x1800D6146 (sub_1800D6146.c)
 *     sub_1800D6A25 @ 0x1800D6A25 (sub_1800D6A25.c)
 *     sub_1800D6A7D @ 0x1800D6A7D (sub_1800D6A7D.c)
 *     sub_1800D6AF7 @ 0x1800D6AF7 (sub_1800D6AF7.c)
 *     sub_1800D6BD8 @ 0x1800D6BD8 (sub_1800D6BD8.c)
 *     sub_1800D6C6E @ 0x1800D6C6E (sub_1800D6C6E.c)
 *     ?dtor$0@?0???0agent@Concurrency@@QEAA@AEAVScheduleGroup@1@@Z@4HA @ 0x1800D6D28 (-dtor$0@-0---0agent@Concurrency@@QEAA@AEAVScheduleGroup@1@@Z@4HA.c)
 *     sub_1800D6D80 @ 0x1800D6D80 (sub_1800D6D80.c)
 *     sub_1800D6DFA @ 0x1800D6DFA (sub_1800D6DFA.c)
 *     sub_1800D6EDB @ 0x1800D6EDB (sub_1800D6EDB.c)
 *     sub_1800D6F71 @ 0x1800D6F71 (sub_1800D6F71.c)
 *     sub_1800D7BB4 @ 0x1800D7BB4 (sub_1800D7BB4.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 */

__int64 __fastcall sub_180024650(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  volatile signed __int32 *v4; // rcx

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    while ( v1 != v3 )
    {
      v4 = *(volatile signed __int32 **)(v1 + 8);
      if ( v4 )
        sub_180010544(v4);
      v1 += 16LL;
    }
    sub_180010134(*(void **)(a1 + 32), (*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 32)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  sub_180010F44(a1 + 8);
  return sub_1800D25C4(a1);
}
