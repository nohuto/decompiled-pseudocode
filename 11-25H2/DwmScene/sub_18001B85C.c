/*
 * XREFs of sub_18001B85C @ 0x18001B85C
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

__int64 **__fastcall sub_18001B85C(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 *v5; // r9
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r8

  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  *((_DWORD *)a2 + 2) = 0;
  *a2 = v5;
  *((_DWORD *)a2 + 3) = 0;
  v6 = *a2;
  a2[2] = *(__int64 **)a1;
  while ( !*((_BYTE *)v6 + 25) )
  {
    *a2 = v6;
    sub_1800137F8(a3);
    v7 = sub_1800137F8((__int64)(v6 + 4));
    if ( (int)sub_18001BB4C(v7, v6[6], v8, *(_QWORD *)(a3 + 16)) >= 0 )
    {
      *((_DWORD *)a2 + 2) = 1;
      a2[2] = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      *((_DWORD *)a2 + 2) = 0;
      v6 = (__int64 *)v6[2];
    }
  }
  return a2;
}
