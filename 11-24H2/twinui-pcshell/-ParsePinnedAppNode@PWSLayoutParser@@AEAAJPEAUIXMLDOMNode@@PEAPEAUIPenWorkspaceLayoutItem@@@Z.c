/*
 * XREFs of ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1803F92A0
 * Callers:
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803F8C60 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1801358F8 (-InternalAddRef@-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x180165DFC (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x180165EA8 (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18019541C (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1801CCE24 (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 *     ?PWSLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803F9960 (-PWSLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PWSLayoutParser::ParsePinnedAppNode(
        const unsigned __int16 **this,
        struct IXMLDOMNode *a2,
        struct IPenWorkspaceLayoutItem **a3)
{
  const struct _GUID *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  void *v9; // rbx
  __int64 (__fastcall *v10)(void *, GUID *, __int64 *); // rdi
  int v11; // eax
  HRESULT (__stdcall *QueryInterface)(IXMLDOMNode *, const IID *const, void **); // rbx
  int v13; // eax
  int StringAttributeValue; // ebx
  const struct std::nothrow_t *v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 (__fastcall *v18)(__int64, _QWORD *); // r9
  int v19; // eax
  int v20; // ebx
  const struct std::nothrow_t *v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // r8
  __int64 (__fastcall *v24)(__int64, _QWORD *); // r9
  int v25; // eax
  void *v27; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v28; // [rsp+28h] [rbp-28h] BYREF
  std::_Ref_count_base *v29[2]; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v30[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v32; // [rsp+90h] [rbp+40h] BYREF
  __int64 v33; // [rsp+98h] [rbp+48h] BYREF

  *a3 = 0LL;
  v27 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v27);
  v7 = PWSLayoutItem_CreateInstance(v6, &v27);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v7);
LABEL_18:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v27);
    return v8;
  }
  v32 = 0LL;
  v9 = v27;
  v10 = **(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v27;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  v11 = v10(v9, &GUID_ec14b3b3_3cd8_428a_a455_490250210fd2, &v32);
  v8 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD1,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v11);
LABEL_17:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    goto LABEL_18;
  }
  v33 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
  v13 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, __int64 *))QueryInterface)(
          a2,
          &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
          &v33);
  v8 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD4,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v13);
LABEL_16:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    goto LABEL_17;
  }
  *(_OWORD *)v29 = 0LL;
  *(_OWORD *)v30 = 0LL;
  _bstr_t::_bstr_t((_bstr_t *)&v28, this[2]);
  StringAttributeValue = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(
                           v33,
                           &v28,
                           v29);
  _bstr_t::_Free((_bstr_t *)&v28, v15);
  if ( StringAttributeValue >= 0 )
  {
    v16 = std::wstring::c_str((_QWORD *)v29[0]);
    v19 = v18(v17, v16);
    v8 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD9,
        (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v19);
LABEL_14:
      if ( v29[1] )
        std::_Ref_count_base::_Decref(v29[1]);
      goto LABEL_16;
    }
LABEL_19:
    Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>::InternalAddRef((__int64 *)&v27);
    *a3 = (struct IPenWorkspaceLayoutItem *)v27;
    if ( v30[1] )
      std::_Ref_count_base::_Decref(v30[1]);
    if ( v29[1] )
      std::_Ref_count_base::_Decref(v29[1]);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v27);
    return 0LL;
  }
  _bstr_t::_bstr_t((_bstr_t *)&v28, this[3]);
  v20 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(v33, &v28, v30);
  _bstr_t::_Free((_bstr_t *)&v28, v21);
  if ( v20 >= 0 )
  {
    v22 = std::wstring::c_str((_QWORD *)v30[0]);
    v25 = v24(v23, v22);
    v8 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDD,
        (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v25);
      if ( v30[1] )
        std::_Ref_count_base::_Decref(v30[1]);
      goto LABEL_14;
    }
    goto LABEL_19;
  }
  if ( v30[1] )
    std::_Ref_count_base::_Decref(v30[1]);
  if ( v29[1] )
    std::_Ref_count_base::_Decref(v29[1]);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v27);
  return 2147500037LL;
}
