/*
 * XREFs of sub_1800115D0 @ 0x1800115D0
 * Callers:
 *     sub_1800110C0 @ 0x1800110C0 (sub_1800110C0.c)
 *     sub_180011290 @ 0x180011290 (sub_180011290.c)
 *     sub_1800118C0 @ 0x1800118C0 (sub_1800118C0.c)
 *     sub_180018010 @ 0x180018010 (sub_180018010.c)
 *     sub_1800B9EF0 @ 0x1800B9EF0 (sub_1800B9EF0.c)
 *     sub_1800BD0B0 @ 0x1800BD0B0 (sub_1800BD0B0.c)
 *     sub_1800BE920 @ 0x1800BE920 (sub_1800BE920.c)
 *     sub_1800BEE5C @ 0x1800BEE5C (sub_1800BEE5C.c)
 *     sub_1800BF2C8 @ 0x1800BF2C8 (sub_1800BF2C8.c)
 *     sub_1800BF870 @ 0x1800BF870 (sub_1800BF870.c)
 *     sub_1800BFDFC @ 0x1800BFDFC (sub_1800BFDFC.c)
 *     sub_1800C1F10 @ 0x1800C1F10 (sub_1800C1F10.c)
 *     sub_1800C22A4 @ 0x1800C22A4 (sub_1800C22A4.c)
 *     sub_1800C50C0 @ 0x1800C50C0 (sub_1800C50C0.c)
 *     sub_1800C849C @ 0x1800C849C (sub_1800C849C.c)
 *     sub_1800C8AC8 @ 0x1800C8AC8 (sub_1800C8AC8.c)
 *     sub_1800C8D78 @ 0x1800C8D78 (sub_1800C8D78.c)
 *     sub_1800CBE90 @ 0x1800CBE90 (sub_1800CBE90.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800115D0(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
