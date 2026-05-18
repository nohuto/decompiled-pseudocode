/*
 * XREFs of sub_1800CF158 @ 0x1800CF158
 * Callers:
 *     sub_1800CF224 @ 0x1800CF224 (sub_1800CF224.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_1800CF9E4 @ 0x1800CF9E4 (sub_1800CF9E4.c)
 *     sub_1800CFD88 @ 0x1800CFD88 (sub_1800CFD88.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800CF158(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( a2 != a3 )
  {
    v4 = a2;
    v9 = *a1;
    v10 = 0LL;
    if ( a1[1] )
      goto LABEL_5;
    v6 = sub_18001B1F8(176LL);
    v10 = v6;
    sub_1800CF9E4(v7, v6 + 16, v4 + 2);
    a1[3] = v6;
    while ( 1 )
    {
      v10 = 0LL;
      a1[2] = v6;
      ++a1[1];
      v4 = (_QWORD *)*v4;
LABEL_5:
      if ( v4 == a3 )
        break;
      v6 = sub_18001B1F8(176LL);
      v10 = v6;
      sub_1800CF9E4(v8, v6 + 16, v4 + 2);
      *(_QWORD *)a1[2] = v6;
      *(_QWORD *)(v6 + 8) = a1[2];
    }
    sub_1800CFD88(&v9);
  }
}
