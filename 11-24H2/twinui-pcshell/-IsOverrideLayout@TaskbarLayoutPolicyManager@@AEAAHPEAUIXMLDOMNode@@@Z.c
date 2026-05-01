/*
 * XREFs of ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x18031EF38
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180166010 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180167450 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x180165DFC (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x180165EA8 (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1801C3264 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1801CCE24 (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
_BOOL8 __fastcall TaskbarLayoutPolicyManager::IsOverrideLayout(const unsigned __int16 **this, struct IXMLDOMNode *a2)
{
  HRESULT (__stdcall *QueryInterface)(IXMLDOMNode *, const IID *const, void **); // rbx
  int StringAttributeValue; // ebx
  const struct std::nothrow_t *v6; // rdx
  BOOL v7; // ebx
  std::_Ref_count_base *v9[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+58h] [rbp+28h] BYREF
  __int64 *v11; // [rsp+60h] [rbp+30h] BYREF

  v10 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  if ( ((int (__fastcall *)(struct IXMLDOMNode *, GUID *, __int64 *))QueryInterface)(
         a2,
         &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
         &v10) < 0 )
  {
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  *(_OWORD *)v9 = 0LL;
  _bstr_t::_bstr_t((_bstr_t *)&v11, this[19]);
  StringAttributeValue = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(
                           v10,
                           &v11,
                           v9);
  _bstr_t::_Free((_bstr_t *)&v11, v6);
  if ( StringAttributeValue < 0 )
  {
    if ( v9[1] )
      std::_Ref_count_base::_Decref(v9[1]);
    goto LABEL_7;
  }
  v7 = std::wstring::compare((char *)v9[0], (char *)L"Replace") == 0;
  if ( v9[1] )
    std::_Ref_count_base::_Decref(v9[1]);
LABEL_8:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  return v7;
}
