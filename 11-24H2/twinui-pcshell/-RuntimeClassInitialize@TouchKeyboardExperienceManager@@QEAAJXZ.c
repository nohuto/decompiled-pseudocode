/*
 * XREFs of ?RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1801EC5E0
 * Callers:
 *     ??$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x1801EC530 (--$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1800460A4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardCrashAfterHideAnimation@@@details@wil@@QEAA_NXZ @ 0x180478A20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardCrashAfterHideAnimat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::RuntimeClassInitialize(TouchKeyboardExperienceManager *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  char IsEnabled; // al
  __int64 *v6; // rsi
  __int64 *v7; // rcx
  __int64 v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (TouchKeyboardExperienceManager *)((char *)this + 48),
         &IID_ITouchKeyboardExperienceManager);
  if ( v2 < 0 )
  {
    v3 = 635LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (TouchKeyboardExperienceManager *)((char *)this + 48),
         &GUID_c9969d8d_c814_50fd_9f55_84a54e9453fc);
  if ( v2 < 0 )
  {
    v3 = 636LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 100);
  v2 = CoreUICreate((char *)this + 800);
  if ( v2 < 0 )
  {
    v3 = 637LL;
    goto LABEL_3;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchKeyboardCrashAfterHideAnimation>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TouchKeyboardCrashAfterHideAnimation>::GetImpl'::`2'::impl);
  v6 = (__int64 *)*((_QWORD *)this + 100);
  v7 = (__int64 *)((char *)this + 808);
  v8 = *v6;
  if ( IsEnabled )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v7);
    v2 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall *)(void *), TouchKeyboardExperienceManager *, char *))(v8 + 144))(
           v6,
           TouchKeyboardExperienceManager::AnimationGapTimerCallback,
           this,
           (char *)this + 808);
    if ( v2 < 0 )
    {
      v3 = 644LL;
      goto LABEL_3;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v7);
    v2 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall *)(TouchKeyboardExperienceManager *), TouchKeyboardExperienceManager *, char *))(v8 + 144))(
           v6,
           TouchKeyboardExperienceManager::AnimationGapTimerCallbackInternal,
           this,
           (char *)this + 808);
    if ( v2 < 0 )
    {
      v3 = 652LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
