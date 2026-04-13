/*
 * XREFs of ??R_lambda_69f70f84236fb302921f03f01c6e57bb_@@QEBA@XZ @ 0x180073864
 * Callers:
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180076150 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180024698 (--$ActivateInstance@V-$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@F.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E6CC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@U?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@23@@@YAJPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180073458 (--$WaitForCompletion@U-$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deploym.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall _lambda_69f70f84236fb302921f03f01c6e57bb_::operator()(_QWORD **a1)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD, _QWORD, __int64 *); // rdi
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64 *); // rdi
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 *); // rdi
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, HSTRING *); // rdi
  __int64 v17; // rbx
  void (__fastcall *v18)(__int64, HSTRING, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rdi
  HRESULT v20; // edx
  __int64 v21; // r8
  int v22; // eax
  unsigned __int64 v24; // r9
  _BYTE v25[8]; // [rsp+30h] [rbp-29h] BYREF
  HSTRING string; // [rsp+38h] [rbp-21h] BYREF
  __int64 v27; // [rsp+40h] [rbp-19h] BYREF
  __int64 v28; // [rsp+48h] [rbp-11h] BYREF
  __int64 v29; // [rsp+50h] [rbp-9h] BYREF
  __int64 v30; // [rsp+58h] [rbp-1h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+7h] BYREF
  __int64 v32; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v33; // [rsp+70h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v35; // [rsp+90h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v33 = 0LL;
  v35 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Management.Deployment.PackageManager",
    0x2Du,
    0x2Cu);
  v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::IPackageManager>>(
         v35,
         &v33);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v28 = 0LL;
    v4 = v33;
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v33 + 160LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
    v6 = v5(v4, 0LL, **a1, &v28);
    v3 = v6;
    if ( v6 >= 0 )
    {
      v7 = v28;
      if ( !v28 )
      {
LABEL_22:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
        v3 = 0;
        goto LABEL_23;
      }
      v27 = 0LL;
      v25[0] = 0;
      v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      v9 = v8(v7, &v27);
      v3 = v9;
      if ( v9 < 0
        || (v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v27 + 56LL))(v27, v25), v3 = v9, v9 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x105,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v9);
      }
      else
      {
        while ( 1 )
        {
          if ( !v25[0] )
          {
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
            goto LABEL_22;
          }
          v30 = 0LL;
          v29 = 0LL;
          string = 0LL;
          v10 = v27;
          v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 48LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
          v12 = v11(v10, &v30);
          v3 = v12;
          if ( v12 < 0 )
            break;
          v13 = v30;
          v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 48LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
          v12 = v14(v13, &v29);
          v3 = v12;
          if ( v12 < 0 )
            break;
          v15 = v29;
          v16 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v29 + 96LL);
          WindowsDeleteString(string);
          string = 0LL;
          v12 = v16(v15, &string);
          v3 = v12;
          if ( v12 < 0 )
            break;
          v31 = 0LL;
          v17 = v33;
          v18 = *(void (__fastcall **)(__int64, HSTRING, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v33 + 64LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
          v18(v17, string, &v31);
          v32 = 0LL;
          v19 = v31;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
          v3 = WaitForCompletion<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>,Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>>(
                 v19,
                 v20,
                 v21);
          if ( v3 >= 0 )
            v3 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v19)[10])(
                   v19,
                   &v32);
          if ( v3 < 0 )
          {
            v24 = (unsigned int)v3;
            goto LABEL_26;
          }
          v22 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v27 + 64LL))(v27, v25);
          v3 = v22;
          if ( v22 < 0 )
          {
            v24 = (unsigned int)v22;
LABEL_26:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x105,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
              (const char *)v24);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
            goto LABEL_28;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
          WindowsDeleteString(string);
          string = 0LL;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x105,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v12);
LABEL_28:
        WindowsDeleteString(string);
        string = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x105,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v6);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x105,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v2);
  }
LABEL_23:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
  return (unsigned int)v3;
}
