/*
 * XREFs of ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18031F8EC
 * Callers:
 *     ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x18031ED50 (-GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x180166454 (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 *     ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1801665C8 (-GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180166790 (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180167450 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ??$As@UIXMLDOMElement@@@?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIXMLDOMElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18031DC1C (--$As@UIXMLDOMElement@@@-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIXML.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18031EB64 (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@W4TaskbarPinningSource@@@Z @ 0x18031F470 (-PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskbarL.c)
 *     ?SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18031FD14 (-SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskbarLayoutPolicyManager::PopulateEnterpriseLayoutItems(
        TaskbarLayoutPolicyManager *this,
        _QWORD *a2)
{
  __int64 v4; // rdx
  int MDMLayoutXML; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  TaskbarLayoutPolicyManager *v8; // rcx
  TaskbarLayoutPolicyManager *v9; // rcx
  TaskbarLayoutPolicyManager *v10; // rcx
  struct IXMLDOMDocument2Vtbl *lpVtbl; // rax
  int v12; // eax
  __int64 v13; // rdx
  struct IXMLDOMDocument2 *v14; // rbx
  HRESULT (__stdcall *selectSingleNode)(IXMLDOMDocument2 *, BSTR, IXMLDOMNode **); // rdi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  struct IXMLDOMDocument2 *v20[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+80h] [rbp+30h] BYREF
  __int64 v25; // [rsp+88h] [rbp+38h] BYREF

  LODWORD(v24) = 0;
  LODWORD(v25) = 0;
  v20[0] = 0LL;
  if ( (int)TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(this, (int *)&v24, (int *)&v25) < 0 || !(_DWORD)v24 )
  {
    if ( (unsigned int)TaskbarLayoutPolicyManager::CanApplyMDMLayout(this, v4) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
      MDMLayoutXML = TaskbarLayoutPolicyManager::GetMDMLayoutXML(v8, v20);
      v6 = MDMLayoutXML;
      if ( MDMLayoutXML < 0 )
      {
        v7 = 472LL;
        goto LABEL_8;
      }
      MDMLayoutXML = TaskbarLayoutPolicyManager::SetMDMPolicyLayoutTimestampToCurrent(v9);
      v6 = MDMLayoutXML;
      if ( MDMLayoutXML < 0 )
      {
        v7 = 473LL;
        goto LABEL_8;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
      MDMLayoutXML = TaskbarLayoutPolicyManager::GetLayoutModificationXML(v10, v20);
      v6 = MDMLayoutXML;
      if ( MDMLayoutXML < 0 )
      {
        v7 = 477LL;
        goto LABEL_8;
      }
    }
LABEL_13:
    if ( v20[0] )
    {
      v24 = 0LL;
      lpVtbl = v20[0]->lpVtbl;
      v21 = *(_OWORD *)((char *)this + 104);
      v22 = *((_QWORD *)this + 15);
      v12 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))lpVtbl->setProperty)(
              v20[0],
              *((_QWORD *)this + 16),
              &v21);
      v6 = v12;
      if ( v12 < 0 )
      {
        v13 = 483LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v12);
LABEL_17:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
        goto LABEL_27;
      }
      v14 = v20[0];
      selectSingleNode = v20[0]->lpVtbl->selectSingleNode;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
      v12 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, _QWORD))selectSingleNode)(
              v14,
              *((_QWORD *)this + 18),
              &v24);
      v6 = v12;
      if ( v12 < 0 )
      {
        v13 = 484LL;
        goto LABEL_16;
      }
      v25 = 0LL;
      v16 = Microsoft::WRL::ComPtr<IXMLDOMNode>::As<IXMLDOMElement>(&v24, &v25);
      v6 = v16;
      if ( v16 < 0 )
      {
        v18 = 487LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v16);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
        goto LABEL_17;
      }
      v16 = TaskbarLayoutPolicyManager::PopulateAndSetPinned(v17, a2, (__int64)&v24, 3u);
      v6 = v16;
      if ( v16 < 0 )
      {
        v18 = 488LL;
        goto LABEL_22;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
    }
    v6 = 0;
    goto LABEL_27;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
  MDMLayoutXML = TaskbarLayoutPolicyManager::GetPolicyLayoutXML((const WCHAR **)this, v20);
  v6 = MDMLayoutXML;
  if ( MDMLayoutXML >= 0 )
    goto LABEL_13;
  v7 = 468LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)MDMLayoutXML);
LABEL_27:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
  return v6;
}
