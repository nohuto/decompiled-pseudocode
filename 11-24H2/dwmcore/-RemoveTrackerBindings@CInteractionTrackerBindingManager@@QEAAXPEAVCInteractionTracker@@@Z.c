/*
 * XREFs of ?RemoveTrackerBindings@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1800DFC5C
 * Callers:
 *     ?DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180221D00 (-DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800DEA80 (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@1@AEBQEAVCInteractionTracker@@@Z @ 0x1800DF7B8 (--$find@X@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@3@V?$allocator@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800DFEB0 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInteractionTracker@@V.c)
 *     ??1?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800DFF78 (--1-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V-$_Uhash_com.c)
 *     ??$?0V?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@PEAX@std@@@std@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@PEAX@std@@@1@@Z @ 0x1800E0388 (--$-0V-$allocator@U-$_List_node@U-$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingMode.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800E0428 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInteractionTracker@@W.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTrackerBindingManager::RemoveTrackerBindings(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2)
{
  _QWORD *v3; // rbx
  __int64 *v4; // rax
  _BYTE *v5; // rsi
  _BYTE *v6; // r14
  __int64 *i; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r12
  _QWORD *v16; // rax
  struct CInteractionTracker *v17; // rax
  _QWORD *v18; // rbx
  _QWORD *v19; // rdi
  _QWORD *v20; // r12
  _QWORD *v21; // r15
  __int64 v22; // rcx
  __int128 v23; // [rsp+20h] [rbp-69h] BYREF
  _BYTE *v24; // [rsp+30h] [rbp-59h]
  char *v25; // [rsp+38h] [rbp-51h]
  __int128 v26; // [rsp+40h] [rbp-49h]
  char v27[16]; // [rsp+50h] [rbp-39h] BYREF
  char v28[8]; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v29; // [rsp+68h] [rbp-21h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  _QWORD *v31; // [rsp+F0h] [rbp+67h] BYREF
  struct CInteractionTracker *v32; // [rsp+F8h] [rbp+6Fh] BYREF
  struct CInteractionTracker *v33; // [rsp+100h] [rbp+77h] BYREF
  __int64 *v34; // [rsp+108h] [rbp+7Fh] BYREF

  v32 = a2;
  v25 = (char *)this + 80;
  std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
    (_QWORD *)this + 10,
    &v31,
    &v32);
  v3 = v31;
  if ( v31 == *((_QWORD **)this + 11) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x37F,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
      (const char *)0x80070057LL,
      v23);
  v24 = 0LL;
  v23 = 0LL;
  std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
    (const void **)&v23,
    0LL,
    &v32);
  std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>(
    v28,
    v3 + 3);
  v4 = v29;
  v5 = v24;
  v6 = (_BYTE *)*((_QWORD *)&v23 + 1);
  v34 = v29;
  for ( i = (__int64 *)*v29; i != v4; i = (__int64 *)*i )
  {
    v8 = 0xCBF29CE484222325uLL;
    v9 = 0LL;
    v26 = *((_OWORD *)i + 1);
    do
    {
      v10 = (unsigned __int8)v27[v9++ - 16];
      v8 = 0x100000001B3LL * (v10 ^ v8);
    }
    while ( v9 < 8 );
    v11 = (_QWORD *)*((_QWORD *)this + 11);
    v12 = v8 & *((_QWORD *)this + 16);
    v13 = *((_QWORD *)this + 13);
    v14 = 2 * v12;
    v15 = v26;
    v16 = *(_QWORD **)(v13 + 8 * v14 + 8);
    if ( v16 == v11 )
    {
LABEL_11:
      v16 = 0LL;
    }
    else
    {
      while ( (_QWORD)v26 != v16[2] )
      {
        if ( v16 == *(_QWORD **)(v13 + 8 * v14) )
          goto LABEL_11;
        v16 = (_QWORD *)v16[1];
      }
    }
    if ( v16 )
      v11 = v16;
    std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
      v11 + 3,
      &v31,
      &v32);
    std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>,0>(
      v11 + 3,
      v27,
      v31);
    (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)v32 + 16LL))(v32);
    if ( !v11[5] )
    {
      v17 = (struct CInteractionTracker *)v11[2];
      v33 = v17;
      if ( v17 != v32 )
      {
        if ( v6 == v5 )
        {
          std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
            (const void **)&v23,
            v6,
            &v33);
          v5 = v24;
          v6 = (_BYTE *)*((_QWORD *)&v23 + 1);
        }
        else
        {
          *(_QWORD *)v6 = v17;
          v6 += 8;
          *((_QWORD *)&v23 + 1) = v6;
        }
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v4 = v34;
  }
  v18 = (_QWORD *)v23;
  v19 = (_QWORD *)v23;
  if ( (_BYTE *)v23 != v6 )
  {
    v20 = v25;
    do
    {
      v31 = (_QWORD *)*v19;
      v21 = v31;
      std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
        v20,
        &v33,
        &v31);
      std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>>>,0>(
        v20,
        &v34,
        v33);
      if ( v21[80] )
      {
        v22 = v21[80];
        v21[80] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
      ++v19;
    }
    while ( v19 != (_QWORD *)v6 );
  }
  std::_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>::~_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>(v28);
  if ( v18 )
    std::_Deallocate<16,0>(v18, (v5 - (_BYTE *)v18) & 0xFFFFFFFFFFFFFFF8uLL);
}
