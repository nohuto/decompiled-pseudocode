/*
 * XREFs of ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18008E5C8
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180045D50 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18008DE70 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180001B30 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180008A7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@QEAAX.c)
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800599A0 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Initialize@CAnimationEngine@@QEAAJXZ @ 0x180069814 (-Initialize@CAnimationEngine@@QEAAJXZ.c)
 *     ?Initialize@CDisplayBroker@@QEAAJPEAUIDisplayManager@Core@Display@Devices@Windows@@@Z @ 0x18006F900 (-Initialize@CDisplayBroker@@QEAAJPEAUIDisplayManager@Core@Display@Devices@Windows@@@Z.c)
 *     _tlgKeywordOn @ 0x18007A880 (_tlgKeywordOn.c)
 *     ?EnsureDDisplayManager@CDesktopManager@@AEAAJXZ @ 0x1800862BC (-EnsureDDisplayManager@CDesktopManager@@AEAAJXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CDisplayBroker@@QEAA@XZ @ 0x180095604 (--0CDisplayBroker@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCDisplayBroker@@U?$default_delete@VCDisplayBroker@@@std@@@std@@QEAA@XZ @ 0x18009AE74 (--1-$unique_ptr@VCDisplayBroker@@U-$default_delete@VCDisplayBroker@@@std@@@std@@QEAA@XZ.c)
 *     ??R?$default_delete@VCDisplayBroker@@@std@@QEBAXPEAVCDisplayBroker@@@Z @ 0x1800B8760 (--R-$default_delete@VCDisplayBroker@@@std@@QEBAXPEAVCDisplayBroker@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail@@@details@wil@@QEAA_NXZ @ 0x1800BB8E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::InitializeComObjects(CAnimationEngine **this, __int64 a2, __int64 a3, __int64 a4)
{
  HRESULT Instance; // ebx
  int v6; // eax
  const struct std::nothrow_t *v7; // rdx
  CDisplayBroker *v8; // rax
  CDisplayBroker *v9; // rsi
  int v10; // eax
  CAnimationEngine *v11; // rdx
  LPVOID *ppv; // rax
  LPVOID *v13; // rax
  CAnimationEngine *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  CDisplayBroker *v19; // [rsp+48h] [rbp+10h] BYREF

  Instance = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDisplayBroker>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_DesktopDisplayBroker>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail>::GetImpl'::`2'::impl) )
  {
    v6 = CDesktopManager::EnsureDDisplayManager((CDesktopManager *)this);
    Instance = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x6C6u, 0LL);
      goto LABEL_29;
    }
  }
  else
  {
    CDesktopManager::EnsureDDisplayManager((CDesktopManager *)this);
  }
  if ( !this[27] )
  {
    v8 = (CDisplayBroker *)operator new[](8uLL, v7);
    if ( v8 )
      v9 = CDisplayBroker::CDisplayBroker(v8);
    else
      v9 = 0LL;
    v19 = v9;
    if ( !v9 )
    {
      Instance = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x6D3u, 0LL);
LABEL_11:
      std::unique_ptr<CDisplayBroker>::~unique_ptr<CDisplayBroker>(&v19);
      goto LABEL_29;
    }
    v10 = CDisplayBroker::Initialize(v9, *((struct Windows::Devices::Display::Core::IDisplayManager **)this[163] + 2));
    Instance = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x6D4u, 0LL);
      goto LABEL_11;
    }
    v19 = 0LL;
    v11 = this[27];
    this[27] = v9;
    if ( v11 )
      std::default_delete<CDisplayBroker>::operator()();
    std::unique_ptr<CDisplayBroker>::~unique_ptr<CDisplayBroker>(&v19);
  }
  if ( !this[33] )
  {
    ppv = (LPVOID *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)(this + 34));
    Instance = CoCreateInstance(
                 &CLSID_UIAnimationTransitionLibrary2,
                 0LL,
                 1u,
                 &GUID_03cfae53_9580_4ee3_b363_2ece51b4af6a,
                 ppv);
    if ( Instance >= 0 )
    {
      v13 = (LPVOID *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)(this + 33));
      Instance = CoCreateInstance(&CLSID_UIAnimationManager2, 0LL, 1u, &GUID_d8b6f7d4_4109_4d3f_acee_879926968cb1, v13);
      if ( Instance >= 0 )
      {
        v14 = this[22];
        if ( *((_BYTE *)v14 + 120) )
          goto LABEL_29;
        Instance = CAnimationEngine::Initialize(v14);
      }
    }
    if ( Instance == -2147024770 )
    {
      if ( (unsigned int)dword_180125130 > 4 && tlgKeywordOn((__int64)&dword_180125130, 1LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          (int)&dword_180125130,
          (int)&unk_18011114C,
          0);
      Instance = 0;
    }
    else if ( Instance < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Instance, 0x6FAu, 0LL);
    }
  }
LABEL_29:
  if ( (unsigned int)dword_180125130 > 4 && tlgKeywordOn((__int64)&dword_180125130, 1LL) )
  {
    LODWORD(v19) = Instance;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v15,
      (int)&unk_180111199,
      v16,
      v17,
      (__int64)&v19);
  }
  return (unsigned int)Instance;
}
