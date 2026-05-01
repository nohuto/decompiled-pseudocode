/*
 * XREFs of ?GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1801B40E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18016A228 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSi.c)
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B41A0 (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B4630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSit.c)
 *     ??$Make@VCStartExperienceManager@@_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCStartExperienceManager@@@12@$$QEA_N@Z @ 0x1802BEE40 (--$Make@VCStartExperienceManager@@_N@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCStartExperienceManag.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall StartExperienceManagerFactory::GetExperienceManager(
        StartExperienceManagerFactory *this,
        struct IServiceProvider *a2,
        struct IInspectable **a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  CStartExperienceManager *v7; // rcx
  CStartExperienceManager *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CStartExperienceManager *v11; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  Microsoft::WRL::Details::Make<CStartExperienceManager,bool>(&v11);
  if ( !v11 )
  {
    v5 = -2147024882;
    v6 = 1666LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    v7 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::Release(v7);
    }
    return (unsigned int)v5;
  }
  v5 = CStartExperienceManager::RuntimeClassInitialize(v11, a2);
  if ( v5 < 0 )
  {
    v6 = 1667LL;
    goto LABEL_3;
  }
  v5 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>>(
         (__int64)v11,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         a3);
  if ( v5 < 0 )
  {
    v6 = 1668LL;
    goto LABEL_3;
  }
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::Release(v9);
  }
  return 0LL;
}
