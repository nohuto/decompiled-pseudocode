/*
 * XREFs of ??0?$map@GW4WaveformFlags@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGW4WaveformFlags@@@std@@@3@@std@@QEAA@V?$initializer_list@U?$pair@$$CBGW4WaveformFlags@@@std@@@1@@Z @ 0x180199A6C
 * Callers:
 *     _dynamic_initializer_for__s_knownWaveforms__ @ 0x18000A5E0 (_dynamic_initializer_for__s_knownWaveforms__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18006E668 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Emplace_hint@AEBU?$pair@$$CBGW4WaveformFlags@@@std@@@?$_Tree@V?$_Tmap_traits@GW4WaveformFlags@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGW4WaveformFlags@@@std@@@3@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBGW4WaveformFlags@@@1@@Z @ 0x180199420 (--$_Emplace_hint@AEBU-$pair@$$CBGW4WaveformFlags@@@std@@@-$_Tree@V-$_Tmap_traits@GW4WaveformFlag.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::map<unsigned short,enum WaveformFlags>::map<unsigned short,enum WaveformFlags>(
        __int64 a1,
        __m128i *a2)
{
  size_t size_of; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  __m128i v6; // xmm0
  _QWORD *v7; // rbx
  unsigned __int64 v8; // xmm0_8

  qword_180250F88 = 0LL;
  qword_180250F90 = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  qword_180250F88 = (__int64)v5;
  v6 = *a2;
  v7 = (_QWORD *)a2->m128i_i64[0];
  v8 = _mm_srli_si128(v6, 8).m128i_u64[0];
  while ( v7 != (_QWORD *)v8 )
    std::_Tree<std::_Tmap_traits<unsigned short,enum WaveformFlags,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,enum WaveformFlags>>,0>>::_Emplace_hint<std::pair<unsigned short const,enum WaveformFlags> const &>(
      v4,
      (__int64)v5,
      v7++);
  return &qword_180250F88;
}
