/*
 * XREFs of ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806004A4
 * Callers:
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x1802843A0 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z @ 0x1800658AC (-_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z.c)
 *     ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x180196134 (-Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z.c)
 *     ?GetPropStoreForLink@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@AEAVCPropertyStoreHelper@@@Z @ 0x1801C5700 (-GetPropStoreForLink@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@AEAVCPropertyStoreHelper@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180226DD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712@@@d.c)
 *     ??1CShallowContainerIterator@@QEAA@XZ @ 0x1802BF970 (--1CShallowContainerIterator@@QEAA@XZ.c)
 *     ??0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z @ 0x1802C7000 (--0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z.c)
 *     ?RemoveIfObsoleteLink@CLauncherTipContextMenu@@AEAA_NPEAUIShellItem2@@K@Z @ 0x180602080 (-RemoveIfObsoleteLink@CLauncherTipContextMenu@@AEAA_NPEAUIShellItem2@@K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CLauncherTipContextMenu::CleanupObsoleteLinks(CLauncherTipContextMenu *this)
{
  HRESULT v1; // eax
  unsigned int v2; // ebx
  HRESULT v3; // eax
  struct IShellItem2 *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edi
  int v8; // esi
  CLauncherTipContextMenu *v9; // rcx
  CLauncherTipContextMenu *v10; // rcx
  CLauncherTipContextMenu *v11; // rcx
  struct IShellItem *v13; // [rsp+30h] [rbp-29h] BYREF
  IShellItem *psiParent; // [rsp+38h] [rbp-21h] BYREF
  CLauncherTipContextMenu *v15; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v16[8]; // [rsp+48h] [rbp-11h] BYREF
  unsigned int v17[18]; // [rsp+68h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  CLauncherTipContextMenu *v19; // [rsp+C0h] [rbp+67h] BYREF
  unsigned int v20; // [rsp+C8h] [rbp+6Fh] BYREF
  struct IShellItem *ppv; // [rsp+D0h] [rbp+77h] BYREF
  struct IShellItem2 *v22; // [rsp+D8h] [rbp+7Fh] BYREF

  v19 = this;
  psiParent = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
  v1 = SHGetKnownFolderItem(
         &FOLDERID_LocalAppData,
         KF_FLAG_DEFAULT,
         0LL,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         (void **)&psiParent);
  v2 = v1;
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DA,
      (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
      (const char *)(unsigned int)v1);
    goto LABEL_25;
  }
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  v3 = SHCreateItemFromRelativeName(
         psiParent,
         L"Microsoft\\Windows\\WinX",
         0LL,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         (void **)&ppv);
  v2 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DD,
      (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
      (const char *)(unsigned int)v3);
LABEL_5:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
    goto LABEL_25;
  }
  CShallowContainerIterator::CShallowContainerIterator((CShallowContainerIterator *)v17, ppv, 32);
  v2 = v17[0];
  if ( (v17[0] & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E1,
      (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
      (const char *)v17[0]);
LABEL_8:
    CShallowContainerIterator::~CShallowContainerIterator((CShallowContainerIterator *)v17);
    goto LABEL_5;
  }
  v13 = 0LL;
  while ( 1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    if ( !CShallowContainerIterator::Next((CShallowContainerIterator *)v17, (struct IShellItem2 **)&v13) )
      break;
    CShallowContainerIterator::CShallowContainerIterator((CShallowContainerIterator *)v16, v13, 64);
    v2 = v16[0];
    if ( (v16[0] & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E7,
        (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
        (const char *)v16[0]);
      CShallowContainerIterator::~CShallowContainerIterator((CShallowContainerIterator *)v16);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
      goto LABEL_8;
    }
    v22 = 0LL;
    while ( 1 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
      if ( !CShallowContainerIterator::Next((CShallowContainerIterator *)v16, &v22) )
        break;
      LODWORD(v19) = 0;
      v4 = v22;
      if ( ((int (__fastcall *)(struct IShellItem2 *, __int64, CLauncherTipContextMenu **))v22->lpVtbl->GetAttributes)(
             v22,
             0x10000LL,
             &v19) >= 0
        && ((unsigned int)v19 & 0x10000) != 0 )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712>::ReportUsage(
          (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712>::GetImpl'::`2'::impl,
          1u,
          v5,
          v6);
        v7 = 0;
        v20 = 0;
        v8 = -2147467259;
        v15 = 0LL;
        if ( (int)CLauncherTipContextMenu::GetPropStoreForLink(v9, v4, (struct CPropertyStoreHelper *)&v15) >= 0 )
        {
          v8 = CLauncherTipContextMenu::_CheckLinkHash(v10, (const struct CPropertyStoreHelper *)&v15, &v20);
          v7 = v20;
        }
        v11 = v15;
        if ( v15 )
          (*(void (__fastcall **)(CLauncherTipContextMenu *))(*(_QWORD *)v15 + 16LL))(v15);
        if ( v8 >= 0 )
          CLauncherTipContextMenu::RemoveIfObsoleteLink(v11, v4, v7);
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
    CShallowContainerIterator::~CShallowContainerIterator((CShallowContainerIterator *)v16);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  CShallowContainerIterator::~CShallowContainerIterator((CShallowContainerIterator *)v17);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  v2 = 0;
LABEL_25:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
  return v2;
}
