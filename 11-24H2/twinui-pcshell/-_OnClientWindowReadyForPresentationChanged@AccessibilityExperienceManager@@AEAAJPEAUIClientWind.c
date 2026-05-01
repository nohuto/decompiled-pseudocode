/*
 * XREFs of ?_OnClientWindowReadyForPresentationChanged@AccessibilityExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180490960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AccessibilityExperienceManager::_OnClientWindowReadyForPresentationChanged(
        AccessibilityExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  __int64 v3; // rax
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v12; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v12 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *, char *))(v3 + 48))(
         a3,
         &v12);
  if ( v6 < 0 )
  {
    v7 = 877LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( v12 )
  {
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, _QWORD))(*(_QWORD *)a2 + 88LL))(
      a2,
      *((_QWORD *)this + 48));
    *((_QWORD *)this + 48) = 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 112LL))(*((_QWORD *)this + 47));
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 252LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      v7 = 886LL;
      goto LABEL_3;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 47) + 128LL))(*((_QWORD *)this + 47), 0LL);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 255LL;
      goto LABEL_9;
    }
  }
  return 0LL;
}
