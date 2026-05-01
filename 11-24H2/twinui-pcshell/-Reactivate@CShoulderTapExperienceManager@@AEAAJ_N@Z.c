/*
 * XREFs of ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x18038D150
 * Callers:
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038C810 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z @ 0x18038D770 (-ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x18003E8B0 (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18003EE68 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1800AF724 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x180122740 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180122FC0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180123324 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D2B00 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x18038C020 (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18038C5C0 (-GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CShoulderTapExperienceManager::Reactivate(CShoulderTapExperienceManager *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  unsigned int v7; // r8d
  HSTRING_HEADER *v8; // rax
  __int64 v9; // r8
  int PeopleBarScreenEdge; // eax
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rbx
  HSTRING_HEADER *v14; // rax
  __int64 v15; // r8
  unsigned int v16; // r8d
  __int64 v17; // rbx
  HSTRING_HEADER *v18; // rax
  __int64 v19; // r8
  unsigned int v20; // r8d
  __int64 v21; // rbx
  HSTRING_HEADER *v22; // rax
  __int64 v23; // r8
  unsigned int v24; // r8d
  unsigned int v25; // ebx
  HSTRING_HEADER *v26; // rax
  __int64 v27; // r8
  unsigned int v28; // r8d
  unsigned int v29; // ebx
  HSTRING_HEADER *v30; // rax
  __int64 v31; // r8
  unsigned int v32; // r8d
  unsigned int v33; // ebx
  HSTRING_HEADER *v34; // rax
  __int64 v35; // r8
  unsigned int v36; // r8d
  __int64 v37; // rbx
  HSTRING_HEADER *v38; // rax
  __int64 v39; // r8
  unsigned int v40; // r8d
  __int64 v41; // rbx
  HSTRING_HEADER *v42; // rax
  __int64 v43; // r8
  unsigned int v44; // r8d
  __int64 v45; // rbx
  HSTRING_HEADER *v46; // rax
  __int64 v47; // r8
  unsigned int v48; // r8d
  HSTRING_HEADER *v49; // rax
  __int64 v50; // r8
  unsigned int v51; // r8d
  HSTRING_HEADER *v52; // rax
  __int64 (__fastcall ***v53)(_QWORD, GUID *, __int64 *); // r8
  unsigned int v54; // r8d
  unsigned int v55; // ebx
  unsigned int v56; // esi
  HSTRING_HEADER *v57; // rax
  __int64 v58; // r8
  unsigned int v59; // r8d
  HSTRING_HEADER *v60; // rax
  __int64 v61; // r8
  unsigned int v62; // r8d
  struct Windows::Foundation::Collections::IPropertySet *v63; // rbx
  HSTRING_HEADER *v64; // rax
  struct Windows::Foundation::Collections::IPropertySet *v65; // r9
  __int64 v66; // r9
  __int64 v68; // [rsp+20h] [rbp-40h] BYREF
  int v69; // [rsp+28h] [rbp-38h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v70; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v72; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v70 = 0LL;
  v72 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v4 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v72,
         (__int64 *)&v70);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
      v70);
    v6 = *((_QWORD *)this + 33);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           &hstringHeader,
           (const WCHAR **)&off_18075D0B8,
           v7);
    PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
                            (HSTRING)v8[1].Reserved.Reserved1,
                            v9,
                            v6);
    v5 = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v12 = 107LL;
LABEL_44:
      v66 = (unsigned int)PeopleBarScreenEdge;
LABEL_47:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)v66);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v68);
      goto LABEL_48;
    }
    v13 = *((_QWORD *)this + 34);
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_18075D0C0,
            v11);
    PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
                            (HSTRING)v14[1].Reserved.Reserved1,
                            v15,
                            v13);
    v5 = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v12 = 108LL;
      goto LABEL_44;
    }
    v17 = *((_QWORD *)this + 35);
    v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_18075D0D0,
            v16);
    PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
                            (HSTRING)v18[1].Reserved.Reserved1,
                            v19,
                            v17);
    v5 = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v12 = 109LL;
      goto LABEL_44;
    }
    v21 = *((_QWORD *)this + 36);
    v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_18075D0D8,
            v20);
    PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
                            (HSTRING)v22[1].Reserved.Reserved1,
                            v23,
                            v21);
    v5 = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v12 = 110LL;
      goto LABEL_44;
    }
    v25 = *((_DWORD *)this + 74);
    v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_18075D0E0,
            v24);
    PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
                            (HSTRING)v26[1].Reserved.Reserved1,
                            v27,
                            v25);
    v5 = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v12 = 111LL;
      goto LABEL_44;
    }
    v29 = *((_DWORD *)this + 75);
    v30 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_18075D068,
            v28);
    PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
                            (HSTRING)v30[1].Reserved.Reserved1,
                            v31,
                            v29);
    v5 = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v12 = 112LL;
      goto LABEL_44;
    }
    v33 = *((_DWORD *)this + 76);
    v34 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_18075D070,
            v32);
    PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
                            (HSTRING)v34[1].Reserved.Reserved1,
                            v35,
                            v33);
    v5 = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v12 = 113LL;
      goto LABEL_44;
    }
    v37 = *((_QWORD *)this + 39);
    v38 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_18075D078,
            v36);
    PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
                            (HSTRING)v38[1].Reserved.Reserved1,
                            v39,
                            v37);
    v5 = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v12 = 114LL;
      goto LABEL_44;
    }
    v41 = *((_QWORD *)this + 40);
    v42 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_18075D080,
            v40);
    PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
                            (HSTRING)v42[1].Reserved.Reserved1,
                            v43,
                            v41);
    v5 = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v12 = 115LL;
      goto LABEL_44;
    }
    v45 = *((_QWORD *)this + 41);
    v46 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_18075D090,
            v44);
    PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
                            (HSTRING)v46[1].Reserved.Reserved1,
                            v47,
                            v45);
    v5 = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v12 = 116LL;
      goto LABEL_44;
    }
    v49 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_18075D088,
            v48);
    PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                            &v68,
                            (__int64)v49[1].Reserved.Reserved1,
                            v50,
                            a2);
    v5 = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v12 = 117LL;
      goto LABEL_44;
    }
    v69 = -1;
    PeopleBarScreenEdge = CShoulderTapExperienceManager::GetPeopleBarScreenEdge(
                            this,
                            (enum EDGEUI_TRAYSTUCKPLACE *)&v69);
    v5 = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v12 = 121LL;
      goto LABEL_44;
    }
    v52 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_18075D0C8,
            v51);
    PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
                            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
                            (HSTRING)v52[1].Reserved.Reserved1,
                            v53);
    v5 = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v12 = 122LL;
      goto LABEL_44;
    }
    v55 = 184;
    v56 = 184;
    if ( v69 != -1 )
    {
      switch ( v69 )
      {
        case 0:
          goto LABEL_35;
        case 1:
LABEL_34:
          v56 = 202;
          goto LABEL_36;
        case 2:
LABEL_35:
          v55 = 202;
LABEL_36:
          v57 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  &hstringHeader,
                  (const WCHAR **)&off_18075D098,
                  v54);
          PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
                                  (HSTRING)v57[1].Reserved.Reserved1,
                                  v58,
                                  v55);
          v5 = PeopleBarScreenEdge;
          if ( PeopleBarScreenEdge >= 0 )
          {
            v60 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                    &hstringHeader,
                    (const WCHAR **)&off_18075D0A0,
                    v59);
            PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                                    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v68,
                                    (HSTRING)v60[1].Reserved.Reserved1,
                                    v61,
                                    v56);
            v5 = PeopleBarScreenEdge;
            if ( PeopleBarScreenEdge >= 0 )
            {
              PeopleBarScreenEdge = CSingleViewShellExperience::Show(
                                      (__int64)this + 40,
                                      (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
              v5 = PeopleBarScreenEdge;
              if ( PeopleBarScreenEdge >= 0 )
              {
                v63 = v70;
                v64 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                        &hstringHeader,
                        (const WCHAR **)&off_18075D0A8,
                        v62);
                PeopleBarScreenEdge = CSingleViewShellExperience::Reactivate(
                                        (CShoulderTapExperienceManager *)((char *)this + 40),
                                        (HSTRING)v64[1].Reserved.Reserved1,
                                        v63,
                                        v65);
                v5 = PeopleBarScreenEdge;
                if ( PeopleBarScreenEdge >= 0 )
                {
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v68);
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v70);
                  return 0LL;
                }
                v12 = 153LL;
              }
              else
              {
                v12 = 152LL;
              }
            }
            else
            {
              v12 = 149LL;
            }
          }
          else
          {
            v12 = 148LL;
          }
          goto LABEL_44;
        case 3:
          goto LABEL_34;
      }
    }
    v5 = -2147024809;
    v66 = 2147942487LL;
    v12 = 145LL;
    goto LABEL_47;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x68,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_48:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v70);
  return v5;
}
