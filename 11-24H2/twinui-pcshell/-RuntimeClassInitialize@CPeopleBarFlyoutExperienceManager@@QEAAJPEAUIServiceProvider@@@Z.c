/*
 * XREFs of ?RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18005ED04
 * Callers:
 *     ??$MakeAndInitialize@VCPeopleBarFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18005F890 (--$MakeAndInitialize@VCPeopleBarFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18005F010 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1800859D8 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPeopleBarFlyoutExperienceManager::RuntimeClassInitialize(
        CPeopleBarFlyoutExperienceManager *this,
        struct IServiceProvider *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  HRESULT v6; // eax
  int v7; // edx
  unsigned int v8; // r8d
  HRESULT v9; // eax
  int v10; // edx
  unsigned int v11; // r8d
  int v12; // eax
  HRESULT v13; // eax
  int v14; // edx
  unsigned int v15; // r8d
  int v16; // eax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v18; // r14
  HRESULT (__stdcall *v19)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v21; // rdx
  HSTRING_HEADER v22; // [rsp+30h] [rbp-39h] BYREF
  HSTRING v23; // [rsp+48h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-19h] BYREF
  HSTRING string; // [rsp+68h] [rbp-1h] BYREF
  HSTRING_HEADER v26; // [rsp+70h] [rbp+7h] BYREF
  HSTRING v27; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( *((struct IServiceProvider **)this + 41) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IServiceProvider *))a2->lpVtbl->AddRef)(a2);
    v5 = *((_QWORD *)this + 41);
    *((_QWORD *)this + 41) = a2;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  string = 0LL;
  v6 = WindowsCreateStringReference(
         L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
         0x38u,
         &hstringHeader,
         &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6, v7, v8);
    goto LABEL_23;
  }
  v23 = 0LL;
  v9 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.PeopleBarFlyout", 0x30u, &v22, &v23);
  if ( v9 < 0 )
  {
LABEL_23:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9, v10, v11);
    goto LABEL_24;
  }
  v12 = CSingleViewShellExperience::RuntimeClassInitialize(
          (HSTRING *)this + 14,
          (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
          a2,
          string,
          v23);
  v2 = v12;
  if ( v12 >= 0 )
  {
    v27 = 0LL;
    v13 = WindowsCreateStringReference(L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App", 0x28u, &v26, &v27);
    if ( v13 >= 0 )
    {
      v16 = CSingleViewShellExperience::AddTestAumid((CPeopleBarFlyoutExperienceManager *)((char *)this + 112), v27);
      v2 = v16;
      if ( v16 >= 0 )
      {
        *((_DWORD *)this + 43) = 4;
        QueryService = a2->lpVtbl->QueryService;
        v18 = (_QWORD *)((char *)this + 88);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 11);
        v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
                a2,
                &IID_IImmersiveWindowMessageService,
                &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
                (char *)this + 88);
        v2 = v16;
        if ( v16 < 0 )
        {
          v21 = 92LL;
        }
        else
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v18 + 24LL))(
                  *v18,
                  1027LL,
                  ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
                  (char *)this + 84);
          v2 = v16;
          if ( v16 < 0 )
          {
            v21 = 93LL;
          }
          else
          {
            v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v18 + 24LL))(
                    *v18,
                    1025LL,
                    ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
                    (char *)this + 76);
            v2 = v16;
            if ( v16 < 0 )
            {
              v21 = 94LL;
            }
            else
            {
              v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *))(*(_QWORD *)*v18 + 24LL))(
                      *v18,
                      1026LL,
                      (char *)this + 32,
                      (char *)this + 80);
              v2 = v16;
              if ( v16 < 0 )
              {
                v21 = 95LL;
              }
              else
              {
                v19 = a2->lpVtbl->QueryService;
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 13);
                v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v19)(
                        a2,
                        &IID_IImmersiveSessionIdleDetector,
                        &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
                        (char *)this + 104);
                v2 = v16;
                if ( v16 < 0 )
                {
                  v21 = 97LL;
                }
                else
                {
                  v16 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 13) + 32LL))(
                          *((_QWORD *)this + 13),
                          (char *)this + 40,
                          (char *)this + 96);
                  v2 = v16;
                  if ( v16 >= 0 )
                    return 0LL;
                  v21 = 98LL;
                }
              }
            }
          }
        }
        goto LABEL_21;
      }
LABEL_25:
      v21 = 84LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
      return v2;
    }
LABEL_24:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13, v14, v15);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4E,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)(unsigned int)v12);
  return v2;
}
