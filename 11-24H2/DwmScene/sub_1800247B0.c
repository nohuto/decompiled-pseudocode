/*
 * XREFs of sub_1800247B0 @ 0x1800247B0
 * Callers:
 *     sub_180024874 @ 0x180024874 (sub_180024874.c)
 *     sub_180029D70 @ 0x180029D70 (sub_180029D70.c)
 *     sub_18003017C @ 0x18003017C (sub_18003017C.c)
 *     sub_18003DA84 @ 0x18003DA84 (sub_18003DA84.c)
 *     sub_1800D62A6 @ 0x1800D62A6 (sub_1800D62A6.c)
 *     sub_1800D6B85 @ 0x1800D6B85 (sub_1800D6B85.c)
 *     sub_1800D6BDD @ 0x1800D6BDD (sub_1800D6BDD.c)
 *     sub_1800D6C57 @ 0x1800D6C57 (sub_1800D6C57.c)
 *     sub_1800D6D38 @ 0x1800D6D38 (sub_1800D6D38.c)
 *     sub_1800D6DCE @ 0x1800D6DCE (sub_1800D6DCE.c)
 *     ?dtor$0@?0???0agent@Concurrency@@QEAA@AEAVScheduleGroup@1@@Z@4HA @ 0x1800D6E88 (-dtor$0@-0---0agent@Concurrency@@QEAA@AEAVScheduleGroup@1@@Z@4HA.c)
 *     sub_1800D6EE0 @ 0x1800D6EE0 (sub_1800D6EE0.c)
 *     sub_1800D6F5A @ 0x1800D6F5A (sub_1800D6F5A.c)
 *     sub_1800D703B @ 0x1800D703B (sub_1800D703B.c)
 *     sub_1800D70D1 @ 0x1800D70D1 (sub_1800D70D1.c)
 *     sub_1800D7D14 @ 0x1800D7D14 (sub_1800D7D14.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 */

__int64 __fastcall sub_1800247B0(__int64 a1)
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
        sub_180010644(v4);
      v1 += 16LL;
    }
    sub_180010234(*(void **)(a1 + 32), (*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 32)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  sub_180011044(a1 + 8);
  return sub_1800D2724(a1);
}
