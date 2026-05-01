/*
 * XREFs of ?RegisterTouchKeyboardEventHandlers@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180062728
 * Callers:
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@9@3V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@9@@Z @ 0x1803BF520 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180061920 (-InternalRelease@-$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180061950 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowM.c)
 *     ??$MakeAndInitialize@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@V1234@PEAVUndockedSearchAppExperienceManager@@P85@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@_EP85@EAAJ02@_E@Details@WRL@Microsoft@@YAJPEAPEAVIInputHostLayoutChangesHandler@Shell@Internal@Windows@@$$QEAPEAVUndockedSearchAppExperienceManager@@$$QEAP87@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@33@_E$$QEAP87@EAAJ24@_E@Z @ 0x180062834 (--$MakeAndInitialize@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@V1234@PEAVUndockedS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UndockedSearchAppExperienceManager::RegisterTouchKeyboardEventHandlers(
        UndockedSearchAppExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int128 v7; // [rsp+20h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v10; // [rsp+50h] [rbp+10h] BYREF
  UndockedSearchAppExperienceManager *v11; // [rsp+58h] [rbp+18h] BYREF

  v10 = 0LL;
  *(_QWORD *)&v7 = &UndockedSearchAppExperienceManager::InputHostHiding;
  DWORD2(v7) = 0;
  v8 = v7;
  *(_QWORD *)&v7 = &UndockedSearchAppExperienceManager::InputHostShowing;
  DWORD2(v7) = 0;
  v11 = this;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>::InternalRelease(&v10);
  v2 = ___MakeAndInitialize_VIInputHostLayoutChangesHandler_Shell_Internal_Windows__V1234_PEAVUndockedSearchAppExperienceManager__P85_EAAJPEAUHWND____PEAUtagRECT__W4IHM_DISPLAY_MODE__11__EP85_EAAJ02__E_Details_WRL_Microsoft__YAJPEAPEAVIInputHostLayoutChangesHandler_Shell_Internal_Windows____QEAPEAVUndockedSearchAppExperienceManager____QEAP87_EAAJPEAUHWND____PEAUtagRECT__W4IHM_DISPLAY_MODE__33__E__QEAP87_EAAJ24__E_Z(
         &v10,
         &v11,
         &v7,
         &v8);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 9) + 24LL))(
           *((_QWORD *)this + 9),
           (v10 + 8) & -(__int64)(v10 != 0),
           (char *)this + 288);
    v3 = v5;
    if ( v5 >= 0 )
      v3 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE2A,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>::InternalRelease(&v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE29,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    v4 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IImmersiveWindowMessageNotification>::Release(v4);
    }
  }
  return v3;
}
