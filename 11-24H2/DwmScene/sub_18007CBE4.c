/*
 * XREFs of sub_18007CBE4 @ 0x18007CBE4
 * Callers:
 *     sub_18007CCF8 @ 0x18007CCF8 (sub_18007CCF8.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_180026284 @ 0x180026284 (sub_180026284.c)
 *     sub_180027298 @ 0x180027298 (sub_180027298.c)
 */

__int64 __fastcall sub_18007CBE4(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 *v11; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

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
    sub_180026284((__int64)a1, (__int64)a1, v7[1]);
    v7[1] = v7;
    *v7 = v7;
    v7[2] = v7;
    a1[1] = 0LL;
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
