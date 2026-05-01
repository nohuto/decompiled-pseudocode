/*
 * XREFs of ?PopulateOEMLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803F7D2C
 * Callers:
 *     ?GetPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x1803F7770 (-GetPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAPEAUIObjectArra.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803F76D0 (-GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?Populate@PWSLayoutPolicyManager@@CAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@@Z @ 0x1803F7A58 (-Populate@PWSLayoutPolicyManager@@CAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PWSLayoutPolicyManager::PopulateOEMLayoutItems(const WCHAR **this, _QWORD *a2)
{
  int OEMLayoutXML; // eax
  unsigned int v5; // ebx
  struct IXMLDOMDocument2Vtbl *lpVtbl; // rax
  int v7; // eax
  __int64 v8; // rdx
  struct IXMLDOMDocument2 *v9; // rbx
  HRESULT (__stdcall *selectSingleNode)(IXMLDOMDocument2 *, BSTR, IXMLDOMNode **); // rdi
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF
  const WCHAR *v13; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  struct IXMLDOMDocument2 *v16; // [rsp+78h] [rbp+38h] BYREF

  v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  OEMLayoutXML = PWSLayoutPolicyManager::GetOEMLayoutXML(this, &v16);
  v5 = OEMLayoutXML;
  if ( OEMLayoutXML >= 0 )
  {
    v15 = 0LL;
    lpVtbl = v16->lpVtbl;
    v12 = *((_OWORD *)this + 5);
    v13 = this[12];
    v7 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, const WCHAR *, __int128 *))lpVtbl->setProperty)(
           v16,
           this[13],
           &v12);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v9 = v16;
      selectSingleNode = v16->lpVtbl->selectSingleNode;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
      v7 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, const WCHAR *, __int64 *))selectSingleNode)(
             v9,
             this[15],
             &v15);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v7 = PWSLayoutPolicyManager::Populate(a2, (__int64)&v15);
        v5 = v7;
        if ( v7 >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
          v5 = 0;
          goto LABEL_11;
        }
        v8 = 217LL;
      }
      else
      {
        v8 = 216LL;
      }
    }
    else
    {
      v8 = 215LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD4,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)OEMLayoutXML);
  }
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  return v5;
}
