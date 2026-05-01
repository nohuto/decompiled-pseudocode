/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@UndockedSearchAppExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1803BD740
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18003646C (-BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18008BA3C (--$InvokeAll@PEAVUndockedSearchAppExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801E1CA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEven.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VCCortanaShownEventArgs@@AEAURect@Foundation@Windows@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCCortanaShownEventArgs@@@12@AEAURect@Foundation@Windows@@@Z @ 0x1802C6374 (--$Make@VCCortanaShownEventArgs@@AEAURect@Foundation@Windows@@@Details@WRL@Microsoft@@YA-AV-$Com.c)
 *     ??$UndockedSearchAppExperienceManager_OnClientWindowReadyForPresentationChanged@AEAE@SearchAppExperienceManagerTelemetry@@SAXAEAE@Z @ 0x1803AF7BC (--$UndockedSearchAppExperienceManager_OnClientWindowReadyForPresentationChanged@AEAE@SearchAppEx.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UndockedSearchAppExperienceManager::OnClientWindowReadyForPresentationChanged(
        UndockedSearchAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  const char *v5; // r9
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  __int64 *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+20h] BYREF

  if ( GetCurrentThreadId() != *((_DWORD *)this + 184) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xCDE,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v5);
  v14 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, char *))(*(_QWORD *)a2 + 72LL))(
         a2,
         &v14);
  if ( v6 < 0 )
  {
    v7 = 2413LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnClientWindowReadyForPresentationChanged<unsigned char &>(&v14);
  if ( v14
    && !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 32LL))(
          *((_QWORD *)this + 11),
          *((_QWORD *)this + 7)) )
  {
    if ( *((_QWORD *)this + 34) )
    {
      v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, _QWORD))(*(_QWORD *)a2 + 88LL))(
             a2,
             *((_QWORD *)this + 34));
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x979,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v9);
      *((_QWORD *)this + 34) = 0LL;
    }
    if ( *((_DWORD *)this + 187) != 2 )
    {
      v6 = UndockedSearchAppExperienceManager::BringToForeground(this);
      if ( v6 < 0 )
      {
        v7 = 2439LL;
        goto LABEL_5;
      }
    }
    v10 = Microsoft::WRL::Details::Make<CCortanaShownEventArgs,Windows::Foundation::Rect &>(&v15, (__int128 *)this + 8);
    v11 = *v10;
    *v10 = 0LL;
    v12 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(v12);
    }
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>(
      (__int64)this + 328,
      (__int64)this,
      v11);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return 0LL;
}
