/*
 * XREFs of ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@6@Z @ 0x1800F8498
 * Callers:
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAPEBU_GUID@@AEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@$$QEAPEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAPEBU_GUID@@8@Z @ 0x1800F2F04 (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCha.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x180015F04 (-CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CResourcePriorityTracker@@QEAA@K@Z @ 0x180029300 (--0CResourcePriorityTracker@@QEAA@K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x1800568AC (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065C1C (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x18007B544 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification@@@details@wil@@QEAA_NXZ @ 0x1800D9720 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotif.c)
 *     ??4?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F3F0C (--4-$vector@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_ptr_t@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSaDeviceProxy::RuntimeClassInitialize(
        __int64 a1,
        const struct SaDeviceParams *a2,
        CEndpointCharacteristics **a3,
        __int64 a4,
        enum _AUDCLNT_SHAREMODE a5,
        unsigned int a6,
        __int64 a7,
        __int64 *a8,
        struct _GUID *a9,
        struct _GUID *a10)
{
  __int64 v14; // rcx
  CEndpointCharacteristics *v15; // rsi
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // edi
  __int64 v20; // rax
  const struct tWAVEFORMATEX *v21; // rcx
  struct tWAVEFORMATEX *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r10
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v25; // r9d
  int v26; // eax
  __int64 v27; // r9
  __int64 v28; // rdx
  struct IAudioDeviceGraph *v29; // rdi
  CResourcePriorityTracker *v30; // rax
  _QWORD *v31; // rdi
  struct _GUID v33; // [rsp+70h] [rbp-29h] BYREF
  struct _GUID v34; // [rsp+80h] [rbp-19h] BYREF
  struct _GUID v35; // [rsp+90h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+2Fh]
  struct IAudioDeviceGraph *v37; // [rsp+D0h] [rbp+37h] BYREF
  struct IAudioDeviceGraph *v38; // [rsp+E0h] [rbp+47h] BYREF

  *(_DWORD *)(a1 + 152) = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)*a3 + 56LL))(*a3);
  if ( *(_QWORD *)(a1 + 136) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
    v14 = *(_QWORD *)(a1 + 136);
    *(_QWORD *)(a1 + 136) = a4;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *a3;
  v16 = (_QWORD *)(a1 + 144);
  v17 = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 144) = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  CEndpointCharacteristics::TryGetCustomResourceManagerService(
    v15,
    &GUID_475d74a7_6824_4b91_89be_33d893b255ed,
    (void **)(a1 + 144));
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::GetImpl'::`2'::impl)
    && *v16 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, const struct SaDeviceParams *))(*(_QWORD *)*v16 + 80LL))(
      *v16,
      *(unsigned int *)(a1 + 152),
      a2);
  }
  v18 = CloneSaDeviceParams(a2, (void ***)(a1 + 48));
  v19 = v18;
  if ( v18 >= 0 )
  {
    v37 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v37);
    v20 = *(_QWORD *)(a1 + 48);
    v21 = *(const struct tWAVEFORMATEX **)(v20 + 24);
    v22 = *(struct tWAVEFORMATEX **)(v20 + 16);
    v23 = *(_QWORD *)(v20 + 40);
    v24 = *(_QWORD *)(v20 + 32);
    v25 = *(_DWORD *)(v20 + 8);
    v33 = *(struct _GUID *)(v20 + 80);
    v34 = *(struct _GUID *)(v20 + 64);
    v35 = *(struct _GUID *)(v20 + 48);
    v26 = CreateSaDevice(a3, a5, a6, v25, &v35, &v34, v24, v23, v22, v21, &v33, a9, a10, &v37);
    v19 = v26;
    if ( v26 >= 0 )
    {
      v29 = v37;
      if ( *(struct IAudioDeviceGraph **)(a1 + 104) != v37 )
      {
        v38 = v37;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v38);
        v38 = *(struct IAudioDeviceGraph **)(a1 + 104);
        *(_QWORD *)(a1 + 104) = v29;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v38);
      }
      v30 = (CResourcePriorityTracker *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v38 = v30;
      v31 = (_QWORD *)a7;
      if ( v30 )
        v30 = CResourcePriorityTracker::CResourcePriorityTracker(v30, *(_DWORD *)(a7 + 8));
      *(_QWORD *)(a1 + 56) = v30;
      if ( v30 )
      {
        *(_BYTE *)(a1 + 96) = a5 == AUDCLNT_SHAREMODE_EXCLUSIVE;
        *(_QWORD *)(a1 + 64) = *v31;
        *v31 = 0LL;
        std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>::operator=((__int64 *)(a1 + 72), a8);
        v19 = 0;
        goto LABEL_23;
      }
      v19 = -2147024882;
      v27 = 2147942414LL;
      v28 = 2837LL;
    }
    else
    {
      v27 = (unsigned int)v26;
      v28 = 2832LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)v27);
LABEL_23:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v37);
    return v19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB0B,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v18);
  return v19;
}
