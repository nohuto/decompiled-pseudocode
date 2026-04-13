/*
 * XREFs of ?SendMessageToAppServiceConnection@ContentManagement@@YAJPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@PEAUIPropertySet@Collections@Foundation@5@@Z @ 0x18005779C
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x1800573D4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18003A238 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800485B8 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVAppServiceResponse@AppService@Applic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::SendMessageToAppServiceConnection(
        ContentManagement *this,
        struct Windows::ApplicationModel::AppService::IAppServiceConnection *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 (__fastcall *v5)(ContentManagement *, struct Windows::ApplicationModel::AppService::IAppServiceConnection *, _QWORD); // rbx
  int v6; // eax
  int v7; // ebx
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdi
  int v9; // edx
  char *v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  char *v15; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char *v17; // [rsp+50h] [rbp+20h] BYREF
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF
  int (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+38h] BYREF

  v19 = 0LL;
  v5 = *(__int64 (__fastcall **)(ContentManagement *, struct Windows::ApplicationModel::AppService::IAppServiceConnection *, _QWORD))(*(_QWORD *)this + 88LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  v6 = v5(this, a2, &v19);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v18 = 0LL;
    v8 = v19;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    v7 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse *>>(
           v8,
           v9,
           v10);
    if ( v7 >= 0 )
      v7 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v8)[8])(v8, &v18);
    if ( v7 >= 0 )
    {
      LODWORD(v17) = 0;
      v13 = (*(__int64 (__fastcall **)(__int64, char **))(*(_QWORD *)v18 + 56LL))(v18, &v17);
      v7 = v13;
      if ( v13 >= 0 )
      {
        if ( !(_DWORD)v17 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
          v7 = 0;
          goto LABEL_14;
        }
        LODWORD(v15) = (_DWORD)v17;
        v7 = -2147023269;
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0xEE,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)0x8007065BLL,
          (unsigned __int64)"AppServiceResponseStatus: %d",
          v15);
        goto LABEL_8;
      }
      v11 = (unsigned int)v13;
      v12 = 236LL;
    }
    else
    {
      v11 = (unsigned int)v7;
      v12 = 234LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)v11);
LABEL_8:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE6,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v6);
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  return (unsigned int)v7;
}
