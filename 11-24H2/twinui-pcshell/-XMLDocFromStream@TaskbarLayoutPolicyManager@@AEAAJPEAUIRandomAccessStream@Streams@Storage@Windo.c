/*
 * XREFs of ?XMLDocFromStream@TaskbarLayoutPolicyManager@@AEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x180166B38
 * Callers:
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180166790 (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetCloudDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18031E7B8 (-GetCloudDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18031E8E0 (-GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18031F010 (-LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Mi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIPersistStream@@@?$ComPtr@UIXMLDOMDocument2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPersistStream@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801C5854 (--$As@UIPersistStream@@@-$ComPtr@UIXMLDOMDocument2@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TaskbarLayoutPolicyManager::XMLDocFromStream(
        TaskbarLayoutPolicyManager *this,
        struct Windows::Storage::Streams::IRandomAccessStream *a2,
        struct IXMLDOMDocument2 **a3)
{
  int v5; // ebx
  HRESULT v6; // eax
  __int64 v7; // rcx
  LPVOID v8; // rcx
  int v9; // eax
  int v10; // eax
  struct IXMLDOMDocument2 *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  LPVOID ppv; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  *a3 = 0LL;
  ppv = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  v5 = CreateStreamOverRandomAccessStream(a2, &GUID_0000000c_0000_0000_c000_000000000046, &v15);
  if ( v5 < 0 )
    goto LABEL_17;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v6 = CoCreateInstance(
         &GUID_88d96a05_f192_11d4_a65f_0040963251e5,
         0LL,
         1u,
         &GUID_2933bf95_7b36_11d2_b20e_00c04f983e60,
         &ppv);
  v5 = v6;
  if ( v6 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 504LL))(ppv, 0LL);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v16 = 0LL;
      v10 = Microsoft::WRL::ComPtr<IXMLDOMDocument2>::As<IPersistStream>(&ppv, &v16);
      v5 = v10;
      if ( v10 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 40LL))(v16, v15);
        if ( v5 >= 0 )
        {
          v11 = (struct IXMLDOMDocument2 *)ppv;
          if ( ppv )
          {
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
            v11 = (struct IXMLDOMDocument2 *)ppv;
          }
          *a3 = v11;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
          v5 = 0;
          goto LABEL_17;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x26B,
          (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v10);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x268,
        (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v9);
    }
LABEL_17:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
    return (unsigned int)v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x267,
    (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)v6);
  v7 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v5;
}
