/*
 * XREFs of ?OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x18003E2B4
 * Callers:
 *     ?OnItemMessage@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIIPEBX0I@Z @ 0x18007AC60 (-OnItemMessage@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIIPEBX0I@Z.c)
 * Callees:
 *     ??$emplace@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@_N@1@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@Z @ 0x18003E4A4 (--$emplace@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@-$_Hash@V-$_Umap_traits@UtagMsgRouti.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@1@AEBUtagMsgRoutingInfo@@@Z @ 0x18003F2D4 (--$find@X@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V-$_Uhash_compare@Ut.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@1@V21@@Z @ 0x180091F28 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUtagMsgRoutingInfo@@Ut.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::OnAppThreadMessage(
        NonBamoInputDeliveryServer *this,
        const struct InputDeliveryServerMessage *a2,
        __int64 a3,
        const char *a4)
{
  __int64 *v6; // rcx
  __int128 v7; // xmm1
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // xmm0_8
  __int64 (__fastcall *v12)(__int64 *, __int128 *, __int64, __int64); // rax
  int v13; // eax
  __int64 v15; // rdx
  const char *v16; // r9
  __int64 *v17; // rcx
  __int128 v18; // xmm1
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // xmm0_8
  __int64 (__fastcall *v23)(__int64 *, __int128 *, __int64, __int64); // rax
  __int64 *v24; // rcx
  __int128 v25; // xmm1
  __int64 v26; // xmm0_8
  __int64 v27; // rax
  int v28; // eax
  const char *v29; // r9
  int v30; // [rsp+20h] [rbp-50h]
  _BYTE v31[16]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v32; // [rsp+40h] [rbp-30h] BYREF
  __int128 v33; // [rsp+50h] [rbp-20h]
  __int64 v34; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  __int64 v36; // [rsp+88h] [rbp+18h] BYREF

  switch ( *(_DWORD *)a2 )
  {
    case 0:
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::emplace<tagMsgRoutingInfo const &,tagInputRoutingInfo const &>(
        (char *)this + 216,
        v31,
        (char *)a2 + 16,
        (char *)a2 + 8);
      v6 = (__int64 *)*((_QWORD *)this + 4);
      v7 = *((_OWORD *)a2 + 2);
      v8 = *((unsigned int *)a2 + 15);
      v9 = *((unsigned int *)a2 + 14);
      v10 = *v6;
      v32 = *((_OWORD *)a2 + 1);
      v11 = *((_QWORD *)a2 + 6);
      v33 = v7;
      v12 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int64))(v10 + 24);
      v34 = v11;
      v13 = v12(v6, &v32, v9, v8);
      if ( v13 >= 0 )
        return 0LL;
      v15 = 308LL;
LABEL_5:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v15,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        (const char *)(unsigned int)v13,
        v30);
      return 0LL;
    case 1:
      v24 = (__int64 *)*((_QWORD *)this + 4);
      v25 = *((_OWORD *)a2 + 2);
      v32 = *((_OWORD *)a2 + 1);
      v26 = *((_QWORD *)a2 + 6);
      v27 = *v24;
      v33 = v25;
      v34 = v26;
      v28 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v27 + 40))(v24, &v32);
      if ( v28 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x13C,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          (const char *)(unsigned int)v28,
          v30);
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::find<void>(
        (char *)this + 216,
        &v36,
        (char *)a2 + 16);
      if ( v36 == *((_QWORD *)this + 28) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x13F,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          v29);
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>,0>(
        (char *)this + 216,
        &v36);
      break;
    case 2:
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::find<void>(
        (char *)this + 216,
        &v36,
        (char *)a2 + 16);
      if ( v36 == *((_QWORD *)this + 28) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x148,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          v16);
      v17 = (__int64 *)*((_QWORD *)this + 4);
      v18 = *((_OWORD *)a2 + 2);
      v19 = *((unsigned int *)a2 + 15);
      v20 = *((unsigned int *)a2 + 14);
      v21 = *v17;
      v32 = *((_OWORD *)a2 + 1);
      v22 = *((_QWORD *)a2 + 6);
      v33 = v18;
      v23 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int64))(v21 + 32);
      v34 = v22;
      v13 = v23(v17, &v32, v20, v19);
      if ( v13 < 0 )
      {
        v15 = 333LL;
        goto LABEL_5;
      }
      break;
    default:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x154,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        a4);
  }
  return 0LL;
}
