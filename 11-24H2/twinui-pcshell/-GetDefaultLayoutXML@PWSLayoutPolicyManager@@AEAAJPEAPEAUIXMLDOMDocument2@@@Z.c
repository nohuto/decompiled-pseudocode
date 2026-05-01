/*
 * XREFs of ?GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803F75A8
 * Callers:
 *     ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x1803F72B0 (-CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z.c)
 *     ?PopulateDefaultLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803F7BF8 (-PopulateDefaultLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWor.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801668F8 (--$GetActivationFactory@V-$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollection.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?XMLDocFromStream@PWSLayoutPolicyManager@@CAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x1803F81BC (-XMLDocFromStream@PWSLayoutPolicyManager@@CAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PWSLayoutPolicyManager::GetDefaultLayoutXML(
        PWSLayoutPolicyManager *this,
        struct IXMLDOMDocument2 **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, struct Windows::Storage::Streams::IRandomAccessStream **); // rdi
  int v7; // eax
  __int64 v8; // rdx
  struct Windows::Storage::Streams::IRandomAccessStream *v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *a2 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"WindowsInternal.Shell.UnifiedTile.CuratedTileCollections.CuratedCollectionInitializationStatics",
    0x60u,
    0x5Fu);
  v3 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedCollectionInitializationStatics>>(
         v13,
         &v11);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v10 = 0LL;
    v5 = v11;
    v6 = *(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IRandomAccessStream **))(*(_QWORD *)v11 + 48LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
    v7 = v6(v5, &v10);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v7 = PWSLayoutPolicyManager::XMLDocFromStream(v10, a2);
      v4 = v7;
      if ( v7 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
        v4 = 0;
        goto LABEL_9;
      }
      v8 = 164LL;
    }
    else
    {
      v8 = 162LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v3);
  }
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  return v4;
}
