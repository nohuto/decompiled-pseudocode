/*
 * XREFs of ??$_Erase@W4TestCommandMessageType@@@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBW4TestCommandMessageType@@@Z @ 0x18010AE44
 * Callers:
 *     ?UnregisterForTestCommandMessage@TestCommandHost@@CAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@Z@Z @ 0x18010B06C (-UnregisterForTestCommandMessage@TestCommandHost@@CAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTes.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180027528 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18003A9F0 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::_Erase<enum TestCommandMessageType>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  _DWORD *v3; // rdx
  _QWORD *v4; // r10
  __int64 *v5; // rcx
  _QWORD *v6; // r10
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 *v12; // [rsp+20h] [rbp-18h] BYREF

  v2 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
         a1,
         a2);
  v5 = std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>(
         v4,
         &v12,
         v3,
         v2)[1];
  if ( !v5 )
    return 0LL;
  v7 = v6[3];
  v8 = 2 * (v2 & v6[6]);
  if ( *(__int64 **)(v7 + 16 * (v2 & v6[6]) + 8) == v5 )
  {
    if ( *(__int64 **)(v7 + 16 * (v2 & v6[6])) == v5 )
    {
      v9 = v6[1];
      *(_QWORD *)(v7 + 16 * (v2 & v6[6])) = v9;
    }
    else
    {
      v9 = v5[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(__int64 **)(v7 + 16 * (v2 & v6[6])) == v5 )
  {
    *(_QWORD *)(v7 + 16 * (v2 & v6[6])) = *v5;
  }
  v10 = *v5;
  --v6[2];
  *(_QWORD *)v5[1] = v10;
  *(_QWORD *)(v10 + 8) = v5[1];
  std::_Deallocate<16,0>((char *)v5, (const struct std::nothrow_t *)0x28);
  return 1LL;
}
