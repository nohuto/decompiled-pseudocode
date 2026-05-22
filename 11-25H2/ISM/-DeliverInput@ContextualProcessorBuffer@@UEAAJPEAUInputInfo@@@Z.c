/*
 * XREFs of ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18001F350
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1ContextualProcessorResponse@@QEAA@XZ @ 0x180016918 (--1ContextualProcessorResponse@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180019F70 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x18001A740 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x18001BF40 (--0-$unordered_map@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K@5@V-$a.c)
 *     ?ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x18001D424 (-ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextua.c)
 *     ?OnInput@ContextualProcessing@InputETW@@SAXPEBGPEAUIInputTarget@@J@Z @ 0x18001E41C (-OnInput@ContextualProcessing@InputETW@@SAXPEBGPEAUIInputTarget@@J@Z.c)
 *     ?OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKJ@Z @ 0x18001E560 (-OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKJ@Z.c)
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x18001E650 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18001F120 (-clear@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@2@@std@@AEAAXXZ @ 0x180020890 (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBKV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V-.c)
 *     ??$emplace@AEBU?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@1@@Z @ 0x1800208BC (--$emplace@AEBU-$pair@$$CBKV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@-$_Hash@V-$_Umap_trai.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800209D0 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ?_Reinsert_with_invalid_vec@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x180020B18 (-_Reinsert_with_invalid_vec@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_co.c)
 *     ?_Tidy@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAXXZ @ 0x180020E00 (-_Tidy@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_t.c)
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x180021000 (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 *     ??0?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x1800220F0 (--0-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U.c)
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x1800221E0 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 *     ??1?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x180022304 (--1-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U.c)
 *     ?clear@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAXXZ @ 0x18002283C (-clear@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@ContextualProc.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ??1?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x18002BC5C (--1-$unordered_map@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K@5@V-$a.c)
 *     ??$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAPEAUInputSample@ContextualProcessorBuffer@@QEAU23@$$QEAU23@@Z @ 0x18002D6A4 (--$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@Contextual.c)
 *     ??$construct@UInputSample@ContextualProcessorBuffer@@U12@@?$_Default_allocator_traits@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@SAXAEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@1@QEAUInputSample@ContextualProcessorBuffer@@$$QEAU34@@Z @ 0x18002D80C (--$construct@UInputSample@ContextualProcessorBuffer@@U12@@-$_Default_allocator_traits@V-$allocat.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800515EC (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@AEBV01@@Z @ 0x1800539C0 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0InfoMetadata@@QEAA@XZ @ 0x1800554E0 (--0InfoMetadata@@QEAA@XZ.c)
 *     ??$emplace@AEBK@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180056918 (--$emplace@AEBK@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@.c)
 *     ?CheckProcessorHasAllState@ContextualProcessorBuffer@@AEAA_NAEBUContextualProcessorMetadata@1@W4ContextualProcessorState@@@Z @ 0x18005A7E0 (-CheckProcessorHasAllState@ContextualProcessorBuffer@@AEAA_NAEBUContextualProcessorMetadata@1@W4.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@2@_K@Z @ 0x18005BF40 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorState@@V-$_Uhash_compare@KU-$hash@K.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAAXXZ @ 0x18006A788 (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@QEAU32@@Z @ 0x180099F4C (-_Unchecked_erase@-$list@U-$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V-$allocat.c)
 *     ??R?$_Func_class@XPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAU1@@std@@QEBAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@1@0@Z @ 0x18009A8A0 (--R-$_Func_class@XPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocato.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     __std_init_once_link_alternate_names_and_abort @ 0x18009E538 (__std_init_once_link_alternate_names_and_abort.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E57C (--_U@YAPEAX_K@Z.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18019C2B4 (-_Unchecked_erase@-$list@U-$pair@$$CBKW4ContextualProcessorDecision@@@std@@V-$allocator@U-$pair@.c)
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContextualProcessorBuffer::DeliverInput(ContextualProcessorBuffer *this, struct InputInfo *a2)
{
  __int64 v2; // r15
  const char *v3; // r9
  void *v4; // r13
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  unsigned __int64 j; // rbx
  unsigned __int64 v10; // rax
  __int64 **v11; // rcx
  __int64 *i; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  unsigned __int64 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  const struct std::nothrow_t *v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  _QWORD *v23; // r8
  _BYTE *v24; // rax
  unsigned __int64 v25; // rax
  __int64 **v26; // rcx
  unsigned int v27; // r9d
  unsigned __int64 v28; // rdx
  _QWORD *v29; // r8
  __int64 *v30; // rax
  unsigned __int64 *v31; // rsi
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // rcx
  _QWORD *v34; // rdx
  unsigned __int64 **v35; // rcx
  unsigned __int64 *v36; // rcx
  _BYTE *v37; // rcx
  const struct std::nothrow_t *v38; // rdx
  __int64 **v39; // rcx
  __int64 *v40; // rdi
  void *v42; // rbx
  void *v43; // rcx
  __int64 v44; // r14
  __int64 **v45; // rdi
  __int64 *v46; // rbx
  unsigned int **v47; // r8
  unsigned int *v48; // rdx
  unsigned int *v49; // rax
  __int64 ii; // r13
  unsigned int *v51; // r8
  __int64 v52; // rcx
  const char *v53; // r9
  _DWORD *jj; // rcx
  _QWORD *v55; // r14
  __int64 **v56; // rbx
  _BYTE *v57; // r8
  __int64 v58; // rcx
  const struct std::nothrow_t *v59; // rdx
  __int64 **v60; // rax
  __int64 v61; // r9
  _QWORD *v62; // r8
  _BYTE *v63; // rax
  __int64 **v64; // rax
  unsigned __int64 *v65; // rdi
  wil::details::in1diag3 *v66; // rcx
  void *v67; // r12
  int v68; // edi
  struct IInputTarget *v69; // rbx
  const unsigned __int16 *v70; // rax
  const unsigned __int16 *v71; // rax
  int *v72; // r14
  const struct std::nothrow_t *v73; // rdx
  unsigned __int64 **v74; // rcx
  unsigned __int64 *v75; // rcx
  unsigned __int64 **v76; // rcx
  unsigned __int64 *v77; // rcx
  __int64 **v78; // rcx
  __int64 *kk; // rax
  unsigned __int64 v80; // r12
  __int64 v81; // rdx
  _DWORD *v82; // r13
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // rcx
  float v85; // xmm0_4
  float v86; // xmm1_4
  _QWORD *v87; // rax
  _QWORD *v88; // rcx
  __int64 v89; // r12
  _QWORD *v90; // rdx
  _QWORD *v91; // r8
  __int64 v92; // rcx
  unsigned __int64 v93; // r12
  unsigned __int64 v94; // rdi
  _QWORD *v95; // r14
  __int64 v96; // r13
  __int64 **v97; // rcx
  __int64 *k; // rax
  _QWORD *v99; // r8
  __int64 *v100; // rbx
  __int64 v101; // rax
  const char *v102; // r9
  unsigned __int64 v103; // rdi
  void *v104; // rax
  const struct std::nothrow_t *v105; // rdx
  void *v106; // rcx
  _QWORD *v107; // rdi
  _QWORD *mm; // rbx
  __int64 v109; // rdi
  __int64 v110; // rcx
  __int64 v111; // rdx
  const struct std::nothrow_t *v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rcx
  _QWORD *v115; // r8
  __int64 **v116; // rcx
  __int64 *m; // rax
  __int64 v118; // r13
  __int64 v119; // r12
  __int64 **v120; // rcx
  __int64 *n; // rax
  InfoMetadata *v122; // rax
  unsigned int **v123; // rax
  _QWORD *v124; // rax
  __int64 v125; // [rsp+20h] [rbp-E0h]
  int *v126; // [rsp+28h] [rbp-D8h]
  WINBOOL fPending[2]; // [rsp+30h] [rbp-D0h] BYREF
  void *Src; // [rsp+38h] [rbp-C8h]
  unsigned int v129; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *v130; // [rsp+48h] [rbp-B8h] BYREF
  int v131; // [rsp+54h] [rbp-ACh]
  float v132; // [rsp+60h] [rbp-A0h] BYREF
  void *v133; // [rsp+68h] [rbp-98h]
  unsigned __int64 v134; // [rsp+70h] [rbp-90h]
  void *v135; // [rsp+78h] [rbp-88h] BYREF
  __int128 v136; // [rsp+80h] [rbp-80h]
  __int64 v137; // [rsp+90h] [rbp-70h]
  __int64 v138; // [rsp+98h] [rbp-68h]
  void *v139; // [rsp+A0h] [rbp-60h] BYREF
  int v140; // [rsp+B0h] [rbp-50h] BYREF
  void *v141; // [rsp+B8h] [rbp-48h]
  __int64 v142; // [rsp+C0h] [rbp-40h]
  void *v143; // [rsp+C8h] [rbp-38h]
  __int128 v144; // [rsp+D0h] [rbp-30h]
  __int64 v145; // [rsp+E0h] [rbp-20h]
  __int64 v146; // [rsp+E8h] [rbp-18h]
  void *v147; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v148; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v149; // [rsp+100h] [rbp+0h] BYREF
  _QWORD *v150; // [rsp+108h] [rbp+8h] BYREF
  void *v151; // [rsp+110h] [rbp+10h]
  _BYTE v152[24]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v153; // [rsp+130h] [rbp+30h]
  __int64 v154; // [rsp+138h] [rbp+38h]
  struct IInputTarget *v155; // [rsp+140h] [rbp+40h] BYREF
  void *v156; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 *v157; // [rsp+150h] [rbp+50h]
  _BYTE v158[24]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v159; // [rsp+170h] [rbp+70h]
  __int64 v160; // [rsp+178h] [rbp+78h]
  __int64 v161; // [rsp+180h] [rbp+80h] BYREF
  int v162; // [rsp+188h] [rbp+88h] BYREF
  unsigned __int64 *v163; // [rsp+190h] [rbp+90h]
  void *v164; // [rsp+198h] [rbp+98h]
  void *v165[2]; // [rsp+1A0h] [rbp+A0h]
  __int64 v166; // [rsp+1B0h] [rbp+B0h]
  __int64 v167; // [rsp+1B8h] [rbp+B8h]
  __int64 v168; // [rsp+1C0h] [rbp+C0h]
  int v169; // [rsp+1D0h] [rbp+D0h] BYREF
  void *v170; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 v171; // [rsp+1E0h] [rbp+E0h]
  void *v172; // [rsp+1E8h] [rbp+E8h] BYREF
  __int128 v173; // [rsp+1F0h] [rbp+F0h]
  __int64 v174; // [rsp+200h] [rbp+100h]
  __int64 v175; // [rsp+208h] [rbp+108h]
  int v176; // [rsp+210h] [rbp+110h] BYREF
  void *v177; // [rsp+218h] [rbp+118h]
  __int64 v178; // [rsp+220h] [rbp+120h]
  void *v179[3]; // [rsp+228h] [rbp+128h] BYREF
  __int64 v180; // [rsp+240h] [rbp+140h]
  __int64 v181; // [rsp+248h] [rbp+148h]
  ContextualProcessorBuffer *v182; // [rsp+250h] [rbp+150h]
  unsigned __int64 *v183; // [rsp+258h] [rbp+158h]
  _BYTE v184[16]; // [rsp+260h] [rbp+160h] BYREF
  char v185[16]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v186[2]; // [rsp+280h] [rbp+180h] BYREF
  char v187[64]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v188; // [rsp+2D0h] [rbp+1D0h]
  char v189[64]; // [rsp+2D8h] [rbp+1D8h] BYREF
  char v190[72]; // [rsp+318h] [rbp+218h] BYREF
  _BYTE v191[56]; // [rsp+360h] [rbp+260h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3D8h] [rbp+2D8h]

  Src = a2;
  v2 = (__int64)this;
  v182 = this;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v191, "ContextualProcessingInput", 0LL);
  if ( !*(_QWORD *)(v2 + 144) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x324,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
      v3);
  v4 = 0LL;
  v142 = 0LL;
  v5 = operator new(0x20uLL);
  *v5 = v5;
  v5[1] = v5;
  v141 = v5;
  v145 = 7LL;
  v146 = 8LL;
  v140 = 1065353216;
  v6 = operator new(0x80uLL);
  v143 = v6;
  v7 = v6 + 16;
  *(_QWORD *)&v144 = v6 + 16;
  *((_QWORD *)&v144 + 1) = v6 + 16;
  do
    *v6++ = v5;
  while ( v6 != v7 );
  v178 = 0LL;
  v8 = operator new(0x18uLL);
  *v8 = v8;
  v8[1] = v8;
  v177 = v8;
  v180 = 7LL;
  v181 = 8LL;
  v176 = 1065353216;
  j = (unsigned __int64)operator new(0x80uLL);
  v179[0] = (void *)j;
  v10 = j + 128;
  v179[1] = (void *)(j + 128);
  v179[2] = (void *)(j + 128);
  do
  {
    *(_QWORD *)j = v8;
    j += 8LL;
  }
  while ( j != v10 );
  v31 = *(unsigned __int64 **)(v2 + 32);
  v32 = *(unsigned __int64 **)(v2 + 40);
  v183 = v32;
LABEL_5:
  if ( v31 == v32 )
  {
    v17 = *(unsigned __int64 **)(v2 + 56);
    v31 = *(unsigned __int64 **)(v2 + 64);
    if ( v17 != v31 )
    {
      do
      {
        ContextualProcessorBuffer::DeliverInputToTarget(
          v2 - 8,
          *v17,
          (_DWORD)v17 + 16,
          (_DWORD)v17 + 80,
          (__int64)(v17 + 18));
        v17 += 26;
      }
      while ( v17 != v31 );
      std::vector<ContextualProcessorBuffer::InputSample>::clear(v2 + 56);
    }
    ContextualProcessorBuffer::DeliverInputToTarget(
      v2 - 8,
      (_DWORD)Src,
      (unsigned int)&v140,
      *(_QWORD *)(v2 + 144) + 24,
      (__int64)&v176);
    goto LABEL_45;
  }
  v11 = (__int64 **)v31[2];
  for ( i = *v11; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v11 )
    {
LABEL_33:
      v31 += 28;
      v32 = v183;
      goto LABEL_5;
    }
    if ( *((_DWORD *)i + 5) )
      break;
  }
  v147 = v4;
  LODWORD(v149) = 0;
  v148 = 0LL;
  v150 = v4;
  v151 = v4;
  v13 = operator new(0x18uLL);
  *v13 = v13;
  v13[1] = v13;
  v150 = v13;
  *(_QWORD *)v152 = v4;
  *(_OWORD *)&v152[8] = 0LL;
  v153 = 7LL;
  v154 = 8LL;
  LODWORD(v149) = 1065353216;
  v14 = operator new(0x80uLL);
  v15 = (__int64)(*(_QWORD *)&v152[16] - *(_QWORD *)v152) >> 3;
  if ( v15 )
    std::_Deallocate<16,0>(*(char **)v152, (const struct std::nothrow_t *)(8 * v15));
  *(_QWORD *)v152 = v14;
  v16 = v14 + 16;
  *(_QWORD *)&v152[8] = v14 + 16;
  *(_QWORD *)&v152[16] = v14 + 16;
  do
    *v14++ = v13;
  while ( v14 != v16 );
  v155 = (struct IInputTarget *)v4;
  LODWORD(v156) = 0;
  v157 = (unsigned __int64 *)v4;
  *(_QWORD *)v158 = v4;
  v17 = (unsigned __int64 *)operator new(0x20uLL);
  *v17 = (unsigned __int64)v17;
  v17[1] = (unsigned __int64)v17;
  v157 = v17;
  *(_OWORD *)&v158[8] = 0LL;
  v159 = (__int64)v4;
  v160 = 7LL;
  v161 = 8LL;
  LODWORD(v156) = 1065353216;
  j = (unsigned __int64)operator new(0x80uLL);
  v18 = *(_QWORD *)&v158[8];
  v19 = (v159 - *(_QWORD *)&v158[8]) >> 3;
  if ( !v19 )
    goto LABEL_17;
  v20 = (const struct std::nothrow_t *)(8 * v19);
  v21 = *(_QWORD *)&v158[8];
  if ( (unsigned __int64)v20 >= 0x1000 )
    goto LABEL_200;
  while ( 1 )
  {
    operator delete((void *)v18, v20);
LABEL_17:
    *(_QWORD *)&v158[8] = j;
    v22 = j + 128;
    *(_QWORD *)&v158[16] = j + 128;
    v159 = j + 128;
    do
    {
      *(_QWORD *)j = v17;
      j += 8LL;
    }
    while ( j != v22 );
    v162 = 0;
    v163 = (unsigned __int64 *)v4;
    v164 = v4;
    v17 = (unsigned __int64 *)operator new(0x18uLL);
    *v17 = (unsigned __int64)v17;
    v17[1] = (unsigned __int64)v17;
    v163 = v17;
    *(_OWORD *)v165 = 0LL;
    v166 = (__int64)v4;
    v167 = 7LL;
    v168 = 8LL;
    v162 = 1065353216;
    j = (unsigned __int64)operator new(0x80uLL);
    v23 = v165[0];
    v18 = (signed __int64)(v166 - (unsigned __int64)v165[0]) >> 3;
    if ( !v18 )
      break;
    v20 = (const struct std::nothrow_t *)(8 * v18);
    v24 = v165[0];
    if ( (unsigned __int64)(8 * v18) < 0x1000 )
      goto LABEL_21;
LABEL_198:
    v20 = (const struct std::nothrow_t *)((char *)v20 + 39);
    v23 = (_QWORD *)*(v23 - 1);
    if ( (unsigned __int64)(v24 - (_BYTE *)v23 - 8) <= 0x1F )
    {
LABEL_21:
      operator delete(v23, v20);
      break;
    }
    do
    {
      v21 = _o__invalid_parameter_noinfo_noreturn(v18, v20);
      __debugbreak();
LABEL_200:
      v20 = (const struct std::nothrow_t *)((char *)v20 + 39);
      v18 = *(_QWORD *)(v18 - 8);
    }
    while ( (unsigned __int64)(v21 - v18 - 8) > 0x1F );
  }
  v165[0] = (void *)j;
  v25 = j + 128;
  v165[1] = (void *)(j + 128);
  v166 = j + 128;
  do
  {
    *(_QWORD *)j = v17;
    j += 8LL;
  }
  while ( j != v25 );
  j = v31[2];
  v2 = 0x100000001B3LL;
LABEL_23:
  while ( 2 )
  {
    for ( j = *(_QWORD *)j;
          ;
          j = std::list<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>::_Unchecked_erase(v31 + 2) )
    {
      v26 = (__int64 **)v31[2];
      if ( (__int64 **)j == v26 )
        break;
      v27 = *(_DWORD *)(j + 16);
      fPending[0] = v27;
      v28 = v2
          * (((unsigned __int64)v27 >> 24) ^ (v2
                                            * (BYTE2(v27) ^ (v2
                                                           * (BYTE1(v27) ^ (v2
                                                                          * ((unsigned __int8)v27 ^ 0xCBF29CE484222325uLL)))))));
      v29 = (_QWORD *)*((_QWORD *)v143 + 2 * (v28 & v145) + 1);
      if ( v29 == v141 )
      {
LABEL_36:
        v29 = v4;
      }
      else
      {
        while ( v27 != *((_DWORD *)v29 + 4) )
        {
          if ( v29 == *((_QWORD **)v143 + 2 * (v28 & v145)) )
            goto LABEL_36;
          v29 = (_QWORD *)v29[1];
        }
      }
      if ( !v29 )
        goto LABEL_23;
      v33 = v28 & v180;
      v34 = (_QWORD *)*((_QWORD *)v179[0] + 2 * (v28 & v180) + 1);
      if ( v34 == v177 )
      {
LABEL_153:
        v34 = v4;
      }
      else
      {
        v33 *= 2LL;
        while ( v27 != *((_DWORD *)v34 + 4) )
        {
          if ( v34 == *((_QWORD **)v179[0] + v33) )
            goto LABEL_153;
          v34 = (_QWORD *)v34[1];
        }
      }
      if ( v34 )
        goto LABEL_178;
      v101 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
               v33,
               j + 16);
      std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Erase_bucket(
        v31 + 1,
        j,
        v31[7] & v101);
    }
    v30 = *v26;
    v2 = (__int64)v182;
    while ( 1 )
    {
      if ( v30 == (__int64 *)v26 )
      {
        LODWORD(v148) = (_DWORD)v4;
LABEL_32:
        ContextualProcessorResponse::~ContextualProcessorResponse((ContextualProcessorResponse *)&v147);
        goto LABEL_33;
      }
      if ( *((_DWORD *)v30 + 5) )
        break;
      v30 = (__int64 *)*v30;
    }
    if ( !*((_BYTE *)v31 + 216) && *((_QWORD *)v182 + 7) != *((_QWORD *)v182 + 8) )
    {
      v93 = (unsigned __int64)v4;
      v94 = (unsigned __int64)v4;
      v95 = v4;
LABEL_137:
      *(_QWORD *)fPending = v95;
      v96 = *(_QWORD *)(v2 + 56);
      if ( v94 < 0x4EC4EC4EC4EC4EC5LL * ((*(_QWORD *)(v2 + 64) - v96) >> 4) )
      {
        v97 = (__int64 **)v31[2];
        for ( k = *v97; ; k = (__int64 *)*k )
        {
          if ( k == (__int64 *)v97 )
          {
LABEL_188:
            ++v94;
            v95 += 26;
            goto LABEL_137;
          }
          if ( *((_DWORD *)k + 5) )
            break;
        }
        v186[0] = 0LL;
        v186[1] = 0LL;
        std::unordered_map<unsigned long,enum ContextualProcessorDecision>::unordered_map<unsigned long,enum ContextualProcessorDecision>(v187);
        v188 = 0LL;
        std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>((__int64)v189);
        std::unordered_set<unsigned long>::unordered_set<unsigned long>(v190);
        ContextualProcessorBuffer::MakeContextualProcessorDecision(
          (_QWORD *)(v2 - 8),
          *(int **)((char *)v95 + v96),
          v186,
          v31,
          (__int64)v95 + v96 + 16,
          (union _RTL_RUN_ONCE *)((char *)v95 + v96 + 144));
        v116 = (__int64 **)v31[2];
        for ( m = *v116; ; m = (__int64 *)*m )
        {
          if ( m == (__int64 *)v116 )
          {
            if ( v93 <= v94 )
            {
              v118 = v94 - v93 + 1;
              v130 = (unsigned int *)(v94 + 1);
              v119 = 208 * v93;
              do
              {
                ContextualProcessorBuffer::DeliverInputToTarget(
                  v2 - 8,
                  *(_QWORD *)(v119 + *(_QWORD *)(v2 + 56)),
                  v119 + *(_QWORD *)(v2 + 56) + 16,
                  v119 + *(_QWORD *)(v2 + 56) + 80,
                  v119 + *(_QWORD *)(v2 + 56) + 144LL);
                v119 += 208LL;
                --v118;
              }
              while ( v118 );
              v95 = *(_QWORD **)fPending;
              v93 = (unsigned __int64)v130;
            }
LABEL_187:
            ContextualProcessorResponse::~ContextualProcessorResponse((ContextualProcessorResponse *)v186);
            goto LABEL_188;
          }
          if ( *((_DWORD *)m + 5) != 2 )
            break;
        }
        if ( !(unsigned __int8)ContextualProcessorBuffer::CheckProcessorHasAllState(v116, v31, 0LL) )
          goto LABEL_187;
        ContextualProcessorResponse::~ContextualProcessorResponse((ContextualProcessorResponse *)v186);
      }
      v120 = (__int64 **)v31[2];
      for ( n = *v120; n != (__int64 *)v120; n = (__int64 *)*n )
      {
        if ( *((_DWORD *)n + 5) != 2 )
          goto LABEL_58;
      }
      std::vector<ContextualProcessorBuffer::InputSample>::clear(v2 + 56);
    }
LABEL_58:
    *((_BYTE *)v31 + 216) = 1;
    LODWORD(v148) = 0;
    std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::clear(&v149);
    v42 = (void *)v31[26];
    v43 = v147;
    if ( v147 != v42 )
    {
      if ( v42 )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v42 + 8LL))(v31[26]);
        v43 = v147;
      }
      v147 = v42;
      if ( v43 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v43 + 16LL))(v43);
    }
    *(_DWORD *)(*(_QWORD *)(v2 + 144) + 104LL) = *((_DWORD *)v31 + 34);
    v44 = *(_QWORD *)(v2 + 144) + 112LL;
    if ( (unsigned __int64 *)v44 != v31 + 18 )
    {
      *(_DWORD *)v44 = *((_DWORD *)v31 + 36);
      v45 = (__int64 **)v31[19];
      v46 = *v45;
      v47 = *(unsigned int ***)(v44 + 8);
      v48 = *v47;
      while ( v48 != (unsigned int *)v47 )
      {
        if ( v46 == (__int64 *)v45 )
        {
          std::list<std::pair<unsigned long const,enum ContextualProcessorDecision>>::_Unchecked_erase(v44 + 8);
          goto LABEL_71;
        }
        v48[4] = *((_DWORD *)v46 + 4);
        v48[5] = *((_DWORD *)v46 + 5);
        v48 = *(unsigned int **)v48;
        v46 = (__int64 *)*v46;
      }
      if ( v46 != (__int64 *)v45 )
      {
        v49 = (unsigned int *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
        v130 = v49;
        *((_QWORD *)v49 + 2) = v46[2];
        for ( ii = 1LL; ; ++ii )
        {
          v46 = (__int64 *)*v46;
          *(_QWORD *)fPending = v49;
          v51 = v49;
          if ( v46 == (__int64 *)v45 )
            break;
          v49 = (unsigned int *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
          *((_QWORD *)v49 + 2) = v46[2];
          v115 = *(_QWORD **)fPending;
          **(_QWORD **)fPending = v49;
          *((_QWORD *)v49 + 1) = v115;
        }
        v52 = *(_QWORD *)(v44 + 8);
        if ( ii )
        {
          v123 = *(unsigned int ***)(v52 + 8);
          v48 = v130;
          *((_QWORD *)v130 + 1) = v123;
          *v123 = v48;
          *(_QWORD *)v51 = v52;
          *(_QWORD *)(v52 + 8) = v51;
          *(_QWORD *)(v44 + 16) += ii;
        }
      }
LABEL_71:
      std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Reinsert_with_invalid_vec(
        v44,
        v48);
    }
    fPending[0] = 0;
    if ( !__std_init_once_begin_initialize(&InfoMetadata::s_createdInfoMetadata, 0, fPending, 0LL) )
      abort();
    if ( fPending[0] )
    {
      v131 = 0;
      v122 = (InfoMetadata *)operator new(0x18uLL);
      InfoMetadata::s_instanceInfoMetadata = InfoMetadata::InfoMetadata(v122);
      if ( !InitOnceComplete(&InfoMetadata::s_createdInfoMetadata, 0, 0LL) )
        _std_init_once_link_alternate_names_and_abort();
    }
    if ( !InfoMetadata::s_instanceInfoMetadata )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\metadata\\infometadata.cpp",
        v53);
    for ( jj = *(_DWORD **)InfoMetadata::s_instanceInfoMetadata; ; jj += 98 )
    {
      v4 = Src;
      if ( jj == *((_DWORD **)InfoMetadata::s_instanceInfoMetadata + 1) )
      {
        v55 = 0LL;
        goto LABEL_80;
      }
      if ( (*jj & *(_DWORD *)Src) != 0 )
        break;
    }
    v55 = jj + 2;
LABEL_80:
    v169 = 0;
    v170 = 0LL;
    v171 = 0LL;
    v40 = (__int64 *)operator new(0x18uLL);
    *v40 = (__int64)v40;
    v40[1] = (__int64)v40;
    v170 = v40;
    v172 = 0LL;
    v173 = 0LL;
    v174 = 7LL;
    v175 = 8LL;
    v169 = 1065353216;
    v56 = (__int64 **)operator new(0x80uLL);
    v57 = v172;
    v58 = (__int64)(*((_QWORD *)&v173 + 1) - (_QWORD)v172) >> 3;
    if ( v58 )
    {
      v59 = (const struct std::nothrow_t *)(8 * v58);
      if ( (unsigned __int64)(8 * v58) >= 0x1000 )
      {
        v59 = (const struct std::nothrow_t *)((char *)v59 + 39);
        v57 = (_BYTE *)*((_QWORD *)v172 - 1);
        if ( (unsigned __int64)((_BYTE *)v172 - v57 - 8) > 0x1F )
        {
LABEL_203:
          v63 = (_BYTE *)_o__invalid_parameter_noinfo_noreturn(v58, v59);
          __debugbreak();
          goto LABEL_204;
        }
      }
      operator delete(v57, v59);
    }
    v172 = v56;
    v60 = v56 + 16;
    *(_QWORD *)&v173 = v56 + 16;
    *((_QWORD *)&v173 + 1) = v56 + 16;
    do
      *v56++ = v40;
    while ( v56 != v60 );
    if ( v55 )
    {
      v130 = (unsigned int *)v4;
      v92 = v55[31];
      if ( v92 )
      {
        (*(void (__fastcall **)(__int64, unsigned int **, int *))(*(_QWORD *)v92 + 16LL))(v92, &v130, &v169);
        goto LABEL_85;
      }
      std::_Xbad_function_call();
      __debugbreak();
      do
      {
LABEL_149:
        v100 = (__int64 *)*v40;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v40 + 3);
        operator delete(v40, (const struct std::nothrow_t *)0x20);
        v40 = v100;
      }
      while ( v100 );
      goto LABEL_50;
    }
LABEL_85:
    v132 = 0.0;
    v4 = 0LL;
    v133 = 0LL;
    v134 = 0LL;
    v40 = (__int64 *)operator new(0x18uLL);
    *v40 = (__int64)v40;
    v40[1] = (__int64)v40;
    v133 = v40;
    v135 = 0LL;
    v136 = 0LL;
    v137 = 7LL;
    v138 = 8LL;
    v132 = 1.0;
    v56 = (__int64 **)operator new(0x80uLL);
    v62 = v135;
    v58 = (__int64)(*((_QWORD *)&v136 + 1) - (_QWORD)v135) >> 3;
    if ( v58 )
    {
      v59 = (const struct std::nothrow_t *)(8 * v58);
      v63 = v135;
      if ( (unsigned __int64)(8 * v58) >= 0x1000 )
      {
LABEL_204:
        v59 = (const struct std::nothrow_t *)((char *)v59 + 39);
        v62 = (_QWORD *)*(v62 - 1);
        if ( (unsigned __int64)(v63 - (_BYTE *)v62 - 8) > 0x1F )
          goto LABEL_203;
      }
      operator delete(v62, v59);
    }
    v135 = v56;
    v64 = v56 + 16;
    *(_QWORD *)&v136 = v56 + 16;
    *((_QWORD *)&v136 + 1) = v56 + 16;
    do
      *v56++ = v40;
    while ( v56 != v64 );
    v65 = (unsigned __int64 *)v31[2];
    for ( j = *v65; (unsigned __int64 *)j != v65; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 20) )
      {
        v61 = 0x100000001B3LL;
        if ( !v55 )
          goto LABEL_105;
        v99 = (_QWORD *)*((_QWORD *)v172
                        + 2
                        * (v174 & (0x100000001B3LL
                                 * (*(unsigned __int8 *)(j + 19) ^ (0x100000001B3LL
                                                                  * (*(unsigned __int8 *)(j + 18) ^ (0x100000001B3LL * (*(unsigned __int8 *)(j + 17) ^ (0x100000001B3LL * (*(unsigned __int8 *)(j + 16) ^ 0xCBF29CE484222325uLL)))))))))
                        + 1);
        if ( v99 == v170 )
        {
LABEL_145:
          v99 = v4;
        }
        else
        {
          while ( *(_DWORD *)(j + 16) != *((_DWORD *)v99 + 4) )
          {
            if ( v99 == *((_QWORD **)v172
                        + 2
                        * (v174 & (0x100000001B3LL
                                 * (*(unsigned __int8 *)(j + 19) ^ (0x100000001B3LL
                                                                  * (*(unsigned __int8 *)(j + 18) ^ (0x100000001B3LL * (*(unsigned __int8 *)(j + 17) ^ (0x100000001B3LL * (*(unsigned __int8 *)(j + 16) ^ 0xCBF29CE484222325uLL)))))))))) )
              goto LABEL_145;
            v99 = (_QWORD *)v99[1];
          }
        }
        if ( v99 )
        {
LABEL_105:
          v80 = 0x100000001B3LL
              * (*(unsigned __int8 *)(j + 19) ^ (0x100000001B3LL
                                               * (*(unsigned __int8 *)(j + 18) ^ (0x100000001B3LL
                                                                                * (*(unsigned __int8 *)(j + 17) ^ (0x100000001B3LL * (*(unsigned __int8 *)(j + 16) ^ 0xCBF29CE484222325uLL)))))));
          v81 = *((_QWORD *)v135 + 2 * (v137 & v80) + 1);
          *(_QWORD *)fPending = v133;
          if ( (void *)v81 == v133 )
          {
LABEL_109:
            if ( v134 == 0xAAAAAAAAAAAAAAALL )
              std::_Xlength_error("unordered_map/set too long");
            v82 = operator new(0x18uLL);
            v82[4] = *(_DWORD *)(j + 16);
            v83 = v134;
            v84 = v134 + 1;
            if ( (__int64)(v134 + 1) < 0 )
              v85 = (float)(int)(v84 & 1 | (v84 >> 1)) + (float)(int)(v84 & 1 | (v84 >> 1));
            else
              v85 = (float)(int)v84;
            if ( v138 < 0 )
              v86 = (float)(v138 & 1 | (unsigned int)((unsigned __int64)v138 >> 1))
                  + (float)(v138 & 1 | (unsigned int)((unsigned __int64)v138 >> 1));
            else
              v86 = (float)(int)v138;
            if ( (float)(v85 / v86) > v132 )
            {
              std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Rehash_for_1(&v132);
              v124 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                                 &v132,
                                 v184,
                                 v82 + 4,
                                 v80,
                                 v125,
                                 v126);
              v83 = v134;
              v87 = (_QWORD *)*v124;
            }
            else
            {
              v87 = *(_QWORD **)fPending;
            }
            v88 = (_QWORD *)v87[1];
            v134 = v83 + 1;
            *(_QWORD *)v82 = v87;
            *((_QWORD *)v82 + 1) = v88;
            *v88 = v82;
            v87[1] = v82;
            v89 = 2 * (v137 & v80);
            v90 = v135;
            v91 = (_QWORD *)*((_QWORD *)v135 + v89);
            if ( v91 == v133 )
            {
              *((_QWORD *)v135 + v89) = v82;
            }
            else
            {
              if ( v91 == v87 )
              {
                *((_QWORD *)v135 + v89) = v82;
                goto LABEL_122;
              }
              if ( *((_QWORD **)v135 + v89 + 1) != v88 )
              {
LABEL_122:
                v4 = 0LL;
                continue;
              }
            }
            v90[v89 + 1] = v82;
            goto LABEL_122;
          }
          while ( *(_DWORD *)(j + 16) != *(_DWORD *)(v81 + 16) )
          {
            if ( v81 == *((_QWORD *)v135 + 2 * (v137 & v80)) )
            {
              *(_QWORD *)fPending = v81;
              goto LABEL_109;
            }
            v81 = *(_QWORD *)(v81 + 8);
          }
        }
      }
    }
    if ( v134 )
    {
      v4 = Src;
      j = *((int *)Src + 6);
      v66 = retaddr;
      if ( j < 0x20 )
        goto LABEL_217;
      v67 = operator new[](*((int *)Src + 6));
      memcpy_0(v67, v4, j);
      v129 = 1;
      if ( !v55 )
      {
LABEL_93:
        v68 = (*(__int64 (__fastcall **)(unsigned __int64, void *, _QWORD, void **))(*(_QWORD *)*v31 + 40LL))(
                *v31,
                v67,
                *(_QWORD *)(v2 + 144),
                &v147);
        v69 = v155;
        v70 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)*v31 + 48LL))(*v31);
        InputETW::ContextualProcessing::OnInput(v70, v69, v68);
        j = v129;
        v71 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)*v31 + 48LL))(*v31);
        InputTraceLogging::ContextualProcessing::OnInput((const struct InputInfo *)v67, v71, j, v68);
        if ( v68 < 0 )
        {
          LODWORD(v148) = 0;
          std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::clear(&v149);
        }
        v126 = &v176;
        v72 = (int *)v4;
        ContextualProcessorBuffer::ProcessContextualProcessorDecision(
          (_QWORD *)(v2 - 8),
          (struct InputInfo *)v4,
          &v147,
          v31,
          &v140);
        operator delete(v67, v73);
        v4 = 0LL;
        goto LABEL_96;
      }
      if ( v134 < v171 )
        std::_Func_class<void,InputInfo *,std::unordered_set<unsigned long> &,InputInfo *>::operator()(
          v55 + 8,
          v4,
          &v132,
          v67);
      v130 = &v129;
      v139 = v67;
      v113 = v55[23];
      if ( !v113 )
      {
        std::_Xbad_function_call();
        __debugbreak();
LABEL_217:
        wil::details::in1diag3::_FailFast_Unexpected(
          v66,
          (void *)0x1EF,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\inc\\rawinput.h",
          (const char *)v61);
      }
      (*(void (__fastcall **)(__int64, void **, unsigned int **))(*(_QWORD *)v113 + 16LL))(v113, &v139, &v130);
      v130 = (unsigned int *)v67;
      v114 = v55[47];
      if ( v114 )
      {
        (*(void (__fastcall **)(__int64, unsigned int **, int *))(*(_QWORD *)v114 + 16LL))(v114, &v130, &v176);
        goto LABEL_93;
      }
      std::_Xbad_function_call();
      __debugbreak();
LABEL_178:
      std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
        &v162,
        v185,
        fPending);
      continue;
    }
    break;
  }
  v72 = (int *)Src;
LABEL_96:
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned long>>,std::_Iterator_base0>>>::_Tidy(&v135);
  v74 = (unsigned __int64 **)v133;
  **((_QWORD **)v133 + 1) = v4;
  v75 = *v74;
  if ( v75 )
  {
    do
    {
      j = *v75;
      operator delete(v75, (const struct std::nothrow_t *)0x18);
      v75 = (unsigned __int64 *)j;
    }
    while ( j );
  }
  operator delete(v133, (const struct std::nothrow_t *)0x18);
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned long>>,std::_Iterator_base0>>>::_Tidy(&v172);
  v76 = (unsigned __int64 **)v170;
  **((_QWORD **)v170 + 1) = v4;
  v77 = *v76;
  if ( v77 )
  {
    do
    {
      j = *v77;
      operator delete(v77, (const struct std::nothrow_t *)0x18);
      v77 = (unsigned __int64 *)j;
    }
    while ( j );
  }
  operator delete(v170, (const struct std::nothrow_t *)0x18);
  v78 = (__int64 **)v31[2];
  for ( kk = *v78; ; kk = (__int64 *)*kk )
  {
    if ( kk == (__int64 *)v78 )
      goto LABEL_32;
    if ( *((_DWORD *)kk + 5) == 1 )
      break;
  }
  ContextualProcessorResponse::~ContextualProcessorResponse((ContextualProcessorResponse *)&v147);
  v147 = v4;
  v103 = v72[6];
  if ( v103 < 0x20 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1EF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\inc\\rawinput.h",
      v102);
  v104 = operator new[](v103);
  v106 = v147;
  v147 = v104;
  if ( v106 )
  {
    operator delete(v106, v105);
    v104 = v147;
  }
  LODWORD(v148) = v103;
  memcpy_0(v104, v72, v103);
  LODWORD(v149) = v140;
  v150 = v4;
  v151 = v4;
  std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>::_Alloc_sentinel_and_proxy(&v150);
  *(_OWORD *)v152 = 0LL;
  *(_QWORD *)&v152[16] = v4;
  v153 = v145;
  v154 = v146;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::_Assign_grow(
    v152,
    (__int64)(v144 - (_QWORD)v143) >> 3,
    v150);
  v107 = v141;
  for ( mm = *(_QWORD **)v141; mm != v107; mm = (_QWORD *)*mm )
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::emplace<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>> const &>(
      &v149,
      v184,
      mm + 2);
  v109 = *(_QWORD *)(v2 + 144);
  LODWORD(v155) = *(_DWORD *)(v109 + 24);
  v156 = v4;
  v157 = (unsigned __int64 *)v4;
  std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>::_Alloc_sentinel_and_proxy(&v156);
  *(_OWORD *)v158 = 0LL;
  *(_QWORD *)&v158[16] = v4;
  v159 = *(_QWORD *)(v109 + 72);
  v160 = *(_QWORD *)(v109 + 80);
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::_Assign_grow(
    v158,
    (__int64)(*(_QWORD *)(v109 + 56) - *(_QWORD *)(v109 + 48)) >> 3,
    v156);
  v17 = *(unsigned __int64 **)(v109 + 32);
  for ( j = *v17; (unsigned __int64 *)j != v17; j = *(_QWORD *)j )
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::emplace<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>> const &>(
      &v155,
      v184,
      j + 16);
  std::unordered_set<unsigned long>::unordered_set<unsigned long>(&v161, &v176);
  v111 = *(_QWORD *)(v2 + 64);
  if ( v111 == *(_QWORD *)(v2 + 72) )
  {
    std::vector<ContextualProcessorBuffer::InputSample>::_Emplace_reallocate<ContextualProcessorBuffer::InputSample>(
      v2 + 56,
      v111,
      &v147);
  }
  else
  {
    std::_Default_allocator_traits<std::allocator<ContextualProcessorBuffer::InputSample>>::construct<ContextualProcessorBuffer::InputSample,ContextualProcessorBuffer::InputSample>(
      v110,
      v111,
      &v147);
    *(_QWORD *)(v2 + 64) += 208LL;
  }
  std::unordered_map<unsigned long,enum ContextualProcessorDecision>::~unordered_map<unsigned long,enum ContextualProcessorDecision>(&v161);
  std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::~unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>(&v155);
  std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::~unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>(&v149);
  if ( v147 )
    operator delete(v147, v112);
LABEL_45:
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned long>>,std::_Iterator_base0>>>::_Tidy(v179);
  v35 = (unsigned __int64 **)v177;
  **((_QWORD **)v177 + 1) = v4;
  v36 = *v35;
  if ( v36 )
  {
    do
    {
      j = *v36;
      operator delete(v36, (const struct std::nothrow_t *)0x18);
      v36 = (unsigned __int64 *)j;
    }
    while ( j );
  }
  operator delete(v177, (const struct std::nothrow_t *)0x18);
  v37 = v143;
  if ( !v143 )
    goto LABEL_49;
  v38 = (const struct std::nothrow_t *)((*((_QWORD *)&v144 + 1) - (_QWORD)v143) & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (unsigned __int64)v38 >= 0x1000 )
  {
    v38 = (const struct std::nothrow_t *)((char *)v38 + 39);
    v37 = (_BYTE *)*((_QWORD *)v143 - 1);
    if ( (unsigned __int64)((_BYTE *)v143 - v37 - 8) > 0x1F )
    {
      v24 = (_BYTE *)_o__invalid_parameter_noinfo_noreturn(v37, v38);
      __debugbreak();
      goto LABEL_198;
    }
  }
  operator delete(v37, v38);
  v143 = v4;
  v144 = 0LL;
LABEL_49:
  v39 = (__int64 **)v141;
  **((_QWORD **)v141 + 1) = v4;
  v40 = *v39;
  if ( *v39 )
    goto LABEL_149;
LABEL_50:
  operator delete(v141, (const struct std::nothrow_t *)0x20);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v191);
  return 0LL;
}
