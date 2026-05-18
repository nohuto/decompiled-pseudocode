/*
 * XREFs of sub_18003CC20 @ 0x18003CC20
 * Callers:
 *     sub_18003E4F4 @ 0x18003E4F4 (sub_18003E4F4.c)
 * Callees:
 *     sub_18001E480 @ 0x18001E480 (sub_18001E480.c)
 *     sub_18003CDE4 @ 0x18003CDE4 (sub_18003CDE4.c)
 *     sub_18003CF08 @ 0x18003CF08 (sub_18003CF08.c)
 */

__int64 __fastcall sub_18003CC20(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_18001E480((__int64)a1, a2, 8uLL);
  v5 = *(_QWORD **)(sub_18003CDE4(a1, v11, v4, v3) + 8);
  if ( !v5 )
    return 0LL;
  v6 = a1[3];
  v7 = 2 * (v3 & a1[6]);
  if ( *(_QWORD **)(v6 + 16 * (v3 & a1[6]) + 8) == v5 )
  {
    if ( *(_QWORD **)(v6 + 16 * (v3 & a1[6])) == v5 )
    {
      v8 = a1[1];
      *(_QWORD *)(v6 + 16 * (v3 & a1[6])) = v8;
    }
    else
    {
      v8 = v5[1];
    }
    *(_QWORD *)(v6 + 8 * v7 + 8) = v8;
  }
  else if ( *(_QWORD **)(v6 + 16 * (v3 & a1[6])) == v5 )
  {
    *(_QWORD *)(v6 + 16 * (v3 & a1[6])) = *v5;
  }
  v9 = *v5;
  --a1[2];
  *(_QWORD *)v5[1] = v9;
  *(_QWORD *)(v9 + 8) = v5[1];
  sub_18003CF08();
  return 1LL;
}
