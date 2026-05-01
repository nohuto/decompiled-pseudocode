/*
 * XREFs of ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x1800AD110
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1800AB40C (-InternalAddRef@-$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x1800AEAEC (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x1800B60E0 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B4630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSit.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_219695f63e651180cfc7ae358f81f100___ @ 0x18038E5F4 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_219695f63e651180cfc7ae358f81f100___.c)
 *     _lambda_219695f63e651180cfc7ae358f81f100_::_lambda_219695f63e651180cfc7ae358f81f100_ @ 0x18038EA74 (_lambda_219695f63e651180cfc7ae358f81f100_--_lambda_219695f63e651180cfc7ae358f81f100_.c)
 *     _lambda_219695f63e651180cfc7ae358f81f100_::__lambda_219695f63e651180cfc7ae358f81f100_ @ 0x18038EB9C (_lambda_219695f63e651180cfc7ae358f81f100_--__lambda_219695f63e651180cfc7ae358f81f100_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStartExperienceManager::Hide(CStartExperienceManager *this, struct CSingleViewShellExperience *a2)
{
  bool v2; // di
  int v3; // r14d
  int v5; // eax
  int v6; // edi
  unsigned int v7; // esi
  int v8; // eax
  int v9; // edi
  __int64 v10; // rdx
  char *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // edi
  bool v18[4]; // [rsp+30h] [rbp-50h] BYREF
  int v19; // [rsp+34h] [rbp-4Ch] BYREF
  int v20; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT v21; // [rsp+40h] [rbp-40h] BYREF
  _WORD v22[4]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v23; // [rsp+58h] [rbp-28h]
  __int64 v24; // [rsp+60h] [rbp-20h]
  __int64 v25; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v2 = 0;
  v20 = (int)a2;
  v19 = 3;
  v3 = (int)a2;
  if ( (_DWORD)a2 && !*((_BYTE *)this + 720) )
  {
    v18[0] = 0;
    v21 = 0LL;
    CStartExperienceManager::GetMonitorInformation(
      (CStartExperienceManager *)((char *)this - 40),
      a2,
      &v21,
      (enum EDGEUI_TRAYSTUCKPLACE *)&v19,
      v18,
      0LL);
    v22[3] = 0;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    v22[2] = v19;
    v22[0] = 1;
    v22[1] = v3;
    v5 = RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, v22, 32LL);
    v6 = v5 | 0x10000000;
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C2,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    v2 = v6 >= 0;
  }
  v7 = 1;
  if ( v3 == 7 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 66) + 48LL))(*((_QWORD *)this + 66));
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1CB,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    if ( v2 )
    {
      v7 = 3;
      *((_BYTE *)this + 723) = 1;
    }
    v9 = CSingleViewShellExperience::Hide((char *)this + 280, v7);
    if ( v9 < 0 )
    {
      v10 = 466LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  else
  {
    if ( v2 )
    {
      v7 = 3;
      *((_BYTE *)this + 723) = 1;
    }
    v9 = CSingleViewShellExperience::Hide((char *)this + 280, v7);
    if ( v9 < 0 )
    {
      v10 = 475LL;
      goto LABEL_13;
    }
  }
  if ( *((_BYTE *)this + 723) )
  {
    v12 = (char *)this - 40;
    *(_QWORD *)&v21.left = v12;
    Microsoft::WRL::ComPtr<CStartExperienceManager>::InternalAddRef((__int64 *)&v21.left);
    v13 = lambda_219695f63e651180cfc7ae358f81f100_::_lambda_219695f63e651180cfc7ae358f81f100_(
            (unsigned int)v22,
            (unsigned int)&v21,
            (_DWORD)v12,
            (unsigned int)&v20,
            (__int64)&v19);
    v17 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_219695f63e651180cfc7ae358f81f100___(
            v15,
            v14,
            v16,
            v13);
    lambda_219695f63e651180cfc7ae358f81f100_::__lambda_219695f63e651180cfc7ae358f81f100_(v22);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1F1,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::Release(v12);
  }
  return 0LL;
}
