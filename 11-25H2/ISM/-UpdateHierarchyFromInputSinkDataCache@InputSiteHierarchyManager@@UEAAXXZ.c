/*
 * XREFs of ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18001C760
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18001640C (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyMa.c)
 *     ??1?$_Deleted_copy_assign@U?$_Variant_destroy_layer_@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x1800172F8 (--1-$_Deleted_copy_assign@U-$_Variant_destroy_layer_@PEAXV-$unique_any_t@V-$unique_storage@U-$ha.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x18001B260 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?RemoveIdForNamespace@InputSite@@QEAAXW4InputSiteIdNamespace@@@Z @ 0x18001D2E8 (-RemoveIdForNamespace@InputSite@@QEAAXW4InputSiteIdNamespace@@@Z.c)
 *     ?_Tidy@?$vector@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18001D388 (-_Tidy@-$vector@V-$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@V-$allocator@V-$Com.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180022740 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18002314C (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@_KV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$a.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800232D0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$vector@V-$ComPtr@VInputSite@@@WRL@.c)
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x1800233D8 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KPEAUIMPC.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002582C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x18004534C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ??1InputSiteHierarchyEntry@InputSiteHierarchyManager@@QEAA@XZ @ 0x180063758 (--1InputSiteHierarchyEntry@InputSiteHierarchyManager@@QEAA@XZ.c)
 *     ?RemoveInputSinkFromParentList@InputSiteHierarchyManager@@AEAAX_K0@Z @ 0x180063B8C (-RemoveInputSinkFromParentList@InputSiteHierarchyManager@@AEAAX_K0@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x18009CD84 (atexit.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _Init_thread_footer @ 0x18009D758 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18009D7C0 (_Init_thread_header.c)
 *     ??0?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA@XZ @ 0x1800A7EF4 (--0-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18012DD28 (--$_Emplace_reallocate@AEBV-$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@-$vector.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache(InputSiteHierarchyManager *this)
{
  InputSiteHierarchyManager *n; // rbx
  _QWORD *i; // r14
  __int64 v3; // rsi
  InputSiteHierarchyManager *v4; // rdi
  InputSiteHierarchyManager *v5; // r13
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rdx
  InputSiteHierarchyManager *v9; // rsi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  __int64 v12; // rdi
  int v13; // ecx
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *j; // rbx
  const struct std::nothrow_t *v18; // rdx
  char *v19; // rax
  __int64 v20; // rax
  __int128 v21; // xmm2
  _QWORD *v22; // r12
  __int64 v23; // r15
  __int64 v24; // r13
  int (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v26)(_QWORD, GUID *, __int64 *); // rbx
  unsigned __int64 v27; // rcx
  InputSiteHierarchyManager *v28; // r12
  __int64 v29; // r11
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 *v32; // rbx
  __int64 *v33; // r8
  char v34; // al
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r11
  __int64 *v37; // r15
  _QWORD *v38; // rdx
  _QWORD *v39; // r14
  _QWORD *k; // rax
  size_t v41; // rdi
  _QWORD *v42; // r14
  _QWORD *m; // rdi
  __int64 **v44; // rdx
  __int64 *v45; // rax
  __int64 *v46; // rax
  __int64 v47; // rcx
  struct InputSiteManager *v48; // rax
  unsigned __int64 v49; // r15
  _QWORD *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rax
  struct InputSiteManager *InputSiteManager; // rax
  char *v54; // rdi
  _QWORD *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rax
  unsigned __int64 *v59; // rdx
  InputSiteHierarchyManager *v60; // r12
  unsigned __int64 v61; // rcx
  __int64 v62; // rdx
  _QWORD *v63; // r8
  _QWORD *v64; // rax
  __int64 v65; // rax
  unsigned int v66; // [rsp+20h] [rbp-E0h]
  int v67; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v68; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v69; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v70; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v71; // [rsp+40h] [rbp-C0h] BYREF
  InputSiteHierarchyManager *v72; // [rsp+48h] [rbp-B8h]
  int v73; // [rsp+50h] [rbp-B0h]
  InputSiteHierarchyManager *v74; // [rsp+58h] [rbp-A8h]
  __int128 v75; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v76; // [rsp+78h] [rbp-88h]
  InputSiteHierarchyManager *v77; // [rsp+80h] [rbp-80h]
  void *v78; // [rsp+88h] [rbp-78h]
  __int64 v79; // [rsp+90h] [rbp-70h]
  void *v80; // [rsp+98h] [rbp-68h]
  InputSiteHierarchyManager *v81; // [rsp+A0h] [rbp-60h]
  __int64 v82; // [rsp+A8h] [rbp-58h]
  char v83[16]; // [rsp+B0h] [rbp-50h] BYREF
  char v84[16]; // [rsp+C0h] [rbp-40h] BYREF
  char v85[16]; // [rsp+D0h] [rbp-30h] BYREF
  char v86[16]; // [rsp+E0h] [rbp-20h] BYREF
  char v87[16]; // [rsp+F0h] [rbp-10h] BYREF
  char v88[16]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v89; // [rsp+110h] [rbp+10h] BYREF
  char v90; // [rsp+118h] [rbp+18h]
  char v91; // [rsp+124h] [rbp+24h]
  char v92; // [rsp+129h] [rbp+29h]
  char v93; // [rsp+134h] [rbp+34h]
  char v94; // [rsp+170h] [rbp+70h]
  char v95; // [rsp+1B0h] [rbp+B0h]
  char v96; // [rsp+1F0h] [rbp+F0h]
  char v97; // [rsp+230h] [rbp+130h]
  char v98; // [rsp+270h] [rbp+170h]
  char v99; // [rsp+2B8h] [rbp+1B8h]
  __int128 v100; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int128 v101; // [rsp+2D0h] [rbp+1D0h]
  __int128 v102; // [rsp+2E0h] [rbp+1E0h]
  __int128 v103; // [rsp+2F0h] [rbp+1F0h]
  wil::details::in1diag3 *retaddr; // [rsp+338h] [rbp+238h]

  n = this;
  v72 = this;
  i = 0LL;
  v66 = 0;
  v73 = 0;
  if ( dword_180247CF0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 32LL) )
  {
LABEL_98:
    Init_thread_header(&dword_180247CF0);
    if ( dword_180247CF0 == -1 )
    {
      SRWLock.Ptr = 0LL;
      std::unordered_map<unsigned __int64,unsigned __int64>::unordered_map<unsigned __int64,unsigned __int64>(&unk_180247C88);
      qword_180247CC8 = i;
      xmmword_180247CD0 = 0LL;
      qword_180247CE0 = (__int64)i;
      byte_180247CE8 = 0;
      atexit(InputSinkDataCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__);
      Init_thread_footer(&dword_180247CF0);
    }
  }
  AcquireSRWLockExclusive(&SRWLock);
  v3 = *((_QWORD *)&xmmword_180247CD0 + 1);
  v79 = *((_QWORD *)&xmmword_180247CD0 + 1);
  *((_QWORD *)&xmmword_180247CD0 + 1) = i;
  v4 = (InputSiteHierarchyManager *)xmmword_180247CD0;
  v77 = (InputSiteHierarchyManager *)xmmword_180247CD0;
  *(_QWORD *)&xmmword_180247CD0 = i;
  v5 = (InputSiteHierarchyManager *)qword_180247CC8;
  v78 = qword_180247CC8;
  qword_180247CC8 = i;
  v80 = v78;
  v81 = v77;
  v82 = v79;
  ReleaseSRWLockExclusive(&SRWLock);
  if ( v5 == v4 )
    goto LABEL_18;
  v7 = *((_QWORD *)n + 12);
  if ( v7 )
  {
    v8 = (_QWORD *)*((_QWORD *)n + 11);
    if ( *((_QWORD *)n + 17) >> 3 <= v7 )
    {
      std::_List_node<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>,void *>>>(
        v7,
        v8);
      **((_QWORD **)n + 11) = *((_QWORD *)n + 11);
      *(_QWORD *)(*((_QWORD *)n + 11) + 8LL) = *((_QWORD *)n + 11);
      *((_QWORD *)n + 12) = i;
      v70 = *((_QWORD *)n + 11);
      std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,IMPCTarget *>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,IMPCTarget *>>>>>(
        *((_QWORD *)n + 13),
        *((_QWORD *)n + 14),
        &v70);
    }
    else
    {
      std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Unchecked_erase(
        (char *)n + 80,
        *v8,
        *((_QWORD *)n + 11));
    }
  }
  v74 = v5;
  v9 = v4;
  do
  {
    v10 = *((_QWORD *)v5 + 1);
    v68 = v10;
    v11 = HIBYTE(v10);
    i = (_QWORD *)(v10 >> 24);
    v12 = *((_QWORD *)v5 + 3);
    v71 = v12;
    v13 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 == 2 )
    {
      v14 = (_QWORD *)(*((_QWORD *)v72 + 5)
                     + 16
                     * (*((_QWORD *)v72 + 8) & (0x100000001B3LL
                                              * (v11 ^ (0x100000001B3LL
                                                      * (BYTE6(v10) ^ (0x100000001B3LL
                                                                     * (BYTE5(v10) ^ (0x100000001B3LL
                                                                                    * (BYTE4(v10) ^ (0x100000001B3LL * (BYTE3(v10) ^ (0x100000001B3LL * (BYTE2(v10) ^ (0x100000001B3LL * (BYTE1(v10) ^ (0x100000001B3LL * ((unsigned __int8)v10 ^ 0xCBF29CE484222325uLL))))))))))))))))));
      v15 = (_QWORD *)v14[1];
      v6 = *((_QWORD *)v72 + 3);
      if ( v15 == (_QWORD *)v6 )
      {
LABEL_25:
        v15 = 0LL;
      }
      else
      {
        while ( v10 != v15[2] )
        {
          if ( v15 == (_QWORD *)*v14 )
            goto LABEL_25;
          v15 = (_QWORD *)v15[1];
        }
      }
      if ( v15 )
      {
        if ( v15 != (_QWORD *)v6 )
        {
          v20 = v15[3];
          v21 = *((_OWORD *)v5 + 2);
          v100 = v21;
          v101 = *((_OWORD *)v5 + 3);
          v102 = *((_OWORD *)v5 + 4);
          v103 = *((_OWORD *)v5 + 5);
          if ( *(_BYTE *)(v20 + 480) )
          {
            *(_OWORD *)(v20 + 408) = v21;
            *(_OWORD *)(v20 + 424) = v101;
            *(_OWORD *)(v20 + 440) = v102;
            *(_OWORD *)(v20 + 456) = v103;
            if ( !*(_BYTE *)(v20 + 472) )
              *(_BYTE *)(v20 + 472) = 1;
            v75 = 0LL;
            v22 = 0LL;
            v76 = 0LL;
            v67 = v66 | 4;
            v73 = v67;
            v69 = 0LL;
            v23 = *(_QWORD *)(v20 + 488);
            v24 = *(_QWORD *)(v20 + 496);
            for ( i = 0LL; v23 != v24; v23 += 16LL )
            {
              v25 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v23 + 8);
              v26 = **v25;
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v69);
              if ( v26(v25, &GUID_ae83b6cb_def2_49fe_9564_e870d32281a5, &v69) >= 0 )
              {
                if ( i == v22 )
                {
                  std::vector<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate> const &>(
                    &v75,
                    i,
                    &v69);
                  v22 = v76;
                  i = (_QWORD *)*((_QWORD *)&v75 + 1);
                }
                else
                {
                  *i = v69;
                  if ( v69 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 8LL))(v69);
                  *((_QWORD *)&v75 + 1) = ++i;
                }
              }
            }
            v16 = v69;
            if ( v69 )
            {
              v69 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            }
            for ( j = (_QWORD *)v75; j != i; ++j )
              (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*j + 24LL))(*j, &v100);
            v66 = v67 & 0xFFFFFFFB;
            std::vector<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>::_Tidy(&v75);
            v5 = v74;
          }
        }
      }
      goto LABEL_16;
    }
    if ( !v13 )
    {
      InputSiteManager = ISMStatics::GetInputSiteManager();
      v89 = *((_QWORD *)v5 + 2);
      *((_QWORD *)v5 + 2) = 0LL;
      v90 = 1;
      v91 = 0;
      v92 = 0;
      v93 = 0;
      v94 = 0;
      v95 = 0;
      v96 = 0;
      v97 = 0;
      v98 = 0;
      v99 = 0;
      InputSiteManager::GetInputSiteFromInputSinkData((__int64)InputSiteManager, &v70, &v89, 1);
      v66 |= 3u;
      std::_Deleted_copy_assign<std::_Variant_destroy_layer_<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>,void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::~_Deleted_copy_assign<std::_Variant_destroy_layer_<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>,void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>((__int64)&v89);
      v54 = (char *)v72 + 16;
      v55 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                        (__int64)v72 + 16,
                        (__int64)v86,
                        &v68);
      Microsoft::WRL::ComPtr<InputSite>::operator=(*v55 + 24LL, &v70);
      v56 = v70;
      if ( v70 )
      {
        v70 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      }
      v57 = v71;
      *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                               (__int64)v54,
                               (__int64)v87,
                               &v68)
                + 32LL) = v57;
      v58 = std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
              (__int64)v54,
              (__int64)v88,
              &v71);
      v6 = *(_QWORD *)v58 + 40LL;
      v59 = *(unsigned __int64 **)(*(_QWORD *)v58 + 48LL);
      if ( v59 != *(unsigned __int64 **)(*(_QWORD *)v58 + 56LL) )
      {
        *v59 = v68;
        *(_QWORD *)(v6 + 8) += 8LL;
        goto LABEL_16;
      }
LABEL_104:
      std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
        v6,
        v59,
        &v68);
      goto LABEL_16;
    }
    v6 = (unsigned int)(v13 - 1);
    if ( !(_DWORD)v6 )
    {
      v60 = v72;
      v61 = 2
          * ((0x100000001B3LL
            * (v11 ^ (0x100000001B3LL
                    * (BYTE6(v10) ^ (0x100000001B3LL
                                   * (BYTE5(v10) ^ (0x100000001B3LL
                                                  * (BYTE4(v10) ^ (0x100000001B3LL
                                                                 * (BYTE3(v10) ^ (0x100000001B3LL
                                                                                * (BYTE2(v10) ^ (0x100000001B3LL
                                                                                               * (BYTE1(v10) ^ (0x100000001B3LL * ((unsigned __int8)v10 ^ 0xCBF29CE484222325uLL)))))))))))))))) & *((_QWORD *)v72 + 8));
      v62 = *((_QWORD *)v72 + 5);
      v63 = *(_QWORD **)(v62
                       + 16
                       * ((0x100000001B3LL
                         * (v11 ^ (0x100000001B3LL
                                 * (BYTE6(v10) ^ (0x100000001B3LL
                                                * (BYTE5(v10) ^ (0x100000001B3LL
                                                               * (BYTE4(v10) ^ (0x100000001B3LL
                                                                              * (BYTE3(v10) ^ (0x100000001B3LL
                                                                                             * (BYTE2(v10) ^ (0x100000001B3LL * (BYTE1(v10) ^ (0x100000001B3LL * ((unsigned __int8)v10 ^ 0xCBF29CE484222325uLL)))))))))))))))) & *((_QWORD *)v72 + 8))
                       + 8);
      v64 = (_QWORD *)*((_QWORD *)v72 + 3);
      if ( v63 == v64 )
      {
LABEL_90:
        v63 = 0LL;
      }
      else
      {
        while ( v10 != v63[2] )
        {
          if ( v63 == *(_QWORD **)(v62 + 8 * v61) )
            goto LABEL_90;
          v63 = (_QWORD *)v63[1];
        }
      }
      if ( v63 && v63 != v64 )
      {
        InputSiteHierarchyManager::RemoveInputSinkFromParentList(v72, v10, v63[4]);
        v12 = v71;
      }
      *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                               (__int64)v60 + 16,
                               (__int64)v84,
                               &v68)
                + 32LL) = v12;
      v65 = std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
              (__int64)v60 + 16,
              (__int64)v85,
              &v71);
      v6 = *(_QWORD *)v65 + 40LL;
      v59 = *(unsigned __int64 **)(*(_QWORD *)v65 + 48LL);
      if ( v59 != *(unsigned __int64 **)(*(_QWORD *)v65 + 56LL) )
      {
        *v59 = v68;
        *(_QWORD *)(v6 + 8) += 8LL;
        goto LABEL_16;
      }
      goto LABEL_104;
    }
    if ( (_DWORD)v6 != 2 )
      goto LABEL_16;
    v27 = 0x100000001B3LL
        * (BYTE6(v10) ^ (0x100000001B3LL
                       * (BYTE5(v10) ^ (0x100000001B3LL
                                      * (BYTE4(v10) ^ (0x100000001B3LL
                                                     * (BYTE3(v10) ^ (0x100000001B3LL
                                                                    * (BYTE2(v10) ^ (0x100000001B3LL
                                                                                   * (BYTE1(v10) ^ (0x100000001B3LL
                                                                                                  * ((unsigned __int8)v10 ^ 0xCBF29CE484222325uLL)))))))))))));
    v28 = v72;
    v29 = *((_QWORD *)v72 + 8);
    v30 = *((_QWORD *)v72 + 5);
    v31 = 2 * (v29 & (0x100000001B3LL * (v27 ^ v11)));
    v32 = *(__int64 **)(v30 + 16 * (v29 & (0x100000001B3LL * (v27 ^ v11))) + 8);
    v33 = (__int64 *)*((_QWORD *)v72 + 3);
    if ( v32 == v33 )
    {
LABEL_42:
      v32 = 0LL;
    }
    else
    {
      while ( v10 != v32[2] )
      {
        if ( v32 == *(__int64 **)(v30 + 8 * v31) )
          goto LABEL_42;
        v32 = (__int64 *)v32[1];
      }
    }
    if ( !v32 )
    {
      v32 = (__int64 *)*((_QWORD *)v72 + 3);
LABEL_101:
      v34 = 1;
      goto LABEL_46;
    }
    if ( v32 == v33 )
      goto LABEL_101;
    v34 = 0;
LABEL_46:
    if ( v34 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x76,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsitehierarchymanager.cpp",
        (const char *)0x8000FFFFLL,
        v66);
    v35 = v32[4];
    v36 = 2
        * ((0x100000001B3LL
          * (HIBYTE(v35) ^ (0x100000001B3LL
                          * (BYTE6(v35) ^ (0x100000001B3LL
                                         * (BYTE5(v35) ^ (0x100000001B3LL
                                                        * (BYTE4(v35) ^ (0x100000001B3LL
                                                                       * (BYTE3(v35) ^ (0x100000001B3LL
                                                                                      * (BYTE2(v35) ^ (0x100000001B3LL * ((0x100000001B3LL * ((unsigned __int8)v35 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v35))))))))))))))) & v29);
    v37 = *(__int64 **)(v30 + 8 * v36 + 8);
    if ( v37 == v33 )
    {
LABEL_51:
      v37 = 0LL;
    }
    else
    {
      while ( v35 != v37[2] )
      {
        if ( v37 == *(__int64 **)(v30 + 8 * v36) )
          goto LABEL_51;
        v37 = (__int64 *)v37[1];
      }
    }
    if ( v37 )
    {
      if ( v37 != v33 )
      {
        v38 = (_QWORD *)v37[6];
        v39 = (_QWORD *)v37[5];
        if ( v39 != v38 )
        {
          do
          {
            if ( *v39 == v10 )
              break;
            ++v39;
          }
          while ( v39 != v38 );
          if ( v39 != v38 )
          {
            for ( k = v39 + 1; k != v38; ++k )
            {
              if ( *k != v10 )
                *v39++ = *k;
            }
            if ( v39 != v38 )
            {
              v41 = v37[6] - (_QWORD)v38;
              memmove_0(v39, v38, v41);
              v37[6] = (__int64)v39 + v41;
            }
          }
        }
      }
    }
    v42 = (_QWORD *)v32[6];
    for ( m = (_QWORD *)v32[5]; m != v42; ++m )
      *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                               (__int64)v28 + 16,
                               (__int64)v83,
                               m)
                + 32LL) = 0LL;
    v44 = (__int64 **)(*((_QWORD *)v28 + 5)
                     + 16
                     * (*((_QWORD *)v28 + 8) & (0x100000001B3LL
                                              * (*((unsigned __int8 *)v32 + 23) ^ (0x100000001B3LL
                                                                                 * (*((unsigned __int8 *)v32 + 22) ^ (0x100000001B3LL * (*((unsigned __int8 *)v32 + 21) ^ (0x100000001B3LL * (*((unsigned __int8 *)v32 + 20) ^ (0x100000001B3LL * (*((unsigned __int8 *)v32 + 19) ^ (0x100000001B3LL * (*((unsigned __int8 *)v32 + 18) ^ (0x100000001B3LL * (*((unsigned __int8 *)v32 + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)v32 + 16) ^ 0xCBF29CE484222325uLL))))))))))))))))));
    v45 = *v44;
    if ( v44[1] == v32 )
    {
      if ( v45 == v32 )
      {
        v46 = (__int64 *)*((_QWORD *)v28 + 3);
        *v44 = v46;
      }
      else
      {
        v46 = (__int64 *)v32[1];
      }
      v44[1] = v46;
    }
    else if ( v45 == v32 )
    {
      *v44 = (__int64 *)*v32;
    }
    v47 = *v32;
    --*((_QWORD *)v28 + 4);
    *(_QWORD *)v32[1] = v47;
    *(_QWORD *)(v47 + 8) = v32[1];
    InputSiteHierarchyManager::InputSiteHierarchyEntry::~InputSiteHierarchyEntry((InputSiteHierarchyManager::InputSiteHierarchyEntry *)(v32 + 3));
    std::_Deallocate<16,0>((char *)v32, (const struct std::nothrow_t *)0x40);
    v48 = ISMStatics::GetInputSiteManager();
    v6 = 0LL;
    HIDWORD(v74) = 0;
    v49 = v68;
    v50 = (_QWORD *)*((_QWORD *)v48 + 7);
    for ( i = (_QWORD *)*((_QWORD *)v48 + 8); v50 != i; ++v50 )
    {
      v51 = *(_QWORD *)(*v50 + 24LL);
      v52 = *(_QWORD *)(*v50 + 16LL);
      if ( v52 != v51 )
      {
        do
        {
          if ( !*(_DWORD *)v52 )
            break;
          v52 += 16LL;
        }
        while ( v52 != v51 );
        if ( v52 != v51 && *(_QWORD *)(v52 + 8) == v49 )
          InputSite::RemoveIdForNamespace(*v50, 0LL);
      }
    }
LABEL_16:
    v5 = (InputSiteHierarchyManager *)((char *)v5 + 96);
    v74 = v5;
  }
  while ( v5 != v9 );
  v4 = v77;
  v5 = (InputSiteHierarchyManager *)v78;
  v3 = v79;
LABEL_18:
  if ( v5 )
  {
    for ( n = v5; n != v4; n = (InputSiteHierarchyManager *)((char *)n + 96) )
    {
      v6 = *((_QWORD *)n + 2);
      if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        NtCloseCompositionInputSink();
    }
    v18 = (const struct std::nothrow_t *)(32 * ((v3 - (__int64)v5) >> 5));
    v19 = (char *)v5;
    if ( (unsigned __int64)v18 >= 0x1000 )
    {
      v18 = (const struct std::nothrow_t *)((char *)v18 + 39);
      v5 = (InputSiteHierarchyManager *)*((_QWORD *)v5 - 1);
      if ( (unsigned __int64)(v19 - (char *)v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v6, v18);
        __debugbreak();
        goto LABEL_98;
      }
    }
    operator delete(v5, v18);
  }
}
