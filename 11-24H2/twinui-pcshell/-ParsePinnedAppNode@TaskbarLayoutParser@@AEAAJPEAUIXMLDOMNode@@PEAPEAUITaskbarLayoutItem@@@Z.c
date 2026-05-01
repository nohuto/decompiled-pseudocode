/*
 * XREFs of ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18032177C
 * Callers:
 *     ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x180321FC4 (-ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x180165DFC (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x180165EA8 (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ?TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C5560 (-TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1801CCE24 (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 *     ??$As@UITaskbarLayoutItemInternal@@@?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITaskbarLayoutItemInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802C21EC (--$As@UITaskbarLayoutItemInternal@@@-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtr.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@QEAA_NXZ @ 0x180322670 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wi.c)
 *     ?GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x180676794 (-GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     ?GetIntAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAH@Z @ 0x18067687C (-GetIntAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMEl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall TaskbarLayoutParser::ParsePinnedAppNode(
        const unsigned __int16 **this,
        struct IXMLDOMNode *a2,
        struct ITaskbarLayoutItem **a3)
{
  const struct _GUID *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  HRESULT (__stdcall *QueryInterface)(IXMLDOMNode *, const IID *const, void **); // rbx
  int v11; // eax
  bool *v12; // r9
  int BoolAttributeValue; // ebx
  const struct std::nothrow_t *v14; // rdx
  __int64 v15; // rdx
  int StringAttributeValue; // ebx
  const struct std::nothrow_t *v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // ebx
  const struct std::nothrow_t *v21; // rdx
  int v22; // ebx
  const struct std::nothrow_t *v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  int *v26; // r9
  int IntAttributeValue; // ebx
  const struct std::nothrow_t *v28; // rdx
  _BYTE v30[8]; // [rsp+20h] [rbp-60h] BYREF
  IXMLDOMElement v31; // [rsp+28h] [rbp-58h] BYREF
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *v32; // [rsp+30h] [rbp-50h] BYREF
  __int64 v33; // [rsp+38h] [rbp-48h] BYREF
  void *v34; // [rsp+40h] [rbp-40h] BYREF
  std::_Ref_count_base *v35[2]; // [rsp+48h] [rbp-38h] BYREF
  std::_Ref_count_base *v36[2]; // [rsp+58h] [rbp-28h] BYREF
  struct IXMLDOMElement v37; // [rsp+68h] [rbp-18h] BYREF
  __int128 v38; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *a3 = 0LL;
  v34 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
  v7 = TaskbarLayoutItem_CreateInstance(v6, &v34);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD1,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v7);
LABEL_29:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
    return v8;
  }
  v33 = 0LL;
  v9 = Microsoft::WRL::ComPtr<ITaskbarLayoutItem>::As<ITaskbarLayoutItemInternal>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v34,
         &v33);
  v8 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD4,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v9);
LABEL_28:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    goto LABEL_29;
  }
  v32 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
  v11 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, WindowsInternal::Shell::UnifiedTile::CuratedTileCollections **))QueryInterface)(
          a2,
          &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
          &v32);
  v8 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v11);
LABEL_27:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
    goto LABEL_28;
  }
  v30[0] = 0;
  _bstr_t::_bstr_t((_bstr_t *)&v31, this[6]);
  BoolAttributeValue = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                         v32,
                         &v31,
                         (const struct _bstr_t *)v30,
                         v12);
  _bstr_t::_Free((_bstr_t *)&v31, v14);
  if ( BoolAttributeValue >= 0 )
  {
    LOBYTE(v15) = v30[0];
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 104LL))(v33, v15);
  }
  *(_OWORD *)v35 = 0LL;
  *(_OWORD *)v36 = 0LL;
  v38 = 0LL;
  _bstr_t::_bstr_t((_bstr_t *)&v31, this[2]);
  StringAttributeValue = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(
                           (__int64)v32,
                           (__int64 **)&v31,
                           v35);
  _bstr_t::_Free((_bstr_t *)&v31, v17);
  if ( StringAttributeValue < 0 )
  {
    _bstr_t::_bstr_t((_bstr_t *)&v31, this[3]);
    v20 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(
            (__int64)v32,
            (__int64 **)&v31,
            v35);
    _bstr_t::_Free((_bstr_t *)&v31, v21);
    if ( v20 < 0 )
    {
      _bstr_t::_bstr_t((_bstr_t *)&v31, this[4]);
      v22 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(
              (__int64)v32,
              (__int64 **)&v31,
              v36);
      _bstr_t::_Free((_bstr_t *)&v31, v23);
      if ( v22 < 0 )
      {
        if ( v36[1] )
          std::_Ref_count_base::_Decref(v36[1]);
        if ( v35[1] )
          std::_Ref_count_base::_Decref(v35[1]);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
        return 2147500037LL;
      }
      v24 = (*(__int64 (**)(void))(*(_QWORD *)v33 + 80LL))();
      v8 = v24;
      if ( v24 < 0 )
      {
        v25 = 251LL;
        goto LABEL_23;
      }
    }
    else
    {
      v18 = (*(__int64 (**)(void))(*(_QWORD *)v33 + 96LL))();
      v8 = v18;
      if ( v18 < 0 )
      {
        v19 = 247LL;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v18 = (*(__int64 (**)(void))(*(_QWORD *)v33 + 72LL))();
    v8 = v18;
    if ( v18 < 0 )
    {
      v19 = 243LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v18);
LABEL_25:
      if ( v35[1] )
        std::_Ref_count_base::_Decref(v35[1]);
      goto LABEL_27;
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetImpl'::`2'::impl) )
  {
    LODWORD(v31.lpVtbl) = -1;
    _bstr_t::_bstr_t((_bstr_t *)&v37, this[7]);
    IntAttributeValue = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetIntAttributeValue(
                          v32,
                          &v37,
                          (const struct _bstr_t *)&v31,
                          v26);
    _bstr_t::_Free((_bstr_t *)&v37, v28);
    if ( IntAttributeValue >= 0 )
    {
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 120LL))(v33, LODWORD(v31.lpVtbl));
      v8 = v24;
      if ( v24 < 0 )
      {
        v25 = 263LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
          (const char *)(unsigned int)v24);
        if ( v36[1] )
          std::_Ref_count_base::_Decref(v36[1]);
        goto LABEL_25;
      }
    }
  }
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v34);
  *a3 = (struct ITaskbarLayoutItem *)v34;
  if ( v36[1] )
    std::_Ref_count_base::_Decref(v36[1]);
  if ( v35[1] )
    std::_Ref_count_base::_Decref(v35[1]);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
  return 0LL;
}
