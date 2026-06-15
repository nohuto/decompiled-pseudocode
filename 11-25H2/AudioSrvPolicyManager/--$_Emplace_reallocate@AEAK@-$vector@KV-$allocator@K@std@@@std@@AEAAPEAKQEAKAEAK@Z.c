/*
 * XREFs of ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z @ 0x180012B70
 * Callers:
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180042698 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015D50 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@K@std@@@std@@YAPEAKAEAV?$allocator@K@0@AEA_K@Z @ 0x180032774 (--$_Allocate_at_least_helper@V-$allocator@K@std@@@std@@YAPEAKAEAV-$allocator@K@0@AEA_K@Z.c)
 *     memmove_0 @ 0x18004B3D8 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned long>::_Emplace_reallocate<unsigned long &>(_QWORD *a1, _BYTE *a2, _DWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  char *v12; // rax
  char *v13; // rdi
  char *v14; // r14
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  void *v17; // rcx
  size_t v18; // r8
  char *result; // rax
  char *v20; // [rsp+58h] [rbp+10h] BYREF

  v6 = (__int64)&a2[-*a1] >> 2;
  v7 = (__int64)(a1[1] - *a1) >> 2;
  v8 = 0x3FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 2;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  v20 = (char *)v8;
  v12 = (char *)std::_Allocate_at_least_helper<std::allocator<unsigned long>>(v10, &v20);
  v13 = v12;
  v20 = v12;
  try
  {
    v14 = &v12[4 * v6];
    *(_DWORD *)v14 = *a3;
    v15 = (_BYTE *)a1[1];
    v16 = (_BYTE *)*a1;
    v17 = v12;
    if ( a2 == v15 )
    {
      v18 = v15 - v16;
    }
    else
    {
      memmove_0(v12, v16, a2 - v16);
      v17 = v14 + 4;
      v18 = a1[1] - (_QWORD)a2;
      v16 = a2;
    }
    memmove_0(v17, v16, v18);
    if ( *a1 )
      std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFFCuLL);
    *a1 = v13;
    a1[1] = &v13[4 * v9];
    a1[2] = &v13[4 * v8];
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v20, 4 * v8);
    throw;
  }
  return result;
}
