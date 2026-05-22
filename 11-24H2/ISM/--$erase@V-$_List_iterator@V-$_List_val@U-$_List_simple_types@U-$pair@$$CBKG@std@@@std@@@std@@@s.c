/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@KGV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKG@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@1@V21@@Z @ 0x1801C5E48
 * Callers:
 *     ?OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x1801C6100 (-OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180027528 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned long,unsigned short,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned short>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned short>>>>,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 *v6; // r10
  __int64 v7; // r8
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // rbx

  v5 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
         (__int64)a1,
         a3 + 16);
  v7 = a1[3];
  v8 = 2 * (a1[6] & v5);
  if ( *(__int64 **)(v7 + 16 * (a1[6] & v5) + 8) == v6 )
  {
    if ( *(__int64 **)(v7 + 16 * (a1[6] & v5)) == v6 )
    {
      v9 = a1[1];
      *(_QWORD *)(v7 + 8 * v8) = v9;
    }
    else
    {
      v9 = v6[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(__int64 **)(v7 + 16 * (a1[6] & v5)) == v6 )
  {
    *(_QWORD *)(v7 + 16 * (a1[6] & v5)) = *v6;
  }
  v10 = *v6;
  --a1[2];
  *(_QWORD *)v6[1] = v10;
  *(_QWORD *)(v10 + 8) = v6[1];
  std::_Deallocate<16,0>((char *)v6, (const struct std::nothrow_t *)0x18);
  *a2 = v10;
  return a2;
}
