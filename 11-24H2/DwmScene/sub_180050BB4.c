/*
 * XREFs of sub_180050BB4 @ 0x180050BB4
 * Callers:
 *     sub_180050CA0 @ 0x180050CA0 (sub_180050CA0.c)
 * Callees:
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_1800262E0 @ 0x1800262E0 (sub_1800262E0.c)
 *     sub_180027298 @ 0x180027298 (sub_180027298.c)
 *     sub_180050C60 @ 0x180050C60 (sub_180050C60.c)
 */

__int64 __fastcall sub_180050BB4(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = a2[1];
  v5 = *a2;
  v13 = *a2;
  v6 = 0LL;
  while ( v5 != v4 )
  {
    ++v6;
    sub_18001C420(&v13);
    v5 = v13;
  }
  v7 = (_QWORD *)*a1;
  v13 = v2;
  if ( v2 == *v7 && *(_BYTE *)(v4 + 25) )
  {
    sub_180050C60(a1);
  }
  else
  {
    while ( v2 != v4 )
    {
      sub_18001C420(&v13);
      v14 = v9;
      sub_18001C420(&v14);
      v11 = sub_180027298(a1, v10);
      sub_1800262E0(v12, v11);
      v2 = v13;
    }
  }
  return v6;
}
