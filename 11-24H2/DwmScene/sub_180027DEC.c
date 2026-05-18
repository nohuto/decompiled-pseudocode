/*
 * XREFs of sub_180027DEC @ 0x180027DEC
 * Callers:
 *     sub_180027EDC @ 0x180027EDC (sub_180027EDC.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_180027298 @ 0x180027298 (sub_180027298.c)
 *     sub_180027E9C @ 0x180027E9C (sub_180027E9C.c)
 */

__int64 __fastcall sub_180027DEC(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 *v11; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = a2[1];
  v5 = *a2;
  v12 = *a2;
  v6 = 0LL;
  while ( v5 != v4 )
  {
    ++v6;
    sub_18001C420(&v12);
    v5 = v12;
  }
  v7 = (_QWORD *)*a1;
  v12 = v2;
  if ( v2 == *v7 && *(_BYTE *)(v4 + 25) )
  {
    sub_180027E9C(a1);
  }
  else
  {
    while ( v2 != v4 )
    {
      sub_18001C420(&v12);
      v13 = v9;
      sub_18001C420(&v13);
      v11 = sub_180027298(a1, v10);
      sub_180010234(v11, 0x28uLL);
      v2 = v12;
    }
  }
  return v6;
}
