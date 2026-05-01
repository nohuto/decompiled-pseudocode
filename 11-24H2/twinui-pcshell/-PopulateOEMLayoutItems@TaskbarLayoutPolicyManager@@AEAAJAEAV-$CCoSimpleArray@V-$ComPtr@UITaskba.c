/*
 * XREFs of ?PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18031FAF8
 * Callers:
 *     ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x18031ED50 (-GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18031EAD4 (-GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@W4TaskbarPinningSource@@@Z @ 0x18031F470 (-PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskbarL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutPolicyManager::PopulateOEMLayoutItems(TaskbarLayoutPolicyManager *this, _QWORD *a2)
{
  int OEMLayoutXML; // eax
  unsigned int v5; // ebx
  struct IXMLDOMDocument2Vtbl *lpVtbl; // rax
  int v7; // eax
  __int64 v8; // rdx
  struct IXMLDOMDocument2 *v9; // rbx
  HRESULT (__stdcall *selectSingleNode)(IXMLDOMDocument2 *, BSTR, IXMLDOMNode **); // rdi
  __int64 v11; // rcx
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v16; // [rsp+70h] [rbp+30h] BYREF
  struct IXMLDOMDocument2 *v17; // [rsp+78h] [rbp+38h] BYREF

  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  OEMLayoutXML = TaskbarLayoutPolicyManager::GetOEMLayoutXML((const WCHAR **)this, &v17);
  v5 = OEMLayoutXML;
  if ( OEMLayoutXML >= 0 )
  {
    if ( v17 )
    {
      v16 = 0LL;
      lpVtbl = v17->lpVtbl;
      v13 = *(_OWORD *)((char *)this + 104);
      v14 = *((_QWORD *)this + 15);
      v7 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))lpVtbl->setProperty)(
             v17,
             *((_QWORD *)this + 16),
             &v13);
      v5 = v7;
      if ( v7 < 0 )
      {
        v8 = 502LL;
LABEL_6:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v7);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
        goto LABEL_13;
      }
      v9 = v17;
      selectSingleNode = v17->lpVtbl->selectSingleNode;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
      v7 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int64 *))selectSingleNode)(
             v9,
             *((_QWORD *)this + 18),
             &v16);
      v5 = v7;
      if ( v7 < 0 )
      {
        v8 = 503LL;
        goto LABEL_6;
      }
      v7 = TaskbarLayoutPolicyManager::PopulateAndSetPinned(v11, a2, (__int64)&v16, 2u);
      v5 = v7;
      if ( v7 < 0 )
      {
        v8 = 504LL;
        goto LABEL_6;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    }
    v5 = 0;
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F1,
    (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)OEMLayoutXML);
LABEL_13:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  return v5;
}
