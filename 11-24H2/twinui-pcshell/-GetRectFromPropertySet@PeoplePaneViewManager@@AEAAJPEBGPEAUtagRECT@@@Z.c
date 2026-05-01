/*
 * XREFs of ?GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x180411298
 * Callers:
 *     ?GetRectForFlyoutButton@PeoplePaneViewManager@@UEAAJPEAUtagRECT@@@Z @ 0x180411200 (-GetRectForFlyoutButton@PeoplePaneViewManager@@UEAAJPEAUtagRECT@@@Z.c)
 *     ?GetRectFromContactId@PeoplePaneViewManager@@UEAAJPEBGPEAUtagRECT@@@Z @ 0x180411250 (-GetRectFromContactId@PeoplePaneViewManager@@UEAAJPEBGPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180122FC0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z @ 0x1801A4A48 (--0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z.c)
 *     ?VerifyPV@Accessor@RoVariant@@AEBAJXZ @ 0x1801A4BAC (-VerifyPV@Accessor@RoVariant@@AEBAJXZ.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1801E309C (--1RoVariant@@QEAA@XZ.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802C1CE8 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall PeoplePaneViewManager::GetRectFromPropertySet(
        PeoplePaneViewManager *this,
        const unsigned __int16 *a2,
        struct tagRECT *a3)
{
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // r8d
  __int64 v11; // rbx
  unsigned int (__fastcall *v12)(__int64, PVOID, char *); // rdi
  HSTRING_HEADER *v13; // rax
  unsigned int v14; // r14d
  const WCHAR **Reserved1; // rsi
  const WCHAR *v16; // rbx
  const WCHAR *v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, PVOID, char *); // rdi
  HSTRING_HEADER *v21; // rax
  int v22; // r14d
  const WCHAR **v23; // rsi
  const WCHAR *v24; // rbx
  const WCHAR *v25; // rax
  __int64 v26; // r8
  BOOL WindowRect; // eax
  float v28; // xmm2_4
  float v29; // xmm0_4
  int v31[2]; // [rsp+20h] [rbp-89h] BYREF
  __int64 v32; // [rsp+28h] [rbp-81h] BYREF
  const WCHAR *v33; // [rsp+30h] [rbp-79h] BYREF
  int v34; // [rsp+38h] [rbp-71h]
  __int64 v35; // [rsp+40h] [rbp-69h] BYREF
  __int64 v36; // [rsp+48h] [rbp-61h] BYREF
  void *v37; // [rsp+50h] [rbp-59h] BYREF
  int v38; // [rsp+58h] [rbp-51h]
  __int128 v39; // [rsp+60h] [rbp-49h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-39h] BYREF
  __int64 v41; // [rsp+88h] [rbp-21h]
  struct tagRECT Rect; // [rsp+90h] [rbp-19h] BYREF
  HSTRING_HEADER v43; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v44; // [rsp+B8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v33 = a2;
  SetRectEmpty(a3);
  if ( *((_QWORD *)this + 73) )
  {
    v36 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
    v5 = CoreQueryWindowService(
           *((_QWORD *)this + 73),
           &GUID_c56c5799_4bb3_7fae_7fad_4db2f6a53eff,
           &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da,
           &v36);
    if ( v5 < 0 )
    {
LABEL_26:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
      return (unsigned int)v5;
    }
    *(_QWORD *)v31 = 0LL;
    v41 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v6 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v41,
           (__int64 *)v31);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x164,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v6);
LABEL_6:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v31);
      goto LABEL_26;
    }
    v32 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    v7 = RoCreatePropertySetSerializer(&v32);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v32 + 56LL))(v32, *(_QWORD *)v31, v36);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v35 = 0LL;
        v9 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
               (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v31,
               &v35);
        v5 = v9;
        if ( v9 >= 0 )
        {
          v37 = 0LL;
          v38 = 0;
          v11 = v35;
          v12 = *(unsigned int (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v35 + 48LL);
          hstringHeader.Reserved.Reserved1 = &v37;
          *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = 0LL;
          v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, &v33, v10);
          v14 = v12(v11, v13[1].Reserved.Reserved1, &hstringHeader.Reserved.Reserved2[8]) >> 31;
          v44 = 0LL;
          Reserved1 = (const WCHAR **)hstringHeader.Reserved.Reserved1;
          RoVariant::RoVariant((RoVariant *)&v33, *(struct IInspectable **)&hstringHeader.Reserved.Reserved2[8]);
          v16 = v33;
          v33 = 0LL;
          LODWORD(v12) = v34;
          v34 = 0;
          RoVariant::~RoVariant((RoVariant *)&v33);
          v17 = *Reserved1;
          *Reserved1 = v16;
          v33 = v17;
          LODWORD(v17) = *((_DWORD *)Reserved1 + 2);
          *((_DWORD *)Reserved1 + 2) = (_DWORD)v12;
          v34 = (int)v17;
          RoVariant::~RoVariant((RoVariant *)&v33);
          if ( (_BYTE)v14 )
          {
            v19 = v35;
            v20 = *(__int64 (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v35 + 48LL);
            hstringHeader.Reserved.Reserved1 = &v37;
            *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = 0LL;
            v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)off_18075D3E0, v18);
            v22 = v20(v19, v21[1].Reserved.Reserved1, &hstringHeader.Reserved.Reserved2[8]);
            v44 = 0LL;
            v23 = (const WCHAR **)hstringHeader.Reserved.Reserved1;
            RoVariant::RoVariant((RoVariant *)&v33, *(struct IInspectable **)&hstringHeader.Reserved.Reserved2[8]);
            v24 = v33;
            v33 = 0LL;
            LODWORD(v20) = v34;
            v34 = 0;
            RoVariant::~RoVariant((RoVariant *)&v33);
            v25 = *v23;
            *v23 = v24;
            v33 = v25;
            LODWORD(v25) = *((_DWORD *)v23 + 2);
            *((_DWORD *)v23 + 2) = (_DWORD)v20;
            v34 = (int)v25;
            RoVariant::~RoVariant((RoVariant *)&v33);
            if ( v22 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x175,
                (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
                (const char *)(unsigned int)v22);
              RoVariant::~RoVariant((RoVariant *)&v37);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v31);
              v5 = v22;
              goto LABEL_26;
            }
          }
          hstringHeader.Reserved.Reserved1 = v37;
          *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = v38;
          v39 = 0LL;
          v5 = RoVariant::Accessor::VerifyPV((RoVariant::Accessor *)&hstringHeader);
          if ( v5 >= 0 )
          {
            v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v26 + 200LL))(v26, &v39);
            if ( v5 >= 0 )
            {
              Rect = 0LL;
              WindowRect = GetWindowRect(*((HWND *)this + 73), &Rect);
              v28 = *(float *)&v39;
              if ( WindowRect )
              {
                v28 = *(float *)&v39 + (float)Rect.left;
                *(float *)&v39 = v28;
                v29 = *((float *)&v39 + 1) + (float)Rect.top;
                *((float *)&v39 + 1) = v29;
              }
              else
              {
                v29 = *((float *)&v39 + 1);
              }
              a3->left = (int)v28;
              a3->top = (int)v29;
              a3->right = (int)v28 + (int)*((float *)&v39 + 2);
              a3->bottom = (int)v29 + (int)*((float *)&v39 + 3);
              RoVariant::~RoVariant((RoVariant *)&v37);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v31);
              v5 = 0;
              goto LABEL_26;
            }
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x177,
            (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v5);
          RoVariant::~RoVariant((RoVariant *)&v37);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x16C,
            (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v9);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
        goto LABEL_10;
      }
      v8 = 361LL;
    }
    else
    {
      v8 = 360LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_10:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    goto LABEL_6;
  }
  v5 = -2147467259;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15B,
    (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)0x80004005LL);
  return (unsigned int)v5;
}
