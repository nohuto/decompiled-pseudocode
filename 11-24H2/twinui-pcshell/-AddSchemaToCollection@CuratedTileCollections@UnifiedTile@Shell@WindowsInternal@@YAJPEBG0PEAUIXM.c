/*
 * XREFs of ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x180165B24
 * Callers:
 *     ?LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAPEAUIXMLDOMSchemaCollection@@@Z @ 0x180165A20 (-LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pair@PEBGP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0Data_t@_bstr_t@@QEAA@PEBG@Z @ 0x180165E50 (--0Data_t@_bstr_t@@QEAA@PEBG@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x180165EA8 (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x1802DDDA4 (-_com_issue_error@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct IXMLDOMSchemaCollection *a4)
{
  HRESULT v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  LPVOID v11; // rcx
  LPVOID v12; // rbx
  __int64 (__fastcall *v13)(LPVOID, LONGLONG *); // rdi
  int v14; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(const unsigned __int16 *, _QWORD, __int128 *); // rbx
  _bstr_t::Data_t *v18; // rax
  HRESULT v19; // eax
  LONGLONG v21; // rcx
  LPVOID v22; // rcx
  LPVOID ppv; // [rsp+38h] [rbp-29h] BYREF
  LONGLONG v24; // [rsp+40h] [rbp-21h] BYREF
  _QWORD *v25; // [rsp+48h] [rbp-19h] BYREF
  _bstr_t::Data_t *v26; // [rsp+50h] [rbp-11h] BYREF
  IRecordInfo *pRecInfo; // [rsp+58h] [rbp-9h]
  VARIANTARG pvarg; // [rsp+60h] [rbp-1h] BYREF
  __int128 v29; // [rsp+78h] [rbp+17h]
  __int128 v30; // [rsp+88h] [rbp+27h] BYREF
  IRecordInfo *v31; // [rsp+98h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  __int16 v33; // [rsp+E0h] [rbp+7Fh] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v7 = CoCreateInstance(
         &GUID_88d96a05_f192_11d4_a65f_0040963251e5,
         0LL,
         1u,
         &GUID_2933bf81_7b36_11d2_b20e_00c04f983e60,
         &ppv);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 25LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v7);
LABEL_23:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
    return v8;
  }
  v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 504LL))(ppv, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 26LL;
    goto LABEL_5;
  }
  v26 = (_bstr_t::Data_t *)operator new(0x18uLL);
  v10 = (_QWORD *)_bstr_t::Data_t::Data_t(v26, a2);
  v25 = v10;
  if ( !v10 )
    _com_issue_error((char *)0x8007000ELL);
  v33 = 0;
  (*(void (__fastcall **)(LPVOID, _QWORD, __int16 *))(*(_QWORD *)ppv + 520LL))(ppv, *v10, &v33);
  if ( v33 != -1 )
  {
    v8 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)0x80004005LL);
    _bstr_t::_Free((_bstr_t *)&v25);
    v11 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return v8;
  }
  v24 = 0LL;
  v12 = ppv;
  v13 = *(__int64 (__fastcall **)(LPVOID, LONGLONG *))(*(_QWORD *)ppv + 360LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  v14 = v13(v12, &v24);
  v8 = v14;
  if ( v14 < 0 )
  {
    v15 = (unsigned int)v14;
    v16 = 34LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    _bstr_t::_Free((_bstr_t *)&v25);
    goto LABEL_23;
  }
  v17 = *(__int64 (__fastcall **)(const unsigned __int16 *, _QWORD, __int128 *))(*(_QWORD *)a3 + 56LL);
  pvarg.vt = 9;
  pvarg.llVal = v24;
  if ( v24 )
    (*(void (__fastcall **)(LONGLONG))(*(_QWORD *)v24 + 8LL))(v24);
  v29 = *(_OWORD *)&pvarg.vt;
  pRecInfo = pvarg.pRecInfo;
  v26 = (_bstr_t::Data_t *)operator new(0x18uLL);
  v18 = (_bstr_t::Data_t *)_bstr_t::Data_t::Data_t(v26, (const unsigned __int16 *)this);
  v26 = v18;
  if ( !v18 )
    _com_issue_error((char *)0x8007000ELL);
  v30 = v29;
  v31 = pRecInfo;
  v8 = v17(a3, *(_QWORD *)v18, &v30);
  _bstr_t::_Free((_bstr_t *)&v26);
  v19 = VariantClear(&pvarg);
  if ( v19 < 0 )
    _com_issue_error((char *)(unsigned int)v19);
  if ( (v8 & 0x80000000) != 0 )
  {
    v15 = v8;
    v16 = 35LL;
    goto LABEL_22;
  }
  v21 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(LONGLONG))(*(_QWORD *)v21 + 16LL))(v21);
  }
  _bstr_t::_Free((_bstr_t *)&v25);
  v22 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return 0LL;
}
