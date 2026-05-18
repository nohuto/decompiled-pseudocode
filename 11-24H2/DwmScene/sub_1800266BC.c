/*
 * XREFs of sub_1800266BC @ 0x1800266BC
 * Callers:
 *     sub_180026678 @ 0x180026678 (sub_180026678.c)
 *     sub_1800279E0 @ 0x1800279E0 (sub_1800279E0.c)
 *     sub_180037210 @ 0x180037210 (sub_180037210.c)
 *     sub_1800504B8 @ 0x1800504B8 (sub_1800504B8.c)
 *     sub_180051534 @ 0x180051534 (sub_180051534.c)
 *     sub_180068AC8 @ 0x180068AC8 (sub_180068AC8.c)
 *     sub_180080F80 @ 0x180080F80 (sub_180080F80.c)
 *     sub_1800810C0 @ 0x1800810C0 (sub_1800810C0.c)
 *     sub_18008179C @ 0x18008179C (sub_18008179C.c)
 *     sub_180081AC8 @ 0x180081AC8 (sub_180081AC8.c)
 *     sub_180081FB4 @ 0x180081FB4 (sub_180081FB4.c)
 *     sub_180090EEC @ 0x180090EEC (sub_180090EEC.c)
 *     sub_1800B87E8 @ 0x1800B87E8 (sub_1800B87E8.c)
 *     sub_1800C6F54 @ 0x1800C6F54 (sub_1800C6F54.c)
 *     sub_1800C7D38 @ 0x1800C7D38 (sub_1800C7D38.c)
 *     sub_1800C9A30 @ 0x1800C9A30 (sub_1800C9A30.c)
 *     sub_1800C9C90 @ 0x1800C9C90 (sub_1800C9C90.c)
 *     sub_1800C9EF4 @ 0x1800C9EF4 (sub_1800C9EF4.c)
 *     sub_1800D4EC0 @ 0x1800D4EC0 (sub_1800D4EC0.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

__int64 __fastcall sub_1800266BC(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 80);
  if ( v2 )
    sub_180010644(v2);
  return sub_180027958(a1);
}
