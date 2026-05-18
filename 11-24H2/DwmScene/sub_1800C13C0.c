/*
 * XREFs of sub_1800C13C0 @ 0x1800C13C0
 * Callers:
 *     sub_1800C24AC @ 0x1800C24AC (sub_1800C24AC.c)
 *     sub_1800C50C0 @ 0x1800C50C0 (sub_1800C50C0.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_180052318 @ 0x180052318 (sub_180052318.c)
 *     sub_180052510 @ 0x180052510 (sub_180052510.c)
 *     sub_1800BEDD0 @ 0x1800BEDD0 (sub_1800BEDD0.c)
 *     sub_1800C0F9C @ 0x1800C0F9C (sub_1800C0F9C.c)
 *     sub_1800C11C8 @ 0x1800C11C8 (sub_1800C11C8.c)
 */

void __fastcall sub_1800C13C0(_QWORD *a1)
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
      sub_180052510((__int64)a1);
      v3 = sub_180052318(v2);
      v7 = (__int64 *)sub_1800C0F9C(v6, &v13, v4, v3, v5);
    }
    else
    {
      if ( !a1[22] )
        return;
      sub_180052510((__int64)a1);
      v9 = sub_180052318(v8);
      v7 = (__int64 *)sub_1800C11C8(v12, &v13, v10, v9, v11);
    }
    sub_1800BEDD0(v1, v7);
    sub_18000E954((__int64 *)&v13);
  }
}
