/*
 * XREFs of ?ParseSelectionAttributes@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2345@@Z @ 0x180677540
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$As@UIXMLDOMElement@@@?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIXMLDOMElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18031DC1C (--$As@UIXMLDOMElement@@@-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIXML.c)
 *     ?GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x180676794 (-GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     ?GetTokenizedStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEBV?$function@$$A6AXPEAG@Z@std@@@Z @ 0x180676950 (-GetTokenizedStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJP.c)
 *     ?GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x180676A24 (-GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::ParseSelectionAttributes(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *),
        __int64 a3)
{
  int v5; // eax
  unsigned int v6; // esi
  unsigned int *v7; // r9
  __int64 (__fastcall ***v8)(); // rdx
  bool *v9; // r9
  _QWORD *v10; // rdx
  bool *v11; // r9
  bool *v12; // r9
  bool *v13; // r9
  bool *v14; // r9
  __int64 (__fastcall ***v15)(); // rdx
  _BYTE v17[8]; // [rsp+20h] [rbp-E0h] BYREF
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *v18; // [rsp+28h] [rbp-D8h] BYREF
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+38h] [rbp-C8h]
  __int64 (__fastcall **v21)(); // [rsp+50h] [rbp-B0h] BYREF
  __int128 v22; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall ***v23)(); // [rsp+88h] [rbp-78h]
  _QWORD v24[7]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v25; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall **v26)(); // [rsp+D0h] [rbp-30h] BYREF
  __int128 v27; // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall ***v28)(); // [rsp+108h] [rbp+8h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v18 = 0LL;
  v5 = Microsoft::WRL::ComPtr<IXMLDOMNode>::As<IXMLDOMElement>(a2, (__int64 *)&v18);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_QWORD *)&v20 = a1;
    *((_QWORD *)&v20 + 1) = a3;
    v21 = off_18075BE90;
    v22 = v20;
    v23 = &v21;
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetTokenizedStringAttributeValue(
      (__int64)v18,
      (__int64 **)(a1 + 72),
      (__int64)&v21);
    if ( v23 )
    {
      v8 = &v21;
      LOBYTE(v8) = v23 != &v21;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v23)[4])(v23, v8);
    }
    v19 = 0;
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetUintAttributeValue(
                v18,
                (struct IXMLDOMElement *)(a1 + 16),
                (const struct _bstr_t *)&v19,
                v7) >= 0 )
    {
      *(_DWORD *)(a3 + 88) = v19;
      *(_BYTE *)(a3 + 1) = 1;
    }
    v24[0] = off_18075BEC0;
    v24[1] = a3;
    v25 = v24;
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetTokenizedStringAttributeValue(
      (__int64)v18,
      (__int64 **)(a1 + 56),
      (__int64)v24);
    if ( v25 )
    {
      v10 = v24;
      LOBYTE(v10) = v25 != v24;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v25 + 32LL))(v25, v10);
    }
    v17[0] = 0;
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v18,
                (struct IXMLDOMElement *)(a1 + 24),
                (const struct _bstr_t *)v17,
                v9) >= 0 )
    {
      *(_BYTE *)(a3 + 93) = v17[0];
      *(_BYTE *)(a3 + 5) = 1;
    }
    v17[0] = 0;
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v18,
                (struct IXMLDOMElement *)(a1 + 32),
                (const struct _bstr_t *)v17,
                v11) >= 0 )
    {
      *(_BYTE *)(a3 + 94) = v17[0];
      *(_BYTE *)(a3 + 6) = 1;
    }
    v17[0] = 0;
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v18,
                (struct IXMLDOMElement *)(a1 + 40),
                (const struct _bstr_t *)v17,
                v12) >= 0 )
    {
      *(_BYTE *)(a3 + 95) = v17[0];
      *(_BYTE *)(a3 + 7) = 1;
    }
    v17[0] = 0;
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v18,
                (struct IXMLDOMElement *)(a1 + 48),
                (const struct _bstr_t *)v17,
                v13) >= 0 )
    {
      *(_BYTE *)(a3 + 96) = v17[0];
      *(_BYTE *)(a3 + 8) = 1;
    }
    v17[0] = 0;
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v18,
                (struct IXMLDOMElement *)(a1 + 64),
                (const struct _bstr_t *)v17,
                v14) >= 0 )
    {
      *(_BYTE *)(a3 + 92) = v17[0];
      *(_BYTE *)(a3 + 2) = 1;
    }
    *(_QWORD *)&v20 = a1;
    *((_QWORD *)&v20 + 1) = a3;
    v26 = off_18075BEF0;
    v27 = v20;
    v28 = &v26;
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetTokenizedStringAttributeValue(
      (__int64)v18,
      (__int64 **)(a1 + 80),
      (__int64)&v26);
    if ( v28 )
    {
      v15 = &v26;
      LOBYTE(v15) = v28 != &v26;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v28)[4])(v28, v15);
    }
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\selectiondataparser.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
  return v6;
}
