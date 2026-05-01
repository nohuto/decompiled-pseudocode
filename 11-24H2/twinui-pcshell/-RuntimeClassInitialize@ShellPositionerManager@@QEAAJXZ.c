/*
 * XREFs of ?RuntimeClassInitialize@ShellPositionerManager@@QEAAJXZ @ 0x1801E7490
 * Callers:
 *     ??$MakeAndInitialize@VShellPositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801E7318 (--$MakeAndInitialize@VShellPositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1800460A4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadDispatcher@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180099500 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadD.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x180217FEC (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802EDA58 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall ShellPositionerManager::RuntimeClassInitialize(ShellPositionerManager *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  volatile int *v5; // rdx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (ShellPositionerManager *)((char *)this + 24),
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267);
  if ( v2 < 0 )
  {
    v3 = 213LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
  {
    v6 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = 0LL;
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICreationThreadDispatcher,Microsoft::WRL::FtmBase>::Release(
        v6,
        v5);
    v2 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((char *)this + 184);
    if ( v2 < 0 )
    {
      v3 = 217LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
