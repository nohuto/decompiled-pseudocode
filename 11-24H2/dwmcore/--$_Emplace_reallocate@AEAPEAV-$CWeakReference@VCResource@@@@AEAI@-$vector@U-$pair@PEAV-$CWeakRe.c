/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@?$vector@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@V?$allocator@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@@2@@std@@AEAAPEAU?$pair@PEAV?$CWeakReference@VCResource@@@@I@1@QEAU21@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@Z @ 0x18020A7D4
 * Callers:
 *     ?RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1800E0EE4 (-RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV-$CWeakReference@VCResource@@@@I@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180041D70 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

char *__fastcall std::vector<std::pair<CWeakReference<CResource> *,unsigned int>>::_Emplace_reallocate<CWeakReference<CResource> * &,unsigned int &>(
        __int64 a1,
        char *a2,
        _QWORD *a3,
        _DWORD *a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r14
  __int64 v7; // rsi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  SIZE_T size_of; // rax
  char *v15; // rax
  char *v16; // r14
  char *v17; // rbp
  void *v18; // rcx
  char *v19; // r8
  _BYTE *v20; // rdx
  size_t v21; // r8
  char *result; // rax

  v4 = 0xFFFFFFFFFFFFFFFLL;
  v5 = (unsigned __int64)&a2[-*(_QWORD *)a1];
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v11 = v7 + 1;
  v12 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  v13 = v12 >> 1;
  if ( v12 <= 0xFFFFFFFFFFFFFFFLL - (v12 >> 1) )
  {
    v4 = v13 + v12;
    if ( v13 + v12 < v11 )
      v4 = v11;
  }
  size_of = std::_Get_size_of_n<16>(v4);
  v15 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v16 = &v15[v5 & 0xFFFFFFFFFFFFFFF0uLL];
  v17 = v15;
  *(_QWORD *)v16 = *a3;
  *((_DWORD *)v16 + 2) = *a4;
  v18 = v15;
  v19 = *(char **)(a1 + 8);
  v20 = *(_BYTE **)a1;
  if ( a2 == v19 )
  {
    v21 = v19 - v20;
  }
  else
  {
    memmove_0(v15, v20, (size_t)&a2[-*(_QWORD *)a1]);
    v18 = v16 + 16;
    v21 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v20 = a2;
  }
  memmove_0(v18, v20, v21);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(_QWORD **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  result = v16;
  *(_QWORD *)a1 = v17;
  *(_QWORD *)(a1 + 8) = &v17[16 * v11];
  *(_QWORD *)(a1 + 16) = &v17[16 * v4];
  return result;
}
