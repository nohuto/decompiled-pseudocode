/*
 * XREFs of sub_180038EA0 @ 0x180038EA0
 * Callers:
 *     sub_180038964 @ 0x180038964 (sub_180038964.c)
 *     sub_18005E49C @ 0x18005E49C (sub_18005E49C.c)
 *     sub_18008AAC0 @ 0x18008AAC0 (sub_18008AAC0.c)
 *     sub_18008AB8C @ 0x18008AB8C (sub_18008AB8C.c)
 *     sub_1800D77B4 @ 0x1800D77B4 (sub_1800D77B4.c)
 * Callees:
 *     sub_18001B0F8 @ 0x18001B0F8 (sub_18001B0F8.c)
 */

void __fastcall sub_180038EA0(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) > 0x100uLL )
    sub_18001B0F8(*(LPVOID *)a1);
}
