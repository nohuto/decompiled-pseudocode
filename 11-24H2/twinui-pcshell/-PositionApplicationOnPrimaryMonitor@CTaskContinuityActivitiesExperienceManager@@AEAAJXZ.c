/*
 * XREFs of ?PositionApplicationOnPrimaryMonitor@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ @ 0x180382644
 * Callers:
 *     ?OnViewCreated@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803825B0 (-OnViewCreated@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 *     ?OnViewShowing@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180382600 (-OnViewShowing@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801DDB50 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1801F538C (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::PositionApplicationOnPrimaryMonitor(
        CTaskContinuityActivitiesExperienceManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, SID *, GUID *, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, IUnknown **); // rdi
  int v8; // eax
  __int64 v9; // rdx
  HWND WindowW; // rax
  HRESULT v11; // eax
  __int64 v12; // rdx
  IUnknown *punk; // [rsp+30h] [rbp-30h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  struct tagRECT v17; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  if ( *((_QWORD *)this + 12) )
  {
    v16 = 0LL;
    v2 = *((_QWORD *)this + 36);
    v3 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    v4 = v3(v2, &SID_ImmersiveLauncher, &GUID_d8d60399_a0f1_f987_5551_321fd1b49864, &v16);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF1,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
LABEL_22:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
      return v5;
    }
    punk = 0LL;
    v6 = v16;
    v7 = *(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)v16 + 88LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
    v8 = v7(v6, &punk);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 244LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_21;
    }
    v17 = 0LL;
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    if ( WindowW && GetPropW(WindowW, L"IsAutoHideEnabled") )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      v11 = IUnknown_QueryService(
              punk,
              (const GUID *const)&SID_EdgeUi,
              &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
              &ppvOut);
      v5 = v11;
      if ( v11 < 0 )
      {
        v12 = 251LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
LABEL_21:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
        goto LABEL_22;
      }
      v11 = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)ppvOut + 152LL))(ppvOut, &v17);
      v5 = v11;
      if ( v11 < 0 )
      {
        v12 = 252LL;
        goto LABEL_10;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    }
    else
    {
      v8 = ((__int64 (__fastcall *)(IUnknown *, struct tagRECT *))punk->lpVtbl[3].Release)(punk, &v17);
      v5 = v8;
      if ( v8 < 0 )
      {
        v9 = 256LL;
        goto LABEL_20;
      }
    }
    v8 = CSingleViewShellExperience::SetPosition(
           (CTaskContinuityActivitiesExperienceManager *)((char *)this + 72),
           &v17);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 259LL;
      goto LABEL_20;
    }
    v8 = CSingleViewShellExperience::ShowBorder((__int64)this + 72, 0);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 260LL;
      goto LABEL_20;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  }
  return 0LL;
}
