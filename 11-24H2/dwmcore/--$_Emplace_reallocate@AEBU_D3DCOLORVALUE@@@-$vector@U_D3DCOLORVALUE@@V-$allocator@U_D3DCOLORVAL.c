/*
 * XREFs of ??$_Emplace_reallocate@AEBU_D3DCOLORVALUE@@@?$vector@U_D3DCOLORVALUE@@V?$allocator@U_D3DCOLORVALUE@@@std@@@std@@AEAAPEAU_D3DCOLORVALUE@@QEAU2@AEBU2@@Z @ 0x1801DE078
 * Callers:
 *     ?AddColorWithPosition@CGradientColorData@@QEAAXPEBU_D3DCOLORVALUE@@M@Z @ 0x1801DD874 (-AddColorWithPosition@CGradientColorData@@QEAAXPEBU_D3DCOLORVALUE@@M@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180041D70 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@U_D3DCOLORVALUE@@V?$allocator@U_D3DCOLORVALUE@@@std@@@std@@AEBA_K_K@Z @ 0x1801DE19C (-_Calculate_growth@-$vector@U_D3DCOLORVALUE@@V-$allocator@U_D3DCOLORVALUE@@@std@@@std@@AEBA_K_K@.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

char *__fastcall std::vector<_D3DCOLORVALUE>::_Emplace_reallocate<_D3DCOLORVALUE const &>(
        __int64 a1,
        _BYTE *a2,
        _OWORD *a3)
{
  _BYTE *v3; // r15
  __int64 v6; // rdi
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  SIZE_T size_of; // rax
  char *v11; // rax
  char *v12; // rbp
  char *v13; // r15
  void *v14; // rcx
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  size_t v17; // r8
  char *result; // rax

  v3 = *(_BYTE **)a1;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = std::vector<_D3DCOLORVALUE>::_Calculate_growth(a1, v8);
  size_of = std::_Get_size_of_n<16>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v13 = &v11[(a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL];
  v14 = v11;
  *(_OWORD *)v13 = *a3;
  v15 = *(_BYTE **)(a1 + 8);
  v16 = *(_BYTE **)a1;
  if ( a2 == v15 )
  {
    v17 = v15 - v16;
  }
  else
  {
    memmove_0(v11, v16, (size_t)&a2[-*(_QWORD *)a1]);
    v14 = v13 + 16;
    v17 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v16 = a2;
  }
  memmove_0(v14, v16, v17);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(_QWORD **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = v12;
  result = v13;
  *(_QWORD *)(a1 + 8) = &v12[16 * v8];
  *(_QWORD *)(a1 + 16) = &v12[16 * v9];
  return result;
}
