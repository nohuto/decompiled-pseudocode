/*
 * XREFs of ?StartRestore@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@00E@Z @ 0x180075F70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180073138 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Previe.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180074648 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::StartRestore(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        unsigned __int8 a5)
{
  RTL_SRWLOCK *v8; // rbx
  int AppInstallManager; // eax
  int v10; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v11; // rbx
  __int64 (__fastcall *v12)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *); // rdi
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, HSTRING, _QWORD, __int64, HSTRING, HSTRING, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  __int64 v16; // r9
  int v17; // eax
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // rdi
  HRESULT v19; // edx
  __int64 v20; // r8
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v24[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v26; // [rsp+80h] [rbp+20h] BYREF

  v24[0] = 0LL;
  v8 = (RTL_SRWLOCK *)((char *)this - 48);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v24);
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(v8, v24);
  v10 = AppInstallManager;
  if ( AppInstallManager >= 0 )
  {
    v26 = 0LL;
    v11 = v24[0];
    v12 = **(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *))v24[0];
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
    v13 = v12(v11, &GUID_43e87bd7_602a_4b0e_a674_ebad56c3a0f8, &v26);
    v10 = v13;
    if ( v13 >= 0 )
    {
      v22 = 0LL;
      v14 = v26;
      v15 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64, HSTRING, HSTRING, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v26 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
      LOBYTE(v16) = a5;
      v17 = v15(v14, a2, 0LL, v16, a3, a4, &v22);
      v10 = v17;
      if ( v17 >= 0 )
      {
        v23 = 0LL;
        v18 = v22;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
        v10 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>(
                v18,
                v19,
                v20);
        if ( v10 >= 0 )
          v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v18)[8])(
                  v18,
                  &v23);
        if ( v10 >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
          v10 = 0;
          goto LABEL_14;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAB,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA8,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v17);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA4,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v13);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v24);
  return (unsigned int)v10;
}
