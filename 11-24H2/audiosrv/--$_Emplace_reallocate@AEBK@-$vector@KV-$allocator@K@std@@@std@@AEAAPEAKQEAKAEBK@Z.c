/*
 * XREFs of ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z @ 0x18014F190
 * Callers:
 *     ?BeginAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18009FDFC (-BeginAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@K@std@@@std@@YAPEAKAEAV?$allocator@K@0@AEA_K@Z @ 0x18014F138 (--$_Allocate_at_least_helper@V-$allocator@K@std@@@std@@YAPEAKAEAV-$allocator@K@0@AEA_K@Z.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>(
        __int64 a1,
        _BYTE *a2,
        _DWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  char *v12; // rax
  char *v13; // rsi
  char *v14; // r14
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  char *v17; // rcx
  size_t v18; // r8
  char *result; // rax
  char *v20; // [rsp+58h] [rbp+10h] BYREF

  v6 = (__int64)&a2[-*(_QWORD *)a1] >> 2;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  v8 = 0x3FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  v20 = (char *)v8;
  v12 = (char *)std::_Allocate_at_least_helper<std::allocator<unsigned long>>(v10, (unsigned __int64 *)&v20);
  v13 = v12;
  v20 = v12;
  try
  {
    v14 = &v12[4 * v6];
    *(_DWORD *)v14 = *a3;
    v15 = *(_BYTE **)(a1 + 8);
    v16 = *(_BYTE **)a1;
    v17 = v12;
    if ( a2 == v15 )
    {
      v18 = v15 - v16;
    }
    else
    {
      memmove_0(v12, v16, (size_t)&a2[-*(_QWORD *)a1]);
      v17 = v14 + 4;
      v18 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
      v16 = a2;
    }
    memmove_0(v17, v16, v18);
    if ( *(_QWORD *)a1 )
      std::_Deallocate<16,0>(
        *(char **)a1,
        (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFFCuLL));
    *(_QWORD *)a1 = v13;
    *(_QWORD *)(a1 + 8) = &v13[4 * v9];
    *(_QWORD *)(a1 + 16) = &v13[4 * v8];
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(4 * v8));
    throw;
  }
  return result;
}
