/*
 * XREFs of ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180154BDC
 * Callers:
 *     ?OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180154B40 (-OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800252DC (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x180025454 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800274C8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x18005B26C (--$count@X@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$a.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18005CCEC (--$_Erase@K@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetKeyModifiers@PointerManipulationHelper@@SA?AW4VirtualKeyModifiers@System@Windows@@PEAUInputInfo@@@Z @ 0x18009AA88 (-GetKeyModifiers@PointerManipulationHelper@@SA-AW4VirtualKeyModifiers@System@Windows@@PEAUInputI.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?RelativePointToScreen@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800E299C (-RelativePointToScreen@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ??$_Emplace_reallocate@AEBUDragInfoStruct@@@?$vector@UDragInfoStruct@@V?$allocator@UDragInfoStruct@@@std@@@std@@AEAAPEAUDragInfoStruct@@QEAU2@AEBU2@@Z @ 0x180149080 (--$_Emplace_reallocate@AEBUDragInfoStruct@@@-$vector@UDragInfoStruct@@V-$allocator@UDragInfoStru.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x1801493B0 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KPEAVControllerProcessor@@V-$_Uhash_compare@KU-$hash@K@std@@.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18014945C (--$_Erase@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_c.c)
 *     ??$_Insert_or_assign@AEBIAEA_K@?$unordered_map@I_KU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBI_K@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_K@std@@@std@@@std@@@std@@_N@1@AEBIAEA_K@Z @ 0x180149620 (--$_Insert_or_assign@AEBIAEA_K@-$unordered_map@I_KU-$hash@I@std@@U-$equal_to@I@2@V-$allocator@U-.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBK_K@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180149740 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUtagPOINTF@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUtagPOINTF@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180149A00 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUtagPOINTF@@V-$_Uhash_compare@KU-$hash@K@std@@U.c)
 *     ??$copy@PEBUtagPOINT@@V?$back_insert_iterator@V?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@@std@@@std@@YA?AV?$back_insert_iterator@V?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@@0@PEBUtagPOINT@@0V10@@Z @ 0x180149D00 (--$copy@PEBUtagPOINT@@V-$back_insert_iterator@V-$vector@UtagPOINT@@V-$allocator@UtagPOINT@@@std@.c)
 *     ??$emplace@AEAIAEA_K@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_K@std@@@std@@@std@@@std@@_N@1@AEAIAEA_K@Z @ 0x180149D74 (--$emplace@AEAIAEA_K@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18015290C (--$_Erase@K@-$_Hash@V-$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V-$_Uhash_compare@KU-$h.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x180152A54 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@s.c)
 *     ??$emplace@AEAKUPointerCache@EdgyProcessor@@@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUPointerCache@EdgyProcessor@@@Z @ 0x180152F08 (--$emplace@AEAKUPointerCache@EdgyProcessor@@@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcesso.c)
 *     ?AddDecisionException@EdgyProcessor@@AEAAXKW4ContextualProcessorDecision@@PEAUContextualProcessorResponse@@@Z @ 0x1801537C0 (-AddDecisionException@EdgyProcessor@@AEAAXKW4ContextualProcessorDecision@@PEAUContextualProcesso.c)
 *     ?CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180153854 (-CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180153B50 (-DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z.c)
 *     ?DragInProgress@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180153C84 (-DragInProgress@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z.c)
 *     ?DragStarted@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1I1@Z @ 0x180153DB8 (-DragStarted@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1I1@Z.c)
 *     ?DropTargetChanged@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@_K1@Z @ 0x180153F0C (-DropTargetChanged@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@_K.c)
 *     ?FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x1801541D8 (-FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?GetVelocityForPointerId@EdgyProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x180154450 (-GetVelocityForPointerId@EdgyProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z @ 0x1801548E8 (-HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z.c)
 *     ?OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z @ 0x180155E6C (-OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetInputType@PointerManipulationHelper@@SA?AW4InputType@Input@Internal@UI@Windows@@W42@@Z @ 0x1801A0970 (-GetInputType@PointerManipulationHelper@@SA-AW4InputType@Input@Internal@UI@Windows@@W42@@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1801A09AC (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     ?GetTransformFromRootToSite@PointerManipulationHelper@@SA?AUtagINPUT_TRANSFORM@@PEAVInputSite@@@Z @ 0x1801A0A54 (-GetTransformFromRootToSite@PointerManipulationHelper@@SA-AUtagINPUT_TRANSFORM@@PEAVInputSite@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall EdgyProcessor::OnInputDrag(
        EdgyProcessor *this,
        struct InputInfo *a2,
        struct tagPOINTER_INFO *a3,
        struct ContextualProcessorResponse *a4)
{
  struct ContextualProcessorResponse *v4; // r15
  struct tagPOINTER_INFO *v5; // r13
  struct tagPOINT v8; // rdi
  unsigned int KeyModifiers; // r14d
  _QWORD *v10; // rcx
  __int64 v11; // r8
  struct tagPOINT v12; // rdx
  const char *v13; // r9
  struct tagPOINT v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // xmm6_4
  int v18; // xmm7_4
  __int64 v19; // rcx
  EdgyRecognizer *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // rcx
  struct Microsoft::Bamo::BaseBamoConnection *v25; // rdx
  __int64 v26; // r14
  __int64 v27; // r13
  unsigned int v28; // r12d
  __int128 *TransformFromRootToSite; // rax
  float *v30; // rax
  struct tagPOINT v31; // rax
  float v32; // xmm1_4
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // r14
  unsigned int v36; // r14d
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // [rsp+50h] [rbp-B8h]
  unsigned int v40; // [rsp+78h] [rbp-90h] BYREF
  char v41; // [rsp+7Ch] [rbp-8Ch]
  unsigned int InputType; // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v43; // [rsp+88h] [rbp-80h] BYREF
  struct tagPOINT PositionRelativeToSite; // [rsp+90h] [rbp-78h] BYREF
  struct tagPOINT v45; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v46; // [rsp+A0h] [rbp-68h] BYREF
  struct tagPOINT v47; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v48; // [rsp+B0h] [rbp-58h]
  unsigned int v49; // [rsp+B4h] [rbp-54h]
  __int64 v50; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v51; // [rsp+C0h] [rbp-48h] BYREF
  struct ContextualProcessorResponse *v52; // [rsp+C8h] [rbp-40h]
  struct tagPOINT v53; // [rsp+D0h] [rbp-38h]
  unsigned int v54[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v55; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v56; // [rsp+F0h] [rbp-18h]
  __int128 v57; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v58; // [rsp+108h] [rbp+0h]
  struct tagPOINT v59; // [rsp+110h] [rbp+8h]
  __int128 v60; // [rsp+118h] [rbp+10h] BYREF
  struct tagPOINTER_INFO *v61; // [rsp+128h] [rbp+20h]
  _BYTE v62[24]; // [rsp+130h] [rbp+28h] BYREF
  __int128 v63[4]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v64[64]; // [rsp+188h] [rbp+80h] BYREF
  __int128 v65; // [rsp+1C8h] [rbp+C0h] BYREF
  float v66[2]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v67; // [rsp+1E0h] [rbp+D8h]
  struct tagPOINTF v68; // [rsp+1E8h] [rbp+E0h]
  __int128 v69; // [rsp+1F0h] [rbp+E8h] BYREF
  __int128 v70; // [rsp+200h] [rbp+F8h]
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+178h]

  v4 = a4;
  v52 = a4;
  v5 = a3;
  v61 = a3;
  v40 = *((_DWORD *)a3 + 1);
  v8 = (struct tagPOINT)*((_QWORD *)a3 + 6);
  v59 = v8;
  KeyModifiers = PointerManipulationHelper::GetKeyModifiers((__int64)a2);
  v49 = KeyModifiers;
  v48 = *(_DWORD *)a2;
  InputType = PointerManipulationHelper::GetInputType(v48);
  v10 = (_QWORD *)((char *)this + 24);
  if ( (*(_BYTE *)(v11 + 12) & 4) != 0 )
  {
    std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
      (__int64)v10,
      (__int64)&v43,
      &v40);
    v12 = (struct tagPOINT)v43;
    if ( v43 == *((_QWORD **)this + 4) )
    {
      *(struct tagPOINT *)&v65 = v8;
      *((_QWORD *)&v65 + 1) = __PAIR64__(KeyModifiers, v48);
      std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::emplace<unsigned long &,EdgyProcessor::PointerCache>(
        (float *)this + 6,
        (__int64)&v60,
        &v40,
        &v65);
    }
    else
    {
      *(struct tagPOINT *)((char *)v43 + 20) = v8;
      *(_DWORD *)(*(_QWORD *)&v12 + 32LL) = KeyModifiers;
    }
  }
  else
  {
    std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::_Erase<unsigned long>(
      v10,
      (__int64)&v40);
  }
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (__int64)this + 352,
    (__int64)&v43,
    &v40);
  v14 = (struct tagPOINT)v43;
  if ( v43 != *((_QWORD **)this + 45) )
  {
    if ( v43[3] )
    {
      v15 = v43[4];
      if ( v15 )
      {
        if ( !v43[6] )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xC1,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyprocessor.cpp",
            v13);
        if ( !v43[5] )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xC2,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyprocessor.cpp",
            v13);
        v45 = v8;
        v51 = 0LL;
        v50 = 0LL;
        v65 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v15 + 8) + 80LL))(v15 + 8);
        if ( (int)EdgyProcessor::HitTestForTarget((__int64)this, v8, v48, &v65, &v45, &v51, &v50) >= 0
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&v14 + 48LL) + 480LL)
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&v14 + 40LL) + 480LL) )
        {
          v16 = *(_QWORD *)(*(_QWORD *)&v14 + 56LL);
          v17 = *(_DWORD *)(*(_QWORD *)v16 + 4LL);
          v18 = *(_DWORD *)(*(_QWORD *)v16 + 8LL);
          v19 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,tagPOINTF,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINTF>>,0>>::_Try_emplace<unsigned long const &,>(
                             (float *)this + 22,
                             (__int64)&v60,
                             &v40);
          *(_DWORD *)(v19 + 20) = v17;
          *(_DWORD *)(v19 + 24) = v18;
          v43 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 24LL) + 8LL)
                                                             + 32LL))(*(_QWORD *)(*(_QWORD *)&v14 + 24LL) + 8LL);
          v67 = 0LL;
          v66[0] = (float)v8.x;
          v66[1] = (float)v59.y;
          v68 = **(struct tagPOINTF **)&EdgyProcessor::GetVelocityForPointerId(this, v54, v40);
          PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(
                                     *(struct InputSite **)(*(_QWORD *)&v14 + 48LL),
                                     v8);
          v47 = PointerManipulationHelper::GetPositionRelativeToSite(*(struct InputSite **)(*(_QWORD *)&v14 + 40LL), v8);
          v20 = *(EdgyRecognizer **)(*(_QWORD *)&v14 + 56LL);
          if ( (unsigned int)(*((_DWORD *)v20 + 2) - 2) <= 1 )
          {
            if ( (*((_BYTE *)v5 + 12) & 4) != 0 )
            {
              EdgyRecognizer::OnPointerInfoFrame(v20, a2, v5);
              EdgyProcessor::AddDecisionException(v21, v40, 1u, (__int64)v4);
            }
            else
            {
              *((_DWORD *)v20 + 2) = 1;
            }
          }
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 56LL) + 8LL) == 1 )
            EdgyProcessor::AddDecisionException((__int64)v20, v40, 0, (__int64)v4);
          v22 = v50;
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 56LL) + 8LL) == 4
            && !std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
                  (_QWORD *)v4 + 19,
                  &v40) )
          {
            v51 = 0LL;
            InputETW::Edgy::DragStarted(
              v40,
              (int *)&PositionRelativeToSite,
              (int *)&v45,
              (int *)&v47,
              0LL,
              KeyModifiers,
              v22,
              InputType,
              (__int64)v43);
            (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, float *, _QWORD, unsigned int, __int64, unsigned int, _QWORD *, _QWORD, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL) + 24LL))(
              *(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL,
              v40,
              &PositionRelativeToSite,
              &v45,
              &v47,
              v66,
              0LL,
              KeyModifiers,
              v22,
              InputType,
              v43,
              0LL,
              1);
            std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::emplace<unsigned int &,unsigned __int64 &>(
              (_QWORD *)this + 27,
              (__int64)&v60,
              &v40,
              &v51);
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 56LL) + 8LL) = 5;
          }
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 56LL) + 8LL) == 5 )
          {
            v57 = 0LL;
            v58 = 0LL;
            v55 = 0LL;
            v23 = 0LL;
            v56 = 0LL;
            v41 = 0;
            v43 = 0LL;
            InputType = 0;
            v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 24LL) + 32LL) + 24LL) + 32LL);
            if ( *(int *)(v24 + 8) <= 0 )
              v25 = 0LL;
            else
              v25 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v24 + 16);
            Microsoft::Bamo::Lock::Lock((Microsoft::BamoImpl::BamoImplObject **)&v65, v25);
            (*(void (__fastcall **)(__int64, _QWORD **, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 24LL)
                                                                                   + 8LL)
                                                                       + 48LL))(
              *(_QWORD *)(*(_QWORD *)&v14 + 24LL) + 8LL,
              &v43,
              &InputType);
            std::copy<tagPOINT const *,std::back_insert_iterator<std::vector<tagPOINT>>>(
              (__int64 *)v54,
              v43,
              &v43[InputType],
              (__int64)&v57);
            Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)&v65);
            LODWORD(v46) = 0;
            InputType = 0;
            v26 = *((_QWORD *)&v55 + 1);
            if ( (__int64)(*((_QWORD *)&v57 + 1) - v57) >> 3 )
            {
              v27 = 0LL;
              v28 = v46;
              do
              {
                TransformFromRootToSite = (__int128 *)PointerManipulationHelper::GetTransformFromRootToSite(
                                                        v64,
                                                        *(_QWORD *)(*(_QWORD *)&v14 + 40LL));
                v63[0] = *TransformFromRootToSite;
                v63[1] = TransformFromRootToSite[1];
                v63[2] = TransformFromRootToSite[2];
                v63[3] = TransformFromRootToSite[3];
                v43 = 0LL;
                v46 = _mm_unpacklo_ps(
                        (__m128)COERCE_UNSIGNED_INT((float)*(int *)(v57 + 8 * v27)),
                        (__m128)COERCE_UNSIGNED_INT((float)*(int *)(v57 + 8 * v27 + 4))).m128_u64[0];
                v30 = (float *)CInputTransform::RelativePointToScreen((float *)&v65, (float *)&v46, v63);
                v53.x = v8.x + (int)*v30 - *(_DWORD *)(*(_QWORD *)&v14 + 64LL);
                v53.y = v59.y + (int)v30[1] - *(_DWORD *)(*(_QWORD *)&v14 + 68LL);
                v46 = 0LL;
                v60 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 32LL)
                                                                                + 8LL)
                                                                    + 80LL))(*(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL);
                if ( (int)EdgyProcessor::HitTestForTarget(
                            (__int64)this,
                            v53,
                            v48,
                            &v60,
                            (struct tagPOINT *)&v43,
                            (__int64 *)&v46,
                            &v50) >= 0 )
                {
                  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
                    *(_QWORD *)&v14 + 72LL,
                    (__int64)v54,
                    &InputType);
                  if ( *(_QWORD *)(*(_QWORD *)v54 + 24LL) != v46 )
                  {
                    v41 = 1;
                    std::unordered_map<unsigned int,unsigned __int64>::_Insert_or_assign<unsigned int const &,unsigned __int64 &>(
                      (_QWORD *)(*(_QWORD *)&v14 + 72LL),
                      (__int64)v62,
                      &InputType,
                      &v46);
                    v28 = InputType;
                  }
                }
                v31 = PointerManipulationHelper::GetPositionRelativeToSite(
                        *(struct InputSite **)(*(_QWORD *)&v14 + 48LL),
                        v53);
                *(_QWORD *)&v69 = v46;
                *((float *)&v69 + 2) = (float)v31.x;
                *((float *)&v69 + 3) = (float)v31.y;
                *((float *)&v70 + 2) = (float)(int)v43;
                *((float *)&v70 + 3) = (float)SHIDWORD(v43);
                v32 = (float)*(int *)(v57 + 8LL * v28 + 4);
                *(float *)&v70 = (float)*(int *)(v57 + 8LL * v28);
                *((float *)&v70 + 1) = v32;
                if ( v26 == v23 )
                {
                  std::vector<DragInfoStruct>::_Emplace_reallocate<DragInfoStruct const &>(
                    (__int64)&v55,
                    (char *)v26,
                    &v69);
                  v23 = v56;
                  v26 = *((_QWORD *)&v55 + 1);
                }
                else
                {
                  *(_OWORD *)v26 = v69;
                  *(_OWORD *)(v26 + 16) = v70;
                  v26 += 32LL;
                  *((_QWORD *)&v55 + 1) = v26;
                }
                v27 = ++v28;
                InputType = v28;
              }
              while ( v28 < (unsigned __int64)((__int64)(*((_QWORD *)&v57 + 1) - v57) >> 3) );
              v22 = v50;
              v5 = v61;
            }
            v33 = std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Try_emplace<unsigned long const &,>(
                    (_QWORD *)this + 27,
                    (__int64)v62,
                    &v40);
            v34 = v51;
            if ( v51 == *(_QWORD *)(*(_QWORD *)v33 + 24LL) && !v41 )
            {
              v36 = v49;
            }
            else
            {
              v35 = (v26 - (__int64)v55) >> 5;
              InputETW::Edgy::DropTargetChanged(
                v40,
                (int *)&PositionRelativeToSite,
                (int *)&v45,
                (int *)&v47,
                v51,
                v49,
                v35,
                v22);
              v39 = v35;
              v36 = v49;
              (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, float *, __int64, unsigned int, _QWORD, int, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL) + 56LL))(
                *(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL,
                v40,
                &PositionRelativeToSite,
                &v45,
                &v47,
                v66,
                v34,
                v49,
                v55,
                v39,
                v22);
              *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Try_emplace<unsigned long const &,>(
                                       (_QWORD *)this + 27,
                                       (__int64)v62,
                                       &v40)
                        + 24LL) = v34;
            }
            if ( (*((_BYTE *)v5 + 12) & 4) != 0 )
            {
              EdgyProcessor::FeedAnimationDataIfNeeded(this, v40, PositionRelativeToSite, v68, 0);
              if ( std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
                     (_QWORD *)v52 + 19,
                     &v40) )
              {
                EdgyProcessor::CancelDrag(this, v40, *(struct BamoDragManagerClientProxy **)(*(_QWORD *)&v14 + 32LL));
              }
              else
              {
                InputETW::Edgy::DragInProgress(
                  v40,
                  (int *)&PositionRelativeToSite,
                  (int *)&v45,
                  (int *)&v47,
                  v34,
                  v36,
                  v22);
                (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, float *, __int64, unsigned int, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL) + 32LL))(
                  *(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL,
                  v40,
                  &PositionRelativeToSite,
                  &v45,
                  &v47,
                  v66,
                  v34,
                  v36,
                  v22);
              }
            }
            else
            {
              EdgyProcessor::FeedAnimationDataIfNeeded(this, v40, PositionRelativeToSite, v68, 1u);
              InputETW::Edgy::DragEnded(v40, (int *)&PositionRelativeToSite, (int *)&v45, (int *)&v47, v34, v36, v22);
              (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, float *, __int64, unsigned int, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL) + 40LL))(
                *(_QWORD *)(*(_QWORD *)&v14 + 32LL) + 8LL,
                v40,
                &PositionRelativeToSite,
                &v45,
                &v47,
                v66,
                v34,
                v36,
                v22);
            }
            EdgyProcessor::AddDecisionException(v37, v40, 3u, (__int64)v52);
            if ( (_QWORD)v55 )
              std::_Deallocate<16,0>((char *)v55, (const struct std::nothrow_t *)((v23 - v55) & 0xFFFFFFFFFFFFFFE0uLL));
            if ( (_QWORD)v57 )
              std::_Deallocate<16,0>((char *)v57, (const struct std::nothrow_t *)((v58 - v57) & 0xFFFFFFFFFFFFFFF8uLL));
            v4 = v52;
          }
        }
        else
        {
          EdgyProcessor::CancelDrag(this, v40, *(struct BamoDragManagerClientProxy **)(*(_QWORD *)&v14 + 32LL));
        }
      }
    }
    if ( (*((_BYTE *)v5 + 12) & 4) == 0 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Erase<unsigned long>(
        (_QWORD *)this + 19,
        (__int64)&v40);
      std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::EdgyDragMessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::EdgyDragMessageInfo>>,0>>::_Erase<unsigned long>(
        (_QWORD *)this + 44,
        (__int64)&v40);
      std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::_Erase<unsigned long>(
        (_QWORD *)this + 11,
        (__int64)&v40);
      std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::_Erase<unsigned long>(
        (_QWORD *)this + 27,
        (__int64)&v40);
    }
  }
  if ( std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
         (_QWORD *)this + 35,
         &v40) )
  {
    EdgyProcessor::AddDecisionException(v38, v40, 3u, (__int64)v4);
  }
  if ( (*((_BYTE *)v5 + 12) & 4) == 0 )
    std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Erase<unsigned long>(
      (_QWORD *)this + 35,
      &v40);
}
