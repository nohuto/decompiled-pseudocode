/*
 * XREFs of sub_180083220 @ 0x180083220
 * Callers:
 *     sub_180082FB4 @ 0x180082FB4 (sub_180082FB4.c)
 * Callees:
 *     sub_180082920 @ 0x180082920 (sub_180082920.c)
 *     sub_180082948 @ 0x180082948 (sub_180082948.c)
 *     sub_180082970 @ 0x180082970 (sub_180082970.c)
 *     sub_180082A54 @ 0x180082A54 (sub_180082A54.c)
 */

__int64 __fastcall sub_180083220(float a1, float a2, char a3, int a4, _QWORD *a5, _QWORD *a6, _QWORD *a7)
{
  float v8; // xmm10_4
  float v9; // xmm6_4
  int v10; // xmm9_4
  int v11; // ebx
  int v12; // edi
  _BYTE *v13; // rdx
  _BYTE *v14; // rdx
  _BYTE *v15; // rdx
  __int64 result; // rax
  __int64 v17; // [rsp+28h] [rbp-91h] BYREF
  float v18[4]; // [rsp+30h] [rbp-89h] BYREF
  _DWORD v19[4]; // [rsp+40h] [rbp-79h] BYREF

  v8 = (float)a4;
  v9 = (float)(a1 + a1) / (float)a4;
  if ( a3 )
    v10 = -1082130432;
  else
    v10 = 1065353216;
  v11 = 0;
  do
  {
    v12 = 0;
    do
    {
      v13 = (_BYTE *)a5[1];
      v18[1] = a2;
      v18[2] = (float)((float)-v9 * (float)v11) - (float)-a1;
      v18[0] = (float)((float)v12 * v9) - a1;
      if ( v13 == (_BYTE *)a5[2] )
        sub_180082A54(a5, v13, (__int64)v18);
      else
        sub_180082948((__int64)a5, (__int64)v18);
      v19[0] = 0;
      v19[2] = 0;
      v14 = (_BYTE *)a6[1];
      v19[1] = v10;
      if ( v14 == (_BYTE *)a6[2] )
        sub_180082A54(a6, v14, (__int64)v19);
      else
        sub_180082948((__int64)a6, (__int64)v19);
      v15 = (_BYTE *)a7[1];
      *((float *)&v17 + 1) = (float)v11 / v8;
      *(float *)&v17 = (float)v12 / v8;
      if ( v15 == (_BYTE *)a7[2] )
        result = (__int64)sub_180082970(a7, v15, &v17);
      else
        result = sub_180082920((__int64)a7, &v17);
      ++v12;
    }
    while ( v12 <= (unsigned int)a4 );
    ++v11;
  }
  while ( v11 <= (unsigned int)a4 );
  return result;
}
