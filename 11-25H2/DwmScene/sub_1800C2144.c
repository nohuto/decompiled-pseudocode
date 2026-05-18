/*
 * XREFs of sub_1800C2144 @ 0x1800C2144
 * Callers:
 *     sub_1800B8F60 @ 0x1800B8F60 (sub_1800B8F60.c)
 *     sub_1800B92C0 @ 0x1800B92C0 (sub_1800B92C0.c)
 *     sub_1800BEF30 @ 0x1800BEF30 (sub_1800BEF30.c)
 *     sub_1800C32E0 @ 0x1800C32E0 (sub_1800C32E0.c)
 *     sub_1800C36C0 @ 0x1800C36C0 (sub_1800C36C0.c)
 *     sub_1800C3B90 @ 0x1800C3B90 (sub_1800C3B90.c)
 *     sub_1800C53F0 @ 0x1800C53F0 (sub_1800C53F0.c)
 *     sub_1800C5900 @ 0x1800C5900 (sub_1800C5900.c)
 *     sub_1800C84D0 @ 0x1800C84D0 (sub_1800C84D0.c)
 *     sub_1800C8C18 @ 0x1800C8C18 (sub_1800C8C18.c)
 * Callees:
 *     sub_1800114D0 @ 0x1800114D0 (sub_1800114D0.c)
 */

__int64 *__fastcall sub_1800C2144(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 168);
  sub_1800114D0(a2);
  return a2;
}
