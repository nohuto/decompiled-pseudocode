/*
 * XREFs of ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@1@@Z @ 0x180084848
 * Callers:
 *     _dynamic_initializer_for__AECLoopbackSelectionModeStringValues__ @ 0x180089D70 (_dynamic_initializer_for__AECLoopbackSelectionModeStringValues__.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_hint@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@1@@Z @ 0x1800EE0CC (--$_Emplace_hint@AEBU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@W4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::map<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE>::map<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE>(
        __int64 a1,
        __m128i *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  __m128i v5; // xmm0
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi

  qword_1801CF568 = 0LL;
  qword_1801CF570 = 0LL;
  v4 = operator new(0x48uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  qword_1801CF568 = (__int64)v4;
  v5 = *a2;
  v6 = a2->m128i_i64[0];
  v7 = _mm_srli_si128(v5, 8).m128i_u64[0];
  while ( v6 != v7 )
  {
    std::_Tree<std::_Tmap_traits<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>>,0>>::_Emplace_hint<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE> const &>(
      v3,
      v4,
      v6);
    v6 += 40LL;
  }
  return &qword_1801CF568;
}
