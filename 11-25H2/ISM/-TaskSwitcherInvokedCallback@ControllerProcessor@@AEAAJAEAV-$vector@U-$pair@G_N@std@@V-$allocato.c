/*
 * XREFs of ?TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x18017AA28
 * Callers:
 *     ?TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x18017AB70 (-TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$.c)
 * Callees:
 *     ??$?RG@?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@QEBA_KAEBG@Z @ 0x180055A18 (--$-RG@-$_Uhash_compare@GU-$hash@G@std@@U-$equal_to@G@2@@std@@QEBA_KAEBG@Z.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180056840 (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@_K@Z @ 0x180057610 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_comp.c)
 *     ??$_Find_last@G@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@std@@@1@AEBG_K@Z @ 0x18005A9B4 (--$_Find_last@G@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_com.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x18006EEE4 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@QEAU32@@Z @ 0x180099F4C (-_Unchecked_erase@-$list@U-$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V-$allocat.c)
 */

__int64 __fastcall ControllerProcessor::TaskSwitcherInvokedCallback(ControllerProcessor *this, __int64 *a2, char a3)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  _QWORD *v7; // rdx
  char *v8; // rdx
  int updated; // esi
  __int64 v10; // rdx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int16 v14; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 973) )
  {
    v5 = *a2;
    if ( !a3 )
      goto LABEL_10;
    v14 = 208;
    v6 = std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>::operator()<unsigned short>(
           (__int64)this,
           (__int64)&v14);
    v7 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Find_last<unsigned short>(
                     (_QWORD *)this + 11,
                     v12,
                     &v14,
                     v6)[1];
    if ( !v7 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x189,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)0x80004005LL);
      return 2147500037LL;
    }
    std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Erase_bucket(
      (__int64)this + 88,
      v7,
      v6 & *((_QWORD *)this + 17));
    std::list<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>::_Unchecked_erase(
      (__int64)this + 96,
      v8);
    updated = ControllerProcessor::UpdateAutoRepeatTimer(this);
    if ( updated < 0 )
    {
      v10 = 395LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    updated = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, 0xD0u, 0);
    if ( updated < 0 )
    {
      v10 = 396LL;
      goto LABEL_6;
    }
LABEL_10:
    while ( v5 != a2[1] )
    {
      updated = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, *(_WORD *)v5, *(_BYTE *)(v5 + 2));
      if ( updated < 0 )
      {
        v10 = 407LL;
        goto LABEL_6;
      }
      v5 += 4LL;
    }
  }
  return 0LL;
}
