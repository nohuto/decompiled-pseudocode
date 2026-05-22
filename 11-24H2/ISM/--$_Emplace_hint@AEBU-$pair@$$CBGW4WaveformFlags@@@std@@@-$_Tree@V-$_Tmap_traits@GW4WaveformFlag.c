/*
 * XREFs of ??$_Emplace_hint@AEBU?$pair@$$CBGW4WaveformFlags@@@std@@@?$_Tree@V?$_Tmap_traits@GW4WaveformFlags@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGW4WaveformFlags@@@std@@@3@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBGW4WaveformFlags@@@1@@Z @ 0x180199420
 * Callers:
 *     ??0?$map@GW4WaveformFlags@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGW4WaveformFlags@@@std@@@3@@std@@QEAA@V?$initializer_list@U?$pair@$$CBGW4WaveformFlags@@@std@@@1@@Z @ 0x180199A6C (--0-$map@GW4WaveformFlags@@U-$less@G@std@@V-$allocator@U-$pair@$$CBGW4WaveformFlags@@@std@@@3@@s.c)
 * Callees:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180067FC8 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KUGestureAnimationData@Input.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800B1794 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CAFA0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$cha_ea_1800CAFA0.c)
 *     ??$?0AEBU?$pair@$$CBGW4WaveformFlags@@@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@1@AEBU?$pair@$$CBGW4WaveformFlags@@@1@@Z @ 0x180198F7C (--$-0AEBU-$pair@$$CBGW4WaveformFlags@@@std@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pai.c)
 *     ??$_Find_hint@G@?$_Tree@V?$_Tmap_traits@GW4WaveformFlags@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGW4WaveformFlags@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@1@AEBG@Z @ 0x1801994D0 (--$_Find_hint@G@-$_Tree@V-$_Tmap_traits@GW4WaveformFlags@@U-$less@G@std@@V-$allocator@U-$pair@$$.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned short,enum WaveformFlags,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,enum WaveformFlags>>,0>>::_Emplace_hint<std::pair<unsigned short const,enum WaveformFlags> const &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rax
  __int128 v5; // xmm6
  _QWORD *v7; // rax
  __int64 v8; // rbx
  _QWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-28h]

  v4 = std::_Tree<std::_Tmap_traits<unsigned short,enum WaveformFlags,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,enum WaveformFlags>>,0>>::_Find_hint<unsigned short>(
         a1,
         &v10,
         a2,
         a3);
  v5 = *(_OWORD *)v4;
  v11 = *(_QWORD *)(v4 + 16);
  if ( (_BYTE)v11 )
    return v5;
  if ( qword_180250F90 == 0x666666666666666LL )
    std::_Throw_tree_length_error();
  v7 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned short const,enum WaveformFlags>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned short const,enum WaveformFlags>,void *>>>(
         v9,
         (__int64)&qword_180250F88,
         qword_180250F88,
         a3);
  v8 = v7[1];
  v7[1] = 0LL;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>,void *>>>((__int64)v9);
  v10 = v5;
  return std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>::_Insert_node(
           &qword_180250F88,
           (__int64)&v10,
           v8);
}
