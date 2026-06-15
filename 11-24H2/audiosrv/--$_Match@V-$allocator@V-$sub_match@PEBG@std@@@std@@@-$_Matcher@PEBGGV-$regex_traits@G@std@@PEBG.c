/*
 * XREFs of ??$_Match@V?$allocator@V?$sub_match@PEBG@std@@@std@@@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAA_NPEAV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@1@_N@Z @ 0x18012F0E8
 * Callers:
 *     ??$regex_match@GV?$regex_traits@G@std@@@std@@YA_NPEBGAEBV?$basic_regex@GV?$regex_traits@G@std@@@0@W4match_flag_type@regex_constants@0@@Z @ 0x18012FD5C (--$regex_match@GV-$regex_traits@G@std@@@std@@YA_NPEBGAEBV-$basic_regex@GV-$regex_traits@G@std@@@.c)
 *     ??$_Regex_search2@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@GV?$regex_traits@G@2@PEBG@std@@YA_NPEBG0PEAV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@0@AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@W4match_flag_type@regex_constants@0@0@Z @ 0x180143270 (--$_Regex_search2@PEBGV-$allocator@V-$sub_match@PEBG@std@@@std@@GV-$regex_traits@G@2@PEBG@std@@Y.c)
 * Callees:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@V?$sub_match@PEBG@std@@V?$allocator@V?$sub_match@PEBG@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18012F3E8 (--$_Resize@U_Value_init_tag@std@@@-$vector@V-$sub_match@PEBG@std@@V-$allocator@V-$sub_match@PEBG.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_Grp_t@?$_Tgt_state_t@PEBG@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@PEBG@std@@@3@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18012F548 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@U_Grp_t@-$_Tgt_state_t@PEBG@std@@V-$alloca.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@U_Loop_vals_t@std@@@std@@@std@@YAPEAU_Loop_vals_t@0@PEAU10@_KAEAV?$allocator@U_Loop_vals_t@std@@@0@@Z @ 0x18012F8A4 (--$_Uninitialized_value_construct_n@V-$allocator@U_Loop_vals_t@std@@@std@@@std@@YAPEAU_Loop_vals.c)
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x18013A304 (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 *     ?resize@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K_N@Z @ 0x18013AD28 (-resize@-$vector@_NV-$allocator@_N@std@@@std@@QEAAX_K_N@Z.c)
 */

char __fastcall std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Match<std::allocator<std::sub_match<unsigned short const *>>>(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  char result; // al
  __int64 i; // r9
  __int64 v13; // r10
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  bool v19; // zf
  __int64 v20; // r8
  __int64 v21; // rcx

  if ( a2 )
  {
    *(_BYTE *)(a2 + 8) = 1;
    std::vector<std::sub_match<unsigned short const *>>::_Resize<std::_Value_init_tag>(a2 + 16, 0LL);
  }
  v6 = *(_QWORD *)(a1 + 168);
  v7 = *(unsigned int *)(a1 + 196);
  *(_QWORD *)(a1 + 152) = v6;
  *(_QWORD *)a1 = v6;
  std::vector<bool>::resize(a1 + 8, v7);
  v8 = *(unsigned int *)(a1 + 196);
  v9 = (__int64)(*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 40)) >> 4;
  if ( v8 >= v9 )
  {
    if ( v8 > v9 )
    {
      if ( v8 <= (__int64)(*(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 40)) >> 4 )
        *(_QWORD *)(a1 + 48) = std::_Uninitialized_value_construct_n<std::allocator<std::_Loop_vals_t>>(
                                 *(_QWORD *)(a1 + 48),
                                 v8 - v9);
      else
        std::vector<std::_Tgt_state_t<unsigned short const *>::_Grp_t,std::allocator<std::_Tgt_state_t<unsigned short const *>::_Grp_t>>::_Resize_reallocate<std::_Value_init_tag>(a1 + 40);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 40) + 16 * v8;
  }
  v10 = *(_QWORD *)(a1 + 176);
  *(_BYTE *)(a1 + 216) = a3;
  *(_DWORD *)(a1 + 220) = 10000000;
  *(_BYTE *)(a1 + 193) = a2 != 0;
  *(_DWORD *)(a1 + 224) = 600;
  *(_BYTE *)(a1 + 192) = 0;
  result = std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Match_pat(
             a1,
             v10);
  if ( result )
  {
    if ( a2 )
    {
      std::vector<std::sub_match<unsigned short const *>>::_Resize<std::_Value_init_tag>(
        a2 + 16,
        *(unsigned int *)(a1 + 196));
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 196); *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8 * v13 + 8) = v16 )
      {
        v13 = 3 * i;
        v14 = *(_QWORD *)(a2 + 16);
        v15 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * ((unsigned __int64)(unsigned int)i >> 5));
        if ( _bittest(&v15, i & 0x1F) )
        {
          *(_BYTE *)(v14 + 24 * i + 16) = 1;
          *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24 * i) = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 16LL * (unsigned int)i);
          v16 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 16LL * (unsigned int)i + 8);
        }
        else
        {
          *(_BYTE *)(v14 + 24 * i + 16) = 0;
          *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24 * i) = *(_QWORD *)(a1 + 160);
          v16 = *(_QWORD *)(a1 + 160);
        }
        i = (unsigned int)(i + 1);
      }
      *(_QWORD *)a2 = *(_QWORD *)(a1 + 152);
      v17 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a2 + 40) = v17;
      v18 = *(_QWORD **)(a2 + 16);
      v19 = v17 == *v18;
      *(_QWORD *)(a2 + 48) = *v18;
      *(_BYTE *)(a2 + 56) = !v19;
      v20 = v18[1];
      *(_QWORD *)(a2 + 64) = v20;
      v21 = *(_QWORD *)(a1 + 160);
      *(_QWORD *)(a2 + 72) = v21;
      *(_BYTE *)(a2 + 80) = v20 != v21;
      *(_QWORD *)(a2 + 88) = *(_QWORD *)(a1 + 160);
      *(_QWORD *)(a2 + 96) = *(_QWORD *)(a1 + 160);
    }
    return 1;
  }
  return result;
}
