/*
 * XREFs of ?LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAPEAUIXMLDOMSchemaCollection@@@Z @ 0x180165A20
 * Callers:
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180165764 (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x180165B24 (-AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXM.c)
 *     ??1?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x180165F1C (--1-$vector@URect@Foundation@Windows@winrt@@V-$allocator@URect@Foundation@Windows@winrt@@@std@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::LoadSchema(
        __int64 *a1,
        unsigned __int16 **a2)
{
  HRESULT Instance; // eax
  struct IXMLDOMSchemaCollection *v5; // r9
  unsigned int v6; // ebx
  __int64 i; // rbx
  int v8; // eax
  int v9; // esi
  unsigned __int16 *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int16 *ppv; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  Instance = CoCreateInstance(
               &GUID_88d96a07_f192_11d4_a65f_0040963251e5,
               0LL,
               1u,
               &GUID_373984c8_b845_449b_91e7_45ac83036ade,
               (LPVOID *)&ppv);
  v6 = Instance;
  if ( Instance >= 0 )
  {
    for ( i = *a1; i != a1[1]; i += 16LL )
    {
      v8 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection(
             *(WindowsInternal::Shell::UnifiedTile::CuratedTileCollections **)i,
             *(const unsigned __int16 **)(i + 8),
             ppv,
             v5);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
          (const char *)(unsigned int)v8);
        v6 = v9;
        goto LABEL_11;
      }
    }
    v10 = ppv;
    if ( ppv )
    {
      (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)ppv + 8LL))(ppv);
      v10 = ppv;
    }
    *a2 = v10;
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)Instance);
  }
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  std::vector<winrt::Windows::Foundation::Rect>::~vector<winrt::Windows::Foundation::Rect>(a1);
  return v6;
}
