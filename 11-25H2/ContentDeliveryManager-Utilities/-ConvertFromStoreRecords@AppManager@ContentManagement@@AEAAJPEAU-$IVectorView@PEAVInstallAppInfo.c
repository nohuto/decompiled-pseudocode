/*
 * XREFs of ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x1800738F0
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180075540 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x180044240 (-InternalRelease@-$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180045360 (-put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x1800453C0 (-put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ??$CreateExternalObjectVector@VAppInstallInfoRecord@ContentManagement@@V?$AgileVector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@$0A@@Internal@Collections@Foundation@Windows@@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$AgileVector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@$0A@@1234@@Z @ 0x180071E70 (--$CreateExternalObjectVector@VAppInstallInfoRecord@ContentManagement@@V-$AgileVector@PEAVAppIns.c)
 *     ??$MakeAndInitialize@VAppInstallInfoRecordImpl@ContentManagement@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppInstallInfoRecordImpl@ContentManagement@@@Z @ 0x1800721A8 (--$MakeAndInitialize@VAppInstallInfoRecordImpl@ContentManagement@@V12@$$V@Details@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::ConvertFromStoreRecords(__int64 a1, __int64 a2, _QWORD *a3)
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
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  HSTRING string; // [rsp+20h] [rbp-20h] BYREF
  __int64 v24; // [rsp+28h] [rbp-18h] BYREF
  __int64 v25; // [rsp+30h] [rbp-10h] BYREF
  __int64 v26; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v28; // [rsp+80h] [rbp+40h] BYREF
  int v29; // [rsp+90h] [rbp+50h] BYREF
  HSTRING v30; // [rsp+98h] [rbp+58h] BYREF

  v28 = a1;
  *a3 = 0LL;
  v26 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  v7 = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<ContentManagement::AppInstallInfoRecord,Windows::Foundation::Collections::Internal::AgileVector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,0>>(
         v5,
         &v26,
         v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    LODWORD(v28) = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v28);
    v8 = v7;
    if ( v7 >= 0 )
    {
      for ( i = 0; i < (unsigned int)v28; ++i )
      {
        v24 = 0LL;
        v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
        v12 = v11(a2, i, &v24);
        v8 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1B8,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v12);
          goto LABEL_29;
        }
        v30 = 0LL;
        v13 = v24;
        v14 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v24 + 48LL);
        WindowsDeleteString(0LL);
        v30 = 0LL;
        v15 = v14(v13, &v30);
        v8 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1BB,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v15);
          goto LABEL_27;
        }
        string = 0LL;
        v16 = v24;
        v17 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v24 + 96LL);
        WindowsDeleteString(0LL);
        string = 0LL;
        v18 = v17(v16, &string);
        v8 = v18;
        if ( v18 < 0 )
        {
          v21 = 446LL;
          goto LABEL_24;
        }
        v29 = 0;
        v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 120LL))(v24, &v29);
        v8 = v18;
        if ( v18 < 0 )
        {
          v21 = 449LL;
LABEL_24:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v18);
          goto LABEL_25;
        }
        v25 = 0LL;
        Microsoft::WRL::ComPtr<ContentManagement::AppInstallInfoRecordImpl>::InternalRelease(&v25);
        v19 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::AppInstallInfoRecordImpl,ContentManagement::AppInstallInfoRecordImpl,>(&v25);
        v8 = v19;
        if ( v19 < 0 )
        {
          v20 = 452LL;
LABEL_21:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v20,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v19);
          Microsoft::WRL::ComPtr<ContentManagement::AppInstallInfoRecordImpl>::InternalRelease(&v25);
LABEL_25:
          WindowsDeleteString(string);
          string = 0LL;
LABEL_27:
          WindowsDeleteString(v30);
          v30 = 0LL;
LABEL_29:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
          goto LABEL_33;
        }
        v19 = ContentManagement::AppInstallInfoRecordImpl::put_ProductId(
                (ContentManagement::AppInstallInfoRecordImpl *)(v25 + 48),
                v30);
        v8 = v19;
        if ( v19 < 0 )
        {
          v20 = 453LL;
          goto LABEL_21;
        }
        v19 = ContentManagement::AppInstallInfoRecordImpl::put_SkuId(
                (ContentManagement::AppInstallInfoRecordImpl *)(v25 + 48),
                string);
        v8 = v19;
        if ( v19 < 0 )
        {
          v20 = 454LL;
          goto LABEL_21;
        }
        *(_DWORD *)(v25 + 104) = v29;
        v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 104LL))(
                v26,
                (v25 + 48) & -(__int64)(v25 != 0));
        v8 = v19;
        if ( v19 < 0 )
        {
          v20 = 457LL;
          goto LABEL_21;
        }
        Microsoft::WRL::ComPtr<ContentManagement::AppInstallInfoRecordImpl>::InternalRelease(&v25);
        WindowsDeleteString(string);
        string = 0LL;
        WindowsDeleteString(v30);
        v30 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
      }
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v26 + 64LL))(v26, a3);
      v8 = v7;
      if ( v7 >= 0 )
      {
        v8 = 0;
        goto LABEL_33;
      }
      v9 = 460LL;
    }
    else
    {
      v9 = 436LL;
    }
  }
  else
  {
    v9 = 433LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_33:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  return v8;
}
