/*
 * XREFs of sub_1800C1260 @ 0x1800C1260
 * Callers:
 *     sub_1800C234C @ 0x1800C234C (sub_1800C234C.c)
 *     sub_1800C4F60 @ 0x1800C4F60 (sub_1800C4F60.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_1800521B8 @ 0x1800521B8 (sub_1800521B8.c)
 *     sub_1800523B0 @ 0x1800523B0 (sub_1800523B0.c)
 *     sub_1800BEC70 @ 0x1800BEC70 (sub_1800BEC70.c)
 *     sub_1800C0E3C @ 0x1800C0E3C (sub_1800C0E3C.c)
 *     sub_1800C1068 @ 0x1800C1068 (sub_1800C1068.c)
 */

void __fastcall sub_1800C1260(_QWORD *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx
  __int16 v3; // ax
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // r10
  __int64 *v7; // rax
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // r10
  __int64 *v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1 + 20;
  if ( !a1[20] )
  {
    if ( a1[21] )
    {
      sub_1800523B0((__int64)a1);
      v3 = sub_1800521B8(v2);
      v7 = (__int64 *)sub_1800C0E3C(v6, &v13, v4, v3, v5);
    }
    else
    {
      if ( !a1[22] )
        return;
      sub_1800523B0((__int64)a1);
      v9 = sub_1800521B8(v8);
      v7 = (__int64 *)sub_1800C1068(v12, &v13, v10, v9, v11);
    }
    sub_1800BEC70(v1, v7);
    sub_18000E854((__int64 *)&v13);
  }
}
