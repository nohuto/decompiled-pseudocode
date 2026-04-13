/*
 * XREFs of ?GetMSADeviceTicket@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU3@@Z @ 0x1800323D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UIAuthenticationManager@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIAuthenticationManager@WebAuthentication@Security@Internal@1@@Z @ 0x18002438C (--$ActivateInstance@UIAuthenticationManager@WebAuthentication@Security@Internal@Windows@@@Founda.c)
 *     ??$CreateExternalObjectVector@VOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@V?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@1234@@Z @ 0x1800252C4 (--$CreateExternalObjectVector@VOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Win.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180028008 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@S.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E6CC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall ContentManagement::IdentityManager::GetMSADeviceTicket(
        ContentManagement::IdentityManager *this,
        HSTRING a2,
        HSTRING *a3)
{
  __int64 v5; // rbx
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rbx
  int ActivationFactory; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING, __int64, __int64 *); // rdi
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // r8d
  int v15; // eax
  __int64 v16; // rdx
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v18)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64, _QWORD); // rdi
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // rdi
  HRESULT v25; // edx
  __int64 v26; // r8
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, __int64 *); // rdi
  int v29; // eax
  __int64 v30; // rbx
  __int64 (__fastcall *v31)(__int64, _QWORD, __int64 *); // rdi
  int v32; // eax
  __int64 v33; // rdx
  unsigned __int64 v34; // r9
  int v36; // [rsp+20h] [rbp-59h]
  __int64 v37; // [rsp+30h] [rbp-49h] BYREF
  __int64 (__fastcall ***v38)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-41h] BYREF
  __int64 v39; // [rsp+40h] [rbp-39h] BYREF
  __int64 v40; // [rsp+48h] [rbp-31h] BYREF
  __int64 v41; // [rsp+50h] [rbp-29h] BYREF
  __int64 (__fastcall ***v42)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-21h] BYREF
  __int64 v43; // [rsp+60h] [rbp-19h] BYREF
  __int64 v44; // [rsp+68h] [rbp-11h] BYREF
  int v45; // [rsp+70h] [rbp-9h] BYREF
  __int64 v46; // [rsp+78h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp+7h] BYREF
  __int64 v48; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  *a3 = 0LL;
  v46 = 0LL;
  v48 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Security.WebAuthentication.AuthenticationManager",
    0x42u,
    0x41u);
  v5 = v48;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v46);
  v6 = Windows::Foundation::ActivateInstance<Windows::Internal::Security::WebAuthentication::IAuthenticationManager>(
         v5,
         &v46);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v37 = 0LL;
    v48 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Security.Authentication.OnlineId.OnlineIdServiceTicketRequest",
      0x46u,
      0x45u);
    v8 = v48;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
    ActivationFactory = RoGetActivationFactory(v8, &GUID_bebb0a08_9e73_4077_9614_08614c0bc245, &v37);
    v7 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B1,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)ActivationFactory,
        v36);
LABEL_5:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
      goto LABEL_41;
    }
    v39 = 0LL;
    v10 = v37;
    v11 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, __int64 *))(*(_QWORD *)v37 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
    v48 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"MBI_SSL", 8u, 7u);
    v12 = v11(v10, a2, v48, &v39);
    v7 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B7,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v12,
        v36);
LABEL_8:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
      goto LABEL_5;
    }
    v38 = 0LL;
    v40 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
    v15 = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest,Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>>(
            v13,
            &v38,
            v14);
    v7 = v15;
    if ( v15 < 0 )
    {
      v16 = 443LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v15,
        v36);
LABEL_12:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
      goto LABEL_8;
    }
    v15 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v38)[13])(v38, v39);
    v7 = v15;
    if ( v15 < 0 )
    {
      v16 = 444LL;
      goto LABEL_11;
    }
    v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v38;
    v18 = **v38;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
    v15 = v18(v17, &GUID_cb72d686_9516_520d_a274_fa4cd1762cb2, &v40);
    v7 = v15;
    if ( v15 < 0 )
    {
      v16 = 445LL;
      goto LABEL_11;
    }
    v42 = 0LL;
    v41 = 0LL;
    v19 = v46;
    v20 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v46 + 64LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
    v21 = v20(v19, v40, &v42);
    v7 = v21;
    if ( v21 < 0 )
    {
      v22 = (unsigned int)v21;
      v23 = 450LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v22,
        v36);
LABEL_20:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
      goto LABEL_12;
    }
    v24 = v42;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
    v7 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>,Windows::Foundation::IAsyncOperation<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>>(
           v24,
           v25,
           v26);
    if ( v7 >= 0 )
      v7 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v24)[8])(
             v24,
             &v41);
    if ( v7 < 0 )
    {
      v22 = (unsigned int)v7;
      v23 = 451LL;
      goto LABEL_19;
    }
    v27 = v41;
    if ( !v41 )
    {
      v7 = -2147023728;
      v22 = 2147943568LL;
      v23 = 452LL;
      goto LABEL_19;
    }
    v44 = 0LL;
    v28 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
    v29 = v28(v27, &v44);
    v7 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C8,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v29,
        v36);
LABEL_29:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
      goto LABEL_20;
    }
    v43 = 0LL;
    v30 = v44;
    v31 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v44 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v43);
    v32 = v31(v30, 0LL, &v43);
    v7 = v32;
    if ( v32 >= 0 )
    {
      v45 = 0;
      v32 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v43 + 64LL))(v43, &v45);
      v7 = v32;
      if ( v32 >= 0 )
      {
        v7 = v45;
        if ( v45 < 0 )
        {
          v34 = (unsigned int)v45;
          v33 = 463LL;
          goto LABEL_33;
        }
        v32 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v43 + 48LL))(v43, a3);
        v7 = v32;
        if ( v32 >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v43);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
          v7 = 0;
          goto LABEL_41;
        }
        v33 = 464LL;
      }
      else
      {
        v33 = 462LL;
      }
    }
    else
    {
      v33 = 459LL;
    }
    v34 = (unsigned int)v32;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v34,
      v36);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v43);
    goto LABEL_29;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AC,
    (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v6,
    v36);
LABEL_41:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v46);
  return (unsigned int)v7;
}
