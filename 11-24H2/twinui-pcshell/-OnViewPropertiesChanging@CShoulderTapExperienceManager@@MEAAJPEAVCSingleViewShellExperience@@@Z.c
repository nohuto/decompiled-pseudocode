/*
 * XREFs of ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038C810
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x1800AEAEC (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z @ 0x1801A4A48 (--0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1801E309C (--1RoVariant@@QEAA@XZ.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802C1CE8 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x18038CB18 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x18038D150 (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CShoulderTapExperienceManager::OnViewPropertiesChanging(
        CShoulderTapExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  unsigned int (__fastcall *v6)(__int64, __int64, struct IInspectable **); // rdi
  unsigned int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // rax
  bool v10; // dl
  __int64 v11; // rbx
  unsigned int (__fastcall *v12)(__int64, __int64, struct IInspectable **); // rdi
  unsigned int v13; // r14d
  __int64 *v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned int (__fastcall *v18)(__int64, __int64, struct IInspectable **); // rdi
  unsigned int v19; // r14d
  __int64 *v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // eax
  __int64 v25; // [rsp+20h] [rbp-60h] BYREF
  int v26; // [rsp+28h] [rbp-58h]
  __int64 *v27; // [rsp+30h] [rbp-50h]
  struct IInspectable *v28; // [rsp+38h] [rbp-48h] BYREF
  __int64 v29; // [rsp+40h] [rbp-40h] BYREF
  __int64 v30; // [rsp+48h] [rbp-38h] BYREF
  int v31; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v33; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  if ( *((_QWORD *)a2 + 3) )
  {
    v29 = 0LL;
    v3 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4,
           &v29);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xED,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
LABEL_14:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
      return v4;
    }
    v30 = 0LL;
    v31 = 0;
    v5 = v29;
    v6 = *(unsigned int (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v29 + 48LL);
    v27 = &v30;
    v28 = 0LL;
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"FirstLoadComplete", 0x12u, 0x11u);
    v7 = v6(v5, v33, &v28) >> 31;
    v33 = 0LL;
    RoVariant::RoVariant((RoVariant *)&v25, v28);
    v8 = v25;
    v25 = 0LL;
    LODWORD(v6) = v26;
    v26 = 0;
    RoVariant::~RoVariant((RoVariant *)&v25);
    v9 = v30;
    v30 = v8;
    v25 = v9;
    LODWORD(v9) = v31;
    v31 = (int)v6;
    v26 = v9;
    RoVariant::~RoVariant((RoVariant *)&v25);
    if ( (unsigned __int8)v7 != 1 )
    {
      v10 = 0;
LABEL_6:
      v4 = CShoulderTapExperienceManager::Reactivate((CShoulderTapExperienceManager *)((char *)this - 32), v10);
LABEL_13:
      RoVariant::~RoVariant((RoVariant *)&v30);
      goto LABEL_14;
    }
    v11 = v29;
    v12 = *(unsigned int (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v29 + 48LL);
    v27 = &v30;
    v28 = 0LL;
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"PositionShoulderTap", 0x14u, 0x13u);
    v13 = v12(v11, v33, &v28) >> 31;
    v33 = 0LL;
    v14 = v27;
    RoVariant::RoVariant((RoVariant *)&v25, v28);
    v15 = v25;
    v25 = 0LL;
    LODWORD(v12) = v26;
    v26 = 0;
    RoVariant::~RoVariant((RoVariant *)&v25);
    v16 = *v14;
    *v14 = v15;
    v25 = v16;
    LODWORD(v16) = *((_DWORD *)v14 + 2);
    *((_DWORD *)v14 + 2) = (_DWORD)v12;
    v26 = v16;
    RoVariant::~RoVariant((RoVariant *)&v25);
    if ( (unsigned __int8)v13 != 1 )
    {
      if ( (int)CShoulderTapExperienceManager::PositionShoulderTap((CShoulderTapExperienceManager *)((char *)this - 32)) < 0 )
      {
        v10 = 1;
        goto LABEL_6;
      }
    }
    else
    {
      v17 = v29;
      v18 = *(unsigned int (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v29 + 48LL);
      v27 = &v30;
      v28 = 0LL;
      v33 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AnimationComplete", 0x12u, 0x11u);
      v19 = v18(v17, v33, &v28) >> 31;
      v33 = 0LL;
      v20 = v27;
      RoVariant::RoVariant((RoVariant *)&v25, v28);
      v21 = v25;
      v25 = 0LL;
      LODWORD(v18) = v26;
      v26 = 0;
      RoVariant::~RoVariant((RoVariant *)&v25);
      v22 = *v20;
      *v20 = v21;
      v25 = v22;
      LODWORD(v22) = *((_DWORD *)v20 + 2);
      *((_DWORD *)v20 + 2) = (_DWORD)v18;
      v26 = v22;
      RoVariant::~RoVariant((RoVariant *)&v25);
      if ( (unsigned __int8)v19 != 1 )
      {
        v23 = CSingleViewShellExperience::Hide((__int64)this + 8, 0LL);
        v4 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x104,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
            (const char *)(unsigned int)v23);
          goto LABEL_13;
        }
      }
    }
    RoVariant::~RoVariant((RoVariant *)&v30);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
  }
  return 0LL;
}
