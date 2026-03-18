/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAUISpectreLightNode@@V?$allocator@PEAUISpectreLightNode@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18026FB6C
 * Callers:
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18027095C (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?Render@CSpectreCallbackRenderer@@UEAAJXZ @ 0x180291210 (-Render@CSpectreCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18006BB80 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

char *__fastcall std::vector<ISpectreLightNode *>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  char *v10; // r14
  char *result; // rax

  v2 = 0x1FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v5 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v6 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v7 = v5 >> 3;
  v8 = v6 >> 1;
  if ( v6 <= 0x1FFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<8>(v2);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  memset_0(&v10[8 * v7], 0, 8 * (a2 - v7));
  memmove_0(v10, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
  if ( *a1 )
    std::_Deallocate<16,0>(*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
  *a1 = v10;
  a1[1] = &v10[8 * a2];
  result = &v10[8 * v2];
  a1[2] = result;
  return result;
}
