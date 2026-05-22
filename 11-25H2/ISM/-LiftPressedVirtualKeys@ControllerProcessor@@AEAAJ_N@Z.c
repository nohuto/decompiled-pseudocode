/*
 * XREFs of ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x1801798D8
 * Callers:
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x18017AE60 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x18017B084 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x18006EEE4 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@1@V21@@Z @ 0x180177C24 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBGUActiveKeyProperties@.c)
 */

__int64 __fastcall ControllerProcessor::LiftPressedVirtualKeys(ControllerProcessor *this, char a2)
{
  __int64 v2; // rbx
  unsigned __int16 v5; // di
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 12);
LABEL_2:
  v2 = *(_QWORD *)v2;
  while ( v2 != *((_QWORD *)this + 12) )
  {
    v5 = *(_WORD *)(v2 + 16);
    if ( a2 )
    {
      if ( v5 == 196 || v5 == 27 || v5 == 208 || v5 == 7 )
        goto LABEL_2;
    }
    else if ( (unsigned __int16)(v5 - 37) > 3u )
    {
      goto LABEL_2;
    }
    v2 = *std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>>>,0>(
            (__int64)this + 88,
            &v10,
            v2);
    v6 = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, v5, 0);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x847,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v6,
        v8);
  }
  return 0LL;
}
