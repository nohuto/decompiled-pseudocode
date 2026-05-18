/*
 * XREFs of sub_180039000 @ 0x180039000
 * Callers:
 *     sub_180038AC4 @ 0x180038AC4 (sub_180038AC4.c)
 *     sub_18005E5FC @ 0x18005E5FC (sub_18005E5FC.c)
 *     sub_18008AC20 @ 0x18008AC20 (sub_18008AC20.c)
 *     sub_18008ACEC @ 0x18008ACEC (sub_18008ACEC.c)
 *     sub_1800D7914 @ 0x1800D7914 (sub_1800D7914.c)
 * Callees:
 *     sub_18001B258 @ 0x18001B258 (sub_18001B258.c)
 */

void __fastcall sub_180039000(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) > 0x100uLL )
    sub_18001B258(*(LPVOID *)a1);
}
