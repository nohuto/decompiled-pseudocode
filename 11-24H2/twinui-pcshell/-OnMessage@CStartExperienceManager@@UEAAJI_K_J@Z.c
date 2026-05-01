/*
 * XREFs of ?OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z @ 0x1802421D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$DoInvoke@V_lambda_93e08873e72ccb4205d0584c75416b59_@@@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_93e08873e72ccb4205d0584c75416b59_@@@Z @ 0x18008B8EC (--$DoInvoke@V_lambda_93e08873e72ccb4205d0584c75416b59_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ?StartThemeChanged@CStartExperienceManager@@QEAAJW4StartThemeUpdateType@@@Z @ 0x180122F98 (-StartThemeChanged@CStartExperienceManager@@QEAAJW4StartThemeUpdateType@@@Z.c)
 *     ?Cloak@CSingleViewShellExperience@@QEAAJXZ @ 0x180165098 (-Cloak@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ??$InvokeAll@PEAVCStartExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCStartExperienceManager@@$$T@Z @ 0x1801655C4 (--$InvokeAll@PEAVCStartExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVStartExper.c)
 */

__int64 __fastcall CStartExperienceManager::OnMessage(
        CStartExperienceManager *this,
        int a2,
        CStartExperienceManager *a3,
        const WCHAR *a4)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // ebx
  __int64 v10; // rdx
  CStartExperienceManager *v12; // rcx
  CStartExperienceManager *v13; // rcx
  unsigned int v14; // edx
  CStartExperienceManager *v15; // [rsp+30h] [rbp-28h] BYREF
  __int128 v16; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v18; // [rsp+68h] [rbp+10h] BYREF

  v5 = a2 - 26;
  if ( !v5 )
  {
    if ( !a4 || CompareStringOrdinal(a4, -1, L"ImmersiveColorSet", -1, 0) != 2 )
      return 0LL;
    v13 = (CStartExperienceManager *)((char *)this - 48);
    v14 = 0;
    goto LABEL_20;
  }
  v6 = v5 - 772;
  if ( !v6 )
  {
    v13 = (CStartExperienceManager *)((char *)this - 48);
    v14 = 1;
LABEL_20:
    CStartExperienceManager::StartThemeChanged(v13, v14);
    return 0LL;
  }
  v7 = v6 - 227;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 && a3 == (CStartExperienceManager *)((char *)this - 48) )
      {
        if ( *((_BYTE *)this + 715) )
        {
          *((_BYTE *)this + 715) = 0;
          v9 = CSingleViewShellExperience::Cloak((HSTRING *)this + 34);
          if ( v9 < 0 )
          {
            v10 = 880LL;
LABEL_10:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v10,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
              (const char *)(unsigned int)v9);
            return (unsigned int)v9;
          }
        }
      }
    }
    else if ( a3 == (CStartExperienceManager *)((char *)this - 48) )
    {
      v9 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,std::nullptr_t>(
             (RTL_SRWLOCK *)this + 19,
             (__int64)this - 48);
      if ( v9 < 0 )
      {
        v10 = 888LL;
        goto LABEL_10;
      }
    }
  }
  else
  {
    v12 = (CStartExperienceManager *)((char *)this - 48);
    if ( a3 == v12 )
    {
      v18 = (int)a4;
      v15 = v12;
      *(_QWORD *)&v16 = &v15;
      *((_QWORD *)&v16 + 1) = &v18;
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_93e08873e72ccb4205d0584c75416b59_>(
        (RTL_SRWLOCK *)this + 28,
        &v16);
    }
  }
  return 0LL;
}
