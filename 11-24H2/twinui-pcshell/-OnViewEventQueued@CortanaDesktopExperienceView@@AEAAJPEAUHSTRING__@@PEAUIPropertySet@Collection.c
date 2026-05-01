/*
 * XREFs of ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803DB74C
 * Callers:
 *     ?OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x1803DB660 (-OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x1800274B0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180165044 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D2B00 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1802A1A28 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$Start@PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@SA?AV01@$$QEAPEBG@Z @ 0x180379068 (--$Start@PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@SA-AV01@$$QEAPEB.c)
 *     ??1CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180379E44 (--1CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18037DB04 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 *     ??$GetValue@URect@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAURect@63@@Z1@Z @ 0x1803CD20C (--$GetValue@URect@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEA.c)
 *     ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x1803D77E0 (-ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Win.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803D89FC (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ @ 0x1803D8BD8 (-EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ.c)
 *     ?FocusNavigate@CortanaDesktopExperienceView@@AEAAJW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x1803D8E24 (-FocusNavigate@CortanaDesktopExperienceView@@AEAAJW4FocusNavigateDirection@Experience@Shell@Inte.c)
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1803DD4CC (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     ?SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x1803DD64C (-SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1803DD910 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CortanaDesktopExperienceView::OnViewEventQueued(
        CortanaDesktopExperienceView *this,
        Microsoft::WRL::Wrappers::Details *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  unsigned int v6; // r8d
  HSTRING_HEADER *v7; // rax
  HSTRING v8; // r8
  unsigned int v9; // r8d
  HSTRING_HEADER *v10; // rax
  HSTRING v11; // r8
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  HSTRING v14; // r8
  unsigned int v15; // r8d
  HSTRING_HEADER *v16; // rax
  HSTRING v17; // r8
  unsigned int v18; // r8d
  HSTRING_HEADER *v19; // rax
  HSTRING v20; // r8
  unsigned int v21; // r8d
  int v22; // eax
  int v23; // ebx
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  HSTRING_HEADER *v26; // rax
  HSTRING v27; // r8
  unsigned int v28; // r8d
  void (*v29)(void); // rax
  HSTRING_HEADER *v30; // rax
  HSTRING v31; // r8
  unsigned int v32; // r8d
  Windows::Internal::ShellHelpers::PropertySetHelper *v33; // rbx
  unsigned int v34; // r8d
  HSTRING_HEADER *v35; // rax
  __int64 v36; // r8
  HSTRING_HEADER *v37; // rax
  HSTRING v38; // r8
  unsigned int v39; // r8d
  HSTRING_HEADER *v40; // rax
  HSTRING v41; // r8
  unsigned int v42; // r8d
  HSTRING_HEADER *v43; // rax
  HSTRING v44; // r8
  unsigned int v45; // r8d
  HSTRING_HEADER *v46; // rax
  HSTRING v47; // r8
  unsigned int v48; // r8d
  HSTRING_HEADER *v49; // rax
  HSTRING v50; // r8
  unsigned int v51; // r8d
  unsigned int v52; // ebx
  int v53; // eax
  HSTRING_HEADER *v54; // rax
  HSTRING v55; // r8
  Windows::Internal::ShellHelpers::PropertySetHelper *v56; // rbx
  unsigned int v57; // r8d
  HSTRING_HEADER *v58; // rax
  __int64 v59; // r8
  int v60; // eax
  unsigned __int8 v62[16]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v63; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING_HEADER v64; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v65; // [rsp+58h] [rbp-A8h]
  HSTRING_HEADER v66; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+78h] [rbp-88h]
  __int64 v68[42]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  *(_QWORD *)&v63 = WindowsGetStringRawBuffer((HSTRING)a2, 0LL);
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::Start<unsigned short const *>(
    (CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v68,
    (const unsigned __int16 **)&v63);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v64, (const WCHAR **)&off_18075D390, v6);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, (HSTRING)v7[1].Reserved.Reserved1, v8)
    || (v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v64, (const WCHAR **)&off_18075D370, v9),
        !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         a2,
                         (HSTRING)v10[1].Reserved.Reserved1,
                         v11))
    || (v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v64, (const WCHAR **)&off_18075D378, v12),
        !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         a2,
                         (HSTRING)v13[1].Reserved.Reserved1,
                         v14))
    || (v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v64, (const WCHAR **)&off_18075D380, v15),
        !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         a2,
                         (HSTRING)v16[1].Reserved.Reserved1,
                         v17)) )
  {
    CortanaDesktopExperienceView::FocusNavigate((__int64)this);
    goto LABEL_35;
  }
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v64, (const WCHAR **)&off_18075D388, v18);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       a2,
                       (HSTRING)v19[1].Reserved.Reserved1,
                       v20) )
  {
    v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v64, (const WCHAR **)&off_18075D310, v21);
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         a2,
                         (HSTRING)v26[1].Reserved.Reserved1,
                         v27) )
    {
      v30 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v64, (const WCHAR **)&off_18075D318, v28);
      if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                            a2,
                            (HSTRING)v30[1].Reserved.Reserved1,
                            v31) )
      {
        v62[0] = 0;
        v33 = Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v63,
                a3);
        v35 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v66, (const WCHAR **)&off_18075D350, v34);
        v23 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v33,
                (__int64)v35[1].Reserved.Reserved1,
                v36,
                v62);
        v67 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v63);
        if ( v23 >= 0 )
        {
          CortanaDesktopExperienceView::SetExplicitDimissEnabled(this, v62[0]);
          goto LABEL_35;
        }
        v24 = (unsigned int)v23;
        v25 = 1082LL;
        goto LABEL_14;
      }
      v37 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v64, (const WCHAR **)&off_18075D320, v32);
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                           a2,
                           (HSTRING)v37[1].Reserved.Reserved1,
                           v38) )
      {
        v40 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v64, (const WCHAR **)&off_18075D328, v39);
        if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                             a2,
                             (HSTRING)v40[1].Reserved.Reserved1,
                             v41) )
        {
          v43 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v64, (const WCHAR **)&off_18075D2F0, v42);
          if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                               a2,
                               (HSTRING)v43[1].Reserved.Reserved1,
                               v44) )
          {
            v46 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                    &v64,
                    (const WCHAR **)&off_18075D2F8,
                    v45);
            if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                                 a2,
                                 (HSTRING)v46[1].Reserved.Reserved1,
                                 v47) )
            {
              v49 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                      &v64,
                      (const WCHAR **)&off_18075D300,
                      v48);
              if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                                   a2,
                                   (HSTRING)v49[1].Reserved.Reserved1,
                                   v50) )
              {
                v54 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                        &v64,
                        (const WCHAR **)&off_18075D308,
                        v51);
                if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                                      a2,
                                      (HSTRING)v54[1].Reserved.Reserved1,
                                      v55) )
                {
                  *(_OWORD *)&v66.Reserved.Reserved1 = 0LL;
                  v56 = Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v63,
                          a3);
                  v58 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                          &v64,
                          (const WCHAR **)&off_18075D2E8,
                          v57);
                  Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<Windows::Foundation::Rect>(
                    v56,
                    (HSTRING)v58[1].Reserved.Reserved1,
                    v59,
                    &v66);
                  v65 = 0LL;
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v63);
                  v63 = *(_OWORD *)&v66.Reserved.Reserved1;
                  v60 = CortanaDesktopExperienceView::ApplyCortanaWindowRegionWithCustomRects(
                          (__int64)this,
                          (float *)&v63);
                  if ( v60 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x458,
                      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
                      (const char *)(unsigned int)v60);
                }
              }
              else
              {
                v52 = 13;
                if ( (unsigned int)(*((_DWORD *)this + 35) - 3) <= 1 && *((_BYTE *)this + 242) )
                  v52 = CortanaHelpers::AllowCortanaAboveLock() != 0 ? 18 : 13;
                v53 = CortanaDesktopExperienceView::SetZBand(this, v52);
                if ( v53 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x4EE,
                    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
                    (const char *)(unsigned int)v53);
                CortanaDesktopExperienceView::EnsureForegroundRightsForAmbientModeIfNeeded(this);
              }
              goto LABEL_35;
            }
            *((_BYTE *)this + 249) = 0;
          }
          CortanaDesktopExperienceView::ShowBorder(this, 0LL);
LABEL_35:
          wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v68);
          v23 = 0;
          goto LABEL_36;
        }
        *((_BYTE *)this + 236) = 0;
        v29 = *(void (**)(void))(**((_QWORD **)this + 12) + 48LL);
      }
      else
      {
        *((_BYTE *)this + 236) = 1;
        v29 = *(void (**)(void))(**((_QWORD **)this + 12) + 40LL);
      }
    }
    else
    {
      CortanaDesktopExperienceView::SetExplicitDimissEnabled(this, 0);
      v29 = *(void (**)(void))(**((_QWORD **)this + 12) + 112LL);
    }
    v29();
    goto LABEL_35;
  }
  v22 = CortanaDesktopExperienceView::DismissCortanaApp(this);
  v23 = v22;
  if ( v22 >= 0 )
    goto LABEL_35;
  v24 = (unsigned int)v22;
  v25 = 1071LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)v24);
LABEL_36:
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::~CortanaExperienceManager_OnEventQueued((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v68);
  return (unsigned int)v23;
}
