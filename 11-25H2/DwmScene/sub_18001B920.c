/*
 * XREFs of sub_18001B920 @ 0x18001B920
 * Callers:
 *     sub_18001BB9C @ 0x18001BB9C (sub_18001BB9C.c)
 *     sub_18002CE78 @ 0x18002CE78 (sub_18002CE78.c)
 *     sub_18002D150 @ 0x18002D150 (sub_18002D150.c)
 *     sub_18002DF98 @ 0x18002DF98 (sub_18002DF98.c)
 *     sub_18004A230 @ 0x18004A230 (sub_18004A230.c)
 *     sub_18004A2F8 @ 0x18004A2F8 (sub_18004A2F8.c)
 *     sub_18004A3F8 @ 0x18004A3F8 (sub_18004A3F8.c)
 *     sub_18004A808 @ 0x18004A808 (sub_18004A808.c)
 *     sub_18004A8F8 @ 0x18004A8F8 (sub_18004A8F8.c)
 *     sub_18004A9EC @ 0x18004A9EC (sub_18004A9EC.c)
 *     sub_18004BB0C @ 0x18004BB0C (sub_18004BB0C.c)
 *     sub_18004C4C4 @ 0x18004C4C4 (sub_18004C4C4.c)
 *     sub_18004C518 @ 0x18004C518 (sub_18004C518.c)
 *     sub_18004D530 @ 0x18004D530 (sub_18004D530.c)
 *     sub_1800731A4 @ 0x1800731A4 (sub_1800731A4.c)
 * Callees:
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001BB4C @ 0x18001BB4C (sub_18001BB4C.c)
 */

bool __fastcall sub_18001B920(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r8

  v2 = 0;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    sub_1800137F8(a2 + 32);
    v4 = sub_1800137F8(v3);
    return (int)sub_18001BB4C(v4, *(_QWORD *)(v6 + 16), v7, *(_QWORD *)(v5 + 48)) >= 0;
  }
  return v2;
}
