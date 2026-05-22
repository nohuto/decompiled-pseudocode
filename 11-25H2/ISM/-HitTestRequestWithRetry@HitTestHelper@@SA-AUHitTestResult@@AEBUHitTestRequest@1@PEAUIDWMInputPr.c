/*
 * XREFs of ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180019880
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180018CC0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801978A0 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?HitTestForPoint@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@@Z @ 0x180197A70 (-HitTestForPoint@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@@Z.c)
 *     ?HitTestForPointAndType@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@K@Z @ 0x180197AF0 (-HitTestForPointAndType@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@K@Z.c)
 *     ?HitTestForPointTypeAndWorkspace@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@KK@Z @ 0x180197B80 (-HitTestForPointTypeAndWorkspace@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@KK@Z.c)
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x1801982AC (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x180198594 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180019F70 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x18001A740 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18001AC50 (-GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@.c)
 *     ??$_Emplace_reallocate@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18001AF80 (--$_Emplace_reallocate@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VI.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18004F640 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@.c)
 *     ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAA@XZ @ 0x180057A6C (--1-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B5DC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Construct_n@$$V@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@AEAAX_K@Z @ 0x180196344 (--$_Construct_n@$$V@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@AEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *__fastcall HitTestHelper::HitTestRequestWithRetry(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5)
{
  _QWORD *v8; // r13
  __int64 v9; // rbx
  unsigned __int8 v10; // al
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 *v17; // rbx
  const struct std::nothrow_t *v18; // rdx
  __int64 v19; // rax
  const struct std::nothrow_t *v20; // rdx
  __int64 v21; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 i; // rax
  char v26; // cl
  char v27; // al
  _QWORD *v28; // rax
  _QWORD *v29; // r8
  const struct std::nothrow_t *v30; // rdx
  __int64 v31; // rax
  _BYTE *v32; // rsi
  _BYTE *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rax
  void *v36[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v37; // [rsp+30h] [rbp-D0h]
  __int64 v38; // [rsp+38h] [rbp-C8h]
  void *v39; // [rsp+40h] [rbp-C0h]
  __int128 v40; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-A8h]
  void *v42[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+70h] [rbp-90h]
  __int64 *v44; // [rsp+78h] [rbp-88h]
  _QWORD *v45; // [rsp+80h] [rbp-80h]
  unsigned __int8 v46; // [rsp+90h] [rbp-70h]
  int v47; // [rsp+91h] [rbp-6Fh]
  __int16 v48; // [rsp+95h] [rbp-6Bh]
  char v49; // [rsp+97h] [rbp-69h]
  __int64 v50; // [rsp+98h] [rbp-68h] BYREF
  __int128 v51; // [rsp+A0h] [rbp-60h]
  __int128 v52; // [rsp+B0h] [rbp-50h]
  __int128 v53; // [rsp+C0h] [rbp-40h]
  __int128 v54; // [rsp+D0h] [rbp-30h]
  __int128 v55; // [rsp+E0h] [rbp-20h]
  __int128 v56; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v57; // [rsp+100h] [rbp+0h]
  __int128 v58; // [rsp+110h] [rbp+10h] BYREF
  __int128 v59; // [rsp+120h] [rbp+20h]
  __int128 v60; // [rsp+130h] [rbp+30h]
  __int128 v61; // [rsp+140h] [rbp+40h]
  __int128 v62; // [rsp+150h] [rbp+50h]
  __int128 v63; // [rsp+160h] [rbp+60h]
  __int128 v64; // [rsp+170h] [rbp+70h]
  __int128 v65; // [rsp+180h] [rbp+80h]
  __int64 v66; // [rsp+190h] [rbp+90h]
  _BYTE v67[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v68[160]; // [rsp+1E0h] [rbp+E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D8h] [rbp+1D8h]

  v8 = a1;
  v45 = a1;
  v39 = a1;
  v44 = a5;
  v9 = 0LL;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v67, "ISMHitTest", 0LL);
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = *(_OWORD *)a2;
  v59 = *((_OWORD *)a2 + 1);
  v60 = *((_OWORD *)a2 + 2);
  v61 = *((_OWORD *)a2 + 3);
  v62 = *((_OWORD *)a2 + 4);
  v63 = *((_OWORD *)a2 + 5);
  v64 = *((_OWORD *)a2 + 6);
  v65 = *((_OWORD *)a2 + 7);
  v66 = a2[16];
  memset_0(v68, 0, sizeof(v68));
  v40 = 0LL;
  v41 = 0LL;
  *((_QWORD *)&v65 + 1) = v68;
  LODWORD(v66) = 20;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))*a3)(a3, &v58);
  v11 = v10;
  v46 = v10;
  v12 = 0LL;
  v50 = *((_QWORD *)&v59 + 1);
  v13 = (unsigned int)v66;
  if ( (unsigned int)v66 <= 0x14 )
  {
    v39 = (void *)v40;
    goto LABEL_3;
  }
  while ( 1 )
  {
    *(_OWORD *)v36 = 0LL;
    v37 = v12;
    std::vector<_LUID>::_Construct_n<>(v36, v13);
    std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::~_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>(&v40);
    v32 = v36[0];
    v39 = v36[0];
    v40 = *(_OWORD *)v36;
    v33 = v36[1];
    v41 = v37;
    *(_OWORD *)v36 = 0LL;
    v37 = 0LL;
    std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::~_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>(v36);
    v58 = *(_OWORD *)a2;
    v59 = *((_OWORD *)a2 + 1);
    v60 = *((_OWORD *)a2 + 2);
    v61 = *((_OWORD *)a2 + 3);
    v62 = *((_OWORD *)a2 + 4);
    v63 = *((_OWORD *)a2 + 5);
    v64 = *((_OWORD *)a2 + 6);
    v65 = *((_OWORD *)a2 + 7);
    HIDWORD(v66) = HIDWORD(a2[16]);
    *((_QWORD *)&v65 + 1) = v32;
    LODWORD(v66) = (v33 - v32) >> 3;
    v46 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))*a3)(a3, &v58);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::reset(
      &v50,
      *((_QWORD *)&v59 + 1));
    v11 = v46;
    v9 = v41;
LABEL_3:
    if ( (_BYTE)v11 )
    {
      v51 = v60;
      v52 = v61;
      v53 = v62;
      v54 = v63;
      *(_QWORD *)&v55 = v59;
      BYTE8(v55) = (BYTE4(v64) & 1) != 0;
      HIDWORD(v55) = v64;
    }
    a2 = v44;
    (*(void (__fastcall **)(__int64 *))(*v44 + 40))(v44);
    if ( !(_BYTE)v11 )
    {
      a3 = (__int64 *)*((_QWORD *)&v56 + 1);
      goto LABEL_20;
    }
    InputSiteManager::GetInputSiteForEvaluationListFromDITCallbackStruct(a4, v36, &v58);
    v15 = (__int64)v36[0];
    a3 = (__int64 *)*((_QWORD *)&v56 + 1);
    a4 = v57;
    if ( v36[0] == v36[1] )
      break;
    v11 = (unsigned __int64)v36[1];
    while ( 1 )
    {
      v23 = v38;
      v24 = *(_QWORD *)(*(_QWORD *)v15 + 24LL);
      for ( i = *(_QWORD *)(*(_QWORD *)v15 + 16LL); i != v24; i += 16LL )
      {
        if ( !*(_DWORD *)i )
          break;
      }
      v26 = 0;
      if ( i == v24 )
      {
        v27 = 1;
      }
      else
      {
        v23 = *(_QWORD *)(i + 8);
        v38 = v23;
        v26 = 1;
        v27 = 0;
      }
      if ( v27 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xEC,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\components\\hittesthelper\\hittesthelper.cpp",
          (const char *)retaddr);
      if ( !v26 )
        std::_Throw_bad_optional_access();
      v28 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, void **, __int64, wil::details::in1diag3 *))(*a2 + 24))(
                        a2,
                        v42,
                        v23,
                        retaddr);
      v29 = v28;
      if ( a3 == a4 )
      {
        std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Emplace_reallocate<std::vector<Microsoft::WRL::ComPtr<InputSite>>>(
          &v56,
          a3,
          v28);
        a3 = (__int64 *)*((_QWORD *)&v56 + 1);
        a4 = v57;
      }
      else
      {
        v34 = v28[2];
        v28[2] = 0LL;
        v14 = v28[1];
        v28[1] = 0LL;
        v35 = *v28;
        *v29 = 0LL;
        *a3 = v35;
        a3[1] = v14;
        a3[2] = v34;
        a3 += 3;
        *((_QWORD *)&v56 + 1) = a3;
      }
      v17 = (__int64 *)v42[0];
      if ( v42[0] )
        break;
LABEL_50:
      v15 += 8LL;
      if ( v15 == v11 )
      {
        v11 = v46;
        v15 = (__int64)v36[0];
        goto LABEL_7;
      }
    }
    a2 = (__int64 *)v42[1];
    if ( v42[0] != v42[1] )
    {
      do
      {
        v14 = *v17;
        if ( *v17 )
        {
          *v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        ++v17;
      }
      while ( v17 != a2 );
      v8 = v45;
      v17 = (__int64 *)v42[0];
    }
    v30 = (const struct std::nothrow_t *)(8 * ((v43 - (__int64)v17) >> 3));
    v31 = (__int64)v17;
    if ( (unsigned __int64)v30 < 0x1000 )
    {
LABEL_49:
      operator delete(v17, v30);
      a2 = v44;
      goto LABEL_50;
    }
LABEL_57:
    v30 = (const struct std::nothrow_t *)((char *)v30 + 39);
    v17 = (__int64 *)*(v17 - 1);
    if ( (unsigned __int64)(v31 - (_QWORD)v17 - 8) <= 0x1F )
      goto LABEL_49;
    v13 = _o__invalid_parameter_noinfo_noreturn(v14, v30);
  }
LABEL_7:
  if ( (__int64 *)v56 != a3 )
    goto LABEL_15;
  *(_OWORD *)v42 = 0LL;
  v43 = 0LL;
  if ( a3 == a4 )
  {
    std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Emplace_reallocate<std::vector<Microsoft::WRL::ComPtr<InputSite>>>(
      &v56,
      a3,
      v42);
    a3 = (__int64 *)*((_QWORD *)&v56 + 1);
    v11 = v46;
    v16 = v43;
    a4 = (__int64 *)v42[1];
    a2 = (__int64 *)v42[0];
  }
  else
  {
    v16 = 0LL;
    a4 = 0LL;
    a2 = 0LL;
    *a3 = 0LL;
    a3[1] = 0LL;
    a3[2] = 0LL;
    a3 += 3;
    *((_QWORD *)&v56 + 1) = a3;
  }
  if ( !a2 )
    goto LABEL_14;
  v17 = a2;
  if ( a2 != a4 )
  {
    do
    {
      v14 = *v17;
      if ( *v17 )
      {
        *v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      ++v17;
    }
    while ( v17 != a4 );
    v8 = v45;
  }
  v15 = (v16 - (__int64)a2) >> 3;
  v18 = (const struct std::nothrow_t *)(8 * v15);
  v19 = (__int64)a2;
  if ( (unsigned __int64)(8 * v15) >= 0x1000 )
    goto LABEL_55;
  while ( 1 )
  {
    operator delete(a2, v18);
LABEL_14:
    v15 = (__int64)v36[0];
LABEL_15:
    if ( !v15 )
      goto LABEL_19;
    v17 = (__int64 *)v36[1];
    if ( (void *)v15 != v36[1] )
    {
      do
      {
        v14 = *(_QWORD *)v15;
        if ( *(_QWORD *)v15 )
        {
          *(_QWORD *)v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        v15 += 8LL;
      }
      while ( (__int64 *)v15 != v17 );
      v15 = (__int64)v36[0];
    }
    v20 = (const struct std::nothrow_t *)(8 * ((v37 - v15) >> 3));
    v21 = v15;
    if ( (unsigned __int64)v20 < 0x1000 )
      break;
    v20 = (const struct std::nothrow_t *)((char *)v20 + 39);
    v15 = *(_QWORD *)(v15 - 8);
    if ( (unsigned __int64)(v21 - v15 - 8) <= 0x1F )
      break;
    v19 = _o__invalid_parameter_noinfo_noreturn(v14, v20);
LABEL_55:
    v18 = (const struct std::nothrow_t *)((char *)v18 + 39);
    a2 = (__int64 *)*(a2 - 1);
    if ( (unsigned __int64)(v19 - (_QWORD)a2 - 8) > 0x1F )
    {
      v31 = _o__invalid_parameter_noinfo_noreturn(v14, v18);
      __debugbreak();
      goto LABEL_57;
    }
  }
  operator delete((void *)v15, v20);
LABEL_19:
  v9 = v41;
LABEL_20:
  *(_BYTE *)v8 = v11;
  v8[1] = v50;
  *((_OWORD *)v8 + 1) = v51;
  *((_OWORD *)v8 + 2) = v52;
  *((_OWORD *)v8 + 3) = v53;
  *((_OWORD *)v8 + 4) = v54;
  v8[10] = v55;
  *((_BYTE *)v8 + 88) = BYTE8(v55);
  *((_DWORD *)v8 + 23) = HIDWORD(v55);
  v8[12] = v56;
  v8[13] = a3;
  v8[14] = v57;
  if ( v39 )
    std::_Deallocate<16,0>(v39, 8 * ((v9 - (__int64)v39) >> 3));
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v67);
  return v8;
}
