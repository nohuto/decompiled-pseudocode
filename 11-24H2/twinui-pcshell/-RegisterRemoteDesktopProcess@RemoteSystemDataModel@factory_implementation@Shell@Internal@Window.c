/*
 * XREFs of ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x18064F958
 * Callers:
 *     ?RegisterRemoteDesktopProcess@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHIPEAX@Z @ 0x18064F920 (-RegisterRemoteDesktopProcess@-$produce@URemoteSystemDataModel@factory_implementation@Shell@Inte.c)
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXIAEBUUri@Foundation@56@@Z @ 0x18064FE00 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@AEBV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@Z @ 0x180650A24 (-RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@In.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18005346C (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802973D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$?RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStateChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSessionWindowManager@implementation@Shell@Internal@Windows@1@AEBURemoteDesktopStateChangedEventArgs@4561@@Z @ 0x18064425C (--$-RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStat.c)
 *     ??$RemoteDesktopProcessRegistered@AEAIIPEBGPEBG@CloudPCTelemetryCore@@SAXAEAI$$QEAI$$QEAPEBG2@Z @ 0x180644608 (--$RemoteDesktopProcessRegistered@AEAIIPEBGPEBG@CloudPCTelemetryCore@@SAXAEAI$$QEAI$$QEAPEBG2@Z.c)
 *     ??$make@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEAUhstring@6@AEAI_N@winrt@@YA?A_PAEAUhstring@0@AEAI$$QEA_N@Z @ 0x180646AE8 (--$make@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEAUhstring@6@.c)
 *     ??$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEAIAEAUhstring@6@U76@AEAIAEA_NAEA_NAEA_NAEA_NAEA_NAEA_N@std@@YA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@0@AEAIAEAUhstring@winrt@@$$QEAU23@0AEA_N33333@Z @ 0x180647494 (--$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEAIAEAUhstring@6@U.c)
 *     ??1?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18064A048 (--1-$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U-$default_delete@UL.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBU76@@Z @ 0x18064C300 (-GetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?Insert@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@IUhstring@5@@impl@winrt@@QEBA@AEBIAEBUhstring@param@3@@Z @ 0x18064DD54 (-Insert@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@IUhstring@winrt@@@Collections@Foun.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180650484 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@.c)
 *     ?SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@0@Z @ 0x180650C44 (-SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ?SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x180650CA4 (-SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows.c)
 *     ?GetProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@I@Z @ 0x180663880 (-GetProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?SaveProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180663FE8 (-SaveProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA?AV?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEBUUri@Foundation@56@@Z @ 0x180666E24 (-GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA-AV-$unique_ptr@UL.c)
 *     ?IsCapabilitySupported@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@QEBA_NAEBW4LocalCapabilities@3456@@Z @ 0x1806673B4 (-IsCapabilitySupported@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@QEBA_NAEBW4Loc.c)
 *     ?CorrelationId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x1806676AC (-CorrelationId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@XZ.c)
 *     ?IsCapabilitySupported@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4LocalCapabilities@3456@@Z @ 0x1806676D4 (-IsCapabilitySupported@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4L.c)
 *     ?RemoteDesktopId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x180667724 (-RemoteDesktopId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@X.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RegisterRemoteDesktopProcess(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        unsigned int a2,
        const struct winrt::Windows::Foundation::Uri *a3,
        char a4)
{
  __int64 v8; // rcx
  int v9; // eax
  char v10; // bl
  winrt::Windows::Internal::Shell::implementation::LaunchUriData *v11; // rbx
  volatile signed __int32 *v12; // rdx
  unsigned int *v13; // r14
  __int64 v14; // rdx
  winrt::Windows::Internal::Shell::implementation::LaunchUriData *v15; // rcx
  winrt::Windows::Internal::Shell::implementation::LaunchUriData *v16; // rcx
  bool *v17; // r13
  winrt::Windows::Internal::Shell::implementation::LaunchUriData *v18; // rcx
  bool *v19; // r12
  winrt::Windows::Internal::Shell::implementation::LaunchUriData *v20; // rcx
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v21; // rdi
  volatile signed __int32 **v22; // rax
  volatile signed __int32 *v23; // rdx
  const struct winrt::hstring *v24; // rax
  __int64 v25; // rdx
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v26; // rcx
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v27; // rcx
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v28; // rcx
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v29; // rcx
  __int64 v30; // rdi
  winrt::hstring *CorrelationId; // rax
  _QWORD *v32; // rax
  winrt::hstring *v33; // rax
  int v34; // eax
  char v35; // [rsp+60h] [rbp-39h] BYREF
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v36; // [rsp+68h] [rbp-31h] BYREF
  winrt::Windows::Internal::Shell::implementation::LaunchUriData *v37; // [rsp+70h] [rbp-29h] BYREF
  const unsigned __int16 *v38; // [rsp+78h] [rbp-21h] BYREF
  RTL_SRWLOCK *v39; // [rsp+80h] [rbp-19h] BYREF
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v40; // [rsp+88h] [rbp-11h] BYREF
  std::_Ref_count_base *v41[2]; // [rsp+90h] [rbp-9h]
  __int64 v42[9]; // [rsp+A8h] [rbp+Fh] BYREF
  volatile signed __int32 *v43; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v44; // [rsp+108h] [rbp+6Fh] BYREF

  v44 = a2;
  winrt::hstring::hstring((winrt::hstring *)&v36, (const struct winrt::hstring *)&c_hostSystemId);
  winrt::Windows::Internal::Shell::implementation::LaunchUriData::GetForLaunchUri(&v37, a3);
  v35 = 0;
  wil::AcquireSRWLockExclusive(&v39, (RTL_SRWLOCK *)this + 16);
  LOBYTE(v43) = 0;
  v8 = *((_QWORD *)this + 32);
  LODWORD(v40) = 0;
  *(_OWORD *)v41 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, volatile signed __int32 **))(*(_QWORD *)v8 + 64LL))(v8, a2, &v43);
  winrt::check_hresult((int *)&v38, v9, (__int64)&v40);
  v10 = 0;
  if ( (_BYTE)v43 )
  {
    v13 = (unsigned int *)((char *)this + 48);
    goto LABEL_22;
  }
  v11 = v37;
  if ( v37 )
  {
    winrt::hstring::hstring((winrt::hstring *)&v43, v37);
    v12 = v43;
    v43 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::attach(&v36, (__int64)v12);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v43);
    v13 = (unsigned int *)((char *)this + 48);
    *((_DWORD *)this + 12) = *((_DWORD *)v11 + 4);
    winrt::hstring::hstring(
      (winrt::hstring *)&v43,
      (winrt::Windows::Internal::Shell::implementation::LaunchUriData *)((char *)v11 + 8));
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetCorrelationId(
      this,
      (const struct winrt::hstring *)&v36,
      (const struct winrt::hstring *)&v43);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v43);
    *((_BYTE *)this + 264) = *((_BYTE *)v11 + 24);
    LOBYTE(v14) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::GetImpl'::`2'::impl,
      v14);
    LODWORD(v43) = 1;
    *((_BYTE *)this + 265) = winrt::Windows::Internal::Shell::implementation::LaunchUriData::IsCapabilitySupported(
                               v11,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v43);
    LODWORD(v43) = 2;
    *((_BYTE *)this + 266) = winrt::Windows::Internal::Shell::implementation::LaunchUriData::IsCapabilitySupported(
                               v15,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v43);
    LODWORD(v43) = 4;
    *((_BYTE *)this + 267) = winrt::Windows::Internal::Shell::implementation::LaunchUriData::IsCapabilitySupported(
                               v16,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v43);
    LODWORD(v43) = 3;
    v17 = (bool *)this + 268;
    *((_BYTE *)this + 268) = winrt::Windows::Internal::Shell::implementation::LaunchUriData::IsCapabilitySupported(
                               v18,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v43);
    LODWORD(v43) = 5;
    v19 = (bool *)this + 269;
    *((_BYTE *)this + 269) = winrt::Windows::Internal::Shell::implementation::LaunchUriData::IsCapabilitySupported(
                               v20,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v43);
    goto LABEL_4;
  }
  if ( !a4 )
  {
    v19 = (bool *)this + 269;
    v17 = (bool *)this + 268;
    v13 = (unsigned int *)((char *)this + 48);
LABEL_16:
    v30 = *((_QWORD *)this + 4);
    CorrelationId = winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetCorrelationId(
                      (RTL_SRWLOCK *)this,
                      (winrt::hstring *)&v43,
                      (__int64 *)&v36);
    v32 = std::make_shared<winrt::Windows::Internal::Shell::implementation::HostProcessData,unsigned int &,winrt::hstring &,winrt::hstring,unsigned int &,bool &,bool &,bool &,bool &,bool &,bool &>(
            v42,
            &v44,
            (const struct winrt::hstring *)&v36,
            CorrelationId,
            v13,
            (bool *)this + 264,
            (bool *)this + 265,
            (bool *)this + 266,
            (bool *)this + 267,
            v17,
            v19);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::SaveProcessData(v30, v32);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v43);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl,
      1u,
      3u);
    v38 = winrt::hstring::c_str((winrt::hstring *)&v36);
    v33 = winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetCorrelationId(
            (RTL_SRWLOCK *)this,
            (winrt::hstring *)&v40,
            (__int64 *)&v36);
    v42[0] = (__int64)winrt::hstring::c_str(v33);
    if ( v11 )
      v34 = *((_DWORD *)v11 + 5);
    else
      v34 = 0;
    LODWORD(v43) = v34;
    CloudPCTelemetryCore::RemoteDesktopProcessRegistered<unsigned int &,unsigned int,unsigned short const *,unsigned short const *>(
      (int *)v13,
      (int *)&v43,
      v42,
      (__int64 *)&v38);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v40);
    goto LABEL_20;
  }
  winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetProcessData(
    *((_QWORD *)this + 4),
    &v40,
    a2);
  v21 = v40;
  if ( v40 )
  {
    v22 = (volatile signed __int32 **)winrt::Windows::Internal::Shell::implementation::HostProcessData::RemoteDesktopId(
                                        v40,
                                        &v43);
    if ( &v36 != (winrt::Windows::Internal::Shell::implementation::HostProcessData **)v22 )
    {
      v23 = *v22;
      *v22 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::attach(&v36, (__int64)v23);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v43);
    v13 = (unsigned int *)((char *)this + 48);
    *((_DWORD *)this + 12) = *((_DWORD *)v21 + 6);
    v24 = (const struct winrt::hstring *)winrt::Windows::Internal::Shell::implementation::HostProcessData::CorrelationId(
                                           v21,
                                           &v43);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetCorrelationId(
      this,
      (const struct winrt::hstring *)&v36,
      v24);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v43);
    *((_BYTE *)this + 264) = *((_BYTE *)v21 + 28);
    LOBYTE(v25) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::GetImpl'::`2'::impl,
      v25);
    LODWORD(v43) = 1;
    *((_BYTE *)this + 265) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                               v21,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v43);
    LODWORD(v43) = 2;
    *((_BYTE *)this + 266) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                               v26,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v43);
    LODWORD(v43) = 4;
    *((_BYTE *)this + 267) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                               v27,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v43);
    LODWORD(v43) = 3;
    v17 = (bool *)this + 268;
    *((_BYTE *)this + 268) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                               v28,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v43);
    LODWORD(v43) = 5;
    v19 = (bool *)this + 269;
    *((_BYTE *)this + 269) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                               v29,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v43);
    if ( v41[0] )
    {
      std::_Ref_count_base::_Decref(v41[0]);
      goto LABEL_20;
    }
LABEL_4:
    if ( !a4 )
      goto LABEL_16;
LABEL_20:
    v40 = v36;
    winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>,unsigned int,winrt::hstring>::Insert(
      (__int64 **)this + 32,
      &v44,
      (__int64 *)&v40);
    v35 = 1;
    v10 = 1;
LABEL_22:
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v39);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetIsImmersiveRemoteSession(this, 1);
    if ( v10 && !*v13 )
    {
      winrt::make<winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs,winrt::hstring &,unsigned int &,bool>(
        &v43,
        (const struct winrt::hstring *)&v36,
        &v44,
        (const bool *)&v35);
      winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>(
        (RTL_SRWLOCK *)this + 34,
        (__int64)this,
        (__int64)&v43);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v43);
    }
    goto LABEL_25;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl,
    1u,
    3u);
  if ( v41[0] )
    std::_Ref_count_base::_Decref(v41[0]);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v39);
LABEL_25:
  std::unique_ptr<winrt::Windows::Internal::Shell::implementation::LaunchUriData>::~unique_ptr<winrt::Windows::Internal::Shell::implementation::LaunchUriData>((volatile signed __int32 ***)&v37);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v36);
}
