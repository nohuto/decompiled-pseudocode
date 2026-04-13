/*
 * XREFs of ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z @ 0x180073C10
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180075540 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E6FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@1@@Z @ 0x180071C50 (--$ActivateInstance@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Wind.c)
 *     ??$CreateExternalObjectVector@VInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@V?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@2Collections@Foundation@7@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@1234@@Z @ 0x18007200C (--$CreateExternalObjectVector@VInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationM.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ContentManagement::AppManager::ConvertToStoreRecords(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rcx
  unsigned int v6; // r8d
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int i; // esi
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, HSTRING *); // rdi
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, HSTRING *); // rdi
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  HSTRING v25; // [rsp+20h] [rbp-60h] BYREF
  HSTRING string; // [rsp+28h] [rbp-58h] BYREF
  __int64 v27; // [rsp+30h] [rbp-50h] BYREF
  __int64 v28; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v30; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v32; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *a3 = 0LL;
  v30 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
  v7 = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo,Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>>(
         v5,
         (__int64 *)&v30,
         v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v29 = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v29);
    v8 = v7;
    if ( v7 >= 0 )
    {
      for ( i = 0; i < v29; ++i )
      {
        v27 = 0LL;
        v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
        v12 = v11(a2, i, &v27);
        v8 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x199,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v12);
          goto LABEL_26;
        }
        v25 = 0LL;
        v13 = v27;
        v14 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v27 + 48LL);
        WindowsDeleteString(0LL);
        v25 = 0LL;
        v15 = v14(v13, &v25);
        v8 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x19B,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v15);
          goto LABEL_24;
        }
        string = 0LL;
        v16 = v27;
        v17 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v27 + 64LL);
        WindowsDeleteString(0LL);
        string = 0LL;
        v18 = v17(v16, &string);
        v8 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x19D,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v18);
          goto LABEL_22;
        }
        v28 = 0LL;
        v32 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"Windows.ApplicationModel.Store.Preview.InstallControl.Internal.InstallAppInfo",
          0x4Eu,
          0x4Du);
        v19 = v32;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
        v20 = Windows::Foundation::ActivateInstance<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo>(
                v19,
                &v28);
        v8 = v20;
        if ( v20 < 0 )
        {
          v23 = 416LL;
LABEL_20:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v23,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v20);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
LABEL_22:
          WindowsDeleteString(string);
          string = 0LL;
LABEL_24:
          WindowsDeleteString(v25);
          v25 = 0LL;
LABEL_26:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
          goto LABEL_30;
        }
        v20 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v28 + 56LL))(v28, v25);
        v8 = v20;
        if ( v20 < 0 )
        {
          v23 = 417LL;
          goto LABEL_20;
        }
        v20 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v28 + 104LL))(v28, string);
        v8 = v20;
        if ( v20 < 0 )
        {
          v23 = 418LL;
          goto LABEL_20;
        }
        v21 = *v30;
        v22 = v28;
        v28 = 0LL;
        v20 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v21 + 104))(v30, v22);
        v8 = v20;
        if ( v20 < 0 )
        {
          v23 = 420LL;
          goto LABEL_20;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
        WindowsDeleteString(string);
        string = 0LL;
        WindowsDeleteString(v25);
        v25 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      }
      v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(*v30 + 64))(v30, a3);
      v8 = v7;
      if ( v7 >= 0 )
      {
        v8 = 0;
        goto LABEL_30;
      }
      v9 = 423LL;
    }
    else
    {
      v9 = 405LL;
    }
  }
  else
  {
    v9 = 402LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_30:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
  return v8;
}
