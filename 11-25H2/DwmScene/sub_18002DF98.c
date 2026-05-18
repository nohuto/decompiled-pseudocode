/*
 * XREFs of sub_18002DF98 @ 0x18002DF98
 * Callers:
 *     sub_18003062C @ 0x18003062C (sub_18003062C.c)
 * Callees:
 *     sub_18001B85C @ 0x18001B85C (sub_18001B85C.c)
 *     sub_18001B920 @ 0x18001B920 (sub_18001B920.c)
 *     sub_18001C22C @ 0x18001C22C (sub_18001C22C.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18002E324 @ 0x18002E324 (sub_18002E324.c)
 *     sub_18002EE10 @ 0x18002EE10 (sub_18002EE10.c)
 *     sub_1800361A0 @ 0x1800361A0 (sub_1800361A0.c)
 */

__int64 __fastcall sub_18002DF98(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  _BYTE v13[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+98h] [rbp+38h] BYREF

  sub_18001B85C((__int64)a1, (__int64 **)&v15, a3);
  v6 = v16;
  if ( sub_18001B920(v7, v16) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_1800361A0(a1);
    v8 = *a1;
    v17 = a3;
    sub_18002EE10(v13, a1);
    sub_18002E324(v9, v14 + 32, v10, &v17);
    *(_QWORD *)v14 = v8;
    *(_QWORD *)(v14 + 8) = v8;
    *(_QWORD *)(v14 + 16) = v8;
    *(_BYTE *)(v14 + 24) = 0;
    *(_BYTE *)(v14 + 25) = 0;
    v11 = v14;
    v14 = 0LL;
    sub_18001C22C((__int64)v13);
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v15, v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
