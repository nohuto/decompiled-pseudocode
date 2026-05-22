/*
 * XREFs of ??$_Emplace_reallocate@UInputSiteId@@@?$vector@UInputSiteId@@V?$allocator@UInputSiteId@@@std@@@std@@AEAAPEAUInputSiteId@@QEAU2@$$QEAU2@@Z @ 0x1800527EC
 * Callers:
 *     ?SetIdForNamespace@InputSite@@AEAAXW4InputSiteIdNamespace@@_K@Z @ 0x180052764 (-SetIdForNamespace@InputSite@@AEAAXW4InputSiteIdNamespace@@_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18003B92C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

char *__fastcall std::vector<InputSiteId>::_Emplace_reallocate<InputSiteId>(__int64 a1, char *a2, _OWORD *a3)
{
  unsigned __int64 v6; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  char *v14; // r14
  char *v15; // r15
  char *v16; // r8
  _BYTE *v17; // rdx
  char *v18; // rcx
  size_t v19; // r8
  char *v21; // [rsp+58h] [rbp+10h]

  v6 = (unsigned __int64)&a2[-*(_QWORD *)a1];
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v8 = 0xFFFFFFFFFFFFFFFLL;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  size_of = std::_Get_size_of_n<16>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v21 = v13;
  try
  {
    v15 = &v13[v6 & 0xFFFFFFFFFFFFFFF0uLL];
    *(_OWORD *)v15 = *a3;
    v16 = *(char **)(a1 + 8);
    v17 = *(_BYTE **)a1;
    v18 = v13;
    if ( a2 == v16 )
    {
      v19 = v16 - v17;
    }
    else
    {
      memmove_0(v13, v17, (size_t)&a2[-*(_QWORD *)a1]);
      v18 = v15 + 16;
      v19 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
      v17 = a2;
    }
    memmove_0(v18, v17, v19);
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(16 * v8));
    throw;
  }
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(
      *(char **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL));
  *(_QWORD *)a1 = v14;
  *(_QWORD *)(a1 + 8) = &v14[16 * v9];
  *(_QWORD *)(a1 + 16) = &v14[16 * v8];
  return v15;
}
