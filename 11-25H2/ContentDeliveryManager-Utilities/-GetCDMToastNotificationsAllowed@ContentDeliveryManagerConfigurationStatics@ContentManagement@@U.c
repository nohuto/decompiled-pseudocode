/*
 * XREFs of ?GetCDMToastNotificationsAllowed@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAJPEAE@Z @ 0x180075E00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::ContentDeliveryManagerConfigurationStatics::GetCDMToastNotificationsAllowed(
        ContentManagement::ContentDeliveryManagerConfigurationStatics *this,
        unsigned __int8 *a2)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  LPVOID v5; // rbx
  __int64 (__fastcall *v6)(LPVOID, const wchar_t *, __int64 *); // rdi
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v11; // [rsp+58h] [rbp+28h] BYREF
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp+38h] BYREF

  *a2 = 1;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
  v3 = CoCreateInstance(
         &GUID_d18705be_fc2f_44c8_aeff_1cd49aea8fc1,
         0LL,
         0x17u,
         &GUID_443b1739_3779_4aba_953b_9e4ff84dd4b6,
         &ppv);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v12 = 0LL;
    v5 = ppv;
    v6 = *(__int64 (__fastcall **)(LPVOID, const wchar_t *, __int64 *))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    v7 = v6(v5, L"Windows.SystemToast.Suggested", &v12);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v11 = 0;
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 40LL))(v12, &v11);
      v4 = v7;
      if ( v7 >= 0 )
      {
        *a2 = v11;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
        v4 = 0;
        goto LABEL_9;
      }
      v8 = 25LL;
    }
    else
    {
      v8 = 23LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\contentdeliverymanagerconfiguration\\contentdeliv"
               "erymanagerconfiguration.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\contentdeliverymanagerconfiguration\\contentdeliv"
               "erymanagerconfiguration.cpp",
      (const char *)(unsigned int)v3);
  }
LABEL_9:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
  return v4;
}
