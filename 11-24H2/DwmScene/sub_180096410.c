/*
 * XREFs of sub_180096410 @ 0x180096410
 * Callers:
 *     sub_1800955C8 @ 0x1800955C8 (sub_1800955C8.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180016C14 @ 0x180016C14 (sub_180016C14.c)
 *     sub_18009660C @ 0x18009660C (sub_18009660C.c)
 */

__int64 __fastcall sub_180096410(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rbx
  char *v9; // r14
  unsigned __int64 v10; // rsi
  char *v11; // rdi
  size_t v12; // rbx
  const void *v13; // rdx
  char *v14; // rbx
  size_t v15; // r8
  char *v16; // rcx
  __int64 result; // rax
  void *v18; // rcx

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( v2 == v3 || v2 < 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFLL - v2 < v2 )
      sub_18009660C();
    v2 *= 2LL;
  }
  v4 = a1[3] >> 1;
  v5 = sub_180016C14(v2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  v7 = 8 * v4;
  v8 = a1[2];
  v9 = (char *)v6;
  v10 = v2 - v8;
  v11 = (char *)(8 * v4 + v6);
  v12 = 8 * v8 - 8 * v4;
  memmove(v11, (const void *)(a1[1] + 8 * v4), v12);
  v13 = (const void *)a1[1];
  v14 = &v11[v12];
  if ( v4 > v10 )
  {
    memmove(v14, v13, 8 * v10);
    memmove(v9, (const void *)(8 * v10 + a1[1]), v7 - 8 * v10);
    v16 = &v9[v7 - 8 * v10];
    v15 = 8 * v10;
  }
  else
  {
    memmove(v14, v13, 8 * v4);
    memset(&v14[v7], 0, 8 * (v10 - v4));
    v15 = 8 * v4;
    v16 = v9;
  }
  result = (__int64)memset(v16, 0, v15);
  v18 = (void *)a1[1];
  if ( v18 )
    result = sub_180010234(v18, 8LL * a1[2]);
  a1[2] += v10;
  a1[1] = v9;
  return result;
}
