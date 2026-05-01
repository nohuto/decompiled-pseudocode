/*
 * XREFs of ?RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180078904
 * Callers:
 *     ??$MakeAndInitialize@VCInsightsExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18007878C (--$MakeAndInitialize@VCInsightsExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detai.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180025298 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18005F010 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1800859D8 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?RegisterForMonitorNotification@CInsightsExperienceManager@@AEAAJXZ @ 0x1803A78C0 (-RegisterForMonitorNotification@CInsightsExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CInsightsExperienceManager::RuntimeClassInitialize(
        CInsightsExperienceManager *this,
        struct IServiceProvider *a2)
{
  const struct _tlgProvider_t *v4; // rax
  HRESULT v5; // eax
  int v6; // edx
  unsigned int v7; // r8d
  HSTRING v8; // rbp
  HRESULT v9; // eax
  int v10; // edx
  unsigned int v11; // r8d
  int v12; // edi
  __int64 v13; // rdx
  HSTRING_HEADER v15; // [rsp+30h] [rbp-68h] BYREF
  HSTRING v16; // [rsp+48h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-48h] BYREF
  HSTRING string; // [rsp+68h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v4 = SingleViewExperienceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v4 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v4,
      &unk_1807F0D49,
      0LL);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 34, (__int64)a2);
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.Insights", 0x29u, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5, v6, v7);
  v8 = string;
  v16 = 0LL;
  v9 = WindowsCreateStringReference(L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App", 0x37u, &v15, &v16);
  if ( v9 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9, v10, v11);
  v12 = CSingleViewShellExperience::RuntimeClassInitialize(
          (HSTRING *)this + 8,
          (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
          a2,
          v16,
          v8);
  if ( v12 < 0 )
  {
    v13 = 205LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  v16 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v15,
    L"InsightsExperienceHostVS_ccv6fwk6gx0xp!App",
    0x2Bu,
    0x2Au);
  v12 = CSingleViewShellExperience::AddTestAumid((CInsightsExperienceManager *)((char *)this + 64), v16);
  if ( v12 < 0 )
  {
    v13 = 207LL;
    goto LABEL_9;
  }
  v12 = CInsightsExperienceManager::RegisterForMonitorNotification(this);
  if ( v12 < 0 )
  {
    v13 = 209LL;
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 41, (__int64)this);
  return 0LL;
}
