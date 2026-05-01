/*
 * XREFs of ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x180032494
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800312D0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x1800688AC (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z @ 0x180140BC8 (-IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z.c)
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180140C80 (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180140CA8 (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180140CD0 (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180164368 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?_AnalyzeProxyShellNotification@CApplicationManager@@AEAAXPEAUHSHELL_DATA@1@@Z @ 0x18016D30C (-_AnalyzeProxyShellNotification@CApplicationManager@@AEAAXPEAUHSHELL_DATA@1@@Z.c)
 *     ?IsModernAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18017E210 (-IsModernAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?AcquireShared@CIAMGlobals@@QEAA?AVCAutoSRWSharedLock@@XZ @ 0x1801930F0 (-AcquireShared@CIAMGlobals@@QEAA-AVCAutoSRWSharedLock@@XZ.c)
 *     ?ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x1801E00AC (-ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 *     ?_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z @ 0x1801ECB38 (-_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EFF60 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     ?ShouldTreatShellManagedWindowAsCharm@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x1802EBB90 (-ShouldTreatShellManagedWindowAsCharm@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_58645534@@@details@wil@@QEAA_NXZ @ 0x1802EDA98 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_58645534@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CApplicationManager::_AnalyzeShellNotification(
        CApplicationManager *this,
        ShellManagedWindowHelper **a2)
{
  char v4; // di
  ShellManagedWindowHelper *v5; // rcx
  unsigned int *v6; // rsi
  HWND v7; // rdx
  HWND v8; // rdx
  HWND v9; // rdx
  HWND v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  CApplicationManager *v15; // rcx
  ShellManagedWindowHelper *v16; // rax
  char *v17; // rax
  char *v18; // rax
  char *v19; // rax
  CApplicationManagerUtility *v20; // rcx
  bool IsForcedAppWindow; // al
  char *v23; // rax
  char *v24; // rax
  char *v25; // rax
  char *v26; // rax
  char *v27; // rax
  __int64 v28; // rdx
  __int64 VisibleRootOwner; // rax
  HWND v30; // rdx
  char v31[8]; // [rsp+30h] [rbp-20h] BYREF
  ShellManagedWindowHelper *v32; // [rsp+38h] [rbp-18h] BYREF
  int v33; // [rsp+40h] [rbp-10h]
  int v34; // [rsp+88h] [rbp+38h] BYREF
  __int64 v35; // [rsp+90h] [rbp+40h] BYREF
  char v36; // [rsp+98h] [rbp+48h] BYREF

  if ( (((unsigned __int64)*a2 - 18) & 0xFFFFFFFFFFFFFFFBuLL) == 0 )
    return 1;
  v4 = 0;
  CApplicationManager::_AnalyzeProxyShellNotification(this, (struct CApplicationManager::HSHELL_DATA *)a2);
  v5 = a2[1];
  if ( !v5 )
    return v4;
  v6 = (unsigned int *)(a2 + 3);
  if ( !(unsigned int)GetWindowBand(v5, a2 + 3) )
    return v4;
  if ( !CApplicationManagerUtility::IsModernAppWindow(a2[1], v7)
    || ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged(a2[1], v8) )
  {
    if ( (unsigned __int8)CApplicationManagerUtility::IsClassicApplication(a2[1], *v6)
      || ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged(a2[1], v10) )
    {
      *((_DWORD *)a2 + 4) = 1;
      goto LABEL_19;
    }
    v11 = *v6;
    if ( *v6 == 13 )
    {
      *((_DWORD *)a2 + 4) = 3;
      LOBYTE(v10) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
        v10);
      CIAMGlobals::AcquireShared(v12, &v36);
      v35 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
      v32 = a2[1];
      v33 = 2;
      if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v32, &v35, v31) >= 0 )
        *((_DWORD *)a2 + 4) = 2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
    }
    else
    {
      if ( v11 > 0x11 || (v13 = 131344, !_bittest(&v13, v11)) )
      {
        *((_DWORD *)a2 + 4) = 4;
        goto LABEL_19;
      }
      CIAMGlobals::AcquireShared(131344LL, &v36);
      v35 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
      v32 = a2[1];
      v33 = 2;
      *((_DWORD *)a2 + 4) = (((int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
                                     this,
                                     &v32,
                                     &v35,
                                     v31) >> 31) & 2)
                          + 2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v36);
  }
  else
  {
    *((_DWORD *)a2 + 4) = ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsCharm(a2[1], v9) + 2;
  }
LABEL_19:
  *((_BYTE *)a2 + 28) = 0;
  v34 = 0;
  v14 = *((_QWORD *)this + 97);
  if ( v14
    && (*(int (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v14 + 48LL))(
         v14,
         *((unsigned int *)a2 + 2),
         0LL,
         &v34) >= 0
    && v34 == 1 )
  {
    *((_BYTE *)a2 + 28) = 1;
  }
  v15 = (CApplicationManager *)*((unsigned int *)a2 + 4);
  if ( (unsigned int)((_DWORD)v15 - 2) <= 1 )
  {
    if ( !*((_BYTE *)a2 + 20) )
    {
      if ( *a2 == (ShellManagedWindowHelper *)32 && CApplicationManagerUtility::IsOwnedWindow(a2[1], v10) )
        a2[1] = (ShellManagedWindowHelper *)CApplicationManagerUtility::GetVisibleRootOwner(a2[1], 0LL);
      goto LABEL_61;
    }
    if ( *a2 == (ShellManagedWindowHelper *)21 )
    {
      v28 = 1LL;
    }
    else
    {
      if ( *a2 == (ShellManagedWindowHelper *)24 )
      {
        a2[1] = 0LL;
LABEL_61:
        if ( a2[1] )
        {
          *((_BYTE *)a2 + 21) = 1;
          return (int)CApplicationManager::_ComputeApplicationId(v15, (struct CApplicationManager::HSHELL_DATA *)a2) >= 0;
        }
        return v4;
      }
      v28 = 0LL;
    }
    VisibleRootOwner = CApplicationManagerUtility::GetVisibleRootOwner(a2[1], v28);
    *((_BYTE *)a2 + 20) = 0;
    a2[1] = (ShellManagedWindowHelper *)VisibleRootOwner;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_58645534>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_58645534>::GetImpl'::`2'::impl)
      && *((_DWORD *)a2 + 4) == 3
      && !ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsCharm(a2[1], v30) )
    {
      *((_DWORD *)a2 + 4) = 2;
    }
    goto LABEL_61;
  }
  v16 = *a2;
  if ( *a2 != (ShellManagedWindowHelper *)34 )
  {
    if ( (_DWORD)v15 != 1 )
    {
      if ( v16 == (ShellManagedWindowHelper *)20 )
      {
        if ( a2[1] != *((ShellManagedWindowHelper **)this + 96) )
          return v4;
      }
      else
      {
        v23 = (char *)v16 - 19;
        if ( v23 )
        {
          v24 = v23 - 4;
          if ( v24 )
          {
            v25 = v24 - 2;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( v27 )
                {
                  if ( v27 != (char *)65506 )
                    return v4;
                  *a2 = (ShellManagedWindowHelper *)19;
                }
              }
            }
          }
        }
      }
      return 1;
    }
    v17 = (char *)v16 - 17;
    if ( v17 )
    {
      v18 = v17 - 3;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( !v19 )
        {
LABEL_35:
          *((_BYTE *)a2 + 21) = v4;
          return 1;
        }
        if ( v19 != (char *)1 )
        {
          v20 = a2[1];
          if ( *((_BYTE *)a2 + 20) )
            IsForcedAppWindow = CApplicationManagerUtility::IsForcedAppWindow(v20, v10);
          else
            IsForcedAppWindow = CApplicationManagerUtility::IsTrayWindowStyleCheck((HWND)v20, v10);
          v4 = IsForcedAppWindow;
          goto LABEL_35;
        }
      }
    }
    v4 = 1;
    goto LABEL_35;
  }
  return v4;
}
