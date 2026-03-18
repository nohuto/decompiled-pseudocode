/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180180C38
 * Callers:
 *     ?GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x18017F5D0 (-GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180041D40 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VCMilPoint2F@@@std@@@std@@YAPEAVCMilPoint2F@@PEAV1@_KAEAV?$allocator@VCMilPoint2F@@@0@@Z @ 0x180180BFC (--$_Uninitialized_value_construct_n@V-$allocator@VCMilPoint2F@@@std@@@std@@YAPEAVCMilPoint2F@@PE.c)
 *     ??$_Emplace_back@$$V@?$_Uninitialized_backout_al@V?$allocator@VCMilPoint2F@@@std@@@std@@QEAAXXZ @ 0x180180DAC (--$_Emplace_back@$$V@-$_Uninitialized_backout_al@V-$allocator@VCMilPoint2F@@@std@@@std@@QEAAXXZ.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18024E37C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

char *__fastcall std::vector<CMilPoint2F>::_Resize<std::_Value_init_tag>(__int64 a1, unsigned __int64 a2)
{
  char *result; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  char *v10; // r14
  char *v11; // rcx
  unsigned __int64 v12; // rdx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  result = *(char **)a1;
  v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( a2 < v5 )
  {
    result += 8 * a2;
    *(_QWORD *)(a1 + 8) = result;
  }
  else if ( a2 > v5 )
  {
    v6 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)result) >> 3;
    if ( a2 <= v6 )
    {
      result = (char *)std::_Uninitialized_value_construct_n<std::allocator<CMilPoint2F>>(
                         *(_QWORD *)(a1 + 8),
                         a2 - v5,
                         a1);
      *(_QWORD *)(a1 + 8) = result;
    }
    else
    {
      v7 = 0x1FFFFFFFFFFFFFFFLL;
      if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
        std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength(v6);
      v8 = v6 >> 1;
      if ( v6 <= 0x1FFFFFFFFFFFFFFFLL - (v6 >> 1) )
      {
        v7 = v8 + v6;
        if ( v8 + v6 < a2 )
          v7 = a2;
      }
      size_of = std::_Get_size_of_n<8>(v7);
      v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v13[2] = a1;
      v13[0] = &v10[8 * v5];
      v13[1] = v13[0];
      if ( a2 != v5 )
      {
        while ( std::_Uninitialized_backout_al<std::allocator<CMilPoint2F>>::_Emplace_back<>(v13) != 1 )
          ;
      }
      memmove_0(v10, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
      v11 = *(char **)a1;
      if ( *(_QWORD *)a1 )
      {
        v12 = (*(_QWORD *)(a1 + 16) - (_QWORD)v11) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v12 >= 0x1000 )
        {
          v12 += 39LL;
          if ( (unsigned __int64)&v11[-*((_QWORD *)v11 - 1) - 8] > 0x1F )
            _invalid_parameter_noinfo_noreturn();
          v11 = (char *)*((_QWORD *)v11 - 1);
        }
        operator delete(v11, v12);
      }
      *(_QWORD *)a1 = v10;
      *(_QWORD *)(a1 + 8) = &v10[8 * a2];
      result = &v10[8 * v7];
      *(_QWORD *)(a1 + 16) = result;
    }
  }
  return result;
}
