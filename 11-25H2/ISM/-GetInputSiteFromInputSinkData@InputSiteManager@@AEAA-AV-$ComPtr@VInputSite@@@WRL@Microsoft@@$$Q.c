/*
 * XREFs of ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x18001B260
 * Callers:
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x180017344 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18001C760 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     ??1?$_Deleted_copy_assign@U?$_Variant_destroy_layer_@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x1800172F8 (--1-$_Deleted_copy_assign@U-$_Variant_destroy_layer_@PEAXV-$unique_any_t@V-$unique_storage@U-$ha.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180017320 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositi.c)
 *     ?GetInputSiteFromIds@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$span@UInputSiteId@@$0?0@gsl@@@Z @ 0x18001AEC0 (-GetInputSiteFromIds@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$span@UInpu.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180022740 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$_Emplace_reallocate@PEAVInputSite@@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@AEAAPEAPEAVInputSite@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x18003A084 (--$_Emplace_reallocate@PEAVInputSite@@@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@.c)
 *     ??$Make@VInputSite@@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputSite@@@12@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAK$$QEAPEAVInputSiteManager@@@Z @ 0x18003AF98 (--$Make@VInputSite@@AEAV-$span@UInputSiteId@@$0-0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Mi.c)
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x180052110 (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B5DC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x18009B664 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800F1618 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?GetDuplicatedInputSinkHandle@LegacyInputSinkData@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@XZ @ 0x18012E28C (-GetDuplicatedInputSinkHandle@LegacyInputSinkData@@QEBA-AV-$unique_any_t@V-$unique_storage@U-$ha.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall InputSiteManager::GetInputSiteFromInputSinkData(__int64 a1, __int64 *a2, _BYTE *a3, char a4)
{
  __m128i *i; // r14
  __int64 v9; // rdx
  _BYTE *v10; // rdi
  char v11; // al
  char v12; // cl
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int128 v15; // xmm6
  char **v16; // rdx
  char *v17; // rcx
  __int64 v18; // rdi
  __int64 *DuplicatedInputSinkHandle; // rax
  char *v21; // [rsp+28h] [rbp-E0h] BYREF
  int TargetHandle; // [rsp+30h] [rbp-D8h]
  HANDLE TargetHandle_8[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  char v27; // [rsp+70h] [rbp-98h]
  char v28; // [rsp+7Ch] [rbp-8Ch]
  char v29; // [rsp+81h] [rbp-87h]
  char v30; // [rsp+8Ch] [rbp-7Ch]
  char v31; // [rsp+C8h] [rbp-40h]
  char v32; // [rsp+108h] [rbp+0h]
  char v33; // [rsp+148h] [rbp+40h]
  char v34; // [rsp+188h] [rbp+80h]
  char v35; // [rsp+1C8h] [rbp+C0h]
  char v36; // [rsp+210h] [rbp+108h]
  __int128 v37; // [rsp+218h] [rbp+110h] BYREF
  __int128 v38; // [rsp+228h] [rbp+120h]
  __int128 v39; // [rsp+238h] [rbp+130h]
  __int64 v40; // [rsp+248h] [rbp+140h]
  _OWORD v41[4]; // [rsp+258h] [rbp+150h] BYREF
  __m128i si128; // [rsp+298h] [rbp+190h] BYREF
  int v43; // [rsp+2A8h] [rbp+1A0h] BYREF
  char *v44; // [rsp+2B0h] [rbp+1A8h]
  int v45; // [rsp+2B8h] [rbp+1B0h]
  __int64 v46; // [rsp+2C0h] [rbp+1B8h]
  wil::details::in1diag3 *retaddr; // [rsp+320h] [rbp+218h]

  v24[1] = a2;
  TargetHandle = 0;
  v43 = 0;
  if ( !a3[36] )
  {
    v21 = 0LL;
    if ( a3[8] >= 2u )
      std::_Throw_bad_variant_access();
    NtQueryCompositionInputSinkLuid(*(_QWORD *)a3, &v21);
    *(_QWORD *)(a3 + 28) = v21;
    if ( a3[36] )
      goto LABEL_6;
    a3[36] = 1;
  }
  if ( !a3[36] )
    std::_Throw_bad_optional_access();
LABEL_6:
  v21 = *(char **)(a3 + 28);
  v44 = v21;
  v45 = 1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  for ( i = &si128; i != (__m128i *)&v43; i = (__m128i *)((char *)i + 4) )
  {
    v9 = i->m128i_u32[0];
    switch ( (_DWORD)v9 )
    {
      case 1:
        v10 = a3 + 40;
LABEL_10:
        v11 = v10[56];
        v12 = v11 == 0;
        goto LABEL_11;
      case 2:
        v10 = a3 + 104;
        goto LABEL_10;
      case 3:
        v10 = a3 + 168;
        goto LABEL_10;
    }
    v12 = v9 - 4;
    if ( (_DWORD)v9 == 4 )
    {
      v10 = a3 + 232;
      goto LABEL_10;
    }
    if ( (_DWORD)v9 != 5 )
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0xB7,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
        "Invalid input type provided.",
        v21);
    v10 = a3 + 296;
    v11 = a3[352];
LABEL_11:
    if ( v12 )
    {
      v37 = 0LL;
      v38 = 0LL;
      v39 = 0LL;
      v40 = 0LL;
      memset(v41, 0, sizeof(v41));
      if ( a3[8] > 1u )
        std::_Throw_bad_variant_access();
      NtQueryCompositionInputQueueAndTransform(*(_QWORD *)a3, v9, &v37, v41);
      v13 = v38;
      *(_OWORD *)v10 = v37;
      *((_OWORD *)v10 + 1) = v13;
      *(_QWORD *)&v13 = v40;
      *((_OWORD *)v10 + 2) = v39;
      *((_QWORD *)v10 + 6) = v13;
      if ( !v10[56] )
        v10[56] = 1;
    }
    else if ( !v11 )
    {
      std::_Throw_bad_optional_access();
    }
    if ( (unsigned int)(*(_DWORD *)v10 - 2) <= 1 )
    {
      v14 = *((_QWORD *)v10 + 1);
      goto LABEL_17;
    }
  }
  LODWORD(v14) = 0;
LABEL_17:
  v46 = (unsigned int)v14;
  TargetHandle_8[0] = HANDLE_FLAG_PROTECT_FROM_CLOSE;
  TargetHandle_8[1] = &v43;
  if ( !(_DWORD)v14 )
  {
    TargetHandle_8[0] = HANDLE_FLAG_INHERIT;
    TargetHandle_8[1] = &v43;
  }
  v15 = *(_OWORD *)TargetHandle_8;
  InputSiteManager::GetInputSiteFromIds(a1, a2, TargetHandle_8);
  TargetHandle = 1;
  if ( !*a2 && a4 )
  {
    v25 = v15;
    LODWORD(v24[0]) = 0;
    TargetHandle_8[0] = (HANDLE)a1;
    Microsoft::WRL::Details::Make<InputSite,gsl::span<InputSiteId,-1> &,unsigned long &,InputSiteManager *>(
      &v21,
      &v25,
      v24,
      TargetHandle_8);
    TargetHandle = 5;
    TargetHandle_8[0] = v21;
    v16 = *(char ***)(a1 + 64);
    if ( v16 == *(char ***)(a1 + 72) )
    {
      std::vector<InputSite *>::_Emplace_reallocate<InputSite *>(a1 + 56, v16, TargetHandle_8);
    }
    else
    {
      *v16 = v21;
      *(_QWORD *)(a1 + 64) += 8LL;
    }
    Microsoft::WRL::ComPtr<InputSite>::operator=(a2, &v21);
    TargetHandle = 1;
    v17 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  v18 = *a2;
  if ( *a2 && !*(_BYTE *)(v18 + 480) )
  {
    if ( a3[8] == 1 )
    {
      InputSite::SetLegacyInputSinkData(*a2, a3);
    }
    else
    {
      DuplicatedInputSinkHandle = (__int64 *)LegacyInputSinkData::GetDuplicatedInputSinkHandle(
                                               (LegacyInputSinkData *)a3,
                                               TargetHandle_8);
      v26 = *DuplicatedInputSinkHandle;
      *DuplicatedInputSinkHandle = 0LL;
      v27 = 1;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      InputSite::SetLegacyInputSinkData(v18, &v26);
      std::_Deleted_copy_assign<std::_Variant_destroy_layer_<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>,void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::~_Deleted_copy_assign<std::_Variant_destroy_layer_<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>,void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>((__int64)&v26);
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>(TargetHandle_8);
    }
  }
  return a2;
}
