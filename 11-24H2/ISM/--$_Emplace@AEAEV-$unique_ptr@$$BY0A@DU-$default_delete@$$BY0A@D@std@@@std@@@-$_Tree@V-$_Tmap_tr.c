/*
 * XREFs of ??$_Emplace@AEAEV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@?$_Tree@V?$_Tmap_traits@GV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@U?$less@G@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@_N@1@AEAE$$QEAV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@1@@Z @ 0x180199300
 * Callers:
 *     ?GetFeatureReport@CompliantHapticInterface@@AEAAJEPEAPEAD@Z @ 0x180199BE4 (-GetFeatureReport@CompliantHapticInterface@@AEAAJEPEAPEAD@Z.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CAFA0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$cha_ea_1800CAFA0.c)
 *     ??$_Find_lower_bound@G@?$_Tree@V?$_Tmap_traits@GV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@U?$less@G@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@@1@AEBG@Z @ 0x18019970C (--$_Find_lower_bound@G@-$_Tree@V-$_Tmap_traits@GV-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D.c)
 *     ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@@1@@Z @ 0x180199A34 (--0-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@$$CBGUHapticsWaveform@@@std@@PEAX@.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180199B48 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBGV-$unique_ptr@$$BY0A@DU-$default_de.c)
 *     ?_Check_grow_by_1@?$_Tree@V?$_Tmap_traits@GUHapticsWaveform@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGUHapticsWaveform@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x18019AEFC (-_Check_grow_by_1@-$_Tree@V-$_Tmap_traits@GUHapticsWaveform@@U-$less@G@std@@V-$allocator@U-$pair.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned short,std::unique_ptr<char [0]>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::unique_ptr<char [0]>>>,0>>::_Emplace<unsigned char &,std::unique_ptr<char [0]>>(
        __int64 *a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 *a4)
{
  __int64 v8; // rsi
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 lower; // rax
  _WORD *v12; // r8
  __int128 v13; // xmm6
  __int64 v14; // rbx
  char v16[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+28h] [rbp-38h]
  __int128 v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h]

  v8 = *a1;
  std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<unsigned short const,HapticsWaveform>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<unsigned short const,HapticsWaveform>,void *>>>(
    v16,
    a1);
  v9 = v17;
  *(_WORD *)(v17 + 32) = *a3;
  v10 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(v9 + 40) = v10;
  *(_QWORD *)v17 = v8;
  *(_QWORD *)(v17 + 8) = v8;
  *(_QWORD *)(v17 + 16) = v8;
  *(_BYTE *)(v17 + 24) = 0;
  *(_BYTE *)(v17 + 25) = 0;
  lower = std::_Tree<std::_Tmap_traits<unsigned short,std::unique_ptr<char [0]>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::unique_ptr<char [0]>>>,0>>::_Find_lower_bound<unsigned short>(
            a1,
            &v18,
            v17 + 32);
  v13 = *(_OWORD *)lower;
  v19 = *(_QWORD *)(lower + 16);
  if ( *(_BYTE *)(v19 + 25) || *v12 < *(_WORD *)(v19 + 32) )
  {
    std::_Tree<std::_Tmap_traits<unsigned short,HapticsWaveform,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,HapticsWaveform>>,0>>::_Check_grow_by_1(a1);
    v14 = v17;
    v17 = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned short const,std::unique_ptr<char [0]>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned short const,std::unique_ptr<char [0]>>,void *>>>(v16);
    v18 = v13;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>::_Insert_node(
                      a1,
                      (__int64)&v18,
                      v14);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v19;
    *(_BYTE *)(a2 + 8) = 0;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned short const,std::unique_ptr<char [0]>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned short const,std::unique_ptr<char [0]>>,void *>>>(v16);
  }
  return a2;
}
