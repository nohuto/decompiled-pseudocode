/*
 * XREFs of ?GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x180676794
 * Callers:
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18032177C (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ?ParseSelectionAttributes@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2345@@Z @ 0x180677540 (-ParseSelectionAttributes@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsIn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1_variant_t@@QEAA@XZ @ 0x1801CD024 (--1_variant_t@@QEAA@XZ.c)
 *     ?ChangeType@_variant_t@@QEAAXGPEBV1@@Z @ 0x1802CF050 (-ChangeType@_variant_t@@QEAAXGPEBV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *this,
        struct IXMLDOMElement *a2,
        const struct _bstr_t *a3,
        bool *a4)
{
  HRESULT (__stdcall *QueryInterface)(IXMLDOMElement *, const IID *const, void **); // rdx
  int v8; // eax
  const struct _variant_t *v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  VARIANTARG pvarSrc; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_BYTE *)a3 = 0;
  VariantInit(&pvarSrc);
  if ( a2->lpVtbl )
    QueryInterface = a2->lpVtbl->QueryInterface;
  else
    QueryInterface = 0LL;
  v8 = (*(__int64 (__fastcall **)(WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *, HRESULT (__stdcall *)(IXMLDOMElement *, const IID *const, void **), VARIANTARG *))(*(_QWORD *)this + 352LL))(
         this,
         QueryInterface,
         &pvarSrc);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = (unsigned int)v8;
    v12 = 13LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\xmlhelpers.cpp",
      (const char *)v11);
    goto LABEL_12;
  }
  if ( pvarSrc.vt != 1 )
  {
    _variant_t::ChangeType(&pvarSrc, 0xBu, v9);
    if ( pvarSrc.vt == 11 )
    {
      *(_BYTE *)a3 = pvarSrc.iVal != 0;
      v10 = 0;
      goto LABEL_12;
    }
    v10 = -2147418113;
    v11 = 2147549183LL;
    v12 = 17LL;
    goto LABEL_10;
  }
  v10 = -2147023728;
LABEL_12:
  _variant_t::~_variant_t(&pvarSrc);
  return v10;
}
