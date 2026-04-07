/*
 * XREFs of ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x180022C9C
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x18001D4A4 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180045FF0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Initialize@CAnimationEngine@@QEAAJXZ @ 0x180022BC0 (-Initialize@CAnimationEngine@@QEAAJXZ.c)
 *     ?Initialize@CDisplayBroker@@QEAAJXZ @ 0x180022DB8 (-Initialize@CDisplayBroker@@QEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180023BB8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@QEAAX.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopManager::InitializeComObjects(LPVOID *this, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  HRESULT Instance; // eax
  int v6; // eax
  LPVOID *v7; // rcx
  int v8; // r8d
  CDisplayBroker *v9; // rcx
  unsigned int ppv; // [rsp+20h] [rbp-38h]
  _BYTE v12[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmAnimationInitialization_Start,
      a3,
      1,
      (__int64)v12);
  v4 = 0;
  if ( !this[34] )
  {
    Instance = CoCreateInstance(
                 &CLSID_UIAnimationTransitionLibrary2,
                 0LL,
                 1u,
                 &GUID_03cfae53_9580_4ee3_b363_2ece51b4af6a,
                 this + 35);
    v4 = Instance;
    if ( Instance < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Instance, 0x726u, 0LL);
      goto LABEL_10;
    }
    v6 = CoCreateInstance(&CLSID_UIAnimationManager2, 0LL, 1u, &GUID_d8b6f7d4_4109_4d3f_acee_879926968cb1, this + 34);
    v4 = v6;
    if ( v6 < 0 )
    {
      ppv = 1836;
LABEL_17:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, ppv, 0LL);
      goto LABEL_10;
    }
  }
  v7 = (LPVOID *)this[22];
  if ( !*((_BYTE *)v7 + 120) )
  {
    v6 = CAnimationEngine::Initialize(v7);
    v4 = v6;
    if ( v6 < 0 )
    {
      ppv = 1841;
      goto LABEL_17;
    }
  }
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDisplayBroker>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DesktopDisplayBroker>::GetImpl'::`2'::impl,
    a2);
  v9 = (CDisplayBroker *)this[28];
  if ( !*(_QWORD *)v9 )
  {
    v6 = CDisplayBroker::Initialize(v9);
    v4 = v6;
    if ( v6 < 0 )
    {
      ppv = 1848;
      goto LABEL_17;
    }
  }
LABEL_10:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmAnimationInitialization_Stop,
      v8,
      1,
      (__int64)v12);
  return v4;
}
