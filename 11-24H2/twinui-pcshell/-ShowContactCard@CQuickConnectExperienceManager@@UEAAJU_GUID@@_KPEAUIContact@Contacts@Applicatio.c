/*
 * XREFs of ?ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAUIContactCardOptions@456@ME@Z @ 0x18039A940
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18005D440 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1800AF724 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$As@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@?$ComPtr@UIContactCardOptions@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803966C8 (--$As@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@-$ComPtr@UIContactCardOptions@Co.c)
 *     ??$ExperienceManager_ShowContactCard_Guid@AEAU_GUID@@@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXAEAU_GUID@@@Z @ 0x180396E7C (--$ExperienceManager_ShowContactCard_Guid@AEAU_GUID@@@ExperienceManager_ShowContactCard@QuickCon.c)
 *     ??$ExperienceManager_ShowContactCard_Normalized@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXAEAM000@Z @ 0x180396F10 (--$ExperienceManager_ShowContactCard_Normalized@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCa.c)
 *     ??$ExperienceManager_ShowContactCard_Params@_NAEAMAEAMAEAMAEAMAEAW4Placement@Popups@UI@Windows@@AEAW4ContactCardHeaderKind@Contacts@ApplicationModel@4@AEAW4ContactCardTabKind@674@AEAI@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAX$$QEA_NAEAM111AEAW4Placement@Popups@UI@Windows@@AEAW4ContactCardHeaderKind@Contacts@ApplicationModel@5@AEAW4ContactCardTabKind@785@AEAI@Z @ 0x180396FE8 (--$ExperienceManager_ShowContactCard_Params@_NAEAMAEAMAEAMAEAMAEAW4Placement@Popups@UI@Windows@@.c)
 *     ??$ExperienceManager_ShowContactCard_Scaled@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXAEAM000@Z @ 0x180397118 (--$ExperienceManager_ShowContactCard_Scaled@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCard@Q.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803978EC (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_1803978EC.c)
 *     ??1ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAA@XZ @ 0x180397E58 (--1ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@ApplicationModel@Windows@@PEAPEAU2345@@Z @ 0x18039868C (-CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@Ap.c)
 *     ?ExperienceManager_ShowContactCard_Showing@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x180398EBC (-ExperienceManager_ShowContactCard_Showing@ExperienceManager_ShowContactCard@QuickConnectTelemet.c)
 *     ?ExperienceManager_ShowContactCard_SkipShowNewContactCardDueToOldOneStillExists@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x180398F0C (-ExperienceManager_ShowContactCard_SkipShowNewContactCardDueToOldOneStillExists@ExperienceManage.c)
 *     ?StartActivity@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x18039B284 (-StartActivity@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18039B3C4 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CQuickConnectExperienceManager::ShowContactCard(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        int a6,
        struct Windows::ApplicationModel::Contacts::IContactCardOptions *a7,
        float a8,
        char a9)
{
  __int64 v13; // rax
  unsigned int LastErrorFailHr; // ebx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  float *v18; // r14
  _QWORD *v19; // rsi
  CQuickConnectExperienceManager *v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  float *v24; // rsi
  float *v25; // rax
  __int64 v26; // rcx
  wil::details *v27; // rcx
  int v28; // eax
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+64h] [rbp-9Ch] BYREF
  int v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  struct tagPOINT Point; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v36[42]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v36,
    (__int64)"ExperienceManager_ShowContactCard");
  v36[0] = &QuickConnectTelemetry::ExperienceManager_ShowContactCard::`vftable';
  QuickConnectTelemetry::ExperienceManager_ShowContactCard::StartActivity((QuickConnectTelemetry::ExperienceManager_ShowContactCard *)v36);
  v13 = *a2 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *a2 == *(_QWORD *)&GUID_NULL.Data1 )
    v13 = a2[1] - *(_QWORD *)GUID_NULL.Data4;
  if ( !v13 )
  {
    LastErrorFailHr = -2147024809;
    v15 = 2147942487LL;
    v16 = 399LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)v15);
    goto LABEL_38;
  }
  if ( !a3 )
  {
    LastErrorFailHr = -2147024809;
    v15 = 2147942487LL;
    v16 = 400LL;
    goto LABEL_18;
  }
  if ( !a4 )
  {
    LastErrorFailHr = -2147024809;
    v15 = 2147942487LL;
    v16 = 401LL;
    goto LABEL_18;
  }
  if ( !a7 )
  {
    LastErrorFailHr = -2147024809;
    v15 = 2147942487LL;
    v16 = 402LL;
    goto LABEL_18;
  }
  QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Guid<_GUID &>();
  v17 = *(_QWORD *)(a1 + 280) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v17 )
    v17 = *(_QWORD *)(a1 + 288) - *(_QWORD *)GUID_NULL.Data4;
  if ( !v17 )
  {
    *(_OWORD *)(a1 + 280) = *(_OWORD *)a2;
    *(_QWORD *)(a1 + 272) = a3;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 304), a4);
    *(_BYTE *)(a1 + 340) = a9;
    v18 = (float *)(a1 + 320);
    *(_OWORD *)(a1 + 320) = *a5;
    *(_DWORD *)(a1 + 336) = a6;
    v19 = (_QWORD *)(a1 + 312);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 312));
    v21 = CQuickConnectExperienceManager::CopyContactCardOptions(
            v20,
            a7,
            (struct Windows::ApplicationModel::Contacts::IContactCardOptions **)(a1 + 312));
    LastErrorFailHr = v21;
    if ( v21 < 0 )
    {
      v16 = 427LL;
LABEL_17:
      v15 = (unsigned int)v21;
      goto LABEL_18;
    }
    v33 = 0;
    v21 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v19 + 48LL))(*v19, &v33);
    LastErrorFailHr = v21;
    if ( v21 < 0 )
    {
      v16 = 430LL;
      goto LABEL_17;
    }
    v32 = 0;
    v21 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v19 + 64LL))(*v19, &v32);
    LastErrorFailHr = v21;
    if ( v21 < 0 )
    {
      v16 = 433LL;
      goto LABEL_17;
    }
    v31 = 0;
    v30 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<Windows::ApplicationModel::Contacts::IContactCardOptions>::As<Windows::ApplicationModel::Contacts::IContactCardOptions2>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 312),
                &v30) >= 0 )
    {
      v34 = 0LL;
      v22 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 48LL))(v30, &v34);
      LastErrorFailHr = v22;
      if ( v22 < 0 )
      {
        v23 = 443LL;
LABEL_26:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v22);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
LABEL_27:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
        goto LABEL_38;
      }
      v22 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 56LL))(v34, &v31);
      LastErrorFailHr = v22;
      if ( v22 < 0 )
      {
        v23 = 444LL;
        goto LABEL_26;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    }
    v24 = (float *)(a1 + 324);
    QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Params<bool,float &,float &,float &,float &,enum Windows::UI::Popups::Placement &,enum Windows::ApplicationModel::Contacts::ContactCardHeaderKind &,enum Windows::ApplicationModel::Contacts::ContactCardTabKind &,unsigned int &>();
    v25 = (float *)(a1 + 320);
    v26 = 4LL;
    do
    {
      *v25 = (float)(a8 / 96.0) * *v25;
      ++v25;
      --v26;
    }
    while ( v26 );
    QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Scaled<float &,float &,float &,float &>(
      (__int64)v36,
      (int *)(a1 + 320),
      (int *)(a1 + 324),
      (int *)(a1 + 328),
      (int *)(a1 + 332));
    Point.x = (int)*v18;
    Point.y = (int)*v24;
    if ( ClientToScreen(*(HWND *)(a1 + 272), &Point) )
    {
      *v18 = (float)Point.x;
      *v24 = (float)Point.y;
      QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Normalized<float &,float &,float &,float &>(
        (__int64)v36,
        (int *)(a1 + 320),
        (int *)(a1 + 324),
        (int *)(a1 + 328),
        (int *)(a1 + 332));
      QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Showing((QuickConnectTelemetry::ExperienceManager_ShowContactCard *)v36);
      v28 = CSingleViewShellExperience::Show(
              a1 + 48,
              (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4);
      LastErrorFailHr = v28;
      if ( v28 >= 0 )
      {
        wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v36);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
        LastErrorFailHr = 0;
        goto LABEL_38;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E9,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v28);
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v27);
    }
    goto LABEL_27;
  }
  QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_SkipShowNewContactCardDueToOldOneStillExists((QuickConnectTelemetry::ExperienceManager_ShowContactCard *)v36);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v36);
  LastErrorFailHr = 1;
LABEL_38:
  QuickConnectTelemetry::ExperienceManager_ShowContactCard::~ExperienceManager_ShowContactCard((QuickConnectTelemetry::ExperienceManager_ShowContactCard *)v36);
  return LastErrorFailHr;
}
